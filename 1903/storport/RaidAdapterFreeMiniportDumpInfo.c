/*
 * XREFs of RaidAdapterFreeMiniportDumpInfo @ 0x1C0072874
 * Callers:
 *     RaUnitStorageFreeDumpInfo @ 0x1C0045D3C (RaUnitStorageFreeDumpInfo.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0003494 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C00034F0 (RaidAdapterExecuteXrb.c)
 *     StorFreeContiguousIoResources @ 0x1C00064A0 (StorFreeContiguousIoResources.c)
 *     StorAllocateContiguousIoResources @ 0x1C00064CC (StorAllocateContiguousIoResources.c)
 *     RaidAllocateSrb @ 0x1C00066A0 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0006800 (RaidAllocatePool.c)
 *     RaidXrbDeallocateResources @ 0x1C0007A94 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x1C000B5D4 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000B988 (RaidSrbStatusToNtStatus.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C0010060 (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C001743C (RaidFreeSrb.c)
 *     WPP_SF_DD @ 0x1C00378AC (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C0037AC0 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterFreeMiniportDumpInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  char v3; // r15
  __int64 v4; // r13
  _BYTE *Srb; // rbx
  _BYTE *v6; // r12
  unsigned int v7; // edi
  __int64 v8; // rsi
  char *Pool; // rax
  char *v11; // rdi
  _BYTE *v12; // rax
  int v13; // edx
  __int64 ContiguousIoResources; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // r8
  int v19; // eax
  int v20; // r9d
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-38h]
  char v23; // [rsp+68h] [rbp+10h]

  v2 = *(_QWORD *)(a2 + 48);
  v3 = 0;
  v4 = 0LL;
  v23 = 0;
  Srb = 0LL;
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  if ( v2 )
  {
    if ( v2 == -64 || !*(_QWORD *)(v2 + 56) )
      goto LABEL_6;
    Pool = (char *)RaidAllocatePool(NonPagedPoolNx, 0x18uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
    v11 = Pool;
    if ( !Pool )
    {
      v7 = -1073741670;
LABEL_6:
      v3 = 0;
      goto LABEL_7;
    }
    *(_QWORD *)(Pool + 12) = 0LL;
    *((_DWORD *)Pool + 5) = 0;
    *(_DWORD *)Pool = 24;
    *((_DWORD *)Pool + 1) = 24;
    *((_DWORD *)Pool + 2) = 1179468873;
    *((_QWORD *)Pool + 2) = *(_QWORD *)(v2 + 56);
    Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x2Bu, *(_BYTE *)(v2 + 162), 0);
    if ( Srb
      && (ContiguousIoResources = StorAllocateContiguousIoResources(
                                    ((*(_DWORD *)(a1 + 444) + 7) & 0xFFFFFFF8) + 1088,
                                    v13,
                                    a1),
          (v4 = ContiguousIoResources) != 0) )
    {
      v8 = ContiguousIoResources + 32;
      RaidZeroXrb(ContiguousIoResources + 32, v15, 0, 0LL);
      *(_QWORD *)(v8 + 184) = v11;
      *(_QWORD *)(v8 + 176) = 0LL;
      v16 = v4 + 1088;
      *(_QWORD *)(v8 + 168) = Srb;
      if ( *(_BYTE *)(v2 + 162) == 1 )
      {
        *((_QWORD *)Srb + 8) = v11;
        v6 = Srb;
        *((_DWORD *)Srb + 5) = 43;
        *((_DWORD *)Srb + 6) = 256;
        *((_DWORD *)Srb + 15) = 24;
        *((_QWORD *)Srb + 10) = 0LL;
        *((_QWORD *)Srb + 12) = v8;
        *((_QWORD *)Srb + 13) = v16;
        *((_DWORD *)Srb + 10) = 10;
        v23 = 1;
        if ( !*(_BYTE *)(a1 + 4450) )
          *((_DWORD *)Srb + 6) = 128;
      }
      else
      {
        *((_QWORD *)Srb + 7) = v16;
        *((_QWORD *)Srb + 3) = v11;
        *(_WORD *)Srb = 88;
        v17 = 256;
        *((_DWORD *)Srb + 3) = 256;
        Srb[2] = 43;
        *((_DWORD *)Srb + 4) = 24;
        *((_QWORD *)Srb + 6) = v8;
        *((_DWORD *)Srb + 5) = 10;
        if ( !*(_BYTE *)(a1 + 4450) )
          v17 = 128;
        *((_DWORD *)Srb + 3) = v17;
      }
      KeInitializeEvent((PRKEVENT)(v8 + 664), NotificationEvent, 0);
      RaidXrbSetCompletionRoutine(v8, (__int64)RaidXrbSignalCompletion);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        WPP_SF_qq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x4Bu,
          (__int64)&WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids,
          v8,
          Srb);
      }
      if ( *(_BYTE *)(a1 + 4450) )
        v19 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v8);
      else
        v19 = RaidAdapterExecuteXrb(a1, (_QWORD *)v8, v18);
      v20 = v19;
      if ( v19 >= 0 )
      {
        KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, 0LL);
        v20 = RaidSrbStatusToNtStatus(Srb[3]);
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        LODWORD(Timeout) = (unsigned __int8)Srb[3];
        WPP_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x4Cu,
          (__int64)&WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids,
          v20,
          Timeout);
      }
      *(_QWORD *)(v2 + 56) = 0LL;
      v3 = v23;
      v7 = 0;
    }
    else
    {
      v7 = -1073741670;
      v3 = 0;
    }
  }
LABEL_7:
  if ( v4 )
  {
    RaidXrbDeallocateResources(v8, 0);
    StorFreeContiguousIoResources(a1, v4);
  }
  if ( Srb )
  {
    if ( v3 == 1 )
    {
      v12 = Srb;
      if ( v6 )
        v12 = v6;
      *((_QWORD *)v12 + 10) = 0LL;
      *((_QWORD *)v12 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    RaidFreeSrb(Srb);
  }
  return v7;
}
