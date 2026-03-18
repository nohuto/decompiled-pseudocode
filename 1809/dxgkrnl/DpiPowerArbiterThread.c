/*
 * XREFs of DpiPowerArbiterThread @ 0x1C015D200
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z @ 0x1C001E32C (-DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C004394C (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C0043A1C (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C0043CE4 (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z @ 0x1C0043E08 (-DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00BCCF0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00BCFB8 (DxgkAcquireAdapterCoreSync.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D30EC (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     MonitorAdapterPowerChange @ 0x1C014323C (MonitorAdapterPowerChange.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C0143DEC (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C01446B4 (-DmmResetModeState@@YAJQEAXK@Z.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C01BE73C (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01BFA94 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C01C7DD0 (DxgkIsAdapterCoreSyncAcquired.c)
 *     DxgkResumeMemorySegments @ 0x1C01C854C (DxgkResumeMemorySegments.c)
 *     DxgkSuspendMemorySegments @ 0x1C01C85C0 (DxgkSuspendMemorySegments.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C02101C8 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     DxgkNotifySharedPowerGraphicsPowerTransition @ 0x1C0212B24 (DxgkNotifySharedPowerGraphicsPowerTransition.c)
 *     ?DmmAdapterPowerChange@@YAJQEAXE@Z @ 0x1C0279EEC (-DmmAdapterPowerChange@@YAJQEAXE@Z.c)
 */

void __fastcall DpiPowerArbiterThread(_QWORD *StartContext)
{
  __int64 v1; // rdi
  __int64 v2; // rbp
  bool v3; // zf
  void *v4; // rax
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  struct _LIST_ENTRY *PowerActionQueueEntry; // rax
  struct _LIST_ENTRY *v8; // r15
  int Blink; // ecx
  char v10; // r12
  int v11; // eax
  char v12; // r13
  bool v13; // si
  bool v14; // bl
  int v15; // r14d
  int v16; // eax
  __int64 v17; // rcx
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // r9
  int v21; // eax
  int v22; // edx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rbx
  _QWORD *v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rax
  int v39; // eax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rcx
  DXGADAPTER *v50; // rcx
  int v51; // eax
  DXGGLOBAL *Global; // rax
  int v53; // eax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rcx
  _QWORD *v61; // rax
  char started; // al
  __int64 v63; // rcx
  _QWORD *v64; // rax
  __int64 v65; // rcx
  int v66; // esi
  __int64 v67; // rax
  int v68; // eax
  __int64 v69; // rcx
  __int64 v70; // rsi
  _QWORD *v71; // rax

  v1 = StartContext[8];
  LODWORD(v2) = 0;
  v3 = *(_DWORD *)(v1 + 3888) == 7;
  *(_QWORD *)(v1 + 3864) = KeGetCurrentThread();
  if ( !v3 )
  {
    v4 = (void *)(v1 + 3840);
    while ( 1 )
    {
      v5 = KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
      v2 = v5;
      if ( !v5 )
        break;
      v23 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v23 + 24) = v2;
      WdLogEvent5_WdError(v23);
LABEL_13:
      v4 = (void *)(v1 + 3840);
      if ( *(_DWORD *)(v1 + 3888) == 7 )
        goto LABEL_123;
    }
    while ( 1 )
    {
      PowerActionQueueEntry = DpiGetPowerActionQueueEntry((KSPIN_LOCK *)v1);
      v8 = PowerActionQueueEntry;
      if ( !PowerActionQueueEntry )
        goto LABEL_13;
      Blink = (int)PowerActionQueueEntry[2].Blink;
      v10 = 0;
      v11 = (int)PowerActionQueueEntry[1].Blink;
      v12 = 0;
      LODWORD(v2) = 0;
      v13 = Blink != 64;
      if ( v11 != 1 )
        break;
      if ( ((*(_DWORD *)(v1 + 3888) - 1) & 0xFFFFFFFD) != 0 )
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3688), 1u);
        ExReleaseResourceLite((PERESOURCE)(v1 + 3688));
        KeLeaveCriticalRegion();
        v16 = (int)v8[2].Blink;
        v17 = *(_QWORD *)(v1 + 3792);
        if ( (v16 & 0x40) == 0 )
        {
          v18 = 6;
          if ( (v16 & 0x18) == 0 )
            v18 = 3;
          DxgkAcquireAdapterCoreSync(v17, v18);
LABEL_20:
          if ( *(_DWORD *)(v1 + 284) == 1 )
          {
            LOBYTE(v19) = 1;
            MonitorAdapterPowerChange(*(PERESOURCE **)(v1 + 3792), v19, (__int64)v8[5].Flink, v20);
            DmmAdapterPowerChange(*(void *const *)(v1 + 3792), 1u);
          }
          DmmResetModeState(*(PERESOURCE **)(v1 + 3792), -1);
          v21 = (int)v8[2].Blink;
          if ( (v21 & 0x20) != 0 )
          {
            v57 = *(_QWORD *)(v1 + 3792);
            if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v57) )
            {
              v59 = WdLogNewEntry5_WdAssertion(v58);
              *(_QWORD *)(v59 + 24) = 3572LL;
              WdLogEvent5_WdAssertion(v59);
            }
            v60 = *(_QWORD *)(v57 + 2528);
            if ( v60 )
              ADAPTER_RENDER::FlushScheduler(v60, 6, 0xFFFFFFFF, 0);
          }
          else
          {
            if ( (v21 & 0x10) != 0 )
            {
              v22 = 3;
              goto LABEL_25;
            }
            if ( (v21 & 8) != 0 )
            {
              v22 = 2;
              goto LABEL_25;
            }
            if ( (v21 & 0x40) != 0 )
            {
              v61 = (_QWORD *)WdLogNewEntry5_WdPower();
              v61[3] = v1;
              v61[4] = 1LL;
              v61[5] = 0LL;
              WdLogEvent5_WdPower(v61);
              if ( *(_BYTE *)(v1 + 5432) )
                DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3792), PowerDeviceD3, 1u);
              started = DpiStartSuspendingAdapter((KSPIN_LOCK *)v1);
              v63 = *(_QWORD *)(v1 + 3792);
              if ( started )
              {
                DXGADAPTER::ApplyCoreSyncAction(v63, 3);
                DpiFinishSuspendAdapter((struct _FDO_CONTEXT *)v1);
                if ( *(_DWORD *)(v1 + 3888) == 1 )
                {
                  if ( *(_BYTE *)(v1 + 5432) )
                    DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3792), PowerDeviceD3, 0);
                  goto LABEL_26;
                }
                v64 = (_QWORD *)WdLogNewEntry5_WdPower();
                v64[3] = v1;
                v64[4] = 0LL;
                v64[5] = 0LL;
                WdLogEvent5_WdPower(v64);
                v63 = *(_QWORD *)(v1 + 3792);
              }
              DxgkReleaseAdapterCoreSync(v63);
              DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
              if ( *(_BYTE *)(v1 + 5432) )
                DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3792), PowerDeviceD0, 0);
