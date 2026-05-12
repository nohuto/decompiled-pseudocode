/*
 * XREFs of RaUnitScsiGetDumpPointersIoctl @ 0x1C00149DC
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0008FE4 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0002EFC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0002F58 (RaidAdapterExecuteXrb.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000754C (RaidUnitCheckAndAcquirePoFx.c)
 *     RaSrbSetMiniportContext @ 0x1C0007AA0 (RaSrbSetMiniportContext.c)
 *     StorFreeContiguousIoResources @ 0x1C0007F20 (StorFreeContiguousIoResources.c)
 *     StorAllocateContiguousIoResources @ 0x1C0007F4C (StorAllocateContiguousIoResources.c)
 *     RaidAllocateSrb @ 0x1C0008054 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     RaidXrbDeallocateResources @ 0x1C0008CA8 (RaidXrbDeallocateResources.c)
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaidZeroXrb @ 0x1C000D868 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000DC5C (RaidSrbStatusToNtStatus.c)
 *     StorPortGetAdditionalCrashDumpArea @ 0x1C0013824 (StorPortGetAdditionalCrashDumpArea.c)
 *     RtlStringCbPrintfW @ 0x1C00151B8 (RtlStringCbPrintfW.c)
 *     RaidDriverGetName @ 0x1C001523C (RaidDriverGetName.c)
 *     RaidQueryCrashdumpFunctions @ 0x1C00152B4 (RaidQueryCrashdumpFunctions.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C0015394 (RaidGetTelemetryLogPageIds.c)
 *     memmove @ 0x1C002C080 (memmove.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     WPP_SF_ @ 0x1C003B974 (WPP_SF_.c)
 *     WPP_SF_D @ 0x1C003B9A0 (WPP_SF_D.c)
 *     WPP_SF_DD @ 0x1C003B9E4 (WPP_SF_DD.c)
 *     WPP_SF_qD @ 0x1C003BAD4 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003BBF8 (WPP_SF_qq.c)
 *     WPP_SF_S @ 0x1C004B784 (WPP_SF_S.c)
 */

