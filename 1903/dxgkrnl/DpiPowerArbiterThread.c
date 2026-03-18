/*
 * XREFs of DpiPowerArbiterThread @ 0x1C017D7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z @ 0x1C001DF74 (-DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C004AE54 (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C004AF24 (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C004B1CC (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z @ 0x1C004B2F0 (-DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C0127678 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C0127A7C (DxgkReleaseAdapterCoreSync.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C0155B5C (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C01569D4 (-DmmResetModeState@@YAJQEAXK@Z.c)
 *     MonitorAdapterPowerChange @ 0x1C0156C34 (MonitorAdapterPowerChange.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C01EDD9C (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01EEFE8 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C01F69D4 (DxgkIsAdapterCoreSyncAcquired.c)
 *     DxgkResumeMemorySegments @ 0x1C01F6D54 (DxgkResumeMemorySegments.c)
 *     DxgkSuspendMemorySegments @ 0x1C01F6DC8 (DxgkSuspendMemorySegments.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C0244224 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     DxgkNotifySharedPowerGraphicsPowerTransition @ 0x1C02467E0 (DxgkNotifySharedPowerGraphicsPowerTransition.c)
 *     ?DmmAdapterPowerChange@@YAJQEAXE@Z @ 0x1C02B2310 (-DmmAdapterPowerChange@@YAJQEAXE@Z.c)
 */

