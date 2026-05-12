/*
 * XREFs of RaWmiPassToMiniPort @ 0x1C006FFF4
 * Callers:
 *     RaWmiIrpRegisterRequest @ 0x1C006FE04 (RaWmiIrpRegisterRequest.c)
 *     RaWmiIrpNormalRequest @ 0x1C0075A10 (RaWmiIrpNormalRequest.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0002EFC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0002F58 (RaidAdapterExecuteXrb.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0007094 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C00076A8 (RaidUnitPoFxIdleComponent.c)
 *     RaSrbSetMiniportContext @ 0x1C0007AA0 (RaSrbSetMiniportContext.c)
 *     StorFreeContiguousIoResources @ 0x1C0007F20 (StorFreeContiguousIoResources.c)
 *     StorAllocateContiguousIoResources @ 0x1C0007F4C (StorAllocateContiguousIoResources.c)
 *     RaidAllocateSrb @ 0x1C0008054 (RaidAllocateSrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0008CA8 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x1C000D868 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000DC5C (RaidSrbStatusToNtStatus.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C0011758 (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C001547C (RaidFreeSrb.c)
 *     RaidBuildMdlAndLockPagesForXrb @ 0x1C00224A8 (RaidBuildMdlAndLockPagesForXrb.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002255C (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C0022598 (RaidAdapterPoFxActivateComponent.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C003B4B0 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_ddd @ 0x1C003BA34 (WPP_SF_ddd.c)
 *     WPP_SF_qD @ 0x1C003BAD4 (WPP_SF_qD.c)
 *     WPP_SF_qqq @ 0x1C003BD14 (WPP_SF_qqq.c)
 */

