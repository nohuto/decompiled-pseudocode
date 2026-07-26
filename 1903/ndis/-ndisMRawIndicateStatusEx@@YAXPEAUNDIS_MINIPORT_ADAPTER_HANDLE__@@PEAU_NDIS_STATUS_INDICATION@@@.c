/*
 * XREFs of ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430
 * Callers:
 *     ?ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001CB00 (-ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIP.c)
 *     ?ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00C7750 (-ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C01172C4 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C0014CA4 (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ?ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0016C0C (-ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017A6C (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisDereferenceRef @ 0x1C0018014 (ndisDereferenceRef.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0018498 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisReferenceRefEx @ 0x1C001B320 (ndisReferenceRefEx.c)
 *     NdisMSleep @ 0x1C001BEC0 (NdisMSleep.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001C33C (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisFIndicateOffloadChange @ 0x1C0021A00 (ndisFIndicateOffloadChange.c)
 *     ?ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C0021C60 (-ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ndisMIndicateOffloadChange @ 0x1C0021CFC (ndisMIndicateOffloadChange.c)
 *     ?ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C0022090 (-ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0029408 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003B48C (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMUpdateHiddenFlag @ 0x1C003F3D0 (ndisMUpdateHiddenFlag.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     ndisUpdateRcvFilterQueueParameters @ 0x1C0061458 (ndisUpdateRcvFilterQueueParameters.c)
 *     ndisFilterIndicatePMCapabilities @ 0x1C0072EC8 (ndisFilterIndicatePMCapabilities.c)
 *     ndisFilterIndicatePMOffloadReject @ 0x1C0072F5C (ndisFilterIndicatePMOffloadReject.c)
 *     ndisFilterIndicateWoLPatternReject @ 0x1C0072FB0 (ndisFilterIndicateWoLPatternReject.c)
 *     ndisMIndicatePMCapabilities @ 0x1C0073188 (ndisMIndicatePMCapabilities.c)
 *     ndisMIndicatePMHardwareCapabilities @ 0x1C007323C (ndisMIndicatePMHardwareCapabilities.c)
 *     ndisMIndicatePMOffloadReject @ 0x1C0073340 (ndisMIndicatePMOffloadReject.c)
 *     ndisMIndicateWoLPatternReject @ 0x1C0073430 (ndisMIndicateWoLPatternReject.c)
 *     ndisMValidatePMWakeReason @ 0x1C0073900 (ndisMValidatePMWakeReason.c)
 *     ndisFIndicateTimestampChange @ 0x1C008E880 (ndisFIndicateTimestampChange.c)
 *     ?ndisMIndicateHDSplitChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z @ 0x1C0097104 (-ndisMIndicateHDSplitChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z.c)
 *     ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x1C00971C8 (-ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z.c)
 *     ?ndisValidateMacAddressChange@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0097C10 (-ndisValidateMacAddressChange@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisMIndicateQosParametersChange @ 0x1C009A8E4 (ndisMIndicateQosParametersChange.c)
 *     ndisMIndicateTcpConnectionOffloadChange @ 0x1C00AB524 (ndisMIndicateTcpConnectionOffloadChange.c)
 *     ndisMIndicatePDConfigChange @ 0x1C00C1DE8 (ndisMIndicatePDConfigChange.c)
 *     ndisIfUpdateInterfaceHiddenFlag @ 0x1C0109958 (ndisIfUpdateInterfaceHiddenFlag.c)
 */