void __fastcall DpiPowerArbiterThread(_QWORD *StartContext)
{
  __int64 v1; // rdi
  __int64 v2; // rbp
  bool v3; // zf
  void *v4; // rax
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _LIST_ENTRY *PowerActionQueueEntry; // rax
  const GUID *v10; // r8
  struct _LIST_ENTRY *v11; // r15
  int Blink; // ecx
  char v13; // r12
  int v14; // eax
  char v15; // r13
  bool v16; // si
  __int64 v17; // rdx
  bool v18; // bl
  PERESOURCE *v19; // rcx
  int v20; // r14d
  const GUID *v21; // r8
  const GUID *v22; // r8
  int v23; // eax
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // eax
  int v29; // edx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbx
  _QWORD *v37; // rax
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  _QWORD *v49; // rax
  int v50; // eax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  DXGADAPTER *v62; // rcx
  unsigned int v63; // edx
  int v64; // eax
  DXGGLOBAL *Global; // rax
  int v66; // eax
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  char started; // al
  const GUID *v72; // r8
  __int64 v73; // rcx
  _QWORD *v74; // rax
  unsigned int v75; // edx
  __int64 v76; // rdx
  __int64 v77; // rcx
  int v78; // esi
  __int64 v79; // rax
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rsi
  _QWORD *v84; // rax

  v1 = StartContext[8];
  LODWORD(v2) = 0;
  v3 = *(_DWORD *)(v1 + 3992) == 7;
  *(_QWORD *)(v1 + 3968) = KeGetCurrentThread();
  if ( !v3 )
  {
    v4 = (void *)(v1 + 3944);
    while ( 1 )
    {
      v5 = KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
      v2 = v5;
      if ( !v5 )
        break;
      v30 = WdLogNewEntry5_WdError(v7, v6, v8);
      *(_QWORD *)(v30 + 24) = v2;
      WdLogEvent5_WdError(v30);
LABEL_13:
      v4 = (void *)(v1 + 3944);
      if ( *(_DWORD *)(v1 + 3992) == 7 )
        goto LABEL_128;
    }
    while ( 1 )
    {
      PowerActionQueueEntry = DpiGetPowerActionQueueEntry((KSPIN_LOCK *)v1);
      v11 = PowerActionQueueEntry;
      if ( !PowerActionQueueEntry )
        goto LABEL_13;
      Blink = (int)PowerActionQueueEntry[2].Blink;
      v13 = 0;
      v14 = (int)PowerActionQueueEntry[1].Blink;
      v15 = 0;
      LODWORD(v2) = 0;
      v16 = Blink != 64;
      if ( v14 != 1 )
        break;
      if ( ((*(_DWORD *)(v1 + 3992) - 1) & 0xFFFFFFFD) != 0 )
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3792), 1u);
        ExReleaseResourceLite((PERESOURCE)(v1 + 3792));
        KeLeaveCriticalRegion();
        v23 = (int)v11[2].Blink;
        v24 = *(_QWORD *)(v1 + 3896);
        if ( (v23 & 0x40) != 0 )
        {
          DxgkAcquireAdapterCoreSync(v24, 4, v22);
          if ( (unsigned __int8)DxgkIsAdapterCoreSyncAcquired(*(_QWORD *)(v1 + 3896), 2LL) )
          {
            v69 = (_QWORD *)WdLogNewEntry5_WdPower();
            v69[3] = v1;
            v69[4] = 0LL;
            v69[5] = 0LL;
            WdLogEvent5_WdPower(v69);
            goto LABEL_20;
          }
          v68 = (_QWORD *)WdLogNewEntry5_WdPower();
          v68[3] = v1;
          v68[4] = 0LL;
          v68[5] = 0LL;
          WdLogEvent5_WdPower(v68);
          DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
          LODWORD(v2) = -1073741823;
        }
        else
        {
          v25 = 6;
          if ( (v23 & 0x98) == 0 )
            v25 = 3;
          DxgkAcquireAdapterCoreSync(v24, v25, v22);
LABEL_20:
          if ( *(_DWORD *)(v1 + 284) == 1 )
          {
            LOBYTE(v26) = 1;
            MonitorAdapterPowerChange(*(PERESOURCE **)(v1 + 3896), v26, (__int64)v11[5].Flink);
            DmmAdapterPowerChange(*(void *const *)(v1 + 3896), 1u);
          }
          DmmResetModeState(*(PERESOURCE **)(v1 + 3896), 0xFFFFFFFFLL, v27);
          v28 = (int)v11[2].Blink;
          if ( (v28 & 0x20) != 0 )
          {
            v29 = 4;
            goto LABEL_25;
          }
          if ( (v28 & 0x10) != 0 )
          {
            v29 = 3;
            goto LABEL_25;
          }
          if ( (v28 & 8) != 0 )
          {
            v29 = 2;
            goto LABEL_25;
          }
          if ( (v28 & 0x80u) != 0 )
          {
            v29 = 5;
            goto LABEL_25;
          }
          if ( (v28 & 0x40) != 0 )
          {
            v70 = (_QWORD *)WdLogNewEntry5_WdPower();
            v70[3] = v1;
            v70[4] = 1LL;
            v70[5] = 0LL;
            WdLogEvent5_WdPower(v70);
            if ( *(_BYTE *)(v1 + 5560) )
              DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3896), PowerDeviceD3, 1u);
            started = DpiStartSuspendingAdapter((KSPIN_LOCK *)v1);
            v73 = *(_QWORD *)(v1 + 3896);
            if ( started )
            {
              DXGADAPTER::ApplyCoreSyncAction(v73, 3);
              DpiFinishSuspendAdapter((struct _FDO_CONTEXT *)v1);
              if ( *(_DWORD *)(v1 + 3992) == 1 )
              {
                if ( *(_BYTE *)(v1 + 5560) )
                  DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3896), PowerDeviceD3, 0);
                goto LABEL_26;
              }
              v74 = (_QWORD *)WdLogNewEntry5_WdPower();
              v74[3] = v1;
              v74[4] = 0LL;
              v74[5] = 0LL;
              WdLogEvent5_WdPower(v74);
              v73 = *(_QWORD *)(v1 + 3896);
              v75 = 5;
            }
            else
            {
              v75 = 2;
            }
            DxgkReleaseAdapterCoreSync(v73, v75, v72);
            DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
            if ( *(_BYTE *)(v1 + 5560) )
              DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3896), PowerDeviceD0, 0);
          }
          else
          {
            v29 = 1;
LABEL_25:
            DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 3896), v29);
LABEL_26:
            *(_DWORD *)(v1 + 3992) = 1;
          }
        }
        v18 = v16;
        goto LABEL_11;
      }
      v18 = Blink != 64;
      if ( *(_BYTE *)(v1 + 482) )
      {
        if ( *(_DWORD *)(v1 + 280) <= 1u )
        {
          v18 = Blink != 64;
          if ( !*(_BYTE *)(v1 + 483) )
          {
            DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 5, 0);
            goto LABEL_86;
          }
        }
      }
