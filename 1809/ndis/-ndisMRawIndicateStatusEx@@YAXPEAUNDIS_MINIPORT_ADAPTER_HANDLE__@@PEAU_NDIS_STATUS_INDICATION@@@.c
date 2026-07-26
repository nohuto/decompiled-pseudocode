/*
 * XREFs of ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00176B8
 * Callers:
 *     ?ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0025A80 (-ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIP.c)
 *     ?ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0082190 (-ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00EF0D0 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C0011174 (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ndisFIndicateOffloadChange @ 0x1C0013F18 (ndisFIndicateOffloadChange.c)
 *     ndisMIndicateOffloadChange @ 0x1C001423C (ndisMIndicateOffloadChange.c)
 *     ndisMIndicateReceiveFilterCapsChange @ 0x1C0014368 (ndisMIndicateReceiveFilterCapsChange.c)
 *     ndisMIndicateNicSwitchCapsChange @ 0x1C0014404 (ndisMIndicateNicSwitchCapsChange.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001651C (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisFIndicateStatusInternal @ 0x1C001817C (ndisFIndicateStatusInternal.c)
 *     ndisGetHigherFilterWithPnpRef @ 0x1C00186F0 (ndisGetHigherFilterWithPnpRef.c)
 *     ndisFInvokeStatus @ 0x1C00187A8 (ndisFInvokeStatus.c)
 *     ndisDereferenceRef @ 0x1C0018814 (ndisDereferenceRef.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001889C (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C0018E1C (ndisIndicateStatusInternal.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0019B2C (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisMUpdateHiddenFlag @ 0x1C001E3B0 (ndisMUpdateHiddenFlag.c)
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001F2A4 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisUpdateRcvFilterQueueParameters @ 0x1C003D0F0 (ndisUpdateRcvFilterQueueParameters.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     ndisFilterIndicatePMCapabilities @ 0x1C004A1D4 (ndisFilterIndicatePMCapabilities.c)
 *     ndisFilterIndicatePMOffloadReject @ 0x1C004A27C (ndisFilterIndicatePMOffloadReject.c)
 *     ndisFilterIndicateWoLPatternReject @ 0x1C004A2D0 (ndisFilterIndicateWoLPatternReject.c)
 *     ndisMIndicatePMCapabilities @ 0x1C004A3CC (ndisMIndicatePMCapabilities.c)
 *     ndisMIndicatePMHardwareCapabilities @ 0x1C004A498 (ndisMIndicatePMHardwareCapabilities.c)
 *     ndisMIndicatePMOffloadReject @ 0x1C004A5AC (ndisMIndicatePMOffloadReject.c)
 *     ndisMIndicateWoLPatternReject @ 0x1C004A6A4 (ndisMIndicateWoLPatternReject.c)
 *     ndisMValidatePMWakeReason @ 0x1C004AB04 (ndisMValidatePMWakeReason.c)
 *     ndisFIndicateTimestampChange @ 0x1C005B648 (ndisFIndicateTimestampChange.c)
 *     ?ndisValidateMacAddressChange@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00604BC (-ndisValidateMacAddressChange@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisMIndicateHDSplitChange @ 0x1C006299C (ndisMIndicateHDSplitChange.c)
 *     ndisMIndicateHwTimestampCapabilitiesChange @ 0x1C0062A74 (ndisMIndicateHwTimestampCapabilitiesChange.c)
 *     ndisMIndicateQosParametersChange @ 0x1C0062CD0 (ndisMIndicateQosParametersChange.c)
 *     ndisMIndicateTcpConnectionOffloadChange @ 0x1C006BAEC (ndisMIndicateTcpConnectionOffloadChange.c)
 *     ndisMIndicatePDConfigChange @ 0x1C007CD04 (ndisMIndicatePDConfigChange.c)
 *     ndisIfUpdateInterfaceHiddenFlag @ 0x1C00BD6EC (ndisIfUpdateInterfaceHiddenFlag.c)
 *     NdisMSleep @ 0x1C00CF740 (NdisMSleep.c)
 */

