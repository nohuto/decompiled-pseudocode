/*
 * XREFs of LdrpSnapKernelBaseExtensions @ 0x180022CBC
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180007188 (RtlpImageDirectoryEntryToDataEx.c)
 *     NtdllpAllocateStringRoutine @ 0x18000EB60 (NtdllpAllocateStringRoutine.c)
 *     RtlInitAnsiString @ 0x1800221B0 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x180025AA0 (RtlAnsiStringToUnicodeString.c)
 *     LdrpLogDllState @ 0x180026314 (LdrpLogDllState.c)
 *     ApiSetResolveToHost @ 0x180026388 (ApiSetResolveToHost.c)
 *     RtlxOemStringToUnicodeSize @ 0x180026720 (RtlxOemStringToUnicodeSize.c)
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     LdrpResolveDelayLoadDescriptor @ 0x180041E04 (LdrpResolveDelayLoadDescriptor.c)
 *     RtlCompareUnicodeStrings @ 0x1800571D0 (RtlCompareUnicodeStrings.c)
 *     LdrGetDllHandleByName @ 0x18007B6D0 (LdrGetDllHandleByName.c)
 *     _strnicmp @ 0x180091390 (_strnicmp.c)
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
  SIZE_T v10; // rdi
  int v11; // eax
  unsigned __int16 v12; // r15
  char v13; // bl
  unsigned __int16 v14; // ax
  int Descriptor; // eax
  void *ApiSetMap; // [rsp+30h] [rbp-48h]
  _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-40h] BYREF
  _STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int16 v20; // [rsp+58h] [rbp-20h] BYREF
  PCWCH String2; // [rsp+60h] [rbp-18h]
  char v22; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v23; // [rsp+C8h] [rbp+50h] BYREF
  PVOID DllHandle; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v25; // [rsp+D8h] [rbp+60h] BYREF

  DllHandle = 0LL;
  LdrGetDllHandleByName((PUNICODE_STRING)&LdrpKernelbaseDllName, 0LL, &DllHandle);
  v0 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)DllHandle, 1, 0xDu, &v23, &v25);
  v1 = v25;
  if ( v0 < 0 )
    v1 = 0LL;
  v25 = v1;
  if ( !v1 )
    return 0LL;
  Buffer = 0LL;
  v3 = 0;
  v4 = v23 >> 5;
  v5 = 0;
  UnicodeString.Buffer = 0LL;
  ApiSetMap = NtCurrentPeb()->ApiSetMap;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  if ( v23 >> 5 )
  {
    v6 = v25;
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
        v10 = v9;
        if ( v9 > UnicodeString.MaximumLength )
        {
          if ( v9 >= 0xFFFE )
          {
            v3 = -1073741675;
            break;
          }
          if ( Buffer )
            RtlFreeAnsiString(&UnicodeString);
          UnicodeString.Buffer = (wchar_t *)NtdllpAllocateStringRoutine(v10);
          Buffer = UnicodeString.Buffer;
          if ( !UnicodeString.Buffer )
          {
            v3 = -1073741670;
            break;
          }
          UnicodeString.MaximumLength = v10;
        }
        else
        {
          UnicodeString.Length = 0;
        }
        RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 0);
        LdrpLogDllState(0LL, &UnicodeString, 5328LL);
        v11 = ApiSetResolveToHost((_DWORD)ApiSetMap, (unsigned int)&UnicodeString, 0, (unsigned int)&v22, (__int64)&v20);
        v12 = v20;
        v3 = v11;
        v13 = v22;
        if ( v11 >= 0 && v22 )
        {
          if ( v20 )
            v14 = 5329;
          else
            v14 = 5330;
        }
        else
        {
          v14 = 5331;
        }
        LdrpLogDllState(0LL, &UnicodeString, v14);
        if ( v13
          && !RtlCompareUnicodeStrings(LdrpKernel32DllName.Buffer, 0xCuLL, String2, (unsigned __int64)v12 >> 1, 1u) )
        {
          Descriptor = LdrpResolveDelayLoadDescriptor(DllHandle, (PCIMAGE_DELAYLOAD_DESCRIPTOR)(v6 + 32LL * v5));
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
