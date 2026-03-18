/*
 * XREFs of DxgkQueryConnectionChanges @ 0x1C001E418
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C001E1F0 (DpiFdoHandleDisplayDetectControl.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C0157300 (DpiDxgkDdiDisplayDetectControl.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1C029C350 (DpiIndicateConnectorChangeWorkItem.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D8BC (DpiCheckForOutstandingD3Requests.c)
 *     DpiFdoHandleQueryConnectionChange @ 0x1C001E7A0 (DpiFdoHandleQueryConnectionChange.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     McTemplateK0pxqqqqq @ 0x1C0052924 (McTemplateK0pxqqqqq.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0127548 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0127A14 (DpiReleaseCoreSyncAccessSafe.c)
 *     DxgkEndDisplayCalloutBatch @ 0x1C01576B8 (DxgkEndDisplayCalloutBatch.c)
 *     ?DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1C0157764 (-DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C0157898 (DpiPdoHandleChildConnectionChange.c)
 *     ?DmmProcessHPDFiltering@@YA?AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1C01581B4 (-DmmProcessHPDFiltering@@YA-AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM.c)
 *     DxgkStartDisplayCalloutBatch @ 0x1C0158318 (DxgkStartDisplayCalloutBatch.c)
 *     DxgkInvalidateVidPnDisplayModeListCache @ 0x1C01F69B4 (DxgkInvalidateVidPnDisplayModeListCache.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C02A1480 (DpiFdoHandleTargetConnectionState.c)
 *     ?DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02BA568 (-DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     MonitorRebuildMonitorModeListCache @ 0x1C02C9AE8 (MonitorRebuildMonitorModeListCache.c)
 */

