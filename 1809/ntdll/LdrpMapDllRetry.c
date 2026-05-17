/*
 * XREFs of LdrpMapDllRetry @ 0x180071958
 * Callers:
 *     LdrpProcessWork @ 0x180070CEC (LdrpProcessWork.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
 *     LdrpGetNtPathFromDosPath @ 0x180029D7C (LdrpGetNtPathFromDosPath.c)
 *     LdrpMapDllNtFileName @ 0x18002ABA0 (LdrpMapDllNtFileName.c)
 *     LdrpFindExistingModule @ 0x180071428 (LdrpFindExistingModule.c)
 *     LdrpLoadContextReplaceModule @ 0x180071770 (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpMapDllRetry(__int64 a1)
{
  __int64 v1; // rax
  int v3; // esi
  int ExistingModule; // ebx
  unsigned __int64 *v5; // r8
  __int64 v6; // r9
  volatile signed __int32 *v8; // [rsp+30h] [rbp-138h] BYREF
  UNICODE_STRING v9; // [rsp+40h] [rbp-128h] BYREF
  _WORD v10[128]; // [rsp+50h] [rbp-118h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)&v9.Length = 0x1000000;
  v9.Buffer = v10;
  v3 = v1 + 72;
  v10[0] = 0;
  ExistingModule = LdrpFindExistingModule(
                     (unsigned __int16 *)(v1 + 88),
                     (unsigned __int16 *)(v1 + 72),
                     (unsigned __int64 *)*(unsigned int *)(a1 + 32),
                     *(unsigned int *)(v1 + 264),
                     &v8);
  if ( v8 )
  {
    LdrpLoadContextReplaceModule(a1, (unsigned __int64)v8, v5, v6);
  }
  else
  {
    ExistingModule = LdrpGetNtPathFromDosPath(v3, (__int64)&v9);
    if ( ExistingModule >= 0 )
      ExistingModule = LdrpMapDllNtFileName(a1, &v9);
  }
  if ( v10 != v9.Buffer )
    NtdllpFreeStringRoutine((__int64)v9.Buffer);
  return (unsigned int)ExistingModule;
}