void __fastcall ndisMRawIndicateStatusEx(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  unsigned int StatusBufferSize; // esi
  unsigned int StatusCode; // edi
  __int64 *StatusBuffer; // r15
  struct _NDIS_STATUS_INDICATION *v6; // r14
  unsigned __int8 updated; // r12
  _UNKNOWN **v8; // rdx
  const struct _GUID *v9; // r8
  bool v10; // zf
  KSPIN_LOCK *v11; // r13
  int v12; // eax
  bool v13; // al
  KIRQL v14; // dl
  KIRQL v15; // r13
  __int64 v16; // rsi
  int v17; // eax
  KIRQL v18; // dl
  int v19; // edx
  int v20; // eax
  unsigned int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // r9d
  int v26; // r9d
  unsigned __int8 v27; // al
  KIRQL v28; // dl
  unsigned __int8 v29; // al
  KIRQL v30; // dl
  unsigned __int8 v31; // al
  KIRQL v32; // dl
  char v33; // si
  __int64 v34; // rdx
  size_t v35; // r8
  KIRQL v36; // dl
  char v37; // di
  __int64 v38; // rdx
  unsigned __int8 v39; // al
  KIRQL v40; // dl
  int v41; // r9d
  NTSTATUS (__stdcall *SourceHandle)(_DRIVER_OBJECT *, PUNICODE_STRING); // rcx
  unsigned __int8 v43; // al
  unsigned int v44; // edi
  _OWORD *v45; // rax
  int v46; // eax
  int v47; // edx
  bool v48; // cl
  int v49; // eax
  int v50; // eax
  char v51; // di
  KIRQL NewIrql[4]; // [rsp+40h] [rbp-29h] BYREF
  int v53; // [rsp+44h] [rbp-25h]
  unsigned int v54; // [rsp+48h] [rbp-21h]
  BOOL v55; // [rsp+4Ch] [rbp-1Dh]
  unsigned int i; // [rsp+50h] [rbp-19h]
  struct _NDIS_STATUS_INDICATION *v57; // [rsp+58h] [rbp-11h]
  __int64 v58; // [rsp+60h] [rbp-9h] BYREF
  int v59; // [rsp+68h] [rbp-1h]
  int v60; // [rsp+6Ch] [rbp+3h]
  __int64 v61; // [rsp+70h] [rbp+7h]
  __int64 v62; // [rsp+78h] [rbp+Fh]
  int v63; // [rsp+80h] [rbp+17h]
  int v64; // [rsp+84h] [rbp+1Bh]

  StatusBufferSize = a2->StatusBufferSize;
  StatusCode = a2->StatusCode;
  StatusBuffer = (__int64 *)a2->StatusBuffer;
  v6 = a2;
  v57 = a2;
  v54 = StatusBufferSize;
  updated = 1;
  LOBYTE(v55) = 0;
  LOBYTE(v53) = 0;
  HIDWORD(v58) = 0;
  v60 = 0;
  v8 = &WPP_RECORDER_INITIALIZED;
  v9 = &WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v8,
      24,
      187,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1,
      StatusCode);
    v8 = &WPP_RECORDER_INITIALIZED;
    v9 = &WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids;
  }
  v10 = v6->Header.Type == 0x98;
  v59 = *((_DWORD *)a1 + 87);
  v61 = *((_QWORD *)a1 + 345);
  v62 = *((_QWORD *)a1 + 346);
  v63 = *((_DWORD *)a1 + 203);
  v64 = *((_DWORD *)a1 + 204);
  v58 = 2621824LL;
  v60 = 0;
  if ( !v10 || v6->Header.Size < 0x70u )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return;
    v25 = 188;
    goto LABEL_200;
  }
  if ( StatusCode == 1073807384 )
  {
    if ( StatusBufferSize >= 4 )
      goto LABEL_9;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return;
    v25 = 189;
LABEL_200:
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v8,
      24,
      v25,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1);
    return;
  }
  if ( StatusCode - 1073872902 <= 1 )
  {
    updated = ndisMIndicateOffloadChange(a1, StatusCode, StatusBuffer, StatusBufferSize);
    if ( !updated )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = 190;
LABEL_89:
        LOBYTE(v8) = 4;
LABEL_91:
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v8,
          24,
          v26,
          (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids);
        return;
      }
      return;
    }
  }
  if ( StatusCode != 1073872908 )
  {
    if ( ((StatusCode - 1073872912) & 0xFFFFFFEF) == 0 )
    {
      v11 = (KSPIN_LOCK *)(a1 + 24);
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      v27 = ndisMIndicateReceiveFilterCapsChange(
              (struct _NDIS_MINIPORT_BLOCK *)a1,
              StatusCode,
              StatusBuffer,
              StatusBufferSize,
              0);
      v28 = NewIrql[0];
      *((_QWORD *)a1 + 65) = 0LL;
      updated = v27;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v28);
      if ( !updated )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v26 = 192;
          goto LABEL_89;
        }
        return;
      }
