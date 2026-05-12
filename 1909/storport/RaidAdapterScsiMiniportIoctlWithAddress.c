/*
 * XREFs of RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000615C
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x1C0005DB8 (RaUnitScsiMiniportIoctl.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C0006DB4 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0003484 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C00034E0 (RaidAdapterExecuteXrb.c)
 *     RaidGetSrbIoctlFromIrp @ 0x1C0005E54 (RaidGetSrbIoctlFromIrp.c)
 *     RaidBuildMdlForXrb @ 0x1C0005F88 (RaidBuildMdlForXrb.c)
 *     RaidAdapterFindUnit @ 0x1C0005FE8 (RaidAdapterFindUnit.c)
 *     RaSrbSetMiniportContext @ 0x1C0006130 (RaSrbSetMiniportContext.c)
 *     StorFreeContiguousIoResources @ 0x1C00064F0 (StorFreeContiguousIoResources.c)
 *     StorAllocateContiguousIoResources @ 0x1C000651C (StorAllocateContiguousIoResources.c)
 *     RaidAllocateSrb @ 0x1C00066F0 (RaidAllocateSrb.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00079F0 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0007A30 (RaUnitAcquireRemoveLock.c)
 *     RaidXrbDeallocateResources @ 0x1C0007AE4 (RaidXrbDeallocateResources.c)
 *     RaidCompleteRequestEx @ 0x1C000A880 (RaidCompleteRequestEx.c)
 *     RaidZeroXrb @ 0x1C000B624 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000B9D8 (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001FB94 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001FBD0 (RaidAdapterPoFxActivateComponent.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C00388B4 (RaidUnitPoFxIdleComponentFromMiniport.c)
 */

