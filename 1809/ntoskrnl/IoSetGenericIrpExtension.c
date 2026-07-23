/*
 * XREFs of IoSetGenericIrpExtension @ 0x1401408E0
 * Callers:
 *     StRtlIoStorInfoSetNvCachePriority @ 0x14032BB78 (StRtlIoStorInfoSetNvCachePriority.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x1400DFA38 (IopAllocateIrpExtension.c)
 *     IopIrpHasExtensionType @ 0x140107CCC (IopIrpHasExtensionType.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall IoSetGenericIrpExtension(__int64 a1, const void *a2, unsigned __int16 a3, char a4)
{
  int v6; // edx
  _WORD *IrpExtension; // rax

  if ( a3 > 4u )
    return 3221225485LL;
  v6 = 2;
  if ( !a4 && IopIrpHasExtensionType(a1, 2u) )
    return 3221225505LL;
  IrpExtension = IopAllocateIrpExtension(a1, v6);
  if ( !IrpExtension )
    return 3221225626LL;
  memmove(IrpExtension + 2, a2, a3);
  return 0LL;
}
