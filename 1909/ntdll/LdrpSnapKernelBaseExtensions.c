/*
 * XREFs of LdrpSnapKernelBaseExtensions @ 0x180021B60
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpResolveDelayLoadDescriptor @ 0x180017368 (LdrpResolveDelayLoadDescriptor.c)
 *     RtlCompareUnicodeString @ 0x180019EE0 (RtlCompareUnicodeString.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18001C4DC (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlInitAnsiString @ 0x180021100 (RtlInitAnsiString.c)
 *     RtlxOemStringToUnicodeSize @ 0x180022080 (RtlxOemStringToUnicodeSize.c)
 *     RtlAnsiStringToUnicodeString @ 0x180024B70 (RtlAnsiStringToUnicodeString.c)
 *     LdrpLogDllState @ 0x1800255A8 (LdrpLogDllState.c)
 *     ApiSetResolveToHost @ 0x180025600 (ApiSetResolveToHost.c)
 *     RtlFreeAnsiString @ 0x180029BA0 (RtlFreeAnsiString.c)
 *     NtdllpAllocateStringRoutine @ 0x18006D908 (NtdllpAllocateStringRoutine.c)
 *     LdrGetDllHandleByName @ 0x1800776C0 (LdrGetDllHandleByName.c)
 *     _strnicmp @ 0x18008E310 (_strnicmp.c)
 */

__int64 LdrpSnapKernelBaseExtensions()
{
  NTSTATUS v0; // eax
  __int64 v1; // rcx
  wchar_t *Buffer; // rbx
  unsigned int v3; // edi
  unsigned int v4; // r14d
  unsigned int v5; // esi
  __int64 v6; // r13
  __int64 v7; // r12
  const CHAR *v8; // r15
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdi
  int v12; // eax
  char v13; // bl
  unsigned __int16 v14; // ax
  int Descriptor; // eax
  void *ApiSetMap; // [rsp+30h] [rbp-48h]
  _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-40h] BYREF
  _STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF
  _UNICODE_STRING String2; // [rsp+58h] [rbp-20h] BYREF
  char v21; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v22; // [rsp+C8h] [rbp+50h] BYREF
  PVOID DllHandle; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+60h] BYREF

  DllHandle = 0LL;
  LdrGetDllHandleByName((PUNICODE_STRING)&LdrpKernelbaseDllName, 0LL, &DllHandle);
  v0 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)DllHandle, 1, 0xDu, &v22, &v24);
  v1 = v24;
  if ( v0 < 0 )
    v1 = 0LL;
  v24 = v1;
  if ( !v1 )
    return 0LL;
  Buffer = 0LL;
  v3 = 0;
  v4 = v22 >> 5;
  v5 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  ApiSetMap = NtCurrentPeb()->ApiSetMap;
  UnicodeString.Buffer = 0LL;
  if ( v22 >> 5 )
  {
    v6 = v24;
    do
    {
      v7 = v6 + 32LL * v5;
      if ( !*(_DWORD *)(v7 + 4) )
        break;
      v8 = (char *)DllHandle + *(unsigned int *)(v7 + 4);
      if ( !strnicmp(v8, "EXT-", 4uLL) )
      {
        RtlInitAnsiString(&DestinationString, v8);
        v9 = RtlxOemStringToUnicodeSize(&DestinationString);
        v11 = v9;
        if ( v9 > UnicodeString.MaximumLength )
        {
          if ( v9 >= 0xFFFE )
          {
            v3 = -1073741675;
            break;
          }
          if ( Buffer )
            RtlFreeAnsiString(&UnicodeString);
          UnicodeString.Buffer = (wchar_t *)NtdllpAllocateStringRoutine(v11, v10);
          Buffer = UnicodeString.Buffer;
          if ( !UnicodeString.Buffer )
          {
            v3 = -1073741670;
            break;
          }
          UnicodeString.MaximumLength = v11;
        }
        else
        {
          UnicodeString.Length = 0;
        }
        RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 0);
        LdrpLogDllState(0LL, &UnicodeString, 5328LL);
        v12 = ApiSetResolveToHost(
                (_DWORD)ApiSetMap,
                (unsigned int)&UnicodeString,
                0,
                (unsigned int)&v21,
                (__int64)&String2);
        v13 = v21;
        v3 = v12;
        if ( v12 >= 0 && v21 )
        {
          if ( String2.Length )
            v14 = 5329;
          else
            v14 = 5330;
        }
        else
        {
          v14 = 5331;
        }
        LdrpLogDllState(0LL, &UnicodeString, v14);
        if ( v13 && !RtlCompareUnicodeString((PUNICODE_STRING)&LdrpKernel32DllName, &String2, 1u) )
        {
          Descriptor = LdrpResolveDelayLoadDescriptor((char *)DllHandle, (PCIMAGE_DELAYLOAD_DESCRIPTOR)(v6 + 32LL * v5));
          Buffer = UnicodeString.Buffer;
          v3 = Descriptor;
          if ( Descriptor < 0 )
            break;
          v3 = 0;
        }
        else
        {
          Buffer = UnicodeString.Buffer;
        }
      }
      ++v5;
    }
    while ( v5 < v4 );
    if ( Buffer )
      RtlFreeAnsiString(&UnicodeString);
  }
  return v3;
}
