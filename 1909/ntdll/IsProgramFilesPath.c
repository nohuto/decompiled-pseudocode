/*
 * XREFs of IsProgramFilesPath @ 0x18005C18C
 * Callers:
 *     IsOverlaySupportedPath @ 0x18005BCFC (IsOverlaySupportedPath.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18005CBB0 (RtlQueryEnvironmentVariable_U.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x18008E9B0 (_wcsnicmp.c)
 */

__int64 __fastcall IsProgramFilesPath(wchar_t *String1, size_t *a2)
{
  __int64 result; // rax
  wchar_t *Heap; // rax
  int v6; // eax
  wchar_t *v7; // rsi
  unsigned int v8; // ebx
  size_t v9; // rdi
  __int16 v10; // [rsp+20h] [rbp-E0h] BYREF
  __int16 v11; // [rsp+22h] [rbp-DEh]
  wchar_t *String2; // [rsp+28h] [rbp-D8h]
  _BYTE v13[704]; // [rsp+30h] [rbp-D0h] BYREF

  String2 = (wchar_t *)v13;
  v11 = 702;
  *a2 = 0LL;
  result = RtlQueryEnvironmentVariable_U(0LL, &unk_1801183F0, &v10);
  if ( (_DWORD)result == -1073741789 )
  {
    v11 = v10 + 2;
    Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, (unsigned __int16)(v10 + 2));
    String2 = Heap;
  }
  else
  {
    if ( (int)result < 0 )
      return result;
    Heap = String2;
  }
  if ( !Heap )
    return 3221225659LL;
  v6 = RtlQueryEnvironmentVariable_U(0LL, &unk_1801183F0, &v10);
  v7 = String2;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( String2[v9] );
    if ( wcsnicmp(String1, String2, v9) )
      v8 = -1073741637;
    else
      *a2 = v9;
  }
  if ( v7 != (wchar_t *)v13 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)String2);
  return v8;
}
