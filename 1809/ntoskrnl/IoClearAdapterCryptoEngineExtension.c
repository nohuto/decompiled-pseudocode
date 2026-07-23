/*
 * XREFs of IoClearAdapterCryptoEngineExtension @ 0x140285120
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateIrpExtension @ 0x1400DFA38 (IopAllocateIrpExtension.c)
 *     IopFreeIrpExtension @ 0x1401078D0 (IopFreeIrpExtension.c)
 *     IopIrpHasExtensionType @ 0x140107CCC (IopIrpHasExtensionType.c)
 */

__int64 __fastcall IoClearAdapterCryptoEngineExtension(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  _WORD *IrpExtension; // rax

  if ( !IopIrpHasExtensionType(a1, 7u) )
    return 3221226021LL;
  IrpExtension = IopAllocateIrpExtension(v3, v2);
  if ( !IrpExtension )
    return 3221226021LL;
  *((_QWORD *)IrpExtension + 5) = 0LL;
  *((_QWORD *)IrpExtension + 6) = 0LL;
  IopFreeIrpExtension(a1, 7, 0);
  return 0LL;
}
