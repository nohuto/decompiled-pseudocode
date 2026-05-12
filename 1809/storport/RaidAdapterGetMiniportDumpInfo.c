/*
 * XREFs of RaidAdapterGetMiniportDumpInfo @ 0x1C0073798
 * Callers:
 *     RaidAdapterPopulateMiniportDumpInfo @ 0x1C0073BB8 (RaidAdapterPopulateMiniportDumpInfo.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0002EFC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0002F58 (RaidAdapterExecuteXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0007AA0 (RaSrbSetMiniportContext.c)
 *     StorFreeContiguousIoResources @ 0x1C0007F20 (StorFreeContiguousIoResources.c)
 *     StorAllocateContiguousIoResources @ 0x1C0007F4C (StorAllocateContiguousIoResources.c)
 *     RaidAllocateSrb @ 0x1C0008054 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     RaidXrbDeallocateResources @ 0x1C0008CA8 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x1C000D868 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000DC5C (RaidSrbStatusToNtStatus.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C0011758 (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C001547C (RaidFreeSrb.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     WPP_SF_DD @ 0x1C003B9E4 (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C003BBF8 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterGetMiniportDumpInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v5; // r12
  unsigned int v6; // edi
  _BYTE *Srb; // rbx
  _BYTE *v8; // r13
  _DWORD *v10; // rsi
  _QWORD *v11; // rdx
  __int64 v12; // r14
  bool v13; // zf
  unsigned int v14; // ecx
  int v15; // edi
  unsigned int v16; // r15d
  _DWORD *Pool; // rax
  int v18; // r10d
  _QWORD *v19; // r8
  _BYTE *v20; // rcx
  _DWORD *v21; // rdx
  int v22; // edx
  __int64 ContiguousIoResources; // rax
  __int64 v24; // rdx
  __int64 v25; // rdi
  int v26; // eax
  __int64 v27; // r8
  int v28; // eax
  _BYTE *v29; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+38h] [rbp-40h]
  char v34; // [rsp+90h] [rbp+18h]

  v5 = (_QWORD *)(a3 + 24);
  v6 = 0;
  Srb = 0LL;
  v32 = 0LL;
  v8 = 0LL;
  v34 = 0;
  *a5 = 0LL;
  v10 = 0LL;
  v11 = *(_QWORD **)(a3 + 24);
  v12 = 0LL;
  if ( v11 == (_QWORD *)(a3 + 24) )
    goto LABEL_7;
  do
  {
    v13 = v11[6] == a4;
    v14 = v6 + 1;
    v11 = (_QWORD *)*v11;
    if ( !v13 )
      v14 = v6;
    v6 = v14;
  }
  while ( v11 != v5 );
  if ( v14 <= 4 )
  {
LABEL_7:
    *(_DWORD *)(a4 + 72) = v6 << 16;
    if ( 16 * ((unsigned __int64)v6 + 1) <= 0x18 )
      v16 = 24;
    else
      v16 = 16 * (v6 + 1);
    Pool = RaidAllocatePool(NonPagedPoolNx, v16, 0x44436152u, *(_QWORD *)(a2 + 8));
    v10 = Pool;
    if ( Pool )
    {
      memset(Pool, 0, v16);
      v10[2] = 1196246089;
      *v10 = 32;
      v18 = 0;
      v10[1] = 32;
      v10[3] = v6;
      v19 = (_QWORD *)*v5;
      if ( (_QWORD *)*v5 != v5 )
      {
        do
        {
          if ( v19[6] == a4 )
          {
            v20 = (_BYTE *)v19[5];
            v21 = &v10[4 * v18++ + 4];
            *(_WORD *)v21 = 1;
            v21[1] = 4;
            *((_BYTE *)v21 + 8) = v20[66];
            *((_BYTE *)v21 + 9) = v20[67];
            *((_BYTE *)v21 + 10) = v20[68];
          }
          v19 = (_QWORD *)*v19;
        }
        while ( v19 != v5 );
        v12 = 0LL;
      }
      Srb = RaidAllocateSrb(*(_QWORD *)(a2 + 8), 0x2Au, *(_BYTE *)(a2 + 418), 0);
      if ( Srb
        && (ContiguousIoResources = StorAllocateContiguousIoResources(
                                      ((*(_DWORD *)(a2 + 460) + 7) & 0xFFFFFFF8) + 1088,
                                      v22,
                                      a2),
            v32 = ContiguousIoResources,
            (v25 = ContiguousIoResources) != 0) )
      {
        v12 = ContiguousIoResources + 32;
        RaidZeroXrb(ContiguousIoResources + 32, v24, 0, 0LL);
        *(_BYTE *)(v12 + 17) |= 8u;
        *(_QWORD *)(v12 + 176) = a1;
        *(_QWORD *)(v12 + 184) = v10;
        *(_QWORD *)(v12 + 168) = Srb;
        if ( *(_BYTE *)(a2 + 418) == 1 )
        {
          *((_DWORD *)Srb + 15) = v16;
          v8 = Srb;
          *((_QWORD *)Srb + 12) = v12;
          *((_DWORD *)Srb + 6) = 256;
          *((_QWORD *)Srb + 10) = a1;
          *((_DWORD *)Srb + 5) = 42;
          *((_QWORD *)Srb + 8) = v10;
          *((_DWORD *)Srb + 10) = 10;
          v34 = 1;
          if ( !*(_BYTE *)(a2 + 4514) )
            *((_DWORD *)Srb + 6) = 192;
        }
        else
        {
          v8 = 0LL;
          *(_WORD *)Srb = 88;
          *((_DWORD *)Srb + 4) = v16;
          *((_DWORD *)Srb + 3) = 256;
          v26 = 256;
          *((_QWORD *)Srb + 6) = v12;
          Srb[2] = 42;
          *((_QWORD *)Srb + 3) = v10;
          *((_DWORD *)Srb + 5) = 10;
          if ( !*(_BYTE *)(a2 + 4514) )
            v26 = 192;
          *((_DWORD *)Srb + 3) = v26;
        }
        RaSrbSetMiniportContext(a2, (__int64)Srb, v25 + 1088);
        KeInitializeEvent((PRKEVENT)(v12 + 664), NotificationEvent, 0);
        RaidXrbSetCompletionRoutine(v12, (__int64)RaidXrbSignalCompletion);
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          WPP_SF_qq(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x49u,
            (__int64)&WPP_2427d071e20036a288b852fd33055616_Traceguids,
            v12,
            Srb);
        }
        if ( *(_BYTE *)(a2 + 4514) )
          v28 = RaidAdapterRaiseIrqlAndExecuteXrb(a2, v12);
        else
          v28 = RaidAdapterExecuteXrb(a2, (_QWORD *)v12, v27);
        v15 = v28;
        if ( v28 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v12 + 664), Executive, 0, 0, 0LL);
          v15 = RaidSrbStatusToNtStatus(Srb[3]);
        }
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          LODWORD(Timeout) = (unsigned __int8)Srb[3];
          WPP_SF_DD(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x4Au,
            (__int64)&WPP_2427d071e20036a288b852fd33055616_Traceguids,
            v15,
            Timeout);
        }
        if ( v15 >= 0 )
        {
          if ( *v10 >= 0x18u && v10[2] == 1297105993 )
          {
            *a5 = v10;
            v10 = 0LL;
          }
          else
          {
            v15 = -1073739509;
          }
        }
      }
      else
      {
        v8 = 0LL;
        v15 = -1073741670;
      }
    }
    else
    {
      v15 = -1073741670;
      v8 = 0LL;
    }
  }
  else
  {
    v15 = -1073741637;
  }
  if ( v32 )
  {
    RaidXrbDeallocateResources(v12, 0);
    StorFreeContiguousIoResources(a2, v32);
  }
  if ( Srb )
  {
    if ( v34 == 1 )
    {
      v29 = Srb;
      if ( v8 )
        v29 = v8;
      *((_QWORD *)v29 + 10) = 0LL;
      *((_QWORD *)v29 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    RaidFreeSrb(Srb);
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0x44436152u);
  return (unsigned int)v15;
}
