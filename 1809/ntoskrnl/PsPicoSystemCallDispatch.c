/*
 * XREFs of PsPicoSystemCallDispatch @ 0x14088D1B0
 * Callers:
 *     KiSystemCall64 @ 0x1401CF200 (KiSystemCall64.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PsPicoSystemCallDispatch(__int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  ((void (__fastcall *)(__int64 *))qword_14040F328)(&v3);
  return *(_QWORD *)(a1 + 48);
}
