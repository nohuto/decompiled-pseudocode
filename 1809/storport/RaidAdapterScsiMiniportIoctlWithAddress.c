/*
 * XREFs of RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007ACC
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0003014 (RaidAdapterDeviceControlIrp.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C0007610 (RaUnitScsiMiniportIoctl.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0002EFC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0002F58 (RaidAdapterExecuteXrb.c)
 *     RaidGetSrbIoctlFromIrp @ 0x1C000776C (RaidGetSrbIoctlFromIrp.c)
 *     RaidBuildMdlForXrb @ 0x1C0007904 (RaidBuildMdlForXrb.c)
 *     RaidAdapterFindUnit @ 0x1C0007964 (RaidAdapterFindUnit.c)
 *     RaSrbSetMiniportContext @ 0x1C0007AA0 (RaSrbSetMiniportContext.c)
 *     StorFreeContiguousIoResources @ 0x1C0007F20 (StorFreeContiguousIoResources.c)
 *     StorAllocateContiguousIoResources @ 0x1C0007F4C (StorAllocateContiguousIoResources.c)
 *     RaidAllocateSrb @ 0x1C0008054 (RaidAllocateSrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0008CA8 (RaidXrbDeallocateResources.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0009540 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0009580 (RaUnitAcquireRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaidZeroXrb @ 0x1C000D868 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000DC5C (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002255C (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C0022598 (RaidAdapterPoFxActivateComponent.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C003B4B0 (RaidUnitPoFxIdleComponentFromMiniport.c)
 */