LABEL_27:
              v14 = v13;
              goto LABEL_11;
            }
            v22 = 1;
LABEL_25:
            DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 3792), v22);
          }
LABEL_26:
          *(_DWORD *)(v1 + 3888) = 1;
          goto LABEL_27;
        }
        DxgkAcquireAdapterCoreSync(v17, 4);
        if ( (unsigned __int8)DxgkIsAdapterCoreSyncAcquired(*(_QWORD *)(v1 + 3792), 2LL) )
        {
          v56 = (_QWORD *)WdLogNewEntry5_WdPower();
          v56[3] = v1;
          v56[4] = 0LL;
          v56[5] = 0LL;
          WdLogEvent5_WdPower(v56);
          goto LABEL_20;
        }
        v55 = (_QWORD *)WdLogNewEntry5_WdPower();
        v55[3] = v1;
        v55[4] = 0LL;
        v55[5] = 0LL;
        WdLogEvent5_WdPower(v55);
        DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
        LODWORD(v2) = -1073741823;
        goto LABEL_27;
      }
      v14 = Blink != 64;
      if ( *(_BYTE *)(v1 + 481) )
      {
        if ( *(_DWORD *)(v1 + 280) <= 1u )
        {
          v14 = Blink != 64;
          if ( !*(_BYTE *)(v1 + 482) )
          {
            DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 5, 0);
            goto LABEL_80;
          }
        }
      }