__int64 __fastcall RaidAdapterScsiMiniportIoctlWithAddress(__int64 a1, IRP *a2, char a3, char a4, char a5, int a6)
{
  __int64 v9; // rbp
  __int64 v10; // r15
  unsigned int *Srb; // rsi
  _QWORD *v12; // r12
  int SrbIoctlFromIrp; // eax
  __int64 v14; // r8
  int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v19; // rdx
  char v20; // al
  char v21; // cl
  __int64 Unit; // rax
  _DWORD *v23; // rax
  ULONG v24; // ecx
  __int64 v25; // rax
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rcx
  char v29; // al
  unsigned int *v30; // rbx
  unsigned __int64 v31; // rcx
  unsigned int v33; // eax
  __int64 v34; // rdi
  __int16 IoPriorityHint; // ax
  _DWORD *v36; // rcx
  unsigned int *v37; // rax
  __int64 v38; // rax
  __int64 v39; // r8
  int v40; // eax
  int v41; // [rsp+30h] [rbp-68h]
  ULONG v42; // [rsp+34h] [rbp-64h] BYREF
  unsigned int v43; // [rsp+38h] [rbp-60h] BYREF
  unsigned int *v44; // [rsp+40h] [rbp-58h]
  void *v45; // [rsp+48h] [rbp-50h] BYREF
  __int64 v46; // [rsp+50h] [rbp-48h]

  v46 = 0LL;
  v44 = 0LL;
  HIBYTE(v41) = 0;
  v9 = 0LL;
  v10 = 0LL;
  Srb = 0LL;
  v12 = 0LL;
  SrbIoctlFromIrp = RaidGetSrbIoctlFromIrp((__int64)a2, &v45, &v42, &v43, 2);
  v15 = SrbIoctlFromIrp;
  if ( SrbIoctlFromIrp < 0 )
  {
    a2->IoStatus.Status = SrbIoctlFromIrp;
  }
  else
  {
    v16 = *(_QWORD *)(a1 + 8);
    LOBYTE(v14) = *(_BYTE *)(a1 + 402);
    v46 = a1 + 304;
    Srb = (unsigned int *)RaidAllocateSrb(v16, 2LL, v14, 0LL);
    if ( Srb
      && (ContiguousIoResources = StorAllocateContiguousIoResources(
                                    ((*(_DWORD *)(a1 + 444) + 7) & 0xFFFFFFF8) + 1088,
                                    v17,
                                    a1),
          (v9 = ContiguousIoResources) != 0) )
    {
      v12 = (_QWORD *)(ContiguousIoResources + 32);
      RaidZeroXrb(ContiguousIoResources + 32, v19, 0LL, 0LL);
      v15 = RaidBuildMdlForXrb((__int64)v12, v45, v42);
      if ( v15 >= 0 )
      {
        v20 = a5;
        v21 = a3;
        BYTE2(v41) = a5;
        LOBYTE(v41) = a3;
        BYTE1(v41) = a4;
        if ( a6 == 1 )
        {
          Unit = RaidAdapterFindUnit(a1, v41);
          v21 = a3;
          v10 = Unit;
          *(_QWORD *)(v9 + 256) = Unit;
          v20 = a5;
        }
        if ( *(_BYTE *)(v46 + 98) == 1 )
        {
          v34 = Srb[13];
          v44 = Srb;
          *((_QWORD *)Srb + 12) = v12;
          *((_QWORD *)Srb + 10) = a2;
          Srb[5] = 2;
          Srb[6] = 192;
          IoPriorityHint = IoGetIoPriorityHint(a2);
          v36 = v45;
          *((_WORD *)Srb + 18) = IoPriorityHint;
          Srb[10] = v36[3];
          Srb[15] = v42;
          *((_QWORD *)Srb + 8) = v36;
          *((_BYTE *)Srb + v34 + 8) = a3;
          *((_BYTE *)Srb + v34 + 10) = a5;
          *((_BYTE *)Srb + v34 + 9) = a4;
          *(_QWORD *)(v9 + 200) = Srb;
          *(_QWORD *)(v9 + 208) = *((_QWORD *)Srb + 10);
          v25 = *((_QWORD *)Srb + 8);
        }
        else
        {
          *((_BYTE *)Srb + 7) = v20;
          v23 = v45;
          *((_BYTE *)Srb + 5) = v21;
          *((_BYTE *)Srb + 6) = a4;
          v24 = v42;
          *((_QWORD *)Srb + 3) = v23;
          *((_QWORD *)Srb + 6) = v12;
          *(_WORD *)Srb = 88;
          *((_BYTE *)Srb + 2) = 2;
          Srb[3] = 192;
          Srb[4] = v24;
          Srb[5] = v23[3];
          *(_QWORD *)(v9 + 200) = Srb;
          *(_QWORD *)(v9 + 208) = a2;
          v25 = *((_QWORD *)Srb + 3);
        }
        *(_QWORD *)(v9 + 216) = v25;
        RaSrbSetMiniportContext(a1, (__int64)Srb, v9 + 1088);
        KeInitializeEvent((PRKEVENT)(v9 + 696), NotificationEvent, 0);
        *(_QWORD *)(v9 + 688) = RaidXrbSignalCompletion;
        if ( *(_QWORD *)(a1 + 5024) )
          RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
        if ( *(_BYTE *)(a1 + 4450) )
          v27 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, (__int64)v12);
        else
          v27 = RaidAdapterExecuteXrb(a1, v12, v26);
        v15 = v27;
        if ( v27 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v9 + 696), Executive, 0, 0, 0LL);
          LOBYTE(v28) = *((_BYTE *)Srb + 3);
          v15 = RaidSrbStatusToNtStatus(v28);
        }
        v29 = *(_BYTE *)(v9 + 49);
        if ( (v29 & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponent(a1, *(unsigned int *)(v9 + 780), 0LL);
          *(_BYTE *)(v9 + 49) &= ~1u;
          v29 = *(_BYTE *)(v9 + 49);
        }
        if ( (v29 & 2) != 0 )
        {
          if ( a6 == 1 )
          {
            v40 = 0;
          }
          else
          {
            v38 = RaidAdapterFindUnit(a1, v41);
            v10 = v38;
            if ( v38 )
            {
              LOBYTE(v39) = 1;
              v40 = RaUnitAcquireRemoveLock(v38, a2, v39);
            }
            else
            {
              v40 = -1073741823;
            }
          }
          if ( !v40 )
          {
            if ( v10 )
            {
              RaidUnitPoFxIdleComponentFromMiniport(v10, *(unsigned int *)(v9 + 780));
              *(_BYTE *)(v9 + 49) &= ~2u;
              if ( a6 != 1 )
                RaUnitReleaseRemoveLock(v10);
            }
          }
        }
        if ( *(_QWORD *)(a1 + 5024) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
      }
    }
    else
    {
      v15 = -1073741801;
    }
  }
  v30 = v44;
  if ( v15 >= 0 )
  {
    if ( *((_BYTE *)Srb + 2) == 40 )
      v33 = v44[15];
    else
      v33 = Srb[4];
    if ( v43 < v33 )
      v33 = v43;
    v31 = v33;
  }
  else
  {
    v31 = 0LL;
  }
  a2->IoStatus.Information = v31;
  if ( v9 )
  {
    RaidXrbDeallocateResources(v12, 0LL);
    StorFreeContiguousIoResources(a1, v9);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v46 + 98) == 1 )
    {
      v37 = Srb;
      if ( v30 )
        v37 = v30;
      *((_QWORD *)v37 + 10) = 0LL;
      *((_QWORD *)v37 + 13) = 0LL;
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