void __fastcall ndisMRawIndicateStatusEx(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  unsigned int StatusCode; // edi
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *StatusBuffer; // r15
  char updated; // r12
  unsigned int StatusBufferSize; // r13d
  struct _NDIS_STATUS_INDICATION *v6; // r14
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *v7; // rbx
  __int64 v8; // rdx
  bool v9; // zf
  KSPIN_LOCK *v10; // rsi
  int v11; // eax
  bool v12; // al
  KIRQL v13; // dl
  __int64 v14; // r8
  __int64 HigherFilterWithPnpRef; // rax
  __int64 v16; // rsi
  KIRQL v17; // al
  int v18; // eax
  KIRQL v19; // dl
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rcx
  char v26; // al
  KIRQL v27; // dl
  char v28; // al
  KIRQL v29; // dl
  char v30; // al
  KIRQL v31; // dl
  char v32; // si
  __int64 v33; // rdx
  size_t v34; // r8
  KIRQL v35; // dl
  bool v36; // di
  __int64 v37; // rdx
  char v38; // al
  KIRQL v39; // dl
  NTSTATUS (__stdcall *SourceHandle)(_DRIVER_OBJECT *, PUNICODE_STRING); // rcx
  unsigned __int8 v41; // al
  _OWORD *v42; // rax
  KIRQL v43; // dl
  unsigned int v44; // edi
  int v45; // eax
  int v46; // edx
  bool v47; // cl
  int v48; // eax
  int v49; // eax
  char v50; // di
  int v51; // [rsp+20h] [rbp-60h]
  KIRQL NewIrql[4]; // [rsp+30h] [rbp-50h] BYREF
  int v53; // [rsp+34h] [rbp-4Ch]
  BOOL v54; // [rsp+38h] [rbp-48h]
  unsigned int i; // [rsp+3Ch] [rbp-44h]
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *v56; // [rsp+40h] [rbp-40h]
  struct _NDIS_STATUS_INDICATION *v57; // [rsp+48h] [rbp-38h]
  _QWORD v58[5]; // [rsp+50h] [rbp-30h] BYREF

  StatusCode = a2->StatusCode;
  StatusBuffer = (struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)a2->StatusBuffer;
  updated = 1;
  StatusBufferSize = a2->StatusBufferSize;
  v6 = a2;
  v57 = a2;
  v7 = a1;
  v56 = a1;
  LOBYTE(v54) = 0;
  LOBYTE(v53) = 0;
  if ( (unsigned __int8)byte_1C00A0267 >= 4u )
    WPP_SF_qD(189LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, StatusCode);
  memset(v58, 0, sizeof(v58));
  v9 = v6->Header.Type == 0x98;
  LODWORD(v58[1]) = v7[87];
  v58[2] = *((_QWORD *)v7 + 347);
  v58[3] = *((_QWORD *)v7 + 348);
  v58[4] = *(_QWORD *)(v7 + 203);
  LODWORD(v58[0]) = 2621824;
  if ( !v9 || v6->Header.Size < 0x70u )
  {
    if ( (unsigned __int8)byte_1C00A0267 < 4u )
      return;
    v24 = 190LL;
    goto LABEL_193;
  }
  if ( StatusCode == 1073807384 )
  {
    if ( StatusBufferSize < 4 )
    {
      if ( (unsigned __int8)byte_1C00A0267 < 4u )
        return;
      v24 = 191LL;
      goto LABEL_193;
    }
    goto LABEL_9;
  }
  if ( StatusCode - 1073872902 <= 1 )
  {
    updated = ndisMIndicateOffloadChange((__int64)v7, StatusCode, StatusBuffer, StatusBufferSize);
    if ( !updated )
    {
      if ( (unsigned __int8)byte_1C00A0267 >= 4u )
      {
        v25 = 192LL;
LABEL_85:
        WPP_SF_(v25, &WPP_f453a6740ca1326a168191528118e90e_Traceguids);
        return;
      }
      return;
    }
  }
  if ( StatusCode != 1073872908 )
  {
    if ( ((StatusCode - 1073872912) & 0xFFFFFFEF) == 0 )
    {
      v10 = (KSPIN_LOCK *)(v7 + 24);
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7 + 12);
      *((_QWORD *)v7 + 65) = KeGetCurrentThread();
      *((_DWORD *)v7 + 466) = 733583;
      v26 = ndisMIndicateReceiveFilterCapsChange((__int64)v7, StatusCode, StatusBuffer, StatusBufferSize, 0);
      v27 = NewIrql[0];
      *((_QWORD *)v7 + 65) = 0LL;
      updated = v26;
      *((_DWORD *)v7 + 466) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)v7 + 12, v27);
      if ( !updated )
      {
        if ( (unsigned __int8)byte_1C00A0267 >= 4u )
        {
          v25 = 194LL;
          goto LABEL_85;
        }
        return;
      }
