/*
 * XREFs of LdrpMapDllRetry @ 0x1800709A8
 * Callers:
 *     LdrpProcessWork @ 0x18002E26C (LdrpProcessWork.c)
 * Callees:
 *     LdrpGetNtPathFromDosPath @ 0x180029C14 (LdrpGetNtPathFromDosPath.c)
 *     LdrpMapDllNtFileName @ 0x18002D3B4 (LdrpMapDllNtFileName.c)
 *     LdrpFindExistingModule @ 0x18002E6A0 (LdrpFindExistingModule.c)
 *     NtdllpFreeStringRoutine @ 0x18006D930 (NtdllpFreeStringRoutine.c)
 *     LdrpLoadContextReplaceModule @ 0x180070A98 (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpMapDllRetry(__int64 a1)
{
  __int64 v1; // rax
  _UNICODE_STRING *v3; // rsi
  int ExistingModule; // ebx
  __int64 v6; // [rsp+30h] [rbp-138h] BYREF
  _UNICODE_STRING v7; // [rsp+40h] [rbp-128h] BYREF
  _WORD v8[128]; // [rsp+50h] [rbp-118h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)&v7.Length = 0x1000000;
  v7.Buffer = v8;
  v3 = (_UNICODE_STRING *)(v1 + 72);
  v8[0] = 0;
  ExistingModule = LdrpFindExistingModule(
                     (PUNICODE_STRING)(v1 + 88),
                     (PUNICODE_STRING)(v1 + 72),
                     *(_DWORD *)(a1 + 32),
                     *(_DWORD *)(v1 + 264),
                     &v6);
  if ( v6 )
  {
    LdrpLoadContextReplaceModule(a1);
  }
  else
  {
    ExistingModule = LdrpGetNtPathFromDosPath(v3, &v7);
    if ( ExistingModule >= 0 )
      ExistingModule = LdrpMapDllNtFileName(a1, &v7);
  }
  if ( v8 != v7.Buffer )
    NtdllpFreeStringRoutine(v7.Buffer);
  return (unsigned int)ExistingModule;
}
