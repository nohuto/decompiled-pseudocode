/*
 * XREFs of MiInitializeColorBase @ 0x14017E4B8
 * Callers:
 *     MmCreateShadowMapping @ 0x14072A178 (MmCreateShadowMapping.c)
 * Callees:
 *     MiInitializeColorBaseEx @ 0x140028994 (MiInitializeColorBaseEx.c)
 */

__int64 __fastcall MiInitializeColorBase(__int64 a1)
{
  return MiInitializeColorBaseEx(a1);
}