__int64 __fastcall RaUnitScsiGetDumpPointersIoctl(__int64 a1, IRP *a2)
{
  IRP *v2; // r14
  _MDL *Pool; // rax
  PVOID v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbp
  _BYTE *Srb; // rdi
  wchar_t *v9; // r15
  char v10; // bl
  _IRP *MasterIrp; // r14
  _MDL *v12; // r12
  unsigned int *p_ByteCount; // r15
  __int64 v14; // rcx
  __int16 v15; // ax
  _QWORD *v16; // rcx
  __int64 v17; // rax
  _MDL *v18; // rcx
  signed int AdditionalCrashDumpArea; // ebx
  __int64 v20; // rax
  wchar_t *v21; // rax
  PVOID v22; // rax
  __int64 v23; // r8
  wchar_t *v24; // r15
  unsigned int v25; // ecx
  bool v26; // zf
  int v27; // r8d
  PVOID v29; // rax
  __int64 ContiguousIoResources; // rax
  int v31; // eax
  __int64 v32; // r8
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  __int64 v37; // rcx
  _QWORD *v38; // rax
  _DWORD *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // r15
  __int64 v42; // rcx
  int v43; // esi
  int v44; // eax
  _BYTE *v45; // rax
  __int64 v46; // [rsp+30h] [rbp-78h]
  __int64 p_Process; // [rsp+38h] [rbp-70h]
  _BYTE *v48; // [rsp+40h] [rbp-68h]
  __int64 v49; // [rsp+50h] [rbp-58h] BYREF
  __int64 v50; // [rsp+58h] [rbp-50h]
  _MDL *P; // [rsp+B0h] [rbp+8h]
  wchar_t *v53; // [rsp+C0h] [rbp+18h]
  wchar_t *v54; // [rsp+C8h] [rbp+20h]

  v2 = a2;
  Pool = 0LL;
  v46 = 0LL;
  v5 = 0LL;
  v54 = 0LL;
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 24);
  Srb = 0LL;
  a2->IoStatus.Information = 0LL;
  v9 = 0LL;
  v49 = 0LL;
  v10 = 0;
  v50 = 0LL;
  v48 = 0LL;
  if ( a2->RequestorMode )
  {
    AdditionalCrashDumpArea = -1073741790;
    goto LABEL_35;
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length < 0x68 )
  {
    AdditionalCrashDumpArea = -1073741789;
    Pool = 0LL;
    goto LABEL_35;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  memset(MasterIrp, 0, 0x68uLL);
  Pool = (_MDL *)RaidAllocatePool(NonPagedPoolNx, 0x160uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  P = Pool;
  if ( Pool )
  {
    v12 = Pool;
    memset(Pool, 0, 0x160uLL);
    HIDWORD(v12->Next) = 280;
    LODWORD(v12->Next) = 1;
    *(_DWORD *)&v12->Size = 1145917508;
    p_Process = (__int64)&v12->Process;
    p_ByteCount = &v12[5].ByteCount;
    *(_OWORD *)&v12->Process = *(_OWORD *)(v7 + 320);
    *(_OWORD *)&v12->StartVa = *(_OWORD *)(v7 + 336);
    *(_OWORD *)&v12[1].Next = *(_OWORD *)(v7 + 352);
    *(_OWORD *)&v12[1].Process = *(_OWORD *)(v7 + 368);
    *(_OWORD *)&v12[1].StartVa = *(_OWORD *)(v7 + 384);
    *(_OWORD *)&v12[2].Next = *(_OWORD *)(v7 + 400);
    *(_OWORD *)&v12[2].Process = *(_OWORD *)(v7 + 416);
    *(_OWORD *)&v12[2].StartVa = *(_OWORD *)(v7 + 432);
    *(_OWORD *)&v12[3].Next = *(_OWORD *)(v7 + 448);
    *(_OWORD *)&v12[3].Process = *(_OWORD *)(v7 + 464);
    *(_OWORD *)&v12[3].StartVa = *(_OWORD *)(v7 + 480);
    *(_OWORD *)&v12[4].Next = *(_OWORD *)(v7 + 496);
    *(_OWORD *)&v12[4].Process = *(_OWORD *)(v7 + 512);
    *(_OWORD *)&v12[4].StartVa = *(_OWORD *)(v7 + 528);
    RaidGetTelemetryLogPageIds(*(unsigned int *)(a1 + 3272), &v12[5], &v12[5].StartVa);
    v14 = *(_QWORD *)(v7 + 544);
    if ( (*(_DWORD *)(v14 + 184) & 0x80u) != 0 && (*(_DWORD *)(v14 + 188) & 2) != 0 )
      v15 = HiberFileHybridPriority;
    else
      v15 = -1;
    WORD1(v12[5].StartVa) = v15;
    if ( RaidUnitCheckAndAcquirePoFx(a1) )
    {
      if ( (int)PoFxRegisterCrashdumpDevice(**(_QWORD **)(a1 + 1744)) >= 0 )
      {
        *(_BYTE *)p_ByteCount = 1;
        v10 = 1;
        v12[6].Next = **(_MDL ***)(a1 + 1744);
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
    }
    v16 = *(_QWORD **)(*(_QWORD *)(a1 + 24) + 5152LL);
    if ( v16 && (int)PoFxRegisterCrashdumpDevice(*v16) >= 0 )
    {
      v10 = 1;
      LOBYTE(v12[6].MappedSystemVa) = 1;
      v12[6].StartVa = **(void ***)(*(_QWORD *)(a1 + 24) + 5152LL);
    }
    *(_WORD *)(*(_QWORD *)(a1 + 24) + 5218LL) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 24) + 5216LL) = 40;
    if ( (int)RaidQueryCrashdumpFunctions(
                *(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 24LL),
                (void *)(*(_QWORD *)(a1 + 24) + 5216LL)) >= 0
      && (v17 = *(_QWORD *)(a1 + 24), (v18 = *(_MDL **)(v17 + 5248)) != 0LL)
      && *(_QWORD *)(v17 + 5240) )
    {
      v12[7].Next = v18;
      *(_QWORD *)&v12[7].Size = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5224LL);
    }
    else
    {
      *(_WORD *)(*(_QWORD *)(a1 + 24) + 5218LL) = 0;
      if ( !v10 )
        goto LABEL_13;
    }
    MasterIrp->Overlay.AsynchronousParameters.UserApcContext = p_ByteCount;
    MasterIrp->Overlay.AllocationSize.QuadPart = (__int64)StorDumpDevicePowerOn;
LABEL_13:
    AdditionalCrashDumpArea = 0;
    *(_QWORD *)&v12[6].Size = a1 + 1734;
    v20 = *(_QWORD *)(a1 + 24) + 5053LL;
    v12[6].Process = (struct _EPROCESS *)(a1 + 1735);
    *(_QWORD *)&v12[6].ByteCount = v20;
    v21 = (wchar_t *)RaidAllocatePool(NonPagedPoolNx, 0x48uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
    v53 = v21;
    v9 = v21;
    if ( v21
      && (memset(v21, 0, 0x48uLL),
          v22 = RaidAllocatePool(NonPagedPoolNx, 0x48uLL, 0x44436152u, *(_QWORD *)(a1 + 8)),
          (v54 = (wchar_t *)v22) != 0LL) )
    {
      memset(v22, 0, 0x48uLL);
      RtlStringCbPrintfW(v9 + 4, 0x1EuLL, L"diskdump.sys");
      RtlStringCbPrintfW(v9 + 19, 0x1EuLL, L"storport.sys");
      *(_QWORD *)v9 = v54;
      *(_QWORD *)v54 = 0LL;
      MasterIrp->MdlAddress = P;
      *(_DWORD *)&MasterIrp->Type = 4;
      *(_DWORD *)(&MasterIrp->Size + 1) = 104;
      *(_QWORD *)&MasterIrp->Flags = 0LL;
      BYTE4(MasterIrp->AssociatedIrp.SystemBuffer) = 1;
      MasterIrp->ThreadListEntry.Flink = 0LL;
      MasterIrp->ThreadListEntry.Blink = (_LIST_ENTRY *)v9;
      MasterIrp->UserEvent = (_KEVENT *)(a1 + 1735);
      if ( (unsigned __int8)(*(_BYTE *)(v7 + 464) - 2) <= 2u )
        MasterIrp->IoStatus.Status |= 1u;
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 544) + 184LL) & 0x20) != 0 )
        MasterIrp->IoStatus.Status |= 4u;
      v23 = 8LL;
      if ( *(_BYTE *)(v7 + 4514) && (*(_DWORD *)(*(_QWORD *)(v7 + 544) + 184LL) & 8) == 0 )
      {
        v5 = 0LL;
        goto LABEL_22;
      }
      v29 = RaidAllocatePool(NonPagedPoolNx, 0x70uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
      v5 = v29;
      if ( v29 )
      {
        memset(v29, 0, 0x70uLL);
        Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x26u, *(_BYTE *)(v7 + 418), 0);
        if ( Srb )
        {
          ContiguousIoResources = StorAllocateContiguousIoResources(
                                    ((*(_DWORD *)(v7 + 460) + 7) & 0xFFFFFFF8) + 1088,
                                    0,
                                    v7);
          v46 = ContiguousIoResources;
          if ( ContiguousIoResources )
          {
            v6 = ContiguousIoResources + 32;
            RaidZeroXrb(ContiguousIoResources + 32, 0LL, 0, 0LL);
            *(_BYTE *)(v6 + 17) |= 8u;
            *(_QWORD *)(v6 + 176) = a2;
            *(_QWORD *)(v6 + 184) = v5;
            *(_QWORD *)(v6 + 168) = Srb;
            if ( *(_BYTE *)(v7 + 418) == 1 )
            {
              *((_QWORD *)Srb + 10) = a2;
              *((_DWORD *)Srb + 6) = 256;
              v36 = *((_DWORD *)Srb + 6);
              *((_QWORD *)Srb + 12) = v6;
              *((_DWORD *)Srb + 5) = 38;
              *((_QWORD *)Srb + 8) = v5;
              *((_DWORD *)Srb + 15) = 112;
              v26 = *(_BYTE *)(v7 + 4514) == 0;
              *((_DWORD *)Srb + 10) = 10;
              if ( v26 )
                v36 = 64;
              v48 = Srb;
              v37 = *((unsigned int *)Srb + 13);
              *((_DWORD *)Srb + 6) = v36;
              Srb[v37 + 8] = *(_BYTE *)(a1 + 96);
              Srb[v37 + 9] = *(_BYTE *)(a1 + 97);
              Srb[v37 + 10] = *(_BYTE *)(a1 + 98);
            }
            else
            {
              *((_DWORD *)Srb + 3) = 256;
              *(_WORD *)Srb = 88;
              v31 = *((_DWORD *)Srb + 3);
              *((_QWORD *)Srb + 6) = v6;
              Srb[2] = 38;
              *((_QWORD *)Srb + 3) = v5;
              *((_DWORD *)Srb + 4) = 112;
              v26 = *(_BYTE *)(v7 + 4514) == 0;
              *((_DWORD *)Srb + 5) = 10;
              if ( v26 )
                v31 = 64;
              *((_DWORD *)Srb + 3) = v31;
              Srb[5] = *(_BYTE *)(a1 + 96);
              Srb[6] = *(_BYTE *)(a1 + 97);
              Srb[7] = *(_BYTE *)(a1 + 98);
            }
            RaSrbSetMiniportContext(v7, (__int64)Srb, v46 + 1088);
            KeInitializeEvent((PRKEVENT)(v6 + 664), NotificationEvent, 0);
            *(_QWORD *)(v6 + 656) = RaidXrbSignalCompletion;
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) )
            {
              WPP_SF_qq(
                WPP_GLOBAL_Control->AttachedDevice,
                30LL,
                &WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
                v6,
                Srb);
            }
            if ( *(_BYTE *)(v7 + 4514) )
              v33 = RaidAdapterRaiseIrqlAndExecuteXrb(v7, v6);
            else
              v33 = RaidAdapterExecuteXrb(v7, (_QWORD *)v6, v32);
            AdditionalCrashDumpArea = v33;
            if ( v33 >= 0 )
            {
              KeWaitForSingleObject((PVOID)(v6 + 664), Executive, 0, 0, 0LL);
              AdditionalCrashDumpArea = RaidSrbStatusToNtStatus(Srb[3]);
            }
            v23 = 1LL;
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) )
            {
              WPP_SF_DD(
                WPP_GLOBAL_Control->AttachedDevice,
                31LL,
                &WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
                (unsigned int)AdditionalCrashDumpArea,
                (unsigned __int8)Srb[3]);
              v23 = 1LL;
            }
            if ( AdditionalCrashDumpArea >= 0 )
            {
              v34 = *((_DWORD *)v5 + 20);
              if ( v34 )
              {
                *(_DWORD *)(p_Process + 24) = v34;
                v35 = *((_DWORD *)v5 + 20);
              }
              else
              {
                v35 = *(_DWORD *)(p_Process + 24);
              }
              v24 = v54;
              HIDWORD(MasterIrp->IoStatus.Information) = v35;
              *(_QWORD *)(p_Process + 64) = *((_QWORD *)v5 + 8);
              if ( !*(_BYTE *)(v7 + 4514) )
              {
                *(_DWORD *)(p_Process + 4) = *((_DWORD *)v5 + 18);
                *(_DWORD *)(p_Process + 8) = *((_DWORD *)v5 + 19);
                *(_DWORD *)(p_Process + 28) = *((_DWORD *)v5 + 21);
                *(_DWORD *)(p_Process + 48) = *((_DWORD *)v5 + 22);
                *(_DWORD *)(p_Process + 52) = *((_DWORD *)v5 + 23);
                *(_QWORD *)(p_Process + 56) = *((_QWORD *)v5 + 12);
                *(_BYTE *)(p_Process + 72) = *((_BYTE *)v5 + 104);
                *(_BYTE *)(p_Process + 82) = *((_BYTE *)v5 + 105);
                *(_BYTE *)(p_Process + 89) = *((_BYTE *)v5 + 106);
                *(_BYTE *)(p_Process + 97) = *((_BYTE *)v5 + 107);
                RtlStringCbPrintfW(v54 + 4, 0x1EuLL, (NTSTRSAFE_PCWSTR)v5 + 2);
                *(_QWORD *)&MasterIrp->RequestorMode = 0LL;
                MasterIrp->UserIosb = 0LL;
                v23 = 1LL;
                MasterIrp->AssociatedIrp.IrpCount = *((_DWORD *)v5 + 14);
              }
              *(_BYTE *)(a1 + 1733) = 1;
              goto LABEL_23;
            }
            if ( !*(_BYTE *)(v7 + 4514) || (*(_DWORD *)(*(_QWORD *)(v7 + 544) + 184LL) & 0x1000) != 0 )
            {
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) )
              {
                WPP_SF_qD(
                  WPP_GLOBAL_Control->AttachedDevice,
                  32LL,
                  &WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
                  v6,
                  AdditionalCrashDumpArea);
              }
