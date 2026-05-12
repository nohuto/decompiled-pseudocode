/*
 * XREFs of RaidUnitSendSrbIoControlSynchronously @ 0x1C00219F8
 * Callers:
 *     RaUnitStreamsIoctl @ 0x1C00216B4 (RaUnitStreamsIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0021834 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C0047BBC (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C0048B2C (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C0048C7C (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C0048E44 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0008054 (RaidAllocateSrb.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C000E1BC (PortSrbTranslateSrbToNtStatus.c)
 *     RaSendIrpSynchronous @ 0x1C00107F0 (RaSendIrpSynchronous.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C0021BCC (StorFreeSynchronousScsiRequest.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C0021C18 (StorBuildSynchronousScsiRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
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
  int Status; // edi
  __int64 v21; // rcx
  _QWORD v22[5]; // [rsp+20h] [rbp-28h] BYREF

  v7 = *(_QWORD *)(a1 + 24);
  v22[0] = 0LL;
  v22[1] = 0LL;
  v12 = 0LL;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(v7 + 418), 0);
  v15 = Srb;
  if ( Srb )
  {
    v16 = a7 | 0x102;
    if ( Srb[2] == 40 )
      *((_WORD *)Srb + 19) = 32;
    else
      Srb[9] = 32;
    if ( *(_BYTE *)(v7 + 418) == 1 )
    {
      *((_DWORD *)Srb + 8) = -1;
      v12 = Srb;
      v21 = *((unsigned int *)Srb + 13);
      *((_DWORD *)Srb + 5) = 2;
      *((_DWORD *)Srb + 6) = v16;
      *((_QWORD *)Srb + 8) = a3;
      *((_DWORD *)Srb + 15) = a4;
      *((_QWORD *)Srb + 10) = a2;
      *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 1264);
      Srb[v21 + 8] = *(_BYTE *)(a1 + 96);
      Srb[v21 + 9] = *(_BYTE *)(a1 + 97);
      Srb[v21 + 10] = *(_BYTE *)(a1 + 98);
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
      *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 1264);
      Srb[5] = *(_BYTE *)(a1 + 96);
      Srb[6] = *(_BYTE *)(a1 + 97);
      Srb[7] = *(_BYTE *)(a1 + 98);
    }
    v17 = (IRP *)((__int64 (__fastcall *)(_QWORD, _BYTE *, __int64, _QWORD *))StorBuildSynchronousScsiRequest)(
                   *(_QWORD *)(a1 + 8),
                   Srb,
                   v14,
                   v22);
    v18 = v17;
    if ( v17 )
    {
      if ( *(_BYTE *)(v7 + 418) == 1 )
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
            Status = PortSrbTranslateSrbToNtStatus(v15[3]);
        }
      }
      StorFreeSynchronousScsiRequest(v18);
    }
    else
    {
      Status = -1073741801;
    }
    if ( *(_BYTE *)(v7 + 418) == 1 )
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
