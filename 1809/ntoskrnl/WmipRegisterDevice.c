/*
 * XREFs of WmipRegisterDevice @ 0x14070C4CC
 * Callers:
 *     IoWMIRegistrationControl @ 0x1406BA1A0 (IoWMIRegistrationControl.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     ObReferenceObjectByPointer @ 0x140013530 (ObReferenceObjectByPointer.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     WmipUnreferenceRegEntry @ 0x14008DA70 (WmipUnreferenceRegEntry.c)
 *     IoGetAttachedDeviceReference @ 0x1400ACD80 (IoGetAttachedDeviceReference.c)
 *     WmipFindRegEntryByDevice @ 0x14012EA18 (WmipFindRegEntryByDevice.c)
 *     WmipDeregisterRegEntry @ 0x14016A998 (WmipDeregisterRegEntry.c)
 *     WmipAllocRegEntry @ 0x14016B6C8 (WmipAllocRegEntry.c)
 *     WmipQueueRegWork @ 0x1406BA2C0 (WmipQueueRegWork.c)
 *     WmipRegisterOrUpdateDS @ 0x1406CAC08 (WmipRegisterOrUpdateDS.c)
 *     WmipUpdateDeviceStackSize @ 0x14070C634 (WmipUpdateDeviceStackSize.c)
 */

__int64 __fastcall WmipRegisterDevice(struct _DEVICE_OBJECT *Object, int a2)
{
  int v2; // ebx
  bool v3; // bp
  char *RegEntryByDevice; // rsi
  PDEVICE_OBJECT AttachedDeviceReference; // rdi
  __int64 v7; // rcx
  int updated; // edi
  _QWORD *v9; // rax

  v2 = 0;
  v3 = 0;
  if ( a2 < 0 )
    v2 = 0x10000000;
  if ( (a2 & 0x10000) != 0 )
    v2 |= 16 * (a2 & 0xF00000 | 0x4000000);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  RegEntryByDevice = (char *)WmipFindRegEntryByDevice((__int64)Object);
  if ( RegEntryByDevice )
  {
    KeReleaseMutex(&WmipSMMutex, 0);
    updated = 0x40000000;
LABEL_12:
    WmipUnreferenceRegEntry((__int64)RegEntryByDevice);
    goto LABEL_13;
  }
  if ( (v2 & 0x10000000) != 0 )
  {
    updated = 0;
  }
  else
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(Object);
    LOBYTE(v7) = AttachedDeviceReference->StackSize + 1;
    WmipUpdateDeviceStackSize(v7);
    ObfDereferenceObject(AttachedDeviceReference);
    updated = ObReferenceObjectByPointer(Object, 0, 0LL, 0);
  }
  if ( updated < 0 )
  {
    KeReleaseMutex(&WmipSMMutex, 0);
  }
  else
  {
    v9 = WmipAllocRegEntry((__int64)Object, v2);
    RegEntryByDevice = (char *)v9;
    if ( v9 )
    {
      _InterlockedAdd((volatile signed __int32 *)v9 + 12, 1u);
      KeReleaseMutex(&WmipSMMutex, 0);
      if ( (v2 & 0x10000000) != 0 )
      {
        updated = WmipRegisterOrUpdateDS((__int64)RegEntryByDevice, 0);
        if ( updated < 0 )
          v3 = 1;
      }
      else
      {
        updated = WmipQueueRegWork(0, (__int64)RegEntryByDevice);
        v3 = updated < 0;
      }
      goto LABEL_12;
    }
    KeReleaseMutex(&WmipSMMutex, 0);
    updated = -1073741670;
  }
LABEL_13:
  if ( v3 )
    WmipDeregisterRegEntry(RegEntryByDevice);
  return (unsigned int)updated;
}
