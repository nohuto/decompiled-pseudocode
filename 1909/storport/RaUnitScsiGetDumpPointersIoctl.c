/*
 * XREFs of RaUnitScsiGetDumpPointersIoctl @ 0x1C0017634
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0007654 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0003484 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C00034E0 (RaidAdapterExecuteXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0006130 (RaSrbSetMiniportContext.c)
 *     StorFreeContiguousIoResources @ 0x1C00064F0 (StorFreeContiguousIoResources.c)
 *     StorAllocateContiguousIoResources @ 0x1C000651C (StorAllocateContiguousIoResources.c)
 *     RaidAllocateSrb @ 0x1C00066F0 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0006850 (RaidAllocatePool.c)
 *     RaidXrbDeallocateResources @ 0x1C0007AE4 (RaidXrbDeallocateResources.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000955C (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidCompleteRequestEx @ 0x1C000A880 (RaidCompleteRequestEx.c)
 *     RaidZeroXrb @ 0x1C000B624 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000B9D8 (RaidSrbStatusToNtStatus.c)
 *     StorPortGetAdditionalCrashDumpArea @ 0x1C0011E44 (StorPortGetAdditionalCrashDumpArea.c)
 *     RtlStringCbPrintfW @ 0x1C0017E38 (RtlStringCbPrintfW.c)
 *     RaidDriverGetName @ 0x1C0017EBC (RaidDriverGetName.c)
 *     RaidQueryCrashdumpFunctions @ 0x1C0017F34 (RaidQueryCrashdumpFunctions.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C001802C (RaidGetTelemetryLogPageIds.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 *     WPP_SF_D @ 0x1C0038C58 (WPP_SF_D.c)
 *     WPP_SF_DD @ 0x1C0038C9C (WPP_SF_DD.c)
 *     WPP_SF_qD @ 0x1C0038D8C (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0038EB0 (WPP_SF_qq.c)
 *     WPP_SF_S @ 0x1C004A15C (WPP_SF_S.c)
 */

