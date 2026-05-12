/*
 * XREFs of RaWmiPassToMiniPort @ 0x1C006FAE8
 * Callers:
 *     RaWmiIrpRegisterRequest @ 0x1C006F8F8 (RaWmiIrpRegisterRequest.c)
 *     RaWmiIrpNormalRequest @ 0x1C0075B10 (RaWmiIrpNormalRequest.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0003484 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C00034E0 (RaidAdapterExecuteXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0006130 (RaSrbSetMiniportContext.c)
 *     StorFreeContiguousIoResources @ 0x1C00064F0 (StorFreeContiguousIoResources.c)
 *     StorAllocateContiguousIoResources @ 0x1C000651C (StorAllocateContiguousIoResources.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C00065D8 (RaidUnitPoFxIdleComponent.c)
 *     RaidAllocateSrb @ 0x1C00066F0 (RaidAllocateSrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0007AE4 (RaidXrbDeallocateResources.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0009458 (RaidUnitPoFxActivateComponent.c)
 *     RaidZeroXrb @ 0x1C000B624 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000B9D8 (RaidSrbStatusToNtStatus.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C00101F4 (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C001744C (RaidFreeSrb.c)
 *     RaidBuildMdlAndLockPagesForXrb @ 0x1C001FAE0 (RaidBuildMdlAndLockPagesForXrb.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001FB94 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001FBD0 (RaidAdapterPoFxActivateComponent.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C00388B4 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_ddd @ 0x1C0038CEC (WPP_SF_ddd.c)
 *     WPP_SF_qD @ 0x1C0038D8C (WPP_SF_qD.c)
 *     WPP_SF_qqq @ 0x1C0038FCC (WPP_SF_qqq.c)
 */