LABEL_10:
      if ( StatusCode - 1074073600 <= 1 )
      {
        NewIrql[0] = KeAcquireSpinLockRaiseToDpc(v11);
        *((_QWORD *)a1 + 65) = KeGetCurrentThread();
        v29 = ndisMIndicateHwTimestampCapabilitiesChange(
                (struct _NDIS_MINIPORT_BLOCK *)a1,
                StatusCode,
                StatusBuffer,
                StatusBufferSize,
                0,
                0LL);
        v30 = NewIrql[0];
        *((_QWORD *)a1 + 65) = 0LL;
        updated = v29;
        KeReleaseSpinLock(v11, v30);
        if ( !updated )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v26 = 193;
            goto LABEL_89;
          }
          return;
        }
      }
      if ( ((StatusCode - 1073872960) & 0xFFFFFFEF) == 0 )
      {
        NewIrql[0] = KeAcquireSpinLockRaiseToDpc(v11);
        *((_QWORD *)a1 + 65) = KeGetCurrentThread();
        v31 = ndisMIndicateNicSwitchCapsChange(
                (struct _NDIS_MINIPORT_BLOCK *)a1,
                StatusCode,
                StatusBuffer,
                StatusBufferSize,
                0);
        v32 = NewIrql[0];
        *((_QWORD *)a1 + 65) = 0LL;
        updated = v31;
        KeReleaseSpinLock(v11, v32);
        if ( !updated )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v26 = 194;
            goto LABEL_89;
          }
          return;
        }
      }
      switch ( StatusCode )
      {
        case 0x40020200u:
          updated = ndisMIndicatePDConfigChange((char)a1);
          if ( !updated )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v26 = 195;
              goto LABEL_89;
            }
            return;
          }
          break;
        case 0x40241000u:
          NewIrql[0] = KeAcquireSpinLockRaiseToDpc(v11);
          *((_QWORD *)a1 + 65) = KeGetCurrentThread();
          if ( ndisIsRssEnabledForMiniport((struct _NDIS_MINIPORT_BLOCK *)a1) )
          {
            v34 = *((_QWORD *)a1 + 69);
            v35 = StatusBufferSize;
            if ( StatusBufferSize >= *(unsigned __int16 *)(v34 + 12) )
              v35 = *(unsigned __int16 *)(v34 + 12);
            memmove((void *)(v34 + *(unsigned int *)(v34 + 16)), StatusBuffer, v35);
            v33 = 1;
          }
          else
          {
            v33 = 0;
          }
          v36 = NewIrql[0];
          *((_QWORD *)a1 + 65) = 0LL;
          updated = 0;
          KeReleaseSpinLock(v11, v36);
          if ( !v33 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return;
            v26 = 196;
            goto LABEL_90;
          }
          break;
        case 0x40020063u:
          v37 = *(_BYTE *)StatusBuffer != 0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v8) = 4;
            WPP_RECORDER_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v8,
              24,
              197,
              (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
              v37);
          }
          LOBYTE(v8) = v37;
          ndisMUpdateHiddenFlag(a1, v8, v9);
          LOBYTE(v38) = v37;
          ndisIfUpdateInterfaceHiddenFlag(*((_QWORD *)a1 + 505), v38);
          return;
        default:
          if ( StatusCode - 1073873056 <= 1 )
          {
            NewIrql[0] = KeAcquireSpinLockRaiseToDpc(v11);
            *((_QWORD *)a1 + 65) = KeGetCurrentThread();
            v39 = ndisMIndicateQosParametersChange((char)a1, StatusCode, (char)StatusBuffer, StatusBufferSize);
            v40 = NewIrql[0];
            *((_QWORD *)a1 + 65) = 0LL;
            updated = v39;
            KeReleaseSpinLock(v11, v40);
            if ( !updated )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return;
              v26 = 198;
              goto LABEL_90;
            }
          }
          if ( StatusCode == 1073872944 )
          {
            updated = 0;
            if ( StatusBufferSize >= 0x444
              && *(_BYTE *)StatusBuffer == 0x80
              && *((_WORD *)StatusBuffer + 1) >= 0x444u
              && *((_BYTE *)StatusBuffer + 1) >= 2u
              && (*((_DWORD *)StatusBuffer + 1) & 0xFFFF0000) == 0x100000 )
            {
              updated = ndisUpdateRcvFilterQueueParameters(a1, StatusBuffer, v9);
            }
            if ( !updated )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return;
              v26 = 199;
              goto LABEL_90;
            }
          }
          else
          {
            if ( ((StatusCode - 1073872899) & 0xFFFFFFF7) == 0 )
            {
              updated = ndisMIndicateTcpConnectionOffloadChange(a1, StatusCode, StatusBuffer, StatusBufferSize);
              if ( !updated )
              {
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  return;
                v26 = 200;
LABEL_90:
                LOBYTE(v8) = 3;
                goto LABEL_91;
              }
            }
            if ( StatusCode == 1073938515 )
              ndisMIndicatePMCapabilities(a1, v6, v9);
            if ( StatusCode == 1073938516 )
              ndisMIndicatePMHardwareCapabilities((char)a1);
            if ( StatusCode == 1073938513 )
              ndisMIndicateWoLPatternReject(a1, v6, v9);
            if ( StatusCode == 1073938514 )
              ndisMIndicatePMOffloadReject(a1, v6, v9);
            if ( StatusCode == 1073938517 )
            {
              updated = ndisMValidatePMWakeReason((char)a1);
              if ( !updated )
              {
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  return;
                v41 = 201;
                goto LABEL_137;
              }
            }
            else
            {
              if ( StatusCode - 1073873072 <= 1 )
              {
                SourceHandle = (NTSTATUS (__stdcall *)(_DRIVER_OBJECT *, PUNICODE_STRING))v6->SourceHandle;
                if ( SourceHandle != DriverEntry )
                {
                  if ( StatusCode == 1073873072 )
                  {
                    if ( !ndisValidateMacAddressChange((struct _NDIS_MINIPORT_BLOCK *)a1, v6) )
                    {
                      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        return;
                      v41 = 202;
                      goto LABEL_137;
                    }
                  }
                  else if ( StatusCode == 1073873073 )
                  {
                    if ( (v43 = *((_BYTE *)a1 + 32), v43 <= 6u) && (v43 != 6 || *((_BYTE *)a1 + 33) < 0x32u)
                      || v6->Header.Type != 0x98
                      || !v6->Header.Revision
                      || v6->Header.Size < 0x70u
                      || v6->DestinationHandle
                      || (char *)SourceHandle != (char *)a1
                      || v6->PortNumber
                      || v6->StatusBufferSize != 4 )
                    {
                      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        return;
                      v41 = 203;
LABEL_137:
                      LOBYTE(v8) = 3;
                      WPP_RECORDER_SF_q(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        (int)v8,
                        24,
                        v41,
                        (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                        (char)a1);
                      return;
                    }
                  }
                  NewIrql[0] = KeAcquireSpinLockRaiseToDpc(v11);
                  v10 = *((_BYTE *)a1 + 5312) == 0;
                  *((_QWORD *)a1 + 65) = KeGetCurrentThread();
                  if ( v10 )
                  {
                    if ( !(unsigned __int8)ndisReferenceMiniport((__int64)a1) )
                    {
LABEL_163:
                      *((_QWORD *)a1 + 65) = 0LL;
                      KeReleaseSpinLock(v11, NewIrql[0]);
                      return;
                    }
                    ExQueueWorkItem((PWORK_QUEUE_ITEM)a1 + 165, (WORK_QUEUE_TYPE)40);
                    *((_BYTE *)a1 + 5312) = 1;
                  }
                  v44 = StatusCode - 1073873072;
                  if ( v44 )
                  {
                    if ( v44 == 1 )
                    {
                      a1[1338] = *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)v6->StatusBuffer;
                      *((_BYTE *)a1 + 5314) = 1;
                    }
                  }
                  else
                  {
                    v45 = v6->StatusBuffer;
                    *(_OWORD *)(a1 + 1329) = *v45;
                    *(_OWORD *)(a1 + 1333) = v45[1];
                    *((_WORD *)a1 + 2674) = *((_WORD *)v45 + 16);
                    *((_BYTE *)a1 + 5313) = 1;
                  }
                  goto LABEL_163;
                }
              }
              v12 = HIDWORD(v58);
              if ( StatusCode == 1073807372 )
                v12 = 2;
              HIDWORD(v58) = v12;
            }
          }
          break;
      }
      v13 = StatusCode == 1073807372;
      if ( StatusCode == 1073807371 )
      {
        HIDWORD(v58) = 1;
        v13 = 1;
      }
      if ( v13 )
      {
        v6->StatusCode = 1073807383;
        v6->StatusBuffer = &v58;
        StatusBuffer = &v58;
        StatusCode = 1073807383;
        v6->StatusBufferSize = 40;
        v54 = 40;
      }
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc(v11);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      if ( StatusCode == 1073807383 )
      {
        *((_BYTE *)a1 + 88) |= 0x18u;
        v20 = *((_DWORD *)StatusBuffer + 1);
        if ( v20 == 1 )
        {
          v20 = 1;
          if ( *((_DWORD *)a1 + 86) != 1 )
          {
            *((_QWORD *)a1 + 199) = MEMORY[0xFFFFF78000000320];
            v20 = *((_DWORD *)StatusBuffer + 1);
          }
        }
        *((_DWORD *)a1 + 86) = v20;
        a1[87] = (struct NDIS_MINIPORT_ADAPTER_HANDLE__)StatusBuffer[1];
        *((_QWORD *)a1 + 345) = StatusBuffer[2];
        *((_QWORD *)a1 + 346) = StatusBuffer[3];
        a1[203] = (struct NDIS_MINIPORT_ADAPTER_HANDLE__)StatusBuffer[4];
        a1[204] = *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)((int)StatusBuffer + 36);
      }
      if ( StatusCode == 1073938437 )
        *((_QWORD *)a1 + 199) = MEMORY[0xFFFFF78000000320];
      v14 = NewIrql[0];
      *((_QWORD *)a1 + 65) = 0LL;
      KeReleaseSpinLock(v11, v14);
      v15 = KeAcquireSpinLockRaiseToDpc(v11);
      v16 = *((_QWORD *)a1 + 255);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      while ( v16 && !(unsigned __int8)ndisReferenceRefEx((PKSPIN_LOCK)(v16 + 312)) )
        v16 = *(_QWORD *)(v16 + 120);
      *((_QWORD *)a1 + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v15);
      if ( v16 )
      {
        NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 144));
        v17 = *(_DWORD *)(v16 + 56);
        if ( (v17 & 0x2000) != 0 )
        {
          do
          {
            *(_QWORD *)(v16 + 152) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 144), NewIrql[0]);
            if ( KeGetCurrentIrql() == 2 )
            {
              for ( i = 0; i < 0x32; ++i )
                ;
            }
            else
            {
              NdisMSleep(0x32u);
            }
            NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 144));
            *(_QWORD *)(v16 + 152) = KeGetCurrentThread();
            v17 = *(_DWORD *)(v16 + 56);
          }
          while ( (v17 & 0x2000) != 0 );
          v6 = v57;
        }
        *(_QWORD *)(v16 + 152) = 0LL;
        *(_DWORD *)(v16 + 56) = v17 | 0x2000;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v16 + 144));
        if ( v6->SourceHandle == &ndisIntReqGeneric )
        {
          if ( StatusCode != 1073807383 )
            goto LABEL_45;
          *(_DWORD *)((struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)StatusBuffer + 1) = a1[86];
        }
        if ( StatusCode == 1073807383 )
        {
          v21 = v54;
          if ( v54 == -2 )
          {
            v21 = 40;
            v54 = 40;
            v6->StatusBufferSize = 40;
          }
          if ( !StatusBuffer || v21 < 0x28 )
            goto LABEL_55;
          v22 = *(_DWORD *)(v16 + 344);
          v23 = *((_DWORD *)StatusBuffer + 1);
          if ( v22 != v23 )
          {
            if ( v22 == 1 )
            {
              LOBYTE(v55) = 1;
            }
            else
            {
              v24 = (unsigned __int8)v53;
              if ( v23 == 1 )
                v24 = 1;
              v53 = v24;
            }
          }
          *(_DWORD *)(v16 + 344) = v23;
          *(_DWORD *)(v16 + 348) = *((_DWORD *)StatusBuffer + 2);
          *(_QWORD *)(v16 + 360) = StatusBuffer[3];
          *(_QWORD *)(v16 + 352) = StatusBuffer[2];
          *(_DWORD *)(v16 + 368) = *((_DWORD *)StatusBuffer + 8);
          *(_DWORD *)(v16 + 372) = *((_DWORD *)StatusBuffer + 9);
        }
