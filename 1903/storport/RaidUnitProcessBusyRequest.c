/*
 * XREFs of RaidUnitProcessBusyRequest @ 0x1C0011538
 * Callers:
 *     RaUnitAsyncError @ 0x1C000B704 (RaUnitAsyncError.c)
 * Callees:
 *     RaidUnitReleaseIrp @ 0x1C0007468 (RaidUnitReleaseIrp.c)
 *     RaUnitAcquireRemoveLock @ 0x1C00079E0 (RaUnitAcquireRemoveLock.c)
 *     RaidStartIoPacket @ 0x1C00081C0 (RaidStartIoPacket.c)
 *     IsUntaggedRequest @ 0x1C000939C (IsUntaggedRequest.c)
 *     StorRemoveIoGatewayItem @ 0x1C000A710 (StorRemoveIoGatewayItem.c)
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 *     RaidRestartIoQueue @ 0x1C000B100 (RaidRestartIoQueue.c)
 *     RaidStallDeviceQueue @ 0x1C00116AC (RaidStallDeviceQueue.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C0011828 (RaidDeleteDeviceQueueEntry.c)
 *     GetSrbScsiData @ 0x1C001EB08 (GetSrbScsiData.c)
 *     RaidNtStatusToSrbStatus @ 0x1C00432C0 (RaidNtStatusToSrbStatus.c)
 */

void __fastcall RaidUnitProcessBusyRequest(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rbx
  IRP *v4; // r13
  char v6; // cl
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  unsigned __int8 v9; // al
  unsigned int v10; // r12d
  unsigned int v11; // esi
  BOOL v12; // eax
  __int64 v13; // r8
  signed int v14; // esi
  int v15; // ecx
  int v16; // r8d
  _QWORD v17[11]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v18; // [rsp+90h] [rbp+8h] BYREF
  _BYTE *v19; // [rsp+A0h] [rbp+18h]

  v19 = a3;
  v3 = *(_QWORD *)(a2 + 168);
  v4 = *(IRP **)(a2 + 160);
  v6 = 0;
  v17[0] = 0LL;
  LOBYTE(v18) = 0;
  v7 = 0;
  v17[1] = 0LL;
  v8 = 0;
  v17[3] = 0LL;
  v17[2] = a2;
  v9 = *(_BYTE *)(v3 + 2);
  if ( v9 == 40 )
  {
    v11 = *(_DWORD *)(v3 + 20);
    v10 = *(_DWORD *)(v3 + 24);
    if ( !v11 )
    {
      GetSrbScsiData(v3, 0, 0, (unsigned int)&v18, 0LL, 0LL);
      v6 = v18;
    }
  }
  else
  {
    v10 = *(_DWORD *)(v3 + 12);
    v6 = *(_BYTE *)(v3 + 4);
    v11 = v9;
  }
  if ( (*(_BYTE *)(v3 + 3) & 0x3F) == 5 || v6 == 8 )
  {
    v8 = *(_DWORD *)(a1 + 1552);
    v7 = 1;
  }
  if ( v6 == 40 )
  {
    v8 = *(_DWORD *)(a1 + 1548);
    v7 = 2;
  }
  v12 = IsUntaggedRequest(v10, v11);
  LOBYTE(v13) = 1;
  v18 = v12;
  v14 = RaUnitAcquireRemoveLock(a1, (__int64)v4, v13);
  if ( v14 >= 0 )
    *(_BYTE *)(v3 + 3) &= ~0x80u;
  RaidUnitReleaseIrp((__int64)v4);
  if ( (unsigned __int8)StorRemoveIoGatewayItem(
                          (volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 768LL),
                          (__int64)v17,
                          0LL) )
    KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(a1 + 24) + 1792LL), 0LL, 0LL);
  RaidDeleteDeviceQueueEntry(a1 + 400, v18);
  if ( v14 < 0 )
  {
    *(_BYTE *)(v3 + 3) = RaidNtStatusToSrbStatus((unsigned int)v14);
    RaidCompleteRequestEx(v4, 0, v14);
  }
  else
  {
    RaidStallDeviceQueue(a1 + 400, v7, v8, a1);
    if ( v19 )
      *v19 = 0;
    v15 = (v10 >> 3) & 2 | 4;
    if ( (v10 & 0x80000) == 0 )
      v15 = (v10 >> 3) & 2;
    v16 = v15 | 1;
    if ( !v18 )
      v16 = v15;
    if ( !(unsigned int)RaidStartIoPacket(a1, (__int64)v4, v16) )
      RaidRestartIoQueue(a1);
  }
}