LABEL_11:
      if ( v18 )
      {
        LODWORD(v11[4].Blink) = v2;
        KeSetEvent((PRKEVENT)&v11[3], 0, 0);
      }
    }
    v17 = 2LL;
    v18 = Blink != 64;
    if ( v14 == 2 )
    {
      if ( *(_DWORD *)(v1 + 3992) != 1 )
        goto LABEL_11;
      v19 = *(PERESOURCE **)(v1 + 3896);
      *(_DWORD *)(v1 + 3992) = 2;
      v20 = (int)v11[2].Blink;
      MonitorAdapterPowerChange(v19, 0LL, (__int64)v11[5].Flink);
      if ( *(_BYTE *)(v1 + 482) )
      {
        v66 = *(_DWORD *)(v1 + 280);
        if ( !v66 || (v18 = v16, v66 == 1) )
        {
          v18 = v16;
          if ( !*(_BYTE *)(v1 + 483) && v20 != 64 )
          {
            v67 = (_QWORD *)WdLogNewEntry5_WdPower();
            v67[3] = v1;
            v67[4] = 0LL;
            v67[5] = 0LL;
            WdLogEvent5_WdPower(v67);
            LODWORD(v11[4].Blink) = 0;
            v18 = 0;
            KeSetEvent((PRKEVENT)&v11[3], 0, 0);
            v11 = 0LL;
            if ( *(_BYTE *)(v1 + 5560) )
              DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3896), PowerDeviceD0, 0);
          }
        }
      }
      LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3896), 5u, v21);
      if ( *(_BYTE *)(v1 + 482) && *(_DWORD *)(v1 + 280) <= 1u && !*(_BYTE *)(v1 + 483) )
      {
        if ( v20 == 64 )
        {
          DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
          if ( *(_BYTE *)(v1 + 5560) )
            DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3896), PowerDeviceD0, 0);
        }
        KeSetEvent((PRKEVENT)(v1 + 4104), 0, 0);
        DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel((KSPIN_LOCK *)v1);
      }
      goto LABEL_10;
    }
    if ( v14 <= 2 )
      goto LABEL_11;
    if ( v14 <= 4 )
    {
      if ( *(_DWORD *)(v1 + 3992) == 3 || (v62 = *(DXGADAPTER **)(v1 + 3896)) == 0LL )
      {
        *(_DWORD *)(v1 + 3992) = 3;
        goto LABEL_86;
      }
      if ( v14 == 4 )
      {
        KeClearEvent((PRKEVENT)(v1 + 4128));
        LODWORD(v11[4].Blink) = 0;
        v18 = 0;
        KeSetEvent((PRKEVENT)&v11[3], 0, 0);
        v62 = *(DXGADAPTER **)(v1 + 3896);
        v11 = 0LL;
      }
      else
      {
        v18 = v16;
      }
      if ( v62 )
      {
        DXGADAPTER::PrepareToRemove(v62);
        v62 = *(DXGADAPTER **)(v1 + 3896);
      }
      if ( *(_QWORD *)(v1 + 488) )
      {
        KeSetEvent((PRKEVENT)(v1 + 4104), 0, 0);
        PoFxUnregisterDevice(*(_QWORD *)(v1 + 488));
        *(_QWORD *)(*(_QWORD *)(v1 + 3896) + 2600LL) = 0LL;
        v62 = *(DXGADAPTER **)(v1 + 3896);
        *(_QWORD *)(v1 + 488) = 0LL;
      }
      if ( *(_DWORD *)(v1 + 3992) == 1 )
      {
        v63 = 5;
        if ( (*(_BYTE *)(v1 + 3904) & 0x18) == 0 && *(_BYTE *)(v1 + 1161) )
          v63 = 2;
        v64 = DxgkReleaseAdapterCoreSync((__int64)v62, v63, v10);
        v62 = *(DXGADAPTER **)(v1 + 3896);
        LODWORD(v2) = v64;
      }
      LOBYTE(v17) = *(_BYTE *)(v1 + 1161);
      if ( v62 && *((_DWORD *)v62 + 44) != 2 && *((_DWORD *)v62 + 44) != 4 )
        DXGADAPTER::Stop(v62, v17, *(_BYTE *)(v1 + 1162));
      Global = DXGGLOBAL::GetGlobal((__int64)v62, v17);
      DXGGLOBAL::NotifyAdapterRemoval(Global);
      *(_DWORD *)(v1 + 3992) = 3;
      KeSetEvent((PRKEVENT)(v1 + 4128), 0, 0);
      goto LABEL_10;
    }
    if ( v14 != 5 )
    {
      if ( v14 == 6 )
      {
        v31 = *(_DWORD *)(v1 + 3996);
        if ( (v31 & 4) != 0 )
        {
          v32 = *(_QWORD *)(v1 + 2880);
          *(_DWORD *)(v1 + 3996) = v31 & 0xFFFFFFFB;
          v33 = (*(__int64 (__fastcall **)(__int64))(v1 + 2912))(v32);
          v36 = v33;
          if ( v33 < 0 )
          {
            v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v34);
            v37[3] = 275LL;
            v37[4] = 21LL;
            v37[5] = *(_QWORD *)(v1 + 2912);
            v37[6] = v36;
            WdLogEvent5_WdCriticalError(v37);
          }
        }
        v38 = *(_DWORD *)(v1 + 3996);
        v39 = *(_QWORD *)(v1 + 3896);
        if ( (v38 & 1) != 0 )
        {
          *(_DWORD *)(v1 + 3996) = v38 & 0xFFFFFFFE;
          v40 = DxgkReleaseAdapterCoreSync(v39, 5u, v10);
          v2 = v40;
          if ( v40 < 0 )
          {
            v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v42, v41);
            v43[3] = 275LL;
            v43[4] = 21LL;
            v43[5] = v2;
            WdLogEvent5_WdCriticalError(v43);
          }
        }
        else
        {
          LODWORD(v2) = DxgkResumeMemorySegments(v39);
          if ( (int)v2 < 0 )
          {
            v46 = WdLogNewEntry5_WdError(v45, v44, v10);
            *(_QWORD *)(v46 + 24) = (int)v2;
            WdLogEvent5_WdError(v46);
          }
          if ( (*(_DWORD *)(v1 + 3996) & 2) == 0 && (int)DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3896), 2u, v10) < 0 )
          {
            v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v48, v47);
            v49[3] = 275LL;
            v49[4] = 21LL;
            v49[5] = (int)v2;
            WdLogEvent5_WdCriticalError(v49);
          }
          *(_DWORD *)(v1 + 3996) &= ~2u;
        }
        *(_DWORD *)(v1 + 3992) = 6;
      }
      else
      {
        v18 = Blink != 64;
        if ( v14 != 7 )
          goto LABEL_11;
        if ( *(_DWORD *)(v1 + 3992) == 1 )
          LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3896), 5u, v10);
        *(_DWORD *)(v1 + 3992) = 7;
      }
