/*
 * XREFs of RaidUnitProcessBusyRequest @ 0x1C0015664
 * Callers:
 *     RaUnitAsyncError @ 0x1C000D9D4 (RaUnitAsyncError.c)
 * Callees:
 *     RaidUnitReleaseIrp @ 0x1C0008DD4 (RaidUnitReleaseIrp.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0009580 (RaUnitAcquireRemoveLock.c)
 *     RaidStartIoPacket @ 0x1C0009C40 (RaidStartIoPacket.c)
 *     IsUntaggedRequest @ 0x1C000AF94 (IsUntaggedRequest.c)
 *     StorRemoveIoGatewayItem @ 0x1C000CD00 (StorRemoveIoGatewayItem.c)
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaidRestartIoQueue @ 0x1C000D2EC (RaidRestartIoQueue.c)
 *     RaidStallDeviceQueue @ 0x1C00157FC (RaidStallDeviceQueue.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C0015980 (RaidDeleteDeviceQueueEntry.c)
 *     GetSrbScsiData @ 0x1C0021E90 (GetSrbScsiData.c)
 *     RaidNtStatusToSrbStatus @ 0x1C0046028 (RaidNtStatusToSrbStatus.c)
 */

void __fastcall RaidUnitProcessBusyRequest(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rbx
  IRP *v5; // r13
  char v6; // cl
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  unsigned __int8 v9; // al
  unsigned int v10; // esi
  unsigned int v11; // r12d
  BOOL v12; // eax
  __int64 v13; // r8
  signed int v14; // esi
  int v15; // ecx
  int v16; // r8d
  _BYTE v17[16]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+40h] [rbp-48h]
  unsigned int v19; // [rsp+90h] [rbp+8h] BYREF
  _BYTE *v20; // [rsp+A0h] [rbp+18h]

  v20 = a3;
  v3 = *(_QWORD *)(a2 + 168);
  v5 = *(IRP **)(a2 + 160);
  v6 = 0;
  v7 = 0;
  LOBYTE(v19) = 0;
  v8 = 0;
  v18 = a2;
  v9 = *(_BYTE *)(v3 + 2);
  if ( v9 == 40 )
  {
    v10 = *(_DWORD *)(v3 + 20);
    v11 = *(_DWORD *)(v3 + 24);
    if ( !v10 )
    {
      GetSrbScsiData(v3, 0, 0, (unsigned int)&v19, 0LL, 0LL);
      v6 = v19;
    }
  }
  else
  {
    v11 = *(_DWORD *)(v3 + 12);
    v6 = *(_BYTE *)(v3 + 4);
    v10 = v9;
  }
  if ( (*(_BYTE *)(v3 + 3) & 0x3F) == 5 || v6 == 8 )
  {
    v8 = *(_DWORD *)(a1 + 1808);
    v7 = 1;
  }
  if ( v6 == 40 )
  {
    v8 = *(_DWORD *)(a1 + 1804);
    v7 = 2;
  }
  v12 = IsUntaggedRequest(v11, v10);
  LOBYTE(v13) = 1;
  v19 = v12;
  v14 = RaUnitAcquireRemoveLock(a1, (__int64)v5, v13);
  if ( v14 >= 0 )
    *(_BYTE *)(v3 + 3) &= ~0x80u;
  RaidUnitReleaseIrp((__int64)v5);
  if ( (unsigned __int8)StorRemoveIoGatewayItem(
                          (volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 832LL),
                          (__int64)v17,
                          0LL) )
    KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(a1 + 24) + 1856LL), 0LL, 0LL);
  RaidDeleteDeviceQueueEntry(a1 + 656, v19);
  if ( v14 < 0 )
  {
    *(_BYTE *)(v3 + 3) = RaidNtStatusToSrbStatus((unsigned int)v14);
    RaidCompleteRequestEx(v5, 0, v14);
  }
  else
  {
    RaidStallDeviceQueue(a1 + 656, v7, v8, a1);
    if ( v20 )
      *v20 = 0;
    v15 = (v11 >> 3) & 2 | 4;
    if ( (v11 & 0x80000) == 0 )
      v15 = (v11 >> 3) & 2;
    v16 = v15 | 1;
    if ( !v19 )
      v16 = v15;
    if ( !(unsigned int)RaidStartIoPacket(a1, (__int64)v5, v16) )
      RaidRestartIoQueue(a1, 0);
  }
}
