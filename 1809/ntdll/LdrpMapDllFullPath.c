/*
 * XREFs of LdrpMapDllFullPath @ 0x180070F28
 * Callers:
 *     LdrpProcessWork @ 0x180070CEC (LdrpProcessWork.c)
 *     LdrpLoadEnclaveModule @ 0x1800CF84C (LdrpLoadEnclaveModule.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
 *     LdrpResolveDllName @ 0x180029BD8 (LdrpResolveDllName.c)
 *     LdrpMapDllNtFileName @ 0x18002ABA0 (LdrpMapDllNtFileName.c)
 *     LdrpAppCompatRedirect @ 0x180071068 (LdrpAppCompatRedirect.c)
 *     LdrpFindExistingModule @ 0x180071428 (LdrpFindExistingModule.c)
 *     LdrpHashUnicodeString @ 0x1800714C4 (LdrpHashUnicodeString.c)
 *     LdrpLoadContextReplaceModule @ 0x180071770 (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpMapDllFullPath(__int64 a1)
{
  __int64 v1; // r15
  int v2; // eax
  int v4; // eax
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING v8; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v9[128]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v8.Buffer = v9;
  v2 = *(_DWORD *)(a1 + 32);
  v7 = 0LL;
  *(_DWORD *)&v8.Length = 0x1000000;
  v9[0] = 0;
  v4 = LdrpResolveDllName((unsigned __int16 *)a1, (__int64)&v8, (_UNICODE_STRING *)(v1 + 88), (_OWORD *)(v1 + 72), v2);
  v5 = v4;
  if ( !*(_QWORD *)(a1 + 168)
    && (v5 = LdrpAppCompatRedirect(a1, (int)v1 + 72, (int)v1 + 88, (unsigned int)&v8, v4), v5 >= 0)
    && (*(_DWORD *)(v1 + 264) = LdrpHashUnicodeString(v1 + 88),
        LdrpFindExistingModule((PUNICODE_STRING)(v1 + 88), (PUNICODE_STRING)(v1 + 72), (__int64)&v7),
        v7) )
  {
    LdrpLoadContextReplaceModule(a1, v7);
  }
  else if ( v5 >= 0 )
  {
    v5 = LdrpMapDllNtFileName(a1, &v8);
    if ( v5 == 1073741838 )
      v5 = -1073741701;
  }
  if ( v9 != v8.Buffer )
    NtdllpFreeStringRoutine(v8.Buffer);
  return (unsigned int)v5;
}
