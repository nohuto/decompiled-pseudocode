/*
 * XREFs of XilRegister_GetOperationalRegisters @ 0x1C001D2E4
 * Callers:
 *     RootHub_PrepareHardware @ 0x1C0060A08 (RootHub_PrepareHardware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilRegister_GetOperationalRegisters(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