LABEL_10:
      if ( StatusCode - 1074073600 <= 1 )
      {
        NewIrql[0] = KeAcquireSpinLockRaiseToDpc(v10);
        *((_QWORD *)v7 + 65) = KeGetCurrentThread();
        *((_DWORD *)v7 + 466) = 733602;
        LOBYTE(v51) = 0;
        v28 = ndisMIndicateHwTimestampCapabilitiesChange(v7, StatusCode, StatusBuffer, StatusBufferSize, v51, 0LL);
        v29 = NewIrql[0];
        *((_QWORD *)v7 + 65) = 0LL;
        updated = v28;
        *((_DWORD *)v7 + 466) = 0;
        KeReleaseSpinLock(v10, v29);
        if ( !updated )
        {
          if ( (unsigned __int8)byte_1C00A0267 >= 4u )
          {
            v25 = 195LL;
            goto LABEL_85;
          }
          return;
        }
      }
      if ( ((StatusCode - 1073872960) & 0xFFFFFFEF) == 0 )
      {
        NewIrql[0] = KeAcquireSpinLockRaiseToDpc(v10);
        *((_QWORD *)v7 + 65) = KeGetCurrentThread();
        *((_DWORD *)v7 + 466) = 733622;
        v30 = ndisMIndicateNicSwitchCapsChange(v7, StatusCode, StatusBuffer, StatusBufferSize, 0);
        v31 = NewIrql[0];
        *((_QWORD *)v7 + 65) = 0LL;
        updated = v30;
        *((_DWORD *)v7 + 466) = 0;
        KeReleaseSpinLock(v10, v31);
        if ( !updated )
        {
          if ( (unsigned __int8)byte_1C00A0267 >= 4u )
          {
            v25 = 196LL;
            goto LABEL_85;
          }
          return;
        }
      }
      switch ( StatusCode )
      {
        case 0x40020200u:
          updated = ndisMIndicatePDConfigChange((struct _NDIS_MINIPORT_BLOCK *)v7);
          if ( !updated )
          {
            if ( (unsigned __int8)byte_1C00A0267 >= 4u )
            {
              v25 = 197LL;
              goto LABEL_85;
            }
            return;
          }
          break;
        case 0x40241000u:
          NewIrql[0] = KeAcquireSpinLockRaiseToDpc(v10);
          *((_QWORD *)v7 + 65) = KeGetCurrentThread();
          *((_DWORD *)v7 + 466) = 733656;
          if ( ndisIsRssEnabledForMiniport((struct _NDIS_MINIPORT_BLOCK *)v7) )
          {
            v33 = *((_QWORD *)v7 + 69);
            v34 = StatusBufferSize;
            if ( StatusBufferSize >= *(unsigned __int16 *)(v33 + 12) )
              v34 = *(unsigned __int16 *)(v33 + 12);
            memmove((void *)(v33 + *(unsigned int *)(v33 + 16)), StatusBuffer, v34);
            v32 = 1;
          }
          else
          {
            v32 = 0;
          }
          v35 = NewIrql[0];
          *((_QWORD *)v7 + 65) = 0LL;
          updated = 0;
          *((_DWORD *)v7 + 466) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)v7 + 12, v35);
          if ( !v32 )
          {
            if ( (unsigned __int8)byte_1C00A0267 >= 3u )
            {
              v25 = 198LL;
              goto LABEL_85;
            }
            return;
          }
          break;
        case 0x40020063u:
          v36 = *(_BYTE *)StatusBuffer != 0;
          if ( (unsigned __int8)byte_1C00A0267 >= 4u )
            WPP_SF_D(199LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v36);
          LOBYTE(v8) = v36;
          ndisMUpdateHiddenFlag(v7, v8);
          LOBYTE(v37) = v36;
          ndisIfUpdateInterfaceHiddenFlag(*((_QWORD *)v7 + 509), v37);
          return;
        default:
          if ( StatusCode - 1073873056 <= 1 )
          {
            NewIrql[0] = KeAcquireSpinLockRaiseToDpc(v10);
            *((_QWORD *)v7 + 65) = KeGetCurrentThread();
            *((_DWORD *)v7 + 466) = 733691;
            v38 = ndisMIndicateQosParametersChange((struct _NDIS_MINIPORT_BLOCK *)v7);
            v39 = NewIrql[0];
            *((_QWORD *)v7 + 65) = 0LL;
            updated = v38;
            *((_DWORD *)v7 + 466) = 0;
            KeReleaseSpinLock(v10, v39);
            if ( !updated )
            {
              if ( (unsigned __int8)byte_1C00A0267 >= 3u )
              {
                v25 = 200LL;
                goto LABEL_85;
              }
              return;
            }
          }
          if ( StatusCode == 1073872944 )
          {
            updated = 0;
            if ( StatusBufferSize >= 0x444
              && *(_BYTE *)StatusBuffer == 0x80
              && *((_WORD *)StatusBuffer + 1) >= 0x444u
              && *((_BYTE *)StatusBuffer + 1) >= 2u
              && ((_DWORD)StatusBuffer[1] & 0xFFFF0000) == 0x100000 )
            {
              updated = ndisUpdateRcvFilterQueueParameters(v7, StatusBuffer);
            }
            if ( !updated )
            {
              if ( (unsigned __int8)byte_1C00A0267 >= 3u )
              {
                v25 = 201LL;
                goto LABEL_85;
              }
              return;
            }
          }
          else
          {
            if ( ((StatusCode - 1073872899) & 0xFFFFFFF7) == 0 )
            {
              updated = ndisMIndicateTcpConnectionOffloadChange(v7, StatusCode, StatusBuffer, StatusBufferSize);
              if ( !updated )
              {
                if ( (unsigned __int8)byte_1C00A0267 >= 3u )
                {
                  v25 = 202LL;
                  goto LABEL_85;
                }
                return;
              }
            }
            if ( StatusCode == 1073938515 )
              ndisMIndicatePMCapabilities(v7, v6);
            if ( StatusCode == 1073938516 )
              ndisMIndicatePMHardwareCapabilities(v7, v6);
            if ( StatusCode == 1073938513 )
              ndisMIndicateWoLPatternReject(v7, v6);
            if ( StatusCode == 1073938514 )
              ndisMIndicatePMOffloadReject(v7, v6);
            if ( StatusCode == 1073938517 )
            {
              updated = ndisMValidatePMWakeReason(v7, v6);
              if ( !updated )
              {
                if ( (unsigned __int8)byte_1C00A0267 < 3u )
                  return;
                v24 = 203LL;
                goto LABEL_193;
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
                    if ( !ndisValidateMacAddressChange((struct _NDIS_MINIPORT_BLOCK *)v7, v6) )
                    {
                      if ( (unsigned __int8)byte_1C00A0267 < 3u )
                        return;
                      v24 = 204LL;
                      goto LABEL_193;
                    }
LABEL_149:
                    NewIrql[0] = KeAcquireSpinLockRaiseToDpc(v10);
                    *((_QWORD *)v7 + 65) = KeGetCurrentThread();
                    *((_DWORD *)v7 + 466) = 733795;
                    if ( !*((_BYTE *)v7 + 5352) )
                    {
                      if ( !ndisReferenceMiniport((__int64)v7) )
                      {
LABEL_153:
                        v43 = NewIrql[0];
                        *((_QWORD *)v7 + 65) = 0LL;
                        *((_DWORD *)v7 + 466) = 0;
                        KeReleaseSpinLock(v10, v43);
                        return;
                      }
                      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v7 + 1330), (WORK_QUEUE_TYPE)40);
                      *((_BYTE *)v7 + 5352) = 1;
                    }
                    v44 = StatusCode - 1073873072;
                    if ( v44 )
                    {
                      if ( v44 == 1 )
                      {
                        v7[1348] = *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)v6->StatusBuffer;
                        *((_BYTE *)v7 + 5354) = 1;
                      }
                    }
                    else
                    {
                      v42 = v6->StatusBuffer;
                      *(_OWORD *)(v7 + 1339) = *v42;
                      *(_OWORD *)(v7 + 1343) = v42[1];
                      *((_WORD *)v7 + 2694) = *((_WORD *)v42 + 16);
                      *((_BYTE *)v7 + 5353) = 1;
                    }
                    goto LABEL_153;
                  }
                  if ( StatusCode != 1073873073 )
                    goto LABEL_149;
                  v41 = *((_BYTE *)v7 + 32);
                  if ( (v41 > 6u || v41 == 6 && *((_BYTE *)v7 + 33) >= 0x32u)
                    && v6->Header.Type == 0x98
                    && v6->Header.Revision
                    && v6->Header.Size >= 0x70u
                    && !v6->DestinationHandle
                    && (char *)SourceHandle == (char *)v7
                    && !v6->PortNumber
                    && v6->StatusBufferSize == 4 )
                  {
                    goto LABEL_149;
                  }
                  if ( (unsigned __int8)byte_1C00A0267 < 3u )
                    return;
                  v24 = 205LL;
