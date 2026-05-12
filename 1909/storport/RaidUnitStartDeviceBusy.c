/*
 * XREFs of RaidUnitStartDeviceBusy @ 0x1C0009414
 * Callers:
 *     RaidStartIoPacket @ 0x1C0008210 (RaidStartIoPacket.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0049C88 (RaidUnitSubmitResetRequest.c)
 * Callees:
 *     RaidUnitPoFxActivateComponent @ 0x1C0009458 (RaidUnitPoFxActivateComponent.c)
 */

__int64 __fastcall RaidUnitStartDeviceBusy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 184);
  RaidUnitPoFxActivateComponent(a1, 0LL, a3);
  result = 0LL;
  *(_QWORD *)(v3 + 16) = 0LL;
  return result;
}
