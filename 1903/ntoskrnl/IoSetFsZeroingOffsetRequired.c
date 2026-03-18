/*
 * XREFs of IoSetFsZeroingOffsetRequired @ 0x14029A2C0
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateIrpExtension @ 0x1400A7E50 (IopAllocateIrpExtension.c)
 *     IopIrpHasExtensionType @ 0x14011C27C (IopIrpHasExtensionType.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x14029A32C (IopIrpHasValidCombinationOfExtensionTypes.c)
 */

__int64 __fastcall IoSetFsZeroingOffsetRequired(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v4; // r11
  _WORD *IrpExtension; // rax

  if ( IopIrpHasExtensionType(a1, 4u) )
    return 3221225505LL;
  if ( !(unsigned __int8)IopIrpHasValidCombinationOfExtensionTypes(v2, v1) )
    return 3221225659LL;
  IrpExtension = IopAllocateIrpExtension(v4, 4);
  if ( !IrpExtension )
    return 3221225626LL;
  *((_DWORD *)IrpExtension + 10) = 0;
  return 0LL;
}