LABEL_45:
        if ( StatusCode == 1073938515 )
          ndisFilterIndicatePMCapabilities(v16, v6);
        if ( StatusCode == 1073938513 )
          updated = ndisFilterIndicateWoLPatternReject(v16, v6);
        if ( StatusCode == 1073938514 )
          updated = ndisFilterIndicatePMOffloadReject(v16, v6);
        if ( StatusCode == 1073872902 )
          updated = ndisFIndicateOffloadChange(v16, StatusBuffer, v54);
        if ( StatusCode - 1074073600 <= 1 )
          updated = ndisFIndicateTimestampChange(v16, StatusCode, StatusBuffer, v54);
LABEL_55:
        if ( updated )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v16 + 16) + 288LL) )
            ndisFInvokeStatus((struct _NDIS_FILTER_BLOCK *)v16, v6);
          else
            ndisFIndicateStatusInternal((struct _NDIS_FILTER_BLOCK *)v16, v6);
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 12);
          *((_QWORD *)a1 + 65) = KeGetCurrentThread();
          if ( v55 )
            ndisSwapFilterHandlersForMediaDisconnect(
              (struct _NDIS_MINIPORT_BLOCK *)a1,
              0LL,
              (struct _NDIS_FILTER_BLOCK *)v16);
          if ( (_BYTE)v53 )
            ndisRestoreFilterHandlersForMediaDisconnect((char)a1, 0, (struct _NDIS_FILTER_BLOCK *)v16);
          *((_QWORD *)a1 + 65) = 0LL;
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)a1 + 12);
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v16 + 144));
        v18 = NewIrql[0];
        *(_DWORD *)(v16 + 56) &= ~0x2000u;
        *(_QWORD *)(v16 + 152) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 144), v18);
        ndisDereferenceRef((PKSPIN_LOCK)(v16 + 312));