LABEL_193:
                  WPP_SF_q(v24, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v7);
                  return;
                }
              }
              v11 = HIDWORD(v58[0]);
              if ( StatusCode == 1073807372 )
                v11 = 2;
              HIDWORD(v58[0]) = v11;
            }
          }
          break;
      }
      v12 = StatusCode == 1073807372;
      if ( StatusCode == 1073807371 )
      {
        HIDWORD(v58[0]) = 1;
        v12 = 1;
      }
      if ( v12 )
      {
        v6->StatusCode = 1073807383;
        v6->StatusBuffer = v58;
        StatusBuffer = (struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)v58;
        StatusCode = 1073807383;
        v6->StatusBufferSize = 40;
        StatusBufferSize = 40;
      }
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7 + 12);
      *((_QWORD *)v7 + 65) = KeGetCurrentThread();
      *((_DWORD *)v7 + 466) = 733860;
      if ( StatusCode == 1073807383 )
      {
        *((_BYTE *)v7 + 88) |= 0x18u;
        v20 = *((_DWORD *)StatusBuffer + 1);
        if ( v20 == 1 )
        {
          v20 = 1;
          if ( *((_DWORD *)v7 + 86) != 1 )
          {
            *((_QWORD *)v7 + 199) = MEMORY[0xFFFFF78000000320];
            v20 = *((_DWORD *)StatusBuffer + 1);
          }
        }
        *((_DWORD *)v7 + 86) = v20;
        v7[87] = StatusBuffer[2];
        *((_QWORD *)v7 + 347) = *((_QWORD *)StatusBuffer + 2);
        *((_QWORD *)v7 + 348) = *((_QWORD *)StatusBuffer + 3);
        v7[203] = StatusBuffer[8];
        v7[204] = StatusBuffer[9];
      }
      if ( StatusCode == 1073938437 )
        *((_QWORD *)v7 + 199) = MEMORY[0xFFFFF78000000320];
      v13 = NewIrql[0];
      *((_QWORD *)v7 + 65) = 0LL;
      *((_DWORD *)v7 + 466) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)v7 + 12, v13);
      LOBYTE(v14) = 9;
      HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef(v7, 0LL, v14);
      v16 = HigherFilterWithPnpRef;
      if ( HigherFilterWithPnpRef )
      {
        v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(HigherFilterWithPnpRef + 144));
        *(_QWORD *)(v16 + 152) = KeGetCurrentThread();
        NewIrql[0] = v17;
        v18 = *(_DWORD *)(v16 + 56);
        *(_DWORD *)(v16 + 160) = 733898;
        if ( (v18 & 0x2000) != 0 )
        {
          do
          {
            *(_QWORD *)(v16 + 152) = 0LL;
            *(_DWORD *)(v16 + 160) = 0;
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
            *(_DWORD *)(v16 + 160) = 733898;
            v18 = *(_DWORD *)(v16 + 56);
          }
          while ( (v18 & 0x2000) != 0 );
          v7 = v56;
          v6 = v57;
        }
        *(_QWORD *)(v16 + 152) = 0LL;
        *(_DWORD *)(v16 + 160) = 0;
        *(_DWORD *)(v16 + 56) = v18 | 0x2000;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v16 + 144));
        if ( v6->SourceHandle == &ndisIntReqGeneric )
        {
          if ( StatusCode != 1073807383 )
            goto LABEL_42;
          StatusBuffer[1] = v7[86];
        }
        if ( StatusCode == 1073807383 )
        {
          if ( StatusBufferSize == -2 )
          {
            StatusBufferSize = 40;
            v6->StatusBufferSize = 40;
          }
          if ( !StatusBuffer || StatusBufferSize < 0x28 )
            goto LABEL_52;
          v21 = *(_DWORD *)(v16 + 352);
          v22 = *((_DWORD *)StatusBuffer + 1);
          if ( v21 != v22 )
          {
            if ( v21 == 1 )
            {
              LOBYTE(v54) = 1;
            }
            else
            {
              v23 = (unsigned __int8)v53;
              if ( v22 == 1 )
                v23 = 1;
              v53 = v23;
            }
          }
          *(_DWORD *)(v16 + 352) = v22;
          *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v16 + 356) = StatusBuffer[2];
          *(_QWORD *)(v16 + 368) = *((_QWORD *)StatusBuffer + 3);
          *(_QWORD *)(v16 + 360) = *((_QWORD *)StatusBuffer + 2);
          *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v16 + 376) = StatusBuffer[8];
          *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v16 + 380) = StatusBuffer[9];
        }
