/*
 * XREFs of IoSetAdapterCryptoEngineExtension @ 0x140284F30
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateIrpExtension @ 0x1400DF998 (IopAllocateIrpExtension.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x14028508C (IopIrpHasValidCombinationOfExtensionTypes.c)
 */

__int64 __fastcall IoSetAdapterCryptoEngineExtension(__int64 a1, _OWORD *a2)
{
  __int64 v3; // r11
  _WORD *IrpExtension; // rax

  if ( !(unsigned __int8)IopIrpHasValidCombinationOfExtensionTypes(a1, 7LL) )
    return 3221225659LL;
  IrpExtension = IopAllocateIrpExtension(v3, 7);
  if ( !IrpExtension )
    return 3221225626LL;
  *(_OWORD *)(IrpExtension + 20) = *a2;
  return 0LL;
}