__int64 __fastcall RaWmiPassToMiniPort(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  _BYTE *v5; // rbp
  _BYTE *v6; // r13
  __int64 v7; // rdi
  unsigned int v8; // r12d
  ULONG v9; // esi
  int v10; // edx
  _BYTE *Srb; // rbx
  __int64 ContiguousIoResources; // rax
  __int64 v13; // rdx
  int v14; // esi
  __int64 v15; // rcx
  char v16; // r10
  int v17; // r11d
  __int64 v18; // rcx
  char v19; // al
  char v20; // al
  __int64 v21; // r8
  PDEVICE_OBJECT v22; // rcx
  int v23; // eax
  int v24; // eax
  char v26; // al
  _BYTE *v27; // rcx
  char v28; // al
  char v29; // dl
  int v30; // eax
  unsigned __int16 v31; // dx
  int v32; // r8d
  int v33; // r9d
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-68h]
  __int64 v35; // [rsp+28h] [rbp-60h]
  _QWORD *v36; // [rsp+30h] [rbp-58h]
  _BYTE *v37; // [rsp+38h] [rbp-50h]
  char v41; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0LL;
  v37 = 0LL;
  v5 = 0LL;
  v41 = 0;
  v6 = 0LL;
  if ( *(_DWORD *)v3 == 1 )
    v7 = *(_QWORD *)(v3 + 24);
  else
    v7 = v3;
  v8 = *(_DWORD *)(a3 + 16);
  if ( *(_DWORD *)v3 != 1 )
    v3 = 0LL;
  v36 = 0LL;
  v9 = *(_DWORD *)(a3 + 16);
  if ( a2 == 9 && v8 <= **(_DWORD **)(a3 + 24) )
    v9 = **(_DWORD **)(a3 + 24);
  Srb = RaidAllocateSrb(*(_QWORD *)(v7 + 8), 0x17u, *(_BYTE *)(v7 + 402), 0);
  if ( !Srb
    || (ContiguousIoResources = StorAllocateContiguousIoResources(
                                  ((*(_DWORD *)(v7 + 444) + 7) & 0xFFFFFFF8) + 1088,
                                  v10,
                                  v7),
        (v4 = ContiguousIoResources) == 0) )
  {
    v14 = -1073741801;
    goto LABEL_33;
  }
  v36 = (_QWORD *)(ContiguousIoResources + 32);
  RaidZeroXrb(ContiguousIoResources + 32, v13, 0, 0LL);
  *(_QWORD *)(v4 + 208) = *((_QWORD *)Srb + 6);
  *(_QWORD *)(v4 + 200) = Srb;
  v14 = RaidBuildMdlAndLockPagesForXrb((__int64)v36, *(void **)(a3 + 24), v9);
  if ( v14 >= 0 )
  {
    if ( *(_BYTE *)(v7 + 402) == 1 )
    {
      v5 = &Srb[*((unsigned int *)Srb + 13)];
      *((_QWORD *)Srb + 12) = v36;
      *((_DWORD *)Srb + 5) = 23;
      v37 = Srb;
      *((_QWORD *)Srb + 8) = *(_QWORD *)(a3 + 24);
      *((_DWORD *)Srb + 15) = v8;
      *((_DWORD *)Srb + 6) = 320;
      *((_DWORD *)Srb + 10) = 10;
      v6 = &Srb[*((unsigned int *)Srb + 30)];
      *(_DWORD *)v6 = 96;
      *((_DWORD *)v6 + 1) = 16;
      v6[8] = a2;
      *((_QWORD *)v6 + 2) = *(_QWORD *)(a3 + 8);
      v15 = *((_QWORD *)Srb + 8);
    }
    else
    {
      *((_QWORD *)Srb + 6) = v36;
      Srb[2] = 23;
      v15 = *(_QWORD *)(a3 + 24);
      *(_WORD *)Srb = 88;
      Srb[4] = a2;
      *((_QWORD *)Srb + 3) = v15;
      *((_DWORD *)Srb + 4) = v8;
      *((_QWORD *)Srb + 4) = *(_QWORD *)(a3 + 8);
      *((_DWORD *)Srb + 3) = 320;
      *((_DWORD *)Srb + 5) = 10;
    }
    *(_QWORD *)(v4 + 216) = v15;
    RaSrbSetMiniportContext(v7, (__int64)Srb, v4 + 1088);
    v18 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)v18 == v17 )
    {
      v19 = *(_BYTE *)(v18 + 96);
      if ( *(_BYTE *)(v7 + 402) == (_BYTE)v17 )
      {
        v5[8] = v19;
        v5[9] = *(_BYTE *)(v18 + 97);
        v20 = *(_BYTE *)(v18 + 98);
LABEL_14:
        v5[10] = v20;
        goto LABEL_15;
      }
      Srb[5] = v19;
      Srb[6] = *(_BYTE *)(v18 + 97);
      v26 = *(_BYTE *)(v18 + 98);
    }
    else
    {
      v27 = *(_BYTE **)(v7 + 120);
      if ( *(_BYTE *)(v7 + 402) == (_BYTE)v17 )
        v6[9] = v17;
      else
        Srb[9] = v17;
      v28 = *(_BYTE *)(v7 + 402);
      if ( v27 == (_BYTE *)(v7 + 120) )
      {
        if ( v28 == (_BYTE)v17 )
        {
          *((_WORD *)v5 + 4) = 0;
          v5[10] = v16;
        }
        else
        {
          *(_WORD *)(Srb + 5) = 0;
          Srb[7] = v16;
        }
LABEL_15:
        KeInitializeEvent((PRKEVENT)(v4 + 696), NotificationEvent, 0);
        RaidXrbSetCompletionRoutine((__int64)v36, (__int64)RaidXrbSignalCompletion);
        if ( Srb[2] == 40 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
            goto LABEL_20;
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            WPP_SF_qqq(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xBu,
              (__int64)&WPP_6419fef45b0a382a4b32bdec8e3ae805_Traceguids,
              v36,
              v37,
              *((_QWORD *)v37 + 13));
          v22 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            goto LABEL_20;
          }
          v30 = (unsigned __int8)v5[10];
          v31 = 12;
          v32 = (unsigned __int8)v5[9];
          v33 = (unsigned __int8)v5[8];
        }
        else
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
            goto LABEL_20;
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            WPP_SF_qqq(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xDu,
              (__int64)&WPP_6419fef45b0a382a4b32bdec8e3ae805_Traceguids,
              v36,
              Srb,
              *((_QWORD *)Srb + 7));
          v22 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            goto LABEL_20;
          }
          v30 = (unsigned __int8)Srb[7];
          v31 = 14;
          v32 = (unsigned __int8)Srb[6];
          v33 = (unsigned __int8)Srb[5];
        }
        LODWORD(v35) = v30;
        LODWORD(Timeout) = v32;
        WPP_SF_ddd(
          (__int64)v22->AttachedDevice,
          v31,
          (__int64)&WPP_6419fef45b0a382a4b32bdec8e3ae805_Traceguids,
          v33,
          Timeout,
          v35);