LABEL_42:
        if ( StatusCode == 1073938515 )
          ndisFilterIndicatePMCapabilities(v16, v6);
        if ( StatusCode == 1073938513 )
          updated = ndisFilterIndicateWoLPatternReject(v16, v6);
        if ( StatusCode == 1073938514 )
          updated = ndisFilterIndicatePMOffloadReject(v16, v6);
        if ( StatusCode == 1073872902 )
          updated = ndisFIndicateOffloadChange(v16, StatusBuffer, StatusBufferSize);
        if ( StatusCode - 1074073600 <= 1 )
          updated = ndisFIndicateTimestampChange(v16, StatusCode, StatusBuffer, StatusBufferSize);
LABEL_52:
        if ( updated )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v16 + 16) + 288LL) )
            ndisFInvokeStatus(v16, v6);
          else
            ndisFIndicateStatusInternal(v16, v6);
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v7 + 12);
          *((_QWORD *)v7 + 65) = KeGetCurrentThread();
          *((_DWORD *)v7 + 466) = 733986;
          if ( v54 )
            ndisSwapFilterHandlersForMediaDisconnect((__int64)v7, 0LL, v16);
          if ( (_BYTE)v53 )
            ndisRestoreFilterHandlersForMediaDisconnect((__int64)v7, 0LL, v16);
          *((_QWORD *)v7 + 65) = 0LL;
          *((_DWORD *)v7 + 466) = 0;
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v7 + 12);
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v16 + 144));
        v19 = NewIrql[0];
        *(_DWORD *)(v16 + 56) &= ~0x2000u;
        *(_QWORD *)(v16 + 152) = 0LL;
        *(_DWORD *)(v16 + 160) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 144), v19);
        ndisDereferenceRef((PKSPIN_LOCK)(v16 + 320));