__int64 __fastcall RaWmiPassToMiniPort(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  _BYTE *v5; // rbp
  _BYTE *v6; // r13
  int v7; // eax
  __int64 v8; // rdi
  ULONG v9; // r12d
  ULONG v10; // esi
  int v11; // edx
  _BYTE *Srb; // rbx
  __int64 ContiguousIoResources; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // esi
  _QWORD *v18; // rsi
  __int64 v19; // r9
  char v20; // al
  __int64 v21; // rcx
  char v22; // r9
  int v23; // r10d
  __int64 v24; // rcx
  char v25; // al
  char v26; // al
  __int64 v27; // r8
  PDEVICE_OBJECT v28; // rcx
  int v29; // eax
  int v30; // eax
  __int64 v32; // rdx
  char v33; // al
  _BYTE *v34; // rcx
  char v35; // al
  char v36; // dl
  int v37; // eax
  unsigned __int16 v38; // dx
  int v39; // r8d
  int v40; // r9d
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-68h]
  __int64 v42; // [rsp+28h] [rbp-60h]
  _BYTE *v43; // [rsp+30h] [rbp-58h]
  char v45; // [rsp+98h] [rbp+10h] BYREF
  __int64 v46; // [rsp+A0h] [rbp+18h]
  _QWORD *v47; // [rsp+A8h] [rbp+20h]

  v46 = a3;
  v45 = a2;
  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0LL;
  v43 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 == 1 )
    v8 = *(_QWORD *)(v3 + 24);
  else
    v8 = *(_QWORD *)(a1 + 64);
  v9 = *(_DWORD *)(a3 + 16);
  v47 = 0LL;
  v10 = v9;
  if ( v7 != 1 )
    v3 = 0LL;
  if ( a2 == 9 && v9 <= **(_DWORD **)(a3 + 24) )
    v10 = **(_DWORD **)(a3 + 24);
  Srb = RaidAllocateSrb(*(_QWORD *)(v8 + 8), 0x17u, *(_BYTE *)(v8 + 418), 0);
  if ( !Srb
    || (ContiguousIoResources = StorAllocateContiguousIoResources(
                                  ((*(_DWORD *)(v8 + 460) + 7) & 0xFFFFFFF8) + 1088,
                                  v11,
                                  v8),
        (v4 = ContiguousIoResources) == 0) )
  {
    v17 = -1073741801;
    goto LABEL_33;
  }
  v47 = (_QWORD *)(ContiguousIoResources + 32);
  RaidZeroXrb(ContiguousIoResources + 32, v14, 0, 0LL);
  v15 = (__int64)v47;
  *(_QWORD *)(v4 + 208) = *((_QWORD *)Srb + 6);
  v16 = v46;
  *(_QWORD *)(v4 + 200) = Srb;
  v17 = RaidBuildMdlAndLockPagesForXrb(v15, *(void **)(v16 + 24), v10);
  if ( v17 >= 0 )
  {
    v18 = v47;
    if ( *(_BYTE *)(v8 + 418) == 1 )
    {
      v19 = v46;
      v5 = &Srb[*((unsigned int *)Srb + 13)];
      *((_QWORD *)Srb + 12) = v47;
      *((_DWORD *)Srb + 5) = 23;
      v43 = Srb;
      *((_QWORD *)Srb + 8) = *(_QWORD *)(v19 + 24);
      v20 = v45;
      *((_DWORD *)Srb + 15) = v9;
      *((_DWORD *)Srb + 6) = 320;
      *((_DWORD *)Srb + 10) = 10;
      v6 = &Srb[*((unsigned int *)Srb + 30)];
      *(_DWORD *)v6 = 96;
      *((_DWORD *)v6 + 1) = 16;
      v6[8] = v20;
      *((_QWORD *)v6 + 2) = *(_QWORD *)(v19 + 8);
      v21 = *((_QWORD *)Srb + 8);
    }
    else
    {
      v32 = v46;
      *((_QWORD *)Srb + 6) = v47;
      Srb[2] = 23;
      v21 = *(_QWORD *)(v32 + 24);
      *(_WORD *)Srb = 88;
      Srb[4] = v45;
      *((_QWORD *)Srb + 3) = v21;
      *((_DWORD *)Srb + 4) = v9;
      *((_QWORD *)Srb + 4) = *(_QWORD *)(v32 + 8);
      *((_DWORD *)Srb + 3) = 320;
      *((_DWORD *)Srb + 5) = 10;
    }
    *(_QWORD *)(v4 + 216) = v21;
    RaSrbSetMiniportContext(v8, (__int64)Srb, v4 + 1088);
    v24 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)v24 == v23 )
    {
      v25 = *(_BYTE *)(v24 + 96);
      if ( *(_BYTE *)(v8 + 418) == (_BYTE)v23 )
      {
        v5[8] = v25;
        v5[9] = *(_BYTE *)(v24 + 97);
        v26 = *(_BYTE *)(v24 + 98);
LABEL_14:
        v5[10] = v26;
        goto LABEL_15;
      }
      Srb[5] = v25;
      Srb[6] = *(_BYTE *)(v24 + 97);
      v33 = *(_BYTE *)(v24 + 98);
    }
    else
    {
      v34 = *(_BYTE **)(v8 + 136);
      if ( *(_BYTE *)(v8 + 418) == (_BYTE)v23 )
        v6[9] = v23;
      else
        Srb[9] = v23;
      v35 = *(_BYTE *)(v8 + 418);
      if ( v34 == (_BYTE *)(v8 + 136) )
      {
        if ( v35 == (_BYTE)v23 )
        {
          *((_WORD *)v5 + 4) = 0;
          v5[10] = v22;
        }
        else
        {
          *(_WORD *)(Srb + 5) = 0;
          Srb[7] = v22;
        }
LABEL_15:
        KeInitializeEvent((PRKEVENT)(v4 + 696), NotificationEvent, 0);
        RaidXrbSetCompletionRoutine((__int64)v18, (__int64)RaidXrbSignalCompletion);
        if ( Srb[2] == 40 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
            goto LABEL_20;
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            WPP_SF_qqq(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xBu,
              (__int64)&WPP_af549e5d5df43b19f7e74e4cf90192ff_Traceguids,
              v18,
              v43,
              *((_QWORD *)v43 + 13));
          v28 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            goto LABEL_20;
          }
          v37 = (unsigned __int8)v5[10];
          v38 = 12;
          v39 = (unsigned __int8)v5[9];
          v40 = (unsigned __int8)v5[8];
        }
        else
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
            goto LABEL_20;
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            WPP_SF_qqq(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xDu,
              (__int64)&WPP_af549e5d5df43b19f7e74e4cf90192ff_Traceguids,
              v18,
              Srb,
              *((_QWORD *)Srb + 7));
          v28 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            goto LABEL_20;
          }
          v37 = (unsigned __int8)Srb[7];
          v38 = 14;
          v39 = (unsigned __int8)Srb[6];
          v40 = (unsigned __int8)Srb[5];
        }
        LODWORD(v42) = v37;
        LODWORD(Timeout) = v39;
        WPP_SF_ddd(
          (__int64)v28->AttachedDevice,
          v38,
          (__int64)&WPP_af549e5d5df43b19f7e74e4cf90192ff_Traceguids,
          v40,
          Timeout,
          v42);
