/*
 * XREFs of PsPicoSystemCallDispatch @ 0x1408C9CA0
 * Callers:
 *     KiSystemCall64 @ 0x1401D5A80 (KiSystemCall64.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PsPicoSystemCallDispatch(__int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  ((void (__fastcall *)(__int64 *))qword_140436988)(&v3);
  return *(_QWORD *)(a1 + 48);
}