LABEL_20:
        if ( v3 )
        {
          RaidUnitPoFxActivateComponent(v3, 0, 1LL, &v41);
        }
        else if ( *(_QWORD *)(v7 + 5024) )
        {
          RaidAdapterPoFxActivateComponent(v7, 0LL, 1LL);
        }
        if ( *(_BYTE *)(v7 + 4450) )
          v23 = RaidAdapterRaiseIrqlAndExecuteXrb(v7, (__int64)v36);
        else
          v23 = RaidAdapterExecuteXrb(v7, v36, v21);
        v14 = v23;
        if ( v23 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v4 + 696), Executive, 0, 0, 0LL);
          v14 = RaidSrbStatusToNtStatus(Srb[3]);
        }
        if ( v3 )
        {
          if ( (*(_BYTE *)(v4 + 49) & 2) != 0 )
          {
            RaidUnitPoFxIdleComponentFromMiniport(v3, *(_DWORD *)(v4 + 780));
            *(_BYTE *)(v4 + 49) &= ~2u;
          }
          RaidUnitPoFxIdleComponent(v3, 0, 0, &v41);
        }
        else if ( *(_QWORD *)(v7 + 5024) )
        {
          if ( (*(_BYTE *)(v4 + 49) & 1) != 0 )
          {
            RaidAdapterPoFxIdleComponent(v7, *(unsigned int *)(v4 + 780), 0LL);
            *(_BYTE *)(v4 + 49) &= ~1u;
          }
          RaidAdapterPoFxIdleComponent(v7, 0LL, 0LL);
        }
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          LODWORD(Timeout) = v14;
          WPP_SF_qD(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0xFu,
            (__int64)&WPP_6419fef45b0a382a4b32bdec8e3ae805_Traceguids,
            v36,
            Timeout);
        }
        goto LABEL_32;
      }
      v29 = v27[40];
      if ( v28 == (_BYTE)v17 )
      {
        v5[8] = v29;
        v5[9] = v27[41];
        v20 = v27[42];
        goto LABEL_14;
      }
      Srb[5] = v29;
      Srb[6] = v27[41];
      v26 = v27[42];
    }
    Srb[7] = v26;
    goto LABEL_15;
  }
LABEL_32:
  if ( v14 < 0 )
  {
LABEL_33:
    v24 = 0;
    goto LABEL_34;
  }
  if ( Srb[2] == 40 )
    v24 = *((_DWORD *)v37 + 15);
  else
    v24 = *((_DWORD *)Srb + 4);
LABEL_34:
  *(_DWORD *)(a3 + 16) = v24;
  if ( v4 )
  {
    RaidXrbDeallocateResources((__int64)v36, 0);
    StorFreeContiguousIoResources(v7, v4);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v7 + 402) == 1 )
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
  return (unsigned int)v14;
}
