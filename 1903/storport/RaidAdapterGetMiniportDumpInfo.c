/*
 * XREFs of RaidAdapterGetMiniportDumpInfo @ 0x1C0072B88
 * Callers:
 *     RaidAdapterPopulateMiniportDumpInfo @ 0x1C007306C (RaidAdapterPopulateMiniportDumpInfo.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0003494 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C00034F0 (RaidAdapterExecuteXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C00060E0 (RaSrbSetMiniportContext.c)
 *     StorFreeContiguousIoResources @ 0x1C00064A0 (StorFreeContiguousIoResources.c)
 *     StorAllocateContiguousIoResources @ 0x1C00064CC (StorAllocateContiguousIoResources.c)
 *     RaidAllocateSrb @ 0x1C00066A0 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0006800 (RaidAllocatePool.c)
 *     RaidXrbDeallocateResources @ 0x1C0007A94 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x1C000B5D4 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000B988 (RaidSrbStatusToNtStatus.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C0010060 (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C001743C (RaidFreeSrb.c)
 *     memset @ 0x1C0023840 (memset.c)
 *     WPP_SF_DD @ 0x1C00378AC (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C0037AC0 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterGetMiniportDumpInfo(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // edi
  _QWORD *v5; // r12
  _BYTE *Srb; // rbx
  _BYTE *v7; // r13
  _QWORD *v8; // rdx
  _DWORD *v9; // rsi
  __int64 v10; // r14
  bool v12; // zf
  unsigned int v13; // ecx
  int v14; // edi
  unsigned int v15; // r15d
  _DWORD *Pool; // rax
  int v17; // r10d
  _QWORD *v18; // r8
  _BYTE *v19; // rcx
  _DWORD *v20; // rdx
  int v21; // edx
  __int64 ContiguousIoResources; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // r8
  int v27; // eax
  _BYTE *v28; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-58h]
  __int64 v31; // [rsp+38h] [rbp-40h]
  char v32; // [rsp+88h] [rbp+10h]

  v4 = 0;
  v5 = (_QWORD *)(a2 + 24);
  v31 = 0LL;
  Srb = 0LL;
  *a4 = 0LL;
  v7 = 0LL;
  v8 = *(_QWORD **)(a2 + 24);
  v9 = 0LL;
  v10 = 0LL;
  v32 = 0;
  if ( v8 == v5 )
    goto LABEL_7;
  do
  {
    v12 = v8[6] == a3;
    v13 = v4 + 1;
    v8 = (_QWORD *)*v8;
    if ( !v12 )
      v13 = v4;
    v4 = v13;
  }
  while ( v8 != v5 );
  if ( v13 <= 4 )
  {
LABEL_7:
    *(_DWORD *)(a3 + 72) = v4 << 16;
    if ( 16 * ((unsigned __int64)v4 + 1) <= 0x18 )
      v15 = 24;
    else
      v15 = 16 * (v4 + 1);
    Pool = RaidAllocatePool(NonPagedPoolNx, v15, 0x44436152u, *(_QWORD *)(a1 + 8));
    v9 = Pool;
    if ( Pool )
    {
      memset(Pool, 0, v15);
      v9[2] = 1196246089;
      *v9 = 32;
      v17 = 0;
      v9[1] = 32;
      v9[3] = v4;
      v18 = (_QWORD *)*v5;
      if ( (_QWORD *)*v5 != v5 )
      {
        do
        {
          if ( v18[6] == a3 )
          {
            v19 = (_BYTE *)v18[5];
            v20 = &v9[4 * v17++ + 4];
            *(_WORD *)v20 = 1;
            v20[1] = 4;
            *((_BYTE *)v20 + 8) = v19[74];
            *((_BYTE *)v20 + 9) = v19[75];
            *((_BYTE *)v20 + 10) = v19[76];
          }
          v18 = (_QWORD *)*v18;
        }
        while ( v18 != v5 );
        v10 = 0LL;
      }
      Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x2Au, *(_BYTE *)(a1 + 402), 0);
      if ( Srb
        && (ContiguousIoResources = StorAllocateContiguousIoResources(
                                      ((*(_DWORD *)(a1 + 444) + 7) & 0xFFFFFFF8) + 1088,
                                      v21,
                                      a1),
            v31 = ContiguousIoResources,
            (v24 = ContiguousIoResources) != 0) )
      {
        v10 = ContiguousIoResources + 32;
        RaidZeroXrb(ContiguousIoResources + 32, v23, 0, 0LL);
        *(_BYTE *)(v10 + 17) |= 8u;
        *(_QWORD *)(v10 + 176) = 0LL;
        *(_QWORD *)(v10 + 184) = v9;
        *(_QWORD *)(v10 + 168) = Srb;
        if ( *(_BYTE *)(a1 + 402) == 1 )
        {
          *((_DWORD *)Srb + 15) = v15;
          v7 = Srb;
          *((_QWORD *)Srb + 12) = v10;
          *((_DWORD *)Srb + 6) = 256;
          *((_QWORD *)Srb + 10) = 0LL;
          *((_DWORD *)Srb + 5) = 42;
          *((_QWORD *)Srb + 8) = v9;
          *((_DWORD *)Srb + 10) = 10;
          v32 = 1;
          if ( !*(_BYTE *)(a1 + 4450) )
            *((_DWORD *)Srb + 6) = 192;
        }
        else
        {
          *((_DWORD *)Srb + 4) = v15;
          *(_WORD *)Srb = 88;
          *((_DWORD *)Srb + 3) = 256;
          v25 = 256;
          *((_QWORD *)Srb + 6) = v10;
          v7 = 0LL;
          Srb[2] = 42;
          *((_QWORD *)Srb + 3) = v9;
          *((_DWORD *)Srb + 5) = 10;
          if ( !*(_BYTE *)(a1 + 4450) )
            v25 = 192;
          *((_DWORD *)Srb + 3) = v25;
        }
        RaSrbSetMiniportContext(a1, (__int64)Srb, v24 + 1088);
        KeInitializeEvent((PRKEVENT)(v10 + 664), NotificationEvent, 0);
        RaidXrbSetCompletionRoutine(v10, (__int64)RaidXrbSignalCompletion);
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          WPP_SF_qq(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x49u,
            (__int64)&WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids,
            v10,
            Srb);
        }
        if ( *(_BYTE *)(a1 + 4450) )
          v27 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v10);
        else
          v27 = RaidAdapterExecuteXrb(a1, (_QWORD *)v10, v26);
        v14 = v27;
        if ( v27 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v10 + 664), Executive, 0, 0, 0LL);
          v14 = RaidSrbStatusToNtStatus(Srb[3]);
        }
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          LODWORD(Timeout) = (unsigned __int8)Srb[3];
          WPP_SF_DD(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x4Au,
            (__int64)&WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids,
            v14,
            Timeout);
        }
        if ( v14 >= 0 )
        {
          if ( *v9 >= 0x18u && v9[2] == 1297105993 )
          {
            *a4 = v9;
            v9 = 0LL;
          }
          else
          {
            v14 = -1073739509;
          }
        }
      }
      else
      {
        v7 = 0LL;
        v14 = -1073741670;
      }
    }
    else
    {
      v14 = -1073741670;
      v7 = 0LL;
    }
  }
  else
  {
    v14 = -1073741637;
  }
  if ( v31 )
  {
    RaidXrbDeallocateResources(v10, 0);
    StorFreeContiguousIoResources(a1, v31);
  }
  if ( Srb )
  {
    if ( v32 == 1 )
    {
      v28 = Srb;
      if ( v7 )
        v28 = v7;
      *((_QWORD *)v28 + 10) = 0LL;
      *((_QWORD *)v28 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    RaidFreeSrb(Srb);
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0x44436152u);
  return (unsigned int)v14;
}