LABEL_64:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v19) = 4;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v19,
            24,
            204,
            (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
            (char)a1,
            v6->StatusCode);
        }
        return;
      }
      ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)a1, NewIrql);
      if ( v6->SourceHandle == &ndisIntReqGeneric )
      {
        if ( StatusCode != 1073807383 )
          goto LABEL_189;
        *(_DWORD *)((struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)StatusBuffer + 1) = a1[86];
      }
      if ( StatusCode == 1073807383 && StatusBuffer && v54 >= 0x28 )
      {
        if ( *((_DWORD *)StatusBuffer + 1) == 1
          || (v46 = *((_DWORD *)a1 + 30),
              *((_DWORD *)a1 + 30) = v46 & 0xDFFFFFFF,
              v47 = *((_DWORD *)StatusBuffer + 1),
              v55 = (v46 & 0x20000000) != 0,
              v47 == 1) )
        {
          v49 = *((_DWORD *)a1 + 30);
          *((_DWORD *)a1 + 30) = v49 | 0x20000000;
          v47 = *((_DWORD *)StatusBuffer + 1);
          v48 = (v49 & 0x20000000) == 0;
          v53 = v48;
        }
        else
        {
          v48 = v53;
        }
        v50 = *((_DWORD *)a1 + 120);
        if ( v50 != v47 )
        {
          if ( v50 != 1 )
          {
            v51 = v48;
            if ( v47 == 1 )
              v51 = 1;
            goto LABEL_190;
          }
          LOBYTE(v55) = 1;
        }
      }
LABEL_189:
      v51 = v53;
LABEL_190:
      v6->Flags |= 2u;
      ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)a1, (__int128 *)v6);
      if ( v55 )
        ndisSwapFilterHandlersForMediaDisconnect((struct _NDIS_MINIPORT_BLOCK *)a1, 0LL, 0LL);
      if ( v51 )
        ndisRestoreFilterHandlersForMediaDisconnect((char)a1, 0, 0LL);
      ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)a1, NewIrql[0]);
      goto LABEL_64;
    }
LABEL_9:
    v11 = (KSPIN_LOCK *)(a1 + 24);
    goto LABEL_10;
  }
  updated = ndisMIndicateHDSplitChange((struct _NDIS_MINIPORT_BLOCK *)a1, StatusBuffer, StatusBufferSize);
  if ( updated )
    goto LABEL_9;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = 191;
    goto LABEL_89;
  }
}
