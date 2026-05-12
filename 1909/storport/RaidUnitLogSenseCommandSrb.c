/*
 * XREFs of RaidUnitLogSenseCommandSrb @ 0x1C0023488
 * Callers:
 *     StorpTelemetrySendUnitScsiDiagnostics @ 0x1C0023EA0 (StorpTelemetrySendUnitScsiDiagnostics.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C0048D24 (RaidUnitLogSenseTemperatureSrb.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C00066F0 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0006850 (RaidAllocatePool.c)
 *     RaSendIrpSynchronous @ 0x1C000FB94 (RaSendIrpSynchronous.c)
 *     RaidFreeSrb @ 0x1C001744C (RaidFreeSrb.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C0018BF8 (StorFreeSynchronousScsiRequest.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C0018C44 (StorBuildSynchronousScsiRequest.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C00233A0 (PortSrbTranslateSrbToNtStatus.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 */

__int64 __fastcall RaidUnitLogSenseCommandSrb(__int64 a1, __int64 a2, char a3, char a4, unsigned int *a5, _BYTE *a6)
{
  _BYTE *v9; // rsi
  _BYTE *v10; // r15
  _BYTE *Srb; // rdi
  int Status; // ebx
  PVOID Pool; // rax
  void *v14; // r13
  char v15; // al
  __int64 v16; // rcx
  _BYTE *v17; // rcx
  char v18; // al
  IRP *v19; // rax
  IRP *v20; // rbp
  unsigned int v21; // ecx
  _IO_STATUS_BLOCK v23; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+70h] [rbp+8h]
  unsigned __int16 v27; // [rsp+90h] [rbp+28h]

  v23.Pointer = 0LL;
  v23.Information = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  memset(a6, 0, *a5);
  v24 = *(_QWORD *)(a1 + 24);
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)(v24 + 402), 1);
  if ( !Srb )
    return (unsigned int)-1073741801;
  Pool = RaidAllocatePool(NonPagedPoolNx, 0xFFuLL, 0x4E536152u, *(_QWORD *)(a1 + 8));
  v14 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, 0xFFuLL);
    v15 = *(_BYTE *)(v24 + 402);
    Srb[3] = 0;
    if ( v15 == 1 )
    {
      *((_DWORD *)Srb + 8) = -1;
      v9 = Srb;
      v16 = *((unsigned int *)Srb + 13);
      *((_DWORD *)Srb + 5) = 0;
      *((_DWORD *)Srb + 6) = 524626;
      *((_QWORD *)Srb + 8) = a6;
      *((_DWORD *)Srb + 15) = *a5;
      *((_QWORD *)Srb + 10) = a2;
      *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 1288);
      Srb[v16 + 8] = *(_BYTE *)(a1 + 96);
      Srb[v16 + 9] = *(_BYTE *)(a1 + 97);
      Srb[v16 + 10] = *(_BYTE *)(a1 + 98);
      v10 = &Srb[*((unsigned int *)Srb + 30)];
      *(_DWORD *)v10 = 64;
      v17 = v10 + 24;
      *((_DWORD *)v10 + 1) = 32;
      *((_WORD *)v10 + 4) = -256;
      *((_QWORD *)v10 + 2) = v14;
      v10[10] = 10;
      v18 = Srb[2];
    }
    else
    {
      Srb[2] = 0;
      v17 = Srb + 72;
      *((_DWORD *)Srb + 3) = 524626;
      *(_WORD *)Srb = 88;
      Srb[5] = *(_BYTE *)(a1 + 96);
      Srb[6] = *(_BYTE *)(a1 + 97);
      Srb[7] = *(_BYTE *)(a1 + 98);
      Srb[8] = -1;
      *((_QWORD *)Srb + 3) = a6;
      *((_DWORD *)Srb + 4) = *a5;
      *((_QWORD *)Srb + 6) = a2;
      *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 1288);
      v18 = 0;
      *((_WORD *)Srb + 5) = -246;
      *((_QWORD *)Srb + 4) = v14;
    }
    if ( v18 == 40 )
      *((_WORD *)Srb + 19) = 32;
    else
      Srb[9] = 32;
    v17[3] = a4;
    *v17 = 77;
    v17[2] = a3 & 0x3F;
    *(_WORD *)(v17 + 5) = 0;
    v17[8] = *(_BYTE *)a5;
    v17[7] = *((_BYTE *)a5 + 1);
    v19 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), (unsigned __int64)Srb, 32LL, &v23);
    v20 = v19;
    if ( !v19 )
    {
      Status = -1073741801;
LABEL_26:
      ExFreePoolWithTag(v14, 0x4E536152u);
      goto LABEL_27;
    }
    Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v19);
    if ( Status >= 0 )
    {
      Status = v20->IoStatus.Status;
      if ( Status >= 0 )
        Status = PortSrbTranslateSrbToNtStatus(Srb[3]);
    }
    if ( Status == -2147483643 )
    {
      if ( *((_DWORD *)Srb + 4) > *a5 )
        goto LABEL_20;
      Status = 0;
      Srb[3] = 1;
    }
    if ( (int)(Status + 0x80000000) >= 0 )
    {
LABEL_25:
      StorFreeSynchronousScsiRequest(v20);
      goto LABEL_26;
    }
LABEL_20:
    if ( *((_DWORD *)Srb + 4) >= 4u && (HIBYTE(v27) = a6[2], LOBYTE(v27) = a6[3], v21 = v27 + 4, (*a6 & 0x3F) == a3) )
    {
      if ( v21 < *a5 )
        *a5 = v21;
    }
    else
    {
      Status = -1073741668;
    }
    goto LABEL_25;
  }
  Status = -1073741801;
LABEL_27:
  if ( *(_BYTE *)(v24 + 402) == 1 )
  {
    if ( !v9 )
      v9 = Srb;
    *((_QWORD *)v9 + 10) = 0LL;
    *((_QWORD *)v9 + 13) = 0LL;
    if ( v10 )
      *((_QWORD *)v10 + 2) = 0LL;
  }
  else
  {
    *((_QWORD *)Srb + 6) = 0LL;
    *((_QWORD *)Srb + 7) = 0LL;
    *((_QWORD *)Srb + 4) = 0LL;
  }
  RaidFreeSrb(Srb);
  return (unsigned int)Status;
}
