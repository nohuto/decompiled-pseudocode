/*
 * XREFs of IoGetAdapterCryptoEngineExtension @ 0x1402851A0
 * Callers:
 *     <none>
 * Callees:
 *     IopIrpHasExtensionType @ 0x140107CCC (IopIrpHasExtensionType.c)
 */

__int64 __fastcall IoGetAdapterCryptoEngineExtension(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD *v2; // r9

  if ( !IopIrpHasExtensionType(a1, 7u) )
    return 3221226021LL;
  *v2 = *(_QWORD *)(v1 + 200) + 40LL;
  return 0LL;
}
