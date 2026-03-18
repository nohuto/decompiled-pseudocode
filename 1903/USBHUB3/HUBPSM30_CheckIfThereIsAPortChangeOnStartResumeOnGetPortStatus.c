/*
 * XREFs of HUBPSM30_CheckIfThereIsAPortChangeOnStartResumeOnGetPortStatus @ 0x1C00118D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_CheckAndSelectIfAny30PortChangeSet @ 0x1C0004B2C (HUBHTX_CheckAndSelectIfAny30PortChangeSet.c)
 */

__int64 __fastcall HUBPSM30_CheckIfThereIsAPortChangeOnStartResumeOnGetPortStatus(__int64 a1)
{
  return HUBHTX_CheckAndSelectIfAny30PortChangeSet(*(_QWORD *)(a1 + 960));
}
