/*
 * XREFs of HUBDSM_CheckingIfDisallowFirmwareUpdateCommandNeedsToBeSent @ 0x1C001EEA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfDisallowFirmwareUpdateCommandNeedsToBeSent(__int64 a1)
{
  return *(_BYTE *)(*(_QWORD *)(a1 + 960) + 2705LL) != 0 ? 4089 : 4061;
}