__int64 __fastcall RaUnitScsiGetDumpPointersIoctl(__int64 a1, IRP *a2)
{
  char *Pool; // rax
  PVOID v4; // r15
  _BYTE *Srb; // rsi
  char *v6; // r14
  __int64 v7; // rbp
  wchar_t *v8; // r13
  char v9; // r12
  _IRP *MasterIrp; // r14
  _DWORD *v11; // rbx
  _DWORD *v12; // rbx
  __int64 v13; // rcx
  __int16 v14; // ax
  _QWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  char *v19; // rax
  char *v20; // rbx
  wchar_t *v21; // rax
  PVOID v22; // rax
  int v23; // edx
  __int64 ContiguousIoResources; // rax
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 v27; // r12
  int v28; // eax
  bool v29; // zf
  __int64 v30; // r8
  int v31; // eax
  signed int FullDriverPath; // ebx
  int v33; // eax
  __int64 v34; // r12
  int v35; // eax
  unsigned int v36; // ecx
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r8
  int v40; // r8d
  IRP *v41; // rdi
  int v43; // eax
  __int64 v44; // rcx
  void *v45; // rcx
  _BYTE *v46; // rax
  __int64 v47; // [rsp+38h] [rbp-70h]
  _BYTE *v48; // [rsp+40h] [rbp-68h]
  __int64 v49; // [rsp+48h] [rbp-60h] BYREF
  __int64 v50; // [rsp+50h] [rbp-58h]
  _OWORD *P; // [rsp+B0h] [rbp+8h]
  char *v53; // [rsp+C0h] [rbp+18h]
  __int64 v54; // [rsp+C8h] [rbp+20h]

  v54 = 0LL;
  Pool = 0LL;
  v4 = 0LL;
  Srb = 0LL;
  v47 = 0LL;
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 24);
  v8 = 0LL;
  a2->IoStatus.Information = 0LL;
  v9 = 0;
  v49 = 0LL;
  v50 = 0LL;
  v48 = 0LL;
  if ( a2->RequestorMode )
  {
    FullDriverPath = -1073741790;
LABEL_74:
    v26 = 0LL;
    goto LABEL_113;
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length < 0x68 )
  {
    FullDriverPath = -1073741789;
    Pool = 0LL;
    goto LABEL_74;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  memset(MasterIrp, 0, 0x68uLL);
  Pool = (char *)RaidAllocatePool(NonPagedPoolNx, 0x160uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  P = Pool;
  v11 = Pool;
  if ( Pool )
  {
    memset(Pool + 12, 0, 0x154uLL);
    *v11 = 1;
    v11[1] = 280;
    v11[2] = 1145917508;
    v12 = v11 + 70;
    P[1] = *(_OWORD *)(v7 + 304);
    P[2] = *(_OWORD *)(v7 + 320);
    P[3] = *(_OWORD *)(v7 + 336);
    P[4] = *(_OWORD *)(v7 + 352);
    P[5] = *(_OWORD *)(v7 + 368);
    P[6] = *(_OWORD *)(v7 + 384);
    P[7] = *(_OWORD *)(v7 + 400);
    P[8] = *(_OWORD *)(v7 + 416);
    P[9] = *(_OWORD *)(v7 + 432);
    P[10] = *(_OWORD *)(v7 + 448);
    P[11] = *(_OWORD *)(v7 + 464);
    P[12] = *(_OWORD *)(v7 + 480);
    P[13] = *(_OWORD *)(v7 + 496);
    P[14] = *(_OWORD *)(v7 + 512);
    RaidGetTelemetryLogPageIds(*(unsigned int *)(v7 + 4356), P + 15, P + 17);
    v13 = *(_QWORD *)(v7 + 528);
    if ( (*(_DWORD *)(v13 + 184) & 0x80u) != 0 && (*(_DWORD *)(v13 + 188) & 2) != 0 )
      v14 = HiberFileHybridPriority;
    else
      v14 = -1;
    *((_WORD *)P + 137) = v14;
    if ( RaidUnitCheckAndAcquirePoFx(a1) )
    {
      if ( (int)PoFxRegisterCrashdumpDevice(**(_QWORD **)(a1 + 1744)) >= 0 )
      {
        *(_BYTE *)v12 = 1;
        v9 = 1;
        *((_QWORD *)v12 + 1) = **(_QWORD **)(a1 + 1744);
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
    }
    v15 = *(_QWORD **)(*(_QWORD *)(a1 + 24) + 5024LL);
    if ( v15 && (int)PoFxRegisterCrashdumpDevice(*v15) >= 0 )
    {
      v9 = 1;
      *((_BYTE *)v12 + 32) = 1;
      *((_QWORD *)v12 + 5) = **(_QWORD **)(*(_QWORD *)(a1 + 24) + 5024LL);
    }
    *(_WORD *)(*(_QWORD *)(a1 + 24) + 5090LL) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 24) + 5088LL) = 40;
    if ( (int)RaidQueryCrashdumpFunctions(
                *(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 24LL),
                (void *)(*(_QWORD *)(a1 + 24) + 5088LL)) >= 0
      && (v16 = *(_QWORD *)(a1 + 24), (v17 = *(_QWORD *)(v16 + 5120)) != 0)
      && *(_QWORD *)(v16 + 5112) )
    {
      *((_QWORD *)v12 + 7) = v17;
      *((_QWORD *)v12 + 8) = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5096LL);
    }
    else
    {
      *(_WORD *)(*(_QWORD *)(a1 + 24) + 5090LL) = 0;
      if ( !v9 )
        goto LABEL_16;
    }
    MasterIrp->Overlay.AsynchronousParameters.UserApcContext = v12;
    MasterIrp->Overlay.AllocationSize.QuadPart = (__int64)StorDumpDevicePowerOn;
LABEL_16:
    *((_QWORD *)v12 + 2) = a1 + 1734;
    v18 = *(_QWORD *)(a1 + 24) + 4973LL;
    *((_QWORD *)v12 + 3) = a1 + 1735;
    *((_QWORD *)v12 + 6) = v18;
    v19 = (char *)RaidAllocatePool(NonPagedPoolNx, 0x58uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
    v53 = v19;
    v20 = v19;
    if ( !v19 )
    {
      FullDriverPath = -1073741670;
      v6 = 0LL;
      v26 = 0LL;
LABEL_112:
      Pool = (char *)P;
      goto LABEL_113;
    }
    memset(v19, 0, 0x58uLL);
    v21 = (wchar_t *)RaidAllocatePool(NonPagedPoolNx, 0x58uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
    v8 = v21;
    if ( !v21 )
      goto LABEL_83;
    memset(v21, 0, 0x58uLL);
    RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v20 + 4, 0x1EuLL, L"diskdump.sys");
    RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v20 + 19, 0x1EuLL, L"storport.sys");
    *(_QWORD *)v20 = v8;
    *(_QWORD *)v8 = 0LL;
    MasterIrp->MdlAddress = (_MDL *)P;
    *(_DWORD *)&MasterIrp->Type = 4;
    BYTE4(MasterIrp->AssociatedIrp.SystemBuffer) = 1;
    *(_DWORD *)(&MasterIrp->Size + 1) = 104;
    *(_QWORD *)&MasterIrp->Flags = 0LL;
    MasterIrp->ThreadListEntry.Flink = 0LL;
    MasterIrp->ThreadListEntry.Blink = (_LIST_ENTRY *)v20;
    MasterIrp->UserEvent = (_KEVENT *)(a1 + 1735);
    if ( (unsigned __int8)(*(_BYTE *)(v7 + 448) - 2) <= 2u )
      MasterIrp->IoStatus.Status |= 1u;
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 528) + 184LL) & 0x20) != 0 )
      MasterIrp->IoStatus.Status |= 4u;
    if ( *(_BYTE *)(v7 + 4450) && (*(_DWORD *)(*(_QWORD *)(v7 + 528) + 184LL) & 8) == 0 )
      goto LABEL_71;
    v22 = RaidAllocatePool(NonPagedPoolNx, 0x70uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
    v4 = v22;
    if ( v22 )
    {
      memset(v22, 0, 0x70uLL);
      Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x26u, *(_BYTE *)(v7 + 402), 0);
      if ( Srb )
      {
        ContiguousIoResources = StorAllocateContiguousIoResources(
                                  ((*(_DWORD *)(v7 + 444) + 7) & 0xFFFFFFF8) + 1088,
                                  v23,
                                  v7);
        v54 = ContiguousIoResources;
        v26 = ContiguousIoResources;
        if ( ContiguousIoResources )
        {
          v27 = ContiguousIoResources + 32;
          v47 = ContiguousIoResources + 32;
          RaidZeroXrb(ContiguousIoResources + 32, v25, 0, 0LL);
          *(_BYTE *)(v27 + 17) |= 8u;
          *(_QWORD *)(v27 + 176) = a2;
          *(_QWORD *)(v27 + 184) = v4;
          *(_QWORD *)(v27 + 168) = Srb;
          if ( *(_BYTE *)(v7 + 402) == 1 )
          {
            *((_QWORD *)Srb + 10) = a2;
            *((_DWORD *)Srb + 6) = 256;
            v43 = *((_DWORD *)Srb + 6);
            *((_DWORD *)Srb + 15) = 112;
            *((_QWORD *)Srb + 12) = v27;
            *((_DWORD *)Srb + 5) = 38;
            *((_QWORD *)Srb + 8) = v4;
            v29 = *(_BYTE *)(v7 + 4450) == 0;
            *((_DWORD *)Srb + 10) = 10;
            if ( v29 )
              v43 = 64;
            v48 = Srb;
            v44 = *((unsigned int *)Srb + 13);
            *((_DWORD *)Srb + 6) = v43;
            Srb[v44 + 8] = *(_BYTE *)(a1 + 96);
            Srb[v44 + 9] = *(_BYTE *)(a1 + 97);
            Srb[v44 + 10] = *(_BYTE *)(a1 + 98);
          }
          else
          {
            *((_DWORD *)Srb + 3) = 256;
            *(_WORD *)Srb = 88;
            v28 = *((_DWORD *)Srb + 3);
            *((_DWORD *)Srb + 4) = 112;
            *((_QWORD *)Srb + 6) = v27;
            Srb[2] = 38;
            *((_QWORD *)Srb + 3) = v4;
            v29 = *(_BYTE *)(v7 + 4450) == 0;
            *((_DWORD *)Srb + 5) = 10;
            if ( v29 )
              v28 = 64;
            *((_DWORD *)Srb + 3) = v28;
            Srb[5] = *(_BYTE *)(a1 + 96);
            Srb[6] = *(_BYTE *)(a1 + 97);
            Srb[7] = *(_BYTE *)(a1 + 98);
          }
          RaSrbSetMiniportContext(v7, (__int64)Srb, v54 + 1088);
          KeInitializeEvent((PRKEVENT)(v27 + 664), NotificationEvent, 0);
          *(_QWORD *)(v27 + 656) = RaidXrbSignalCompletion;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) )
          {
            WPP_SF_qq(
              WPP_GLOBAL_Control->AttachedDevice,
              30LL,
              &WPP_bda341a9323f32b668d48d296e0ff956_Traceguids,
              v27,
              Srb);
          }
          if ( *(_BYTE *)(v7 + 4450) )
            v31 = RaidAdapterRaiseIrqlAndExecuteXrb(v7, v27);
          else
            v31 = RaidAdapterExecuteXrb(v7, (_QWORD *)v27, v30);
          FullDriverPath = v31;
          if ( v31 >= 0 )
          {
            KeWaitForSingleObject((PVOID)(v27 + 664), Executive, 0, 0, 0LL);
            FullDriverPath = RaidSrbStatusToNtStatus(Srb[3]);
          }
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) )
          {
            WPP_SF_DD(
              WPP_GLOBAL_Control->AttachedDevice,
              31LL,
              &WPP_bda341a9323f32b668d48d296e0ff956_Traceguids,
              (unsigned int)FullDriverPath,
              (unsigned __int8)Srb[3]);
          }
          if ( FullDriverPath >= 0 )
          {
            v33 = *((_DWORD *)v4 + 20);
            v34 = (__int64)(P + 1);
            if ( v33 )
            {
              *((_DWORD *)P + 10) = v33;
              v35 = *((_DWORD *)v4 + 20);
            }
            else
            {
              v35 = *((_DWORD *)P + 10);
            }
            HIDWORD(MasterIrp->IoStatus.Information) = v35;
            *((_QWORD *)P + 10) = *((_QWORD *)v4 + 8);
            if ( !*(_BYTE *)(v7 + 4450) )
            {
              *((_DWORD *)P + 5) = *((_DWORD *)v4 + 18);
              *((_DWORD *)P + 6) = *((_DWORD *)v4 + 19);
              *((_DWORD *)P + 11) = *((_DWORD *)v4 + 21);
              *((_DWORD *)P + 16) = *((_DWORD *)v4 + 22);
              *((_DWORD *)P + 17) = *((_DWORD *)v4 + 23);
              *((_QWORD *)P + 9) = *((_QWORD *)v4 + 12);
              *((_BYTE *)P + 88) = *((_BYTE *)v4 + 104);
              *((_BYTE *)P + 98) = *((_BYTE *)v4 + 105);
              *((_BYTE *)P + 105) = *((_BYTE *)v4 + 106);
              *((_BYTE *)P + 113) = *((_BYTE *)v4 + 107);
              RtlStringCbPrintfW(v8 + 4, 0x1EuLL, (NTSTRSAFE_PCWSTR)v4 + 2, 0LL);
              *(_QWORD *)&MasterIrp->RequestorMode = 0LL;
              MasterIrp->UserIosb = 0LL;
              MasterIrp->AssociatedIrp.IrpCount = *((_DWORD *)v4 + 14);
            }
            v20 = v53;
            *(_BYTE *)(a1 + 1733) = 1;
            goto LABEL_45;
          }
          if ( !*(_BYTE *)(v7 + 4450) || (*(_DWORD *)(*(_QWORD *)(v7 + 528) + 184LL) & 0x1000) != 0 )
          {
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) )
            {
              WPP_SF_qD(
                WPP_GLOBAL_Control->AttachedDevice,
                32LL,
                &WPP_bda341a9323f32b668d48d296e0ff956_Traceguids,
                v27,
                FullDriverPath);
            }
