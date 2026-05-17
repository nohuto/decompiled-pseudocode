/*
 * XREFs of RtlGetLocaleFileMappingAddress @ 0x18007B470
 * Callers:
 *     sub_18007B398 @ 0x18007B398 (sub_18007B398.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     ZwInitializeNlsFiles @ 0x18009E610 (ZwInitializeNlsFiles.c)
 */

__int64 __fastcall RtlGetLocaleFileMappingAddress(signed __int64 *a1, int *a2, __int64 *a3)
{
  __int64 result; // rax
  signed __int64 v7; // rcx

  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( !a3 )
    return 3221225713LL;
  if ( qword_180166370 )
  {
    *a1 = qword_180166370;
    *a2 = dword_18016605C;
    *a3 = qword_180166060;
  }
  else
  {
    result = ZwInitializeNlsFiles();
    if ( (int)result < 0 )
      return result;
    v7 = *a1;
    dword_18016605C = *a2;
    qword_180166060 = *a3;
    if ( _InterlockedCompareExchange64(&qword_180166370, v7, 0LL) )
    {
      ZwUnmapViewOfSection(-1LL);
      *a1 = qword_180166370;
    }
  }
  return 0LL;
}