__int64 __fastcall RaidAdapterScsiMiniportIoctlWithAddress(__int64 a1, IRP *a2, char a3, char a4, char a5, int a6)
{
  __int64 ContiguousIoResources; // r14
  unsigned int *v9; // r12
  __int64 v10; // r15
  unsigned int *Srb; // rsi
  __int64 v12; // rbx
  int SrbIoctlFromIrp; // eax
  __int64 v14; // r8
  int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  _DWORD *v19; // r12
  char v20; // al
  char v21; // dl
  char v22; // cl
  __int64 Unit; // rax
  __int64 v24; // rdi
  _QWORD *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // rcx
  char v30; // al
  __int64 v31; // rax
  __int64 v32; // r8
  int v33; // eax
  unsigned int v34; // eax
  unsigned __int64 v35; // rcx
  unsigned int *v36; // rax
  int v38; // [rsp+30h] [rbp-68h]
  ULONG v39; // [rsp+34h] [rbp-64h] BYREF
  unsigned int v40; // [rsp+38h] [rbp-60h] BYREF
  _QWORD *v41; // [rsp+40h] [rbp-58h]
  unsigned int *v42; // [rsp+48h] [rbp-50h]
  __int64 v43; // [rsp+50h] [rbp-48h]
  _DWORD *v44; // [rsp+58h] [rbp-40h] BYREF

  ContiguousIoResources = 0LL;
  HIBYTE(v38) = 0;
  v43 = 0LL;
  v9 = 0LL;
  v42 = 0LL;
  v10 = 0LL;
  Srb = 0LL;
  v12 = 0LL;
  SrbIoctlFromIrp = RaidGetSrbIoctlFromIrp((__int64)a2, &v44, &v39, &v40, 2);
  v15 = SrbIoctlFromIrp;
  if ( SrbIoctlFromIrp < 0 )
  {
    a2->IoStatus.Status = SrbIoctlFromIrp;
    goto LABEL_38;
  }
  v16 = *(_QWORD *)(a1 + 8);
  LOBYTE(v14) = *(_BYTE *)(a1 + 418);
  v43 = a1 + 320;
  Srb = (unsigned int *)RaidAllocateSrb(v16, 2LL, v14, 0LL);
  if ( !Srb )
    goto LABEL_4;
  ContiguousIoResources = StorAllocateContiguousIoResources(((*(_DWORD *)(a1 + 460) + 7) & 0xFFFFFFF8) + 1088, v17, a1);
  if ( !ContiguousIoResources )
  {
    if ( !*(_QWORD *)(a1 + 112) || _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0) )
    {
LABEL_4:
      v15 = -1073741801;
      goto LABEL_38;
    }
    ContiguousIoResources = *(_QWORD *)(a1 + 112);
  }
  v12 = ContiguousIoResources + 32;
  v41 = (_QWORD *)(ContiguousIoResources + 32);
  RaidZeroXrb(ContiguousIoResources + 32, v18, 0LL, 0LL);
  v19 = v44;
  v15 = RaidBuildMdlForXrb(ContiguousIoResources + 32, v44, v39);
  if ( v15 < 0 )
  {
    v9 = 0LL;
  }
  else
  {
    v20 = a5;
    v21 = a3;
    v22 = a4;
    BYTE2(v38) = a5;
    LOBYTE(v38) = a3;
    BYTE1(v38) = a4;
    if ( a6 == 1 )
    {
      Unit = RaidAdapterFindUnit(a1, v38);
      v22 = a4;
      v10 = Unit;
      v21 = a3;
      *(_QWORD *)(ContiguousIoResources + 256) = Unit;
      v20 = a5;
    }
    if ( *(_BYTE *)(v43 + 98) == 1 )
    {
      v24 = Srb[13];
      *((_QWORD *)Srb + 12) = v41;
      v42 = Srb;
      *((_QWORD *)Srb + 10) = a2;
      Srb[5] = 2;
      Srb[6] = 192;
      *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
      Srb[10] = v19[3];
      Srb[15] = v39;
      *((_QWORD *)Srb + 8) = v19;
      *((_BYTE *)Srb + v24 + 8) = a3;
      *((_BYTE *)Srb + v24 + 9) = a4;
      *((_BYTE *)Srb + v24 + 10) = a5;
      v25 = v41;
      *(_QWORD *)(ContiguousIoResources + 200) = Srb;
      *(_QWORD *)(ContiguousIoResources + 208) = *((_QWORD *)Srb + 10);
      v26 = *((_QWORD *)Srb + 8);
    }
    else
    {
      v25 = v41;
      *((_BYTE *)Srb + 7) = v20;
      Srb[4] = v39;
      *((_QWORD *)Srb + 3) = v19;
      *((_QWORD *)Srb + 6) = v25;
      *(_WORD *)Srb = 88;
      *((_BYTE *)Srb + 2) = 2;
      *((_BYTE *)Srb + 5) = v21;
      *((_BYTE *)Srb + 6) = v22;
      Srb[3] = 192;
      Srb[5] = v19[3];
      *(_QWORD *)(ContiguousIoResources + 200) = Srb;
      *(_QWORD *)(ContiguousIoResources + 208) = a2;
      v26 = *((_QWORD *)Srb + 3);
    }
    *(_QWORD *)(ContiguousIoResources + 216) = v26;
    RaSrbSetMiniportContext(a1, (__int64)Srb, ContiguousIoResources + 1088);
    KeInitializeEvent((PRKEVENT)(ContiguousIoResources + 696), NotificationEvent, 0);
    *(_QWORD *)(ContiguousIoResources + 688) = RaidXrbSignalCompletion;
    if ( *(_QWORD *)(a1 + 5152) )
      RaidAdapterPoFxActivateComponent(a1, 0LL);
    if ( *(_BYTE *)(a1 + 4514) )
      v28 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, (__int64)v25);
    else
      v28 = RaidAdapterExecuteXrb(a1, v25, v27);
    v15 = v28;
    if ( v28 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(ContiguousIoResources + 696), Executive, 0, 0, 0LL);
      LOBYTE(v29) = *((_BYTE *)Srb + 3);
      v15 = RaidSrbStatusToNtStatus(v29);
    }
    v30 = *(_BYTE *)(ContiguousIoResources + 49);
    if ( (v30 & 1) != 0 )
    {
      RaidAdapterPoFxIdleComponent(a1, *(unsigned int *)(ContiguousIoResources + 780), 0LL);
      *(_BYTE *)(ContiguousIoResources + 49) &= ~1u;
      v30 = *(_BYTE *)(ContiguousIoResources + 49);
    }
    if ( (v30 & 2) != 0 )
    {
      if ( a6 == 1 )
      {
        v33 = 0;
      }
      else
      {
        v31 = RaidAdapterFindUnit(a1, v38);
        v10 = v31;
        if ( v31 )
        {
          LOBYTE(v32) = 1;
          v33 = RaUnitAcquireRemoveLock(v31, a2, v32);
        }
        else
        {
          v33 = -1073741823;
        }
      }
      if ( !v33 )
      {
        if ( v10 )
        {
          RaidUnitPoFxIdleComponentFromMiniport(v10, *(unsigned int *)(ContiguousIoResources + 780));
          *(_BYTE *)(ContiguousIoResources + 49) &= ~2u;
          if ( a6 != 1 )
            RaUnitReleaseRemoveLock(v10);
        }
      }
    }
    if ( *(_QWORD *)(a1 + 5152) )
      RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
    v12 = (__int64)v41;
    v9 = v42;
  }
LABEL_38:
  if ( v15 < 0 )
  {
    v35 = 0LL;
  }
  else
  {
    if ( *((_BYTE *)Srb + 2) == 40 )
      v34 = v9[15];
    else
      v34 = Srb[4];
    if ( v40 < v34 )
      v34 = v40;
    v35 = v34;
  }
  a2->IoStatus.Information = v35;
  if ( ContiguousIoResources )
  {
    RaidXrbDeallocateResources(v12, 0LL);
    if ( ContiguousIoResources == *(_QWORD *)(a1 + 112) )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0);
    else
      StorFreeContiguousIoResources(a1, ContiguousIoResources);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v43 + 98) == 1 )
    {
      v36 = Srb;
      if ( v9 )
        v36 = v9;
      *((_QWORD *)v36 + 10) = 0LL;
      *((_QWORD *)v36 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return RaidCompleteRequestEx(a2);
}