LABEL_61:
        if ( (unsigned __int8)byte_1C00A0267 >= 4u )
          WPP_SF_qD(206LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v7, (unsigned int)v6->StatusCode);
        return;
      }
      ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)v7, NewIrql);
      if ( v6->SourceHandle == &ndisIntReqGeneric )
      {
        if ( StatusCode != 1073807383 )
          goto LABEL_181;
        StatusBuffer[1] = v7[86];
      }
      if ( StatusCode == 1073807383 && StatusBuffer && StatusBufferSize >= 0x28 )
      {
        if ( *((_DWORD *)StatusBuffer + 1) == 1
          || (v45 = *((_DWORD *)v7 + 30),
              *((_DWORD *)v7 + 30) = v45 & 0xDFFFFFFF,
              v46 = *((_DWORD *)StatusBuffer + 1),
              v54 = (v45 & 0x20000000) != 0,
              v46 == 1) )
        {
          v48 = *((_DWORD *)v7 + 30);
          *((_DWORD *)v7 + 30) = v48 | 0x20000000;
          v46 = *((_DWORD *)StatusBuffer + 1);
          v47 = (v48 & 0x20000000) == 0;
          v53 = v47;
        }
        else
        {
          v47 = v53;
        }
        v49 = *((_DWORD *)v7 + 120);
        if ( v49 != v46 )
        {
          if ( v49 != 1 )
          {
            v50 = v47;
            if ( v46 == 1 )
              v50 = 1;
            goto LABEL_182;
          }
          LOBYTE(v54) = 1;
        }
      }
LABEL_181:
      v50 = v53;
LABEL_182:
      v6->Flags |= 2u;
      ndisIndicateStatusInternal(v7, v6);
      if ( v54 )
        ndisSwapFilterHandlersForMediaDisconnect((__int64)v7, 0LL, 0LL);
      if ( v50 )
        ndisRestoreFilterHandlersForMediaDisconnect((__int64)v7, 0LL, 0LL);
      ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v7, NewIrql[0]);
      goto LABEL_61;
    }
LABEL_9:
    v10 = (KSPIN_LOCK *)(v7 + 24);
    goto LABEL_10;
  }
  updated = ndisMIndicateHDSplitChange(v7, StatusBuffer, StatusBufferSize);
  if ( updated )
    goto LABEL_9;
  if ( (unsigned __int8)byte_1C00A0267 >= 4u )
  {
    v25 = 193LL;
    goto LABEL_85;
  }
}
