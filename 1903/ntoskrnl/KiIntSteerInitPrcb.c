/*
 * XREFs of KiIntSteerInitPrcb @ 0x14013D680
 * Callers:
 *     KiInitPrcb @ 0x1405A05EC (KiInitPrcb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIntSteerInitPrcb(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 11672) = 0;
  result = 0LL;
  *(_QWORD *)(a1 + 11664) = 1LL;
  return result;
}
