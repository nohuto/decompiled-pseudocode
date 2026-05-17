/*
 * XREFs of LdrpMapDllFullPath @ 0x18002E4A8
 * Callers:
 *     LdrpProcessWork @ 0x18002E26C (LdrpProcessWork.c)
 *     LdrpLoadEnclaveModule @ 0x1800CE128 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     LdrpHashUnicodeString @ 0x18002952C (LdrpHashUnicodeString.c)
 *     LdrpResolveDllName @ 0x180029CEC (LdrpResolveDllName.c)
 *     LdrpMapDllNtFileName @ 0x18002D3B4 (LdrpMapDllNtFileName.c)
 *     LdrpAppCompatRedirect @ 0x18002E5E8 (LdrpAppCompatRedirect.c)
 *     LdrpFindExistingModule @ 0x18002E6A0 (LdrpFindExistingModule.c)
 *     NtdllpFreeStringRoutine @ 0x18006D930 (NtdllpFreeStringRoutine.c)
 *     LdrpLoadContextReplaceModule @ 0x180070A98 (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpMapDllFullPath(__int64 a1)
{
  __int64 v1; // r15
  int v2; // eax
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  __int64 v8; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING v9; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v10[128]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v9.Buffer = v10;
  v2 = *(_DWORD *)(a1 + 32);
  v8 = 0LL;
  *(_DWORD *)&v9.Length = 0x1000000;
  v10[0] = 0;
  v4 = LdrpResolveDllName((unsigned __int16 *)a1, (__int64)&v9, v1 + 88, (_OWORD *)(v1 + 72), v2);
  v5 = v4;
  if ( *(_QWORD *)(a1 + 168) )
    goto LABEL_6;
  v5 = LdrpAppCompatRedirect(a1, (int)v1 + 72, (int)v1 + 88, (unsigned int)&v9, v4);
  if ( v5 < 0 )
    goto LABEL_7;
  v6 = LdrpHashUnicodeString((unsigned __int16 *)(v1 + 88));
  *(_DWORD *)(v1 + 264) = v6;
  LdrpFindExistingModule(v1 + 88, v1 + 72, *(_DWORD *)(a1 + 32), v6, (__int64)&v8);
  if ( v8 )
  {
    LdrpLoadContextReplaceModule(a1);
  }
  else
  {
LABEL_6:
    if ( v5 >= 0 )
    {
      v5 = LdrpMapDllNtFileName(a1, &v9);
      if ( v5 == 1073741838 )
        v5 = -1073741701;
    }
  }
LABEL_7:
  if ( v10 != v9.Buffer )
    NtdllpFreeStringRoutine(v9.Buffer);
  return (unsigned int)v5;
}