LABEL_11:
      if ( v14 )
      {
        LODWORD(v8[4].Blink) = v2;
        KeSetEvent((PRKEVENT)&v8[3], 0, 0);
      }
    }
    v14 = Blink != 64;
    if ( v11 == 2 )
    {
      if ( *(_DWORD *)(v1 + 3888) != 1 )
        goto LABEL_11;
      *(_DWORD *)(v1 + 3888) = 2;
      v15 = (int)v8[2].Blink;
      if ( *(_BYTE *)(v1 + 481) )
      {
        v53 = *(_DWORD *)(v1 + 280);
        if ( !v53 || (v14 = Blink != 64, v53 == 1) )
        {
          v14 = Blink != 64;
          if ( !*(_BYTE *)(v1 + 482) && v15 != 64 )
          {
            v54 = (_QWORD *)WdLogNewEntry5_WdPower();
            v54[3] = v1;
            v54[4] = 0LL;
            v54[5] = 0LL;
            WdLogEvent5_WdPower(v54);
            LODWORD(v8[4].Blink) = 0;
            v14 = 0;
            KeSetEvent((PRKEVENT)&v8[3], 0, 0);
            v8 = 0LL;
            if ( *(_BYTE *)(v1 + 5432) )
              DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3792), PowerDeviceD0, 0);
          }
        }
      }
      LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3792));
      if ( *(_BYTE *)(v1 + 481) && *(_DWORD *)(v1 + 280) <= 1u && !*(_BYTE *)(v1 + 482) )
      {
        if ( v15 == 64 )
        {
          DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
          if ( *(_BYTE *)(v1 + 5432) )
            DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3792), PowerDeviceD0, 0);
        }
        KeSetEvent((PRKEVENT)(v1 + 4000), 0, 0);
        DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel((KSPIN_LOCK *)v1);
      }
      goto LABEL_10;
    }
    if ( v11 <= 2 )
      goto LABEL_11;
    if ( v11 <= 4 )
    {
      if ( *(_DWORD *)(v1 + 3888) == 3 || (v50 = *(DXGADAPTER **)(v1 + 3792)) == 0LL )
      {
        *(_DWORD *)(v1 + 3888) = 3;
        goto LABEL_80;
      }
      if ( v11 == 4 )
      {
        KeClearEvent((PRKEVENT)(v1 + 4024));
        LODWORD(v8[4].Blink) = 0;
        v14 = 0;
        KeSetEvent((PRKEVENT)&v8[3], 0, 0);
        v50 = *(DXGADAPTER **)(v1 + 3792);
        v8 = 0LL;
      }
      else
      {
        v14 = v13;
      }
      if ( v50 )
      {
        DXGADAPTER::PrepareToRemove(v50);
        v50 = *(DXGADAPTER **)(v1 + 3792);
      }
      if ( *(_QWORD *)(v1 + 488) )
      {
        KeSetEvent((PRKEVENT)(v1 + 4000), 0, 0);
        PoFxUnregisterDevice(*(_QWORD *)(v1 + 488));
        *(_QWORD *)(*(_QWORD *)(v1 + 3792) + 2568LL) = 0LL;
        v50 = *(DXGADAPTER **)(v1 + 3792);
        *(_QWORD *)(v1 + 488) = 0LL;
      }
      if ( *(_DWORD *)(v1 + 3888) == 1 )
      {
        v51 = DxgkReleaseAdapterCoreSync((__int64)v50);
        v50 = *(DXGADAPTER **)(v1 + 3792);
        LODWORD(v2) = v51;
      }
      if ( v50 )
        DXGADAPTER::Stop(v50, *(_BYTE *)(v1 + 1160), *(_BYTE *)(v1 + 1161));
      Global = DXGGLOBAL::GetGlobal((__int64)v50);
      DXGGLOBAL::NotifyAdapterRemoval(Global);
      *(_DWORD *)(v1 + 3888) = 3;
      KeSetEvent((PRKEVENT)(v1 + 4024), 0, 0);
      goto LABEL_10;
    }
    if ( v11 != 5 )
    {
      if ( v11 == 6 )
      {
        v24 = *(_DWORD *)(v1 + 3892);
        if ( (v24 & 4) != 0 )
        {
          v25 = *(_QWORD *)(v1 + 2808);
          *(_DWORD *)(v1 + 3892) = v24 & 0xFFFFFFFB;
          v26 = (*(__int64 (__fastcall **)(__int64))(v1 + 2840))(v25);
          v28 = v26;
          if ( v26 < 0 )
          {
            v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27);
            v29[3] = 275LL;
            v29[4] = 21LL;
            v29[5] = *(_QWORD *)(v1 + 2840);
            v29[6] = v28;
            WdLogEvent5_WdCriticalError(v29);
          }
        }
        v30 = *(_DWORD *)(v1 + 3892);
        v31 = *(_QWORD *)(v1 + 3792);
        if ( (v30 & 1) != 0 )
        {
          *(_DWORD *)(v1 + 3892) = v30 & 0xFFFFFFFE;
          v32 = DxgkReleaseAdapterCoreSync(v31);
          v2 = v32;
          if ( v32 < 0 )
          {
            v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33);
            v34[3] = 275LL;
            v34[4] = 21LL;
            v34[5] = v2;
            WdLogEvent5_WdCriticalError(v34);
          }
        }
        else
        {
          LODWORD(v2) = DxgkResumeMemorySegments(v31);
          if ( (int)v2 < 0 )
          {
            v36 = WdLogNewEntry5_WdError(v35);
            *(_QWORD *)(v36 + 24) = (int)v2;
            WdLogEvent5_WdError(v36);
          }
          if ( (*(_DWORD *)(v1 + 3892) & 2) == 0 && (int)DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3792)) < 0 )
          {
            v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37);
            v38[3] = 275LL;
            v38[4] = 21LL;
            v38[5] = (int)v2;
            WdLogEvent5_WdCriticalError(v38);
          }
          *(_DWORD *)(v1 + 3892) &= ~2u;
        }
        *(_DWORD *)(v1 + 3888) = 6;
      }
      else
      {
        v14 = Blink != 64;
        if ( v11 != 7 )
          goto LABEL_11;
        if ( *(_DWORD *)(v1 + 3888) == 1 )
          LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3792));
        *(_DWORD *)(v1 + 3888) = 7;
      }