LABEL_110:
            v26 = v54;
            goto LABEL_111;
          }
          v20 = v53;
LABEL_71:
          v34 = (__int64)(P + 1);
LABEL_45:
          if ( *(_BYTE *)(v7 + 4450) )
          {
            RaidDriverGetName(*(_QWORD *)(v7 + 16), &v49);
            RtlStringCbPrintfW(v8 + 4, 0x1EuLL, L"%ws.sys", v50);
            v36 = (*(_DWORD *)(v7 + 444) + 7) & 0xFFFFFFF8;
            if ( !v36 )
              v36 = 16;
            MasterIrp->AssociatedIrp.IrpCount = (*(_DWORD *)(v7 + 744) + 4095 + 16 * v36) & 0xFFFFF000;
            if ( !HIDWORD(MasterIrp->IoStatus.Information) )
              HIDWORD(MasterIrp->IoStatus.Information) = *(_DWORD *)(v34 + 24);
            *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)(v7 + 696);
            MasterIrp->UserIosb = (_IO_STATUS_BLOCK *)(v7 + 760);
            if ( (*(_DWORD *)(v7 + 524) & 1) != 0 || (v37 = *(_DWORD *)(v7 + 4356), v37 == 10) || v37 == 1 )
              MasterIrp->IoStatus.Status |= 2u;
          }
          MasterIrp->IoStatus.Status |= 8u;
          RtlInitUnicodeString((PUNICODE_STRING)(v20 + 72), L"\\SystemRoot\\System32\\Drivers\\diskdump.sys");
          FullDriverPath = IoQueryFullDriverPath(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 8LL), v8 + 36);
          if ( FullDriverPath < 0 )
            FullDriverPath = 0;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) )
          {
            WPP_SF_S(WPP_GLOBAL_Control->AttachedDevice, v38, v39, v8 + 4);
          }
          v40 = *(_DWORD *)(v7 + 496);
          if ( v40 )
            FullDriverPath = StorPortGetAdditionalCrashDumpArea(v7, v34, v40);
          if ( FullDriverPath >= 0 )
          {
            v41 = a2;
            v6 = v53;
            Pool = (char *)P;
            v26 = v54;
            a2->IoStatus.Information = 104LL;
            goto LABEL_61;
          }
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) )
          {
            WPP_SF_D(
              WPP_GLOBAL_Control->AttachedDevice,
              34LL,
              &WPP_bda341a9323f32b668d48d296e0ff956_Traceguids,
              (unsigned int)FullDriverPath);
          }
          goto LABEL_110;
        }
        FullDriverPath = -1073741670;
      }
      else
      {
        FullDriverPath = -1073741670;
        v26 = 0LL;
      }
    }
    else
    {
LABEL_83:
      FullDriverPath = -1073741670;
      v26 = 0LL;
    }
LABEL_111:
    v6 = v53;
    goto LABEL_112;
  }
  FullDriverPath = -1073741670;
  v6 = 0LL;
  v26 = 0LL;
LABEL_113:
  v41 = a2;
LABEL_61:
  if ( FullDriverPath < 0 )
  {
    if ( Pool )
      ExFreePoolWithTag(Pool, 0x44436152u);
    if ( v6 )
      ExFreePoolWithTag(v6, 0x44436152u);
    if ( v8 )
    {
      v45 = (void *)*((_QWORD *)v8 + 10);
      if ( v45 )
        ExFreePoolWithTag(v45, 0);
      ExFreePoolWithTag(v8, 0x44436152u);
    }
  }
  if ( v26 )
  {
    RaidXrbDeallocateResources(v47, 0);
    StorFreeContiguousIoResources(v7, v26);
  }
  if ( Srb )
  {
    if ( Srb[2] == 40 )
    {
      v46 = Srb;
      if ( v48 )
        v46 = v48;
      *((_QWORD *)v46 + 10) = 0LL;
      *((_QWORD *)v46 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x44436152u);
  return RaidCompleteRequestEx(v41, 0, FullDriverPath);
}