LABEL_133:
              v9 = v53;
              goto LABEL_134;
            }
            AdditionalCrashDumpArea = 0;
LABEL_22:
            v24 = v54;
LABEL_23:
            if ( *(_BYTE *)(v7 + 4514) )
            {
              RaidDriverGetName(*(_QWORD *)(v7 + 16), &v49);
              RtlStringCbPrintfW(v24 + 4, 0x1EuLL, L"%ws.sys", v50);
              v25 = (*(_DWORD *)(v7 + 460) + 7) & 0xFFFFFFF8;
              if ( !v25 )
                v25 = 16;
              v26 = HIDWORD(MasterIrp->IoStatus.Information) == 0;
              MasterIrp->AssociatedIrp.IrpCount = (*(_DWORD *)(v7 + 768) + 4095 + 16 * v25) & 0xFFFFF000;
              if ( v26 )
                HIDWORD(MasterIrp->IoStatus.Information) = *(_DWORD *)(p_Process + 24);
              *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)(v7 + 720);
              MasterIrp->UserIosb = (_IO_STATUS_BLOCK *)(v7 + 784);
              if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 540LL) & 1) != 0 )
              {
                v38 = RaidAllocatePool(NonPagedPoolNx, 0x7CuLL, 0x44436152u, *(_QWORD *)(a1 + 8));
                v39 = v38;
                if ( v38 )
                {
                  v38[2] = 1771264LL;
                  *(_DWORD *)v38 = 28;
                  *((_DWORD *)v38 + 6) = 96;
                  memmove((char *)v38 + 4, "TELEMTRY", 8uLL);
                  v39[3] = 1;
                  *((_WORD *)v39 + 14) = 2;
                  if ( Srb )
                  {
                    if ( *(_BYTE *)(v7 + 418) == 1 )
                    {
                      memset(Srb, 0, 0x90uLL);
                      *((_DWORD *)Srb + 14) = 0;
                      *(_WORD *)Srb = 8;
                      Srb[2] = 40;
                      *((_DWORD *)Srb + 2) = 1397899864;
                      *((_DWORD *)Srb + 3) = 1;
                      *((_DWORD *)Srb + 4) = 144;
                      *((_DWORD *)Srb + 13) = 128;
                      *((_DWORD *)Srb + 5) = 2;
                      *((_WORD *)Srb + 18) = 2;
                      *((_WORD *)Srb + 64) = 1;
                      *((_DWORD *)Srb + 33) = 4;
                      v48 = Srb;
                    }
                    else
                    {
                      memset(Srb, 0, 0x58uLL);
                    }
                  }
                  else
                  {
                    Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(v7 + 418), 0);
                  }
                  if ( Srb )
                  {
                    v41 = v46;
                    if ( v46
                      || (v46 = StorAllocateContiguousIoResources(
                                  ((*(_DWORD *)(v7 + 460) + 7) & 0xFFFFFFF8) + 1088,
                                  v40,
                                  v7),
                          (v41 = v46) != 0) )
                    {
                      v6 = v41 + 32;
                      RaidZeroXrb(v41 + 32, v40, 0, 0LL);
                      *(_QWORD *)(v41 + 208) = a2;
                      *(_QWORD *)(v41 + 216) = v39;
                      *(_QWORD *)(v41 + 200) = Srb;
                      if ( *(_BYTE *)(v7 + 418) == 1 )
                      {
                        v42 = *((unsigned int *)Srb + 13);
                        *((_QWORD *)Srb + 12) = v6;
                        *((_QWORD *)Srb + 10) = a2;
                        *((_DWORD *)Srb + 5) = 2;
                        *((_QWORD *)Srb + 8) = v39;
                        *((_DWORD *)Srb + 15) = 124;
                        *((_DWORD *)Srb + 6) = 256;
                        *((_DWORD *)Srb + 10) = 1;
                        Srb[v42 + 8] = *(_BYTE *)(a1 + 96);
                        Srb[v42 + 9] = *(_BYTE *)(a1 + 97);
                        Srb[v42 + 10] = *(_BYTE *)(a1 + 98);
                        v48 = Srb;
                      }
                      else
                      {
                        *((_QWORD *)Srb + 6) = v6;
                        *(_WORD *)Srb = 88;
                        Srb[2] = 2;
                        *((_QWORD *)Srb + 3) = v39;
                        *((_DWORD *)Srb + 4) = 124;
                        *((_DWORD *)Srb + 3) = 256;
                        *((_DWORD *)Srb + 5) = 1;
                        Srb[5] = *(_BYTE *)(a1 + 96);
                        Srb[6] = *(_BYTE *)(a1 + 97);
                        Srb[7] = *(_BYTE *)(a1 + 98);
                      }
                      RaSrbSetMiniportContext(v7, (__int64)Srb, v41 + 1088);
                      KeInitializeEvent((PRKEVENT)(v41 + 696), NotificationEvent, 0);
                      *(_QWORD *)(v41 + 688) = RaidXrbSignalCompletion;
                      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                        && BYTE1(WPP_GLOBAL_Control->Timer) )
                      {
                        WPP_SF_qq(
                          WPP_GLOBAL_Control->AttachedDevice,
                          33LL,
                          &WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
                          v6,
                          Srb);
                      }
                      v43 = RaidAdapterRaiseIrqlAndExecuteXrb(v7, v6);
                      if ( v43 >= 0 )
                      {
                        KeWaitForSingleObject((PVOID)(v41 + 696), Executive, 0, 0, 0LL);
                        v43 = RaidSrbStatusToNtStatus(Srb[3]);
                      }
                      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                        && BYTE1(WPP_GLOBAL_Control->Timer) )
                      {
                        WPP_SF_DD(
                          WPP_GLOBAL_Control->AttachedDevice,
                          34LL,
                          &WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
                          (unsigned int)v43,
                          (unsigned __int8)Srb[3]);
                      }
                      if ( v43 >= 0 && v39[7] == 1497715456 )
                      {
                        HIDWORD(MasterIrp->IoStatus.Pointer) = *(_DWORD *)(v7 + 5056) + 33162;
                        v44 = *(unsigned __int8 *)(v7 + 5054);
                        MasterIrp->IoStatus.Status |= 2u;
                        LODWORD(MasterIrp->IoStatus.Information) = v44;
                      }
                    }
                  }
                  ExFreePoolWithTag(v39, 0x44436152u);
                }
                else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) )
                {
                  WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 35LL, &WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids);
                }
                AdditionalCrashDumpArea = 0;
              }
            }
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) )
            {
              WPP_SF_S(WPP_GLOBAL_Control->AttachedDevice, 0LL, v23, v54 + 4);
            }
            v27 = *(_DWORD *)(v7 + 512);
            if ( v27 )
              AdditionalCrashDumpArea = StorPortGetAdditionalCrashDumpArea(v7, p_Process, v27);
            if ( AdditionalCrashDumpArea >= 0 )
            {
              v2 = a2;
              v9 = v53;
              Pool = P;
              a2->IoStatus.Information = 104LL;
              goto LABEL_35;
            }
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) )
            {
              WPP_SF_D(
                WPP_GLOBAL_Control->AttachedDevice,
                37LL,
                &WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
                (unsigned int)AdditionalCrashDumpArea);
            }
            goto LABEL_133;
          }
        }
      }
      AdditionalCrashDumpArea = -1073741670;
    }
    else
    {
      AdditionalCrashDumpArea = -1073741670;
      v5 = 0LL;
    }
LABEL_134:
    Pool = P;
    goto LABEL_135;
  }
  AdditionalCrashDumpArea = -1073741670;
LABEL_135:
  v2 = a2;
LABEL_35:
  if ( AdditionalCrashDumpArea < 0 )
  {
    if ( Pool )
      ExFreePoolWithTag(Pool, 0x44436152u);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x44436152u);
    if ( v54 )
      ExFreePoolWithTag(v54, 0x44436152u);
  }
  if ( v46 )
  {
    RaidXrbDeallocateResources(v6, 0);
    StorFreeContiguousIoResources(v7, v46);
  }
  if ( Srb )
  {
    if ( Srb[2] == 40 )
    {
      v45 = Srb;
      if ( v48 )
        v45 = v48;
      *((_QWORD *)v45 + 10) = 0LL;
      *((_QWORD *)v45 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0x44436152u);
  return RaidCompleteRequestEx(v2, 0, AdditionalCrashDumpArea);
}
