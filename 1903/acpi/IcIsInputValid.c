/*
 * XREFs of IcIsInputValid @ 0x1C009C898
 * Callers:
 *     IrqArbpFindSuitableRangePci @ 0x1C009C72C (IrqArbpFindSuitableRangePci.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C009CB5C (IrqArbpFindSuitableRangeIsa.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C00B6B9C (IrqArbpAssignIrqFromLinkNode.c)
 * Callees:
 *     <none>
 */

char __fastcall IcIsInputValid(unsigned int a1)
{
  __int64 i; // rax

  for ( i = IcListHead; &IcListHead != (__int64 *)i; i = *(_QWORD *)i )
  {
    if ( *(int *)(i + 28) >= 0 && *(_DWORD *)(i + 16) <= a1 && *(_DWORD *)(i + 20) >= a1 )
      return 1;
  }
  return 0;
}
