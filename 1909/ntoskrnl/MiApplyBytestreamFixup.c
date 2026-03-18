/*
 * XREFs of MiApplyBytestreamFixup @ 0x140130280
 * Callers:
 *     MiSwitchBaseAddress @ 0x1406DBD18 (MiSwitchBaseAddress.c)
 * Callees:
 *     <none>
 */

void __fastcall MiApplyBytestreamFixup(__int64 a1, _QWORD *a2, __int64 a3)
{
  *a2 += a3;
}