__int64 __fastcall DxgkQueryConnectionChanges(__int64 a1, __int64 a2, __int64 a3, char a4, char a5)
{
  __int64 v5; // rbx
  char v6; // r12
  char v8; // si
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdi
  int v13; // r14d
  int v14; // r8d
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // esi
  __int64 v22; // rcx
  __int64 v23; // r9
  bool v24; // cl
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  char v29; // si
  __int64 v30; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // r9
  _QWORD *v37; // rdi
  _DWORD *v38; // rax
  __int64 v39; // r8
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r14
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  int v48; // r8d
  __int64 v49; // rcx
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  int updated; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 v63; // rax
  int v64; // [rsp+20h] [rbp-E0h]
  int v65; // [rsp+20h] [rbp-E0h]
  int v66; // [rsp+28h] [rbp-D8h]
  int v67; // [rsp+30h] [rbp-D0h]
  int v68; // [rsp+38h] [rbp-C8h]
  char v69; // [rsp+50h] [rbp-B0h]
  char v70; // [rsp+51h] [rbp-AFh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v73[104]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v74[10]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v75[48]; // [rsp+140h] [rbp+40h] BYREF

  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0;
  v69 = a3;
  v8 = a2;
  v70 = 0;
  if ( !v5 || *(_DWORD *)(v5 + 16) != 1953656900 || *(_DWORD *)(v5 + 20) != 2 )
  {
    v63 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v63 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v63);
    return 3221225485LL;
  }
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v5 + 168)) )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v5 + 484) )
      DpiCheckForOutstandingD3Requests(v5);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 168), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)(v5 + 3304), 1u);
    v6 = 1;
    v70 = 1;
  }
  if ( (unsigned int)(*(_DWORD *)(v5 + 236) - 1) > 1 || *(_DWORD *)(v5 + 3992) == 1 || *(_DWORD *)(v5 + 284) != 1 )
  {
    KeSetEvent((PRKEVENT)(v5 + 3528), 0, 0);
    LODWORD(v12) = -1073741661;
    v62 = WdLogNewEntry5_WdWarning(v60, v59, v61);
    *(_QWORD *)(v62 + 24) = -1073741661LL;
    WdLogEvent5_WdWarning(v62);
    goto LABEL_34;
  }
  if ( (*(_BYTE *)(v5 + 3904) & 1) != 0 )
  {
    LOBYTE(v10) = 1;
    v11 = DpiAcquireCoreSyncAccessSafe(a1, v10);
    v12 = v11;
    if ( v11 < 0 )
    {
      KeSetEvent((PRKEVENT)(v5 + 3528), 0, 0);
      v35 = WdLogNewEntry5_WdError(v33, v32, v34);
      *(_QWORD *)(v35 + 24) = v12;
      WdLogEvent5_WdError(v35);
      goto LABEL_34;
    }
    DxgkStartDisplayCalloutBatch(*(_QWORD *)(v5 + 3896));
  }
  if ( v8 )
  {
    if ( (*(_BYTE *)(v5 + 3905) & 8) != 0 )
    {
      memset(v74, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v74[1]);
      v37 = *(_QWORD **)(v5 + 3464);
      v74[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v74[3]) = 60;
      LOBYTE(v74[6]) = -1;
      while ( v37 != (_QWORD *)(v5 + 3464) )
      {
        v38 = v37 - 4;
        v37 = (_QWORD *)*v37;
        if ( v38[4] == 1 )
        {
          v39 = *v38 == 1 ? (unsigned int)v38[1] : 4294967294LL;
          LOBYTE(v36) = 1;
          LOBYTE(v68) = 1;
          LOBYTE(v67) = a5;
          LOBYTE(v66) = v69;
          LOBYTE(v64) = a4;
          v40 = DpiPdoHandleChildConnectionChange(
                  *(_QWORD *)(v5 + 24),
                  (unsigned int)v38[6],
                  v39,
                  v36,
                  v64,
                  v66,
                  v67,
                  v68,
                  v74);
          v44 = v40;
          if ( v40 < 0 )
          {
            v45 = WdLogNewEntry5_WdError(v42, v41, v43);
            *(_QWORD *)(v45 + 24) = v44;
            WdLogEvent5_WdError(v45);
          }
        }
      }
    }
  }
  do
  {
    while ( 1 )
    {
      v13 = 0;
      memset(v75, 0, sizeof(v75));
      memset(v73, 0, sizeof(v73));
      EtwActivityIdControl(3u, (LPGUID)&v73[32]);
      *(_QWORD *)&v73[88] = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)&v73[48] = 60;
      v73[72] = -1;
      v73[101] = a5;
      v73[100] = v69;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 3520), &LockHandle);
      *(_DWORD *)(v5 + 3516) = 2;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v15 = *(_QWORD *)(v5 + 48);
      v16 = *(_QWORD *)(v5 + 40);
      if ( (*(_BYTE *)(v5 + 3905) & 8) != 0 )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0pxqqqqq(0, (unsigned int)&EventEnterDdiQueryConnectionChange, v14, v15, 0, 0, 0, -2, 0, 0);
        v46 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(v16 + 1136))(v15, v73);
        v49 = 0LL;
        v12 = v46;
        if ( bTracingEnabled )
        {
          if ( v46 < 0 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0pxqqqqq(0, (unsigned int)&EventEnterDdiQueryConnectionChange, v48, v15, 0, 0, 0, -2, 0, v46);
          }
          else
          {
            v47 = *(_DWORD *)&v73[8] & 0xFFFFFF;
            v49 = HIBYTE(*(_DWORD *)&v73[8]) & 0xF;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0pxqqqqq(
                HIBYTE(*(_DWORD *)&v73[8]) & 0xF,
                (unsigned int)&EventExitDdiQueryConnectionChange,
                v48,
                v15,
                v73[0],
                v73[8],
                v73[11] & 0xF,
                v73[12],
                v73[16],
                v46);
          }
        }
        v50 = (_QWORD *)WdLogNewEntry5_WdTrace(v49, v47);
        v50[3] = *(unsigned int *)v73;
        v50[4] = *(_DWORD *)&v73[8] & 0xFFFFFF;
        v50[5] = (*(_QWORD *)&v73[8] >> 24) & 0xFLL;
        v18 = *(unsigned int *)&v73[16];
        v50[6] = *(unsigned int *)&v73[16];
        v50[7] = v12;
      }
      else
      {
        LODWORD(v12) = DpiFdoHandleQueryConnectionChange(v5, v73);
      }
      if ( (int)v12 < 0 )
        break;
      if ( (_DWORD)v12 == 255 )
        goto LABEL_27;
      if ( v73[102] )
      {
        DxgkInvalidateVidPnDisplayModeListCache(*(_QWORD *)(v5 + 3896));
        MonitorRebuildMonitorModeListCache(*(struct DXGADAPTER **)(v5 + 3896));
      }
      else
      {
        v21 = *(_DWORD *)&v73[8] & 0xFFFFFF | (*(_DWORD *)&v73[96] << 24);
        v22 = HIBYTE(*(_DWORD *)&v73[8]) & 0xF;
        if ( (unsigned int)v22 < 4 )
        {
LABEL_65:
          v52 = WdLogNewEntry5_WdError(v22, v17, v19);
          *(_QWORD *)(v52 + 24) = (*(_QWORD *)&v73[8] >> 24) & 0xFLL;
          *(_QWORD *)(v52 + 32) = (int)v12;
          WdLogEvent5_WdError(v52);
          LODWORD(v12) = -1073741811;
LABEL_26:
          if ( (int)v12 < 0 )
            goto LABEL_27;
        }
        else
        {
          if ( (unsigned int)v22 <= 6 )
          {
            updated = DpiFdoHandleTargetConnectionState(v5, v73);
          }
          else
          {
            if ( (_DWORD)v22 == 10 || (_DWORD)v22 == 8 )
            {
              LOBYTE(v20) = (*(_BYTE *)(v5 + 3905) & 0x10) != 0;
              v13 = DmmProcessHPDFiltering(*(_QWORD *)(v5 + 3896), v73, v75, v20, &v73[32]);
              if ( v13 != 1 )
              {
                v24 = v73[100] || v13 == 3;
                LOBYTE(v23) = (*(_DWORD *)&v73[8] & 0xF000000) == 167772160;
                LOBYTE(v68) = v73[103];
                LOBYTE(v67) = v73[101];
                LOBYTE(v66) = v24;
                LOBYTE(v65) = 0;
                v25 = DpiPdoHandleChildConnectionChange(
                        *(_QWORD *)(v5 + 24),
                        v21,
                        *(unsigned int *)&v73[12],
                        v23,
                        v65,
                        v66,
                        v67,
                        v68,
                        &v73[24]);
                v12 = v25;
                if ( v25 < 0 )
                {
                  v53 = WdLogNewEntry5_WdError(v27, v26, v28);
                  *(_QWORD *)(v53 + 24) = v12;
                  WdLogEvent5_WdError(v53);
                }
              }
              DmmUpdateHPDFilteringTelemetry(
                *(void **)(v5 + 3896),
                (struct _DMM_HPD_FILTER_INFO *)v75,
                (struct _GUID *)&v73[32],
                v21,
                (_DWORD)v12 == 0x40000000);
              if ( (v13 & 0xFFFFFFFD) == 0 || v13 == 3 && (_DWORD)v12 != 0x40000000 )
                goto LABEL_26;
            }
            else if ( (unsigned int)v22 <= 0xB || (HIBYTE(*(_DWORD *)&v73[8]) & 0xF) == 0xF )
            {
              goto LABEL_65;
            }
            updated = DmmUpdateTargetLinkTrainingState(
                        *(void **)(v5 + 3896),
                        (struct _DXGK_CONNECTION_CHANGE *)v73,
                        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v73[24],
                        v13 != 0);
          }
          v12 = updated;
          if ( updated < 0 )
          {
            v58 = WdLogNewEntry5_WdError(v56, v55, v57);
            *(_QWORD *)(v58 + 24) = v12;
            WdLogEvent5_WdError(v58);
            goto LABEL_26;
          }
        }
      }
    }
    v51 = WdLogNewEntry5_WdError(v18, v17, v19);
    *(_QWORD *)(v51 + 24) = (int)v12;
    WdLogEvent5_WdError(v51);
LABEL_27:
    v29 = 1;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 3520), &LockHandle);
    if ( (*(_DWORD *)(v5 + 3516) & 1) == 0 )
    {
      *(_DWORD *)(v5 + 3516) = 0;
      v29 = 0;
      KeSetEvent((PRKEVENT)(v5 + 3528), 0, 0);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  while ( v29 );
  v6 = v70;
  if ( (*(_BYTE *)(v5 + 3904) & 1) != 0 )
  {
    DxgkEndDisplayCalloutBatch(*(_QWORD *)(v5 + 3896));
    LOBYTE(v30) = 1;
    DpiReleaseCoreSyncAccessSafe(a1, v30);
  }
  if ( (int)v12 < 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v5 + 3644), 0xFFFFFFFE);
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v5 + 152), BusRelations);
  }
LABEL_34:
  if ( v6 )
  {
    ExReleaseResourceLite((PERESOURCE)(v5 + 3304));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v5 + 484) )
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 64LL) + 4096LL));
    ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v12;
}
