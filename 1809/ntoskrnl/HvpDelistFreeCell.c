/*
 * XREFs of HvpDelistFreeCell @ 0x1405AEE60
 * Callers:
 *     HvpIsFreeNeighbor @ 0x1405AEDAC (HvpIsFreeNeighbor.c)
 *     HvpDoAllocateCell @ 0x1405FC690 (HvpDoAllocateCell.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     HvpRemoveFreeCellHint @ 0x1405FCB90 (HvpRemoveFreeCellHint.c)
 */

__int64 __fastcall HvpDelistFreeCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // edi
  __int64 result; // rax
  int v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+44h] [rbp+Ch]

  v5 = -1;
  v6 = 0;
  v2 = BugCheckParameter3;
  result = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(BugCheckParameter2 + 8))(
             BugCheckParameter2,
             BugCheckParameter3,
             &v5);
  if ( result )
  {
    result -= 4LL;
    if ( result )
    {
      HvpRemoveFreeCellHint(BugCheckParameter2, v2, 0);
      return (*(__int64 (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v5);
    }
  }
  return result;
}
