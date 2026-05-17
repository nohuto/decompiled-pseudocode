/*
 * XREFs of RtlpQueryPseudoEnvironmentVariable @ 0x18008ADA0
 * Callers:
 *     RtlpCheckPseudoEnvironmentVariable @ 0x18001A6F0 (RtlpCheckPseudoEnvironmentVariable.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlFindCharInUnicodeString @ 0x180028A80 (RtlFindCharInUnicodeString.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlStringCbPrintfExW @ 0x18006A228 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x18009D550 (NtQuerySystemInformation.c)
 *     NtQuerySystemInformationEx @ 0x18009F9E0 (NtQuerySystemInformationEx.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

int __fastcall RtlpQueryPseudoEnvironmentVariable(int a1, _WORD *a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  __int64 Heap; // rdi
  int v8; // ecx
  int result; // eax
  int v10; // r8d
  unsigned int i; // edx
  const wchar_t *Buffer; // rdx
  unsigned __int64 v13; // rbx
  size_t v14; // rbx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  int CharInUnicodeString; // eax
  unsigned __int64 Length; // rbx
  char v18; // [rsp+40h] [rbp-A8h]
  int v19; // [rsp+44h] [rbp-A4h]
  unsigned int v20; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-98h]
  _WORD v22[2]; // [rsp+58h] [rbp-90h] BYREF
  int v23; // [rsp+5Ch] [rbp-8Ch] BYREF
  int v24; // [rsp+60h] [rbp-88h]
  unsigned int v25; // [rsp+64h] [rbp-84h]
  __int64 v26; // [rsp+68h] [rbp-80h] BYREF
  _CURDIR *p_CurrentDirectory; // [rsp+70h] [rbp-78h]
  _BYTE SystemInformation[16]; // [rsp+78h] [rbp-70h] BYREF
  int v29; // [rsp+88h] [rbp-60h]
  _WORD Src[16]; // [rsp+98h] [rbp-50h] BYREF

  v18 = 0;
  Heap = 0LL;
  v21 = 0LL;
  if ( !a1 )
  {
    p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    v18 = 1;
    Buffer = p_CurrentDirectory->DosPath.Buffer;
    Length = p_CurrentDirectory->DosPath.Length;
    Heap = v21;
LABEL_24:
    v13 = Length >> 1;
    goto LABEL_11;
  }
  v8 = a1 - 1;
  if ( !v8 )
  {
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    CharInUnicodeString = RtlFindCharInUnicodeString(
                            1,
                            (__int16 *)&ProcessParameters->ImagePathName,
                            (__int64)&RtlDosPathSeperatorsString,
                            v22);
    Buffer = ProcessParameters->ImagePathName.Buffer;
    Heap = v21;
    if ( CharInUnicodeString >= 0 )
    {
      v13 = (v22[0] >> 1) + 1;
      goto LABEL_11;
    }
    Length = ProcessParameters->ImagePathName.Length;
    goto LABEL_24;
  }
  if ( v8 != 1 )
  {
    result = NtQuerySystemInformation(SystemBootEnvironmentInformation, SystemInformation, 0x20u, 0LL);
    v19 = result;
    if ( result < 0 )
      goto LABEL_28;
    if ( v29 == 1 )
    {
      Buffer = L"Legacy";
      v13 = 6LL;
    }
    else
    {
      Buffer = L"UEFI";
      v13 = 4LL;
    }
LABEL_11:
    if ( a2 )
    {
      if ( v13 < a3 )
      {
        *a4 = v13;
        v14 = v13;
        memmove(a2, Buffer, v14 * 2);
        a2[v14] = 0;
        result = 0;
LABEL_14:
        v19 = result;
        goto LABEL_28;
      }
      if ( a3 )
        *a2 = 0;
    }
    *a4 = v13 + 1;
    result = -1073741789;
    goto LABEL_14;
  }
  v23 = 4;
  v20 = 0;
  NtQuerySystemInformationEx(107LL, &v23, 4LL, 0LL, 0, &v20);
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v20);
  v21 = Heap;
  if ( !Heap )
  {
    result = -1073741801;
    goto LABEL_14;
  }
  result = NtQuerySystemInformationEx(107LL, &v23, 4LL, Heap, v20, &v20);
  v19 = result;
  if ( result >= 0 )
  {
    v10 = 0;
    v24 = 0;
    for ( i = 0; ; ++i )
    {
      v25 = i;
      if ( i >= *(unsigned __int16 *)(Heap + 10) )
        break;
      v10 += *(unsigned __int8 *)(Heap + 48LL * i + 33);
      v24 = v10;
    }
    result = RtlStringCbPrintfExW(Src, 0x20uLL, &v26, 0LL, 0, L"%u", v10);
    v19 = result;
    if ( result >= 0 )
    {
      Buffer = Src;
      v13 = (v26 - (__int64)Src) >> 1;
      goto LABEL_11;
    }
  }
LABEL_28:
  if ( v18 )
  {
    RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    result = v19;
    Heap = v21;
  }
  if ( Heap )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v21);
    return v19;
  }
  return result;
}
