/*
 * XREFs of MiApplyBytestreamFixup @ 0x14013C3FC
 * Callers:
 *     MiSwitchBaseAddress @ 0x140670184 (MiSwitchBaseAddress.c)
 * Callees:
 *     <none>
 */

void __fastcall MiApplyBytestreamFixup(__int64 a1, _QWORD *a2, __int64 a3)
{
  *a2 += a3;
}
