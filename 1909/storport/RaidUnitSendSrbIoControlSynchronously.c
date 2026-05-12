/*
 * XREFs of RaidUnitSendSrbIoControlSynchronously @ 0x1C0018A24
 * Callers:
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0018860 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaUnitStreamsIoctl @ 0x1C002274C (RaUnitStreamsIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C0046378 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitStorageQueryDeviceEndurancePropertyIoctl @ 0x1C00472E0 (RaUnitStorageQueryDeviceEndurancePropertyIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C0047444 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C0047594 (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C0047754 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl @ 0x1C00478F4 (RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C00066F0 (RaidAllocateSrb.c)
 *     RaSendIrpSynchronous @ 0x1C000FB94 (RaSendIrpSynchronous.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C0018BF8 (StorFreeSynchronousScsiRequest.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C0018C44 (StorBuildSynchronousScsiRequest.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C00233A0 (PortSrbTranslateSrbToNtStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaidUnitSendSrbIoControlSynchronously(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 (__fastcall *a5)(_QWORD),
        __int64 a6,
        int a7)
{
  __int64 v7; // r14
  _BYTE *v12; // rbp
  _BYTE *Srb; // rax
  __int64 v14; // r8
  _BYTE *v15; // rbx
  int v16; // edx
  IRP *v17; // rax
  IRP *v18; // rsi
  __int64 v19; // rcx
  int Status; // edi
  __int64 v22; // rcx
  _QWORD v23[5]; // [rsp+20h] [rbp-28h] BYREF

  v7 = *(_QWORD *)(a1 + 24);
  v23[0] = 0LL;
  v23[1] = 0LL;
  v12 = 0LL;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(v7 + 402), 0);
  v15 = Srb;
  if ( Srb )
  {
    v16 = a7 | 0x102;
    if ( Srb[2] == 40 )
      *((_WORD *)Srb + 19) = 32;
    else
      Srb[9] = 32;
    if ( *(_BYTE *)(v7 + 402) == 1 )
    {
      *((_DWORD *)Srb + 8) = -1;
      v12 = Srb;
      v22 = *((unsigned int *)Srb + 13);
      *((_DWORD *)Srb + 5) = 2;
      *((_DWORD *)Srb + 6) = v16;
      *((_QWORD *)Srb + 8) = a3;
      *((_DWORD *)Srb + 15) = a4;
      *((_QWORD *)Srb + 10) = a2;
      *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 1288);
      Srb[v22 + 8] = *(_BYTE *)(a1 + 96);
      Srb[v22 + 9] = *(_BYTE *)(a1 + 97);
      Srb[v22 + 10] = *(_BYTE *)(a1 + 98);
    }
    else
    {
      Srb[2] = 2;
      *(_WORD *)Srb = 88;
      *((_DWORD *)Srb + 3) = v16;
      Srb[8] = -1;
      *((_QWORD *)Srb + 3) = a3;
      *((_DWORD *)Srb + 4) = a4;
      *((_QWORD *)Srb + 6) = a2;
      *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 1288);
      Srb[5] = *(_BYTE *)(a1 + 96);
      Srb[6] = *(_BYTE *)(a1 + 97);
      Srb[7] = *(_BYTE *)(a1 + 98);
    }
    v17 = (IRP *)((__int64 (__fastcall *)(_QWORD, _BYTE *, __int64, _QWORD *))StorBuildSynchronousScsiRequest)(
                   *(_QWORD *)(a1 + 8),
                   Srb,
                   v14,
                   v23);
    v18 = v17;
    if ( v17 )
    {
      if ( *(_BYTE *)(v7 + 402) == 1 )
      {
        v12 = v15;
        *((_QWORD *)v15 + 10) = v17;
      }
      else
      {
        *((_QWORD *)v15 + 6) = v17;
      }
      Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v17);
      if ( Status >= 0 )
      {
        Status = v18->IoStatus.Status;
        if ( Status >= 0 )
        {
          if ( a5 )
            Status = a5(*(unsigned int *)(a3 + 20));
          if ( Status >= 0 )
          {
            LOBYTE(v19) = v15[3];
            Status = PortSrbTranslateSrbToNtStatus(v19);
          }
        }
      }
      StorFreeSynchronousScsiRequest(v18);
    }
    else
    {
      Status = -1073741801;
    }
    if ( *(_BYTE *)(v7 + 402) == 1 )
    {
      if ( !v12 )
        v12 = v15;
      *((_QWORD *)v12 + 10) = 0LL;
      *((_QWORD *)v12 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)v15 + 6) = 0LL;
      *((_QWORD *)v15 + 7) = 0LL;
    }
    ExFreePoolWithTag(v15, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Status;
}