LABEL_80:
      v14 = v13;
LABEL_10:
      if ( (int)v2 < 0 )
      {
        if ( v12 == 1 )
        {
          v66 = DxgkResumeMemorySegments(*(_QWORD *)(v1 + 3792));
          if ( v66 < 0 )
          {
            v67 = WdLogNewEntry5_WdError(v65);
            *(_QWORD *)(v67 + 24) = (int)v2;
            WdLogEvent5_WdError(v67);
            LODWORD(v2) = v66;
          }
        }
        if ( v10 == 1 )
        {
          v68 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3792));
          v70 = v68;
          if ( v68 < 0 )
          {
            v71 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v69);
            v71[3] = 275LL;
            v71[4] = 21LL;
            v71[5] = v70;
            WdLogEvent5_WdCriticalError(v71);
          }
        }
      }
      goto LABEL_11;
    }
    if ( (Blink & 1) != 0 )
    {
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 3792), 3);
      DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 3792), 1);
    }
    else
    {
      if ( (Blink & 2) != 0 )
        goto LABEL_53;
      v45 = DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 3792), 2);
      v2 = v45;
      if ( v45 < 0 )
      {
        v47 = WdLogNewEntry5_WdError(v46);
        *(_QWORD *)(v47 + 24) = v2;
        goto LABEL_60;
      }
    }
    v10 = 1;
LABEL_53:
    v39 = (int)v8[2].Blink;
    if ( (v39 & 1) == 0 )
    {
      v40 = DxgkSuspendMemorySegments(*(_QWORD *)(v1 + 3792));
      v2 = v40;
      if ( v40 < 0 )
      {
        v44 = WdLogNewEntry5_WdWarning(v42, v41, v43);
        *(_QWORD *)(v44 + 24) = v2;
        WdLogEvent5_WdWarning(v44);
        goto LABEL_80;
      }
      v39 = (int)v8[2].Blink;
      v12 = 1;
    }
    if ( (v39 & 4) == 0
      || (v48 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 2832))(*(_QWORD *)(v1 + 2808)), v2 = v48, v48 >= 0) )
    {
      *(_DWORD *)(v1 + 3888) = 5;
      *(_DWORD *)(v1 + 3892) |= LODWORD(v8[2].Blink);
      goto LABEL_80;
    }
    v47 = WdLogNewEntry5_WdError(v49);
    *(_QWORD *)(v47 + 24) = *(_QWORD *)(v1 + 2832);
    *(_QWORD *)(v47 + 32) = v2;
LABEL_60:
    WdLogEvent5_WdError(v47);
    goto LABEL_80;
  }
LABEL_123:
  PsTerminateSystemThread(v2);
}