LABEL_20:
        if ( v3 )
        {
          RaidUnitPoFxActivateComponent(v3, 0, 1u, &v45);
        }
        else if ( *(_QWORD *)(v8 + 5152) )
        {
          RaidAdapterPoFxActivateComponent(v8, 0LL, 1LL);
        }
        if ( *(_BYTE *)(v8 + 4514) )
          v29 = RaidAdapterRaiseIrqlAndExecuteXrb(v8, (__int64)v18);
        else
          v29 = RaidAdapterExecuteXrb(v8, v18, v27);
        v17 = v29;
        if ( v29 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v4 + 696), Executive, 0, 0, 0LL);
          v17 = RaidSrbStatusToNtStatus(Srb[3]);
        }
        if ( v3 )
        {
          if ( (*(_BYTE *)(v4 + 49) & 2) != 0 )
          {
            RaidUnitPoFxIdleComponentFromMiniport(v3, *(_DWORD *)(v4 + 780));
            *(_BYTE *)(v4 + 49) &= ~2u;
          }
          RaidUnitPoFxIdleComponent(v3, 0, 0, &v45);
        }
        else if ( *(_QWORD *)(v8 + 5152) )
        {
          if ( (*(_BYTE *)(v4 + 49) & 1) != 0 )
          {
            RaidAdapterPoFxIdleComponent(v8, *(unsigned int *)(v4 + 780), 0LL);
            *(_BYTE *)(v4 + 49) &= ~1u;
          }
          RaidAdapterPoFxIdleComponent(v8, 0LL, 0LL);
        }
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          LODWORD(Timeout) = v17;
          WPP_SF_qD(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0xFu,
            (__int64)&WPP_af549e5d5df43b19f7e74e4cf90192ff_Traceguids,
            v47,
            Timeout);
        }
        goto LABEL_32;
      }
      v36 = v34[40];
      if ( v35 == (_BYTE)v23 )
      {
        v5[8] = v36;
        v5[9] = v34[41];
        v26 = v34[42];
        goto LABEL_14;
      }
      Srb[5] = v36;
      Srb[6] = v34[41];
      v33 = v34[42];
    }
    Srb[7] = v33;
    goto LABEL_15;
  }
LABEL_32:
  if ( v17 < 0 )
  {
LABEL_33:
    v30 = 0;
    goto LABEL_34;
  }
  if ( Srb[2] == 40 )
    v30 = *((_DWORD *)v43 + 15);
  else
    v30 = *((_DWORD *)Srb + 4);
LABEL_34:
  *(_DWORD *)(v46 + 16) = v30;
  if ( v4 )
  {
    RaidXrbDeallocateResources((__int64)v47, 0);
    StorFreeContiguousIoResources(v8, v4);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v8 + 418) == 1 )
    {
      *((_QWORD *)Srb + 10) = 0LL;
      *((_QWORD *)Srb + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    RaidFreeSrb(Srb);
  }
  return (unsigned int)v17;
}