LABEL_86:
      v18 = v16;
LABEL_10:
      if ( (int)v2 < 0 )
      {
        if ( v15 == 1 )
        {
          v78 = DxgkResumeMemorySegments(*(_QWORD *)(v1 + 3896));
          if ( v78 < 0 )
          {
            v79 = WdLogNewEntry5_WdError(v77, v76, v10);
            *(_QWORD *)(v79 + 24) = (int)v2;
            WdLogEvent5_WdError(v79);
            LODWORD(v2) = v78;
          }
        }
        if ( v13 == 1 )
        {
          v80 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3896), 5u, v10);
          v83 = v80;
          if ( v80 < 0 )
          {
            v84 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v82, v81);
            v84[3] = 275LL;
            v84[4] = 21LL;
            v84[5] = v83;
            WdLogEvent5_WdCriticalError(v84);
          }
        }
      }
      goto LABEL_11;
    }
    if ( (Blink & 1) != 0 )
    {
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 3896), 3, v10);
      DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 3896), 1);
    }
    else
    {
      if ( (Blink & 2) != 0 )
        goto LABEL_54;
      v55 = DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 3896), 2, v10);
      v2 = v55;
      if ( v55 < 0 )
      {
        v58 = WdLogNewEntry5_WdError(v57, v56, v10);
        *(_QWORD *)(v58 + 24) = v2;
        goto LABEL_61;
      }
    }
    v13 = 1;
LABEL_54:
    v50 = (int)v11[2].Blink;
    if ( (v50 & 1) == 0 )
    {
      v51 = DxgkSuspendMemorySegments(*(_QWORD *)(v1 + 3896));
      v2 = v51;
      if ( v51 < 0 )
      {
        v54 = WdLogNewEntry5_WdWarning(v53, v52, v10);
        *(_QWORD *)(v54 + 24) = v2;
        WdLogEvent5_WdWarning(v54);
        goto LABEL_86;
      }
      v50 = (int)v11[2].Blink;
      v15 = 1;
    }
    if ( (v50 & 4) == 0
      || (v59 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 2904))(*(_QWORD *)(v1 + 2880)), v2 = v59, v59 >= 0) )
    {
      *(_DWORD *)(v1 + 3992) = 5;
      *(_DWORD *)(v1 + 3996) |= LODWORD(v11[2].Blink);
      goto LABEL_86;
    }
    v58 = WdLogNewEntry5_WdError(v61, v60, v10);
    *(_QWORD *)(v58 + 24) = *(_QWORD *)(v1 + 2904);
    *(_QWORD *)(v58 + 32) = v2;
LABEL_61:
    WdLogEvent5_WdError(v58);
    goto LABEL_86;
  }
LABEL_128:
  PsTerminateSystemThread(v2);
}
