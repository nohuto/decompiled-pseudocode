/*
 * XREFs of RtlGetLocaleFileMappingAddress @ 0x18007B470
 * Callers:
 *     sub_18007B398 @ 0x18007B398 (sub_18007B398.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     ZwInitializeNlsFiles @ 0x18009E610 (ZwInitializeNlsFiles.c)
 */

NTSTATUS __cdecl RtlGetLocaleFileMappingAddress(
        PVOID *BaseAddress,
        PLCID DefaultLocaleId,
        PLARGE_INTEGER DefaultCasingTableSize,
        PULONG CurrentNLSVersion)
{
  NTSTATUS result; // eax
  PVOID v8; // rcx

  if ( !BaseAddress )
    return -1073741585;
  if ( !DefaultLocaleId )
    return -1073741584;
  if ( !DefaultCasingTableSize )
    return -1073741583;
  if ( qword_180166370 )
  {
    *BaseAddress = (PVOID)qword_180166370;
    *DefaultLocaleId = dword_18016605C;
    DefaultCasingTableSize->QuadPart = qword_180166060;
  }
  else
  {
    result = ZwInitializeNlsFiles(BaseAddress, DefaultLocaleId, DefaultCasingTableSize, CurrentNLSVersion);
    if ( result < 0 )
      return result;
    v8 = *BaseAddress;
    dword_18016605C = *DefaultLocaleId;
    qword_180166060 = DefaultCasingTableSize->QuadPart;
    if ( _InterlockedCompareExchange64(&qword_180166370, (signed __int64)v8, 0LL) )
    {
      ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *BaseAddress);
      *BaseAddress = (PVOID)qword_180166370;
    }
  }
  return 0;
}
