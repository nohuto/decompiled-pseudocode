/*
 * XREFs of Register_IsGetSetExtendedPropertyCapabilityPresent @ 0x1C0003170
 * Callers:
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C00077B4 (Command_D0EntryPostInterruptsEnabled.c)
 * Callees:
 *     <none>
 */

char __fastcall Register_IsGetSetExtendedPropertyCapabilityPresent(__int64 a1)
{
  return BYTE1(*(_DWORD *)(a1 + 104)) & 1;
}
