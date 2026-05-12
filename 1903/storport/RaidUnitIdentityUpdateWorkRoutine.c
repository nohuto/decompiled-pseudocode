/*
 * XREFs of RaidUnitIdentityUpdateWorkRoutine @ 0x1C0047760
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C00079A0 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 *     RaidDeleteBusEnumerator @ 0x1C0012F7C (RaidDeleteBusEnumerator.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C00132FC (RaidBusEnumeratorVisitUnit.c)
 *     memset @ 0x1C0023840 (memset.c)
 *     WPP_SF_qqD @ 0x1C0037B10 (WPP_SF_qqD.c)
 *     RaidLogRequestComplete @ 0x1C0046970 (RaidLogRequestComplete.c)
 */

void __fastcall RaidUnitIdentityUpdateWorkRoutine(PDEVICE_OBJECT DeviceObject, PIO_WORKITEM *Context)
{
  void *DeviceExtension; // rdi
  int v4; // [rsp+28h] [rbp-A0h]
  _QWORD v5[15]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v6[4]; // [rsp+A8h] [rbp-20h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  memset(v5, 0, sizeof(v5));
  v6[1] = v6;
  v6[0] = v6;
  v5[0] = *((_QWORD *)DeviceExtension + 3);
  RaidBusEnumeratorVisitUnit((__int64)v5, *((_DWORD *)DeviceExtension + 24));
  RaidDeleteBusEnumerator((__int64)v5);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    v4 = *((_DWORD *)Context[1] + 12);
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x3Bu,
      (__int64)&WPP_a32982da72aa344f3768c69018313f42_Traceguids,
      DeviceExtension,
      Context[1],
      v4);
  }
  if ( (qword_1C00612B0 & 0x10) != 0 )
    RaidLogRequestComplete(
      *((_QWORD *)DeviceExtension + 3),
      (__int64)Context[1],
      *(_QWORD *)(*((_QWORD *)Context[1] + 23) + 8LL));
  RaidCompleteRequestEx((PIRP)Context[1], 1, *((_DWORD *)Context[1] + 12));
  IoFreeWorkItem(*Context);
  ExFreePoolWithTag(Context, 0x49576152u);
  RaUnitReleaseRemoveLock((__int64)DeviceExtension);
}
