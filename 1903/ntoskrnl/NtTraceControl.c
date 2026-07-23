/*
 * XREFs of NtTraceControl @ 0x1406865C0
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14071D9A0 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14078748C (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1408EE0D0 (PerfDiagpSaveActiveDCLLogFileName.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x140036B70 (PsGetCurrentThreadProcessId.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 *     EtwpCreateActivityId @ 0x14010AD0C (EtwpCreateActivityId.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     WdiUpdateSem @ 0x14032B8F8 (WdiUpdateSem.c)
 *     EtwpGetCurrentSiloState @ 0x140330954 (EtwpGetCurrentSiloState.c)
 *     EtwpGetCompressionSettings @ 0x140333C40 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1403340FC (EtwpSetCompressionSettings.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpSetProviderTraitsUm @ 0x1405C424C (EtwpSetProviderTraitsUm.c)
 *     EtwpRegisterUMGuid @ 0x1405D3990 (EtwpRegisterUMGuid.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     EtwpEnableGuid @ 0x140664144 (EtwpEnableGuid.c)
 *     EtwpAddNotificationEvent @ 0x1406665FC (EtwpAddNotificationEvent.c)
 *     EtwpReceiveNotification @ 0x140666D3C (EtwpReceiveNotification.c)
 *     EtwpStopTrace @ 0x1406B4F7C (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1406B5DAC (EtwpQueryTrace.c)
 *     EtwpValidateLoggerInfo @ 0x1406B5F70 (EtwpValidateLoggerInfo.c)
 *     EtwpNotifyGuid @ 0x1406B63E0 (EtwpNotifyGuid.c)
 *     EtwpStartTrace @ 0x1406B70FC (EtwpStartTrace.c)
 *     EtwpFlushTrace @ 0x1406CBED4 (EtwpFlushTrace.c)
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x1406CC014 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpRealtimeConnect @ 0x1406CC098 (EtwpRealtimeConnect.c)
 *     EtwpSendReplyDataBlock @ 0x1406D86A0 (EtwpSendReplyDataBlock.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406EB2C8 (EtwpReceiveReplyDataBlock.c)
 *     EtwpGetTraceGuidInfo @ 0x1406ECEDC (EtwpGetTraceGuidInfo.c)
 *     EtwpTrackProviderBinary @ 0x1406ED48C (EtwpTrackProviderBinary.c)
 *     EtwpEnumerateTraceGuids @ 0x1406F53B8 (EtwpEnumerateTraceGuids.c)
 *     WdiDispatchControl @ 0x1407163C4 (WdiDispatchControl.c)
 *     EtwpUpdateTrace @ 0x14077F2B0 (EtwpUpdateTrace.c)
 *     EtwpUpdateDisallowList @ 0x1408F26CC (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1408F2958 (EtwpGetDisallowList.c)
 *     EtwpGetTraceGroupInfo @ 0x1408F2A34 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGroupList @ 0x1408F2C80 (EtwpGetTraceGroupList.c)
 *     EtwpGetTraceGuidList @ 0x1408F2D08 (EtwpGetTraceGuidList.c)
 *     EtwpUseDescriptorTypeUm @ 0x1408F2DD4 (EtwpUseDescriptorTypeUm.c)
 *     EtwpIncrementTraceFile @ 0x1408F2E5C (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x1408F2F44 (EtwpQueryReferenceTime.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1408FCC40 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpQuerySessionDemuxObject @ 0x1408FCE40 (EtwpQuerySessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x1408FCEB4 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408FD174 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpSetProviderBinaryTracking @ 0x1408FFB5C (EtwpSetProviderBinaryTracking.c)
 */

NTSTATUS __cdecl NtTraceControl(
        ETWTRACECONTROLCODE FunctionCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  unsigned __int64 v8; // rbx
  _QWORD *v9; // r12
  char PreviousMode; // di
  NTSTATUS started; // esi
  unsigned int v12; // eax
  PULONG v13; // r14
  __int64 v14; // rcx
  int v15; // eax
  ULONG v16; // r15d
  ULONG v17; // edi
  ULONG v18; // eax
  _QWORD *PoolWithQuotaTag; // rax
  unsigned int *v20; // rdx
  NTSTATUS updated; // eax
  __int64 v22; // rcx
  unsigned __int64 v24; // r8
  void *v25; // rcx
  NTSTATUS Trace; // eax
  int v27; // eax
  unsigned int v28; // edx
  _QWORD *v29; // r9
  __int64 v30; // r8
  __int64 v31; // rdx
  char *v32; // r9
  __int64 v33; // rax
  size_t v34; // [rsp+30h] [rbp-78h] BYREF
  __int64 CurrentSiloState; // [rsp+38h] [rbp-70h]
  unsigned int v36; // [rsp+40h] [rbp-68h]
  __int16 v37; // [rsp+44h] [rbp-64h] BYREF
  int v38; // [rsp+48h] [rbp-60h]
  _QWORD *v39; // [rsp+50h] [rbp-58h]
  int v40; // [rsp+58h] [rbp-50h]
  __int64 v41; // [rsp+60h] [rbp-48h]
  void *v42; // [rsp+68h] [rbp-40h]

  v8 = (unsigned int)FunctionCode;
  v9 = 0LL;
  v39 = 0LL;
  LODWORD(v34) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentSiloState = EtwpGetCurrentSiloState();
  started = 0;
  v38 = 0;
  LOBYTE(v36) = 0;
  if ( PreviousMode )
  {
    v36 = (unsigned int)v8 >> 31;
    v12 = v8 & 0x7FFFFFFF;
    if ( (v8 & 0x80000000) == 0LL )
      v12 = v8;
    v8 = v12;
    if ( InputBuffer )
    {
      if ( InputBufferLength
        && ((unsigned __int64)InputBuffer + InputBufferLength > 0x7FFFFFFF0000LL
         || (char *)InputBuffer + InputBufferLength < InputBuffer) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      InputBufferLength = 0;
    }
    if ( OutputBuffer )
      ProbeForWrite(OutputBuffer, OutputBufferLength, 1u);
    else
      OutputBufferLength = 0;
    v13 = ReturnLength;
    if ( !ReturnLength )
    {
      started = -1073741811;
      v38 = -1073741811;
      goto LABEL_46;
    }
    v14 = (__int64)ReturnLength;
    if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    started = v38;
  }
  else
  {
    v13 = ReturnLength;
  }
  if ( (unsigned int)v8 <= 0x1B )
  {
    v15 = 134238208;
    if ( _bittest(&v15, v8) )
    {
      v17 = OutputBufferLength;
      v16 = InputBufferLength;
LABEL_50:
      v20 = (unsigned int *)InputBuffer;
      goto LABEL_26;
    }
  }
  v16 = InputBufferLength;
  v17 = OutputBufferLength;
  if ( !InputBufferLength && !OutputBufferLength )
    goto LABEL_50;
  if ( InputBufferLength > OutputBufferLength )
    v18 = InputBufferLength;
  else
    v18 = OutputBufferLength;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v18, 0x50777445u);
  v9 = PoolWithQuotaTag;
  v39 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
  {
    started = -1073741801;
    goto LABEL_46;
  }
  memset(PoolWithQuotaTag, 0, OutputBufferLength);
  v20 = (unsigned int *)InputBuffer;
  if ( InputBuffer )
  {
    memmove(v9, InputBuffer, InputBufferLength);
    v20 = (unsigned int *)InputBuffer;
  }
LABEL_26:
  if ( (_DWORD)v8 == 15 )
  {
    if ( v16 != 160 || v17 - 160 > 0xFF60 )
      goto LABEL_117;
    updated = EtwpRegisterUMGuid(CurrentSiloState, (__int64)v9, v17, v36, &v34);
    goto LABEL_33;
  }
  if ( (_DWORD)v8 != 12 )
  {
    if ( (_DWORD)v8 == 30 )
    {
      if ( v16 != 24 || v17 - 120 > 0xFF88 )
        goto LABEL_117;
      updated = EtwpSetProviderTraitsUm((__int64)v9, v17, (int)&v34);
LABEL_33:
      started = updated;
      goto LABEL_34;
    }
    v24 = 0x140000000uLL;
    switch ( (int)v8 )
    {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
        if ( v16 < 0xB0 || v17 < 0xB0 )
          goto LABEL_119;
        started = EtwpValidateLoggerInfo(v9);
        if ( started < 0 )
          goto LABEL_76;
        if ( *(_DWORD *)v9 > v16 )
        {
LABEL_119:
          started = -1073741306;
          goto LABEL_34;
        }
        started = 0;
LABEL_76:
        if ( started < 0 )
          goto LABEL_34;
        switch ( (_DWORD)v8 )
        {
          case 3:
            Trace = EtwpQueryTrace(CurrentSiloState, v9);
            break;
          case 1:
            *((_DWORD *)v9 + 20) = (unsigned __int8)v36 | v9[10] & 0xFFFFFFFE;
            started = EtwpStartTrace(CurrentSiloState, v9);
            LODWORD(v34) = 176;
            goto LABEL_34;
          case 2:
            started = EtwpStopTrace(CurrentSiloState, v9, 0LL);
            LODWORD(v34) = 176;
            goto LABEL_34;
          case 4:
            started = EtwpUpdateTrace(CurrentSiloState, v9);
            LODWORD(v34) = 176;
            goto LABEL_34;
          case 5:
            started = EtwpFlushTrace(CurrentSiloState, v9);
            LODWORD(v34) = 176;
            goto LABEL_34;
          case 6:
            Trace = EtwpIncrementTraceFile(CurrentSiloState, v9);
            break;
          default:
LABEL_80:
            LODWORD(v34) = 176;
            goto LABEL_34;
        }
        started = Trace;
        goto LABEL_80;
      case 11:
        if ( v16 != 96 || v17 != 96 )
          goto LABEL_117;
        updated = EtwpRealtimeConnect(v9);
        LODWORD(v34) = 96;
        goto LABEL_33;
      case 13:
        if ( v16 != 48 || v17 )
          goto LABEL_117;
        updated = WdiDispatchControl(v9);
        goto LABEL_33;
      case 14:
        if ( v16 != 8 || v17 )
          goto LABEL_117;
        v41 = *v20;
        started = EtwpRealtimeDisconnectConsumerByHandle();
        goto LABEL_34;
      case 16:
        if ( v16 || v17 - 72 > 0xFFB8 )
          goto LABEL_117;
        updated = EtwpReceiveNotification(v9, v17, v36, &v34);
        goto LABEL_33;
      case 17:
        if ( v16 < 0x48 || v17 != 72 || *((_DWORD *)v9 + 1) != v16 )
          goto LABEL_117;
        if ( *(_DWORD *)v9 == 3 )
        {
          if ( v16 < 0x78 )
            goto LABEL_117;
          updated = EtwpEnableGuid(CurrentSiloState, (__int64)v9, 1);
          LODWORD(v34) = 72;
        }
        else
        {
          LOBYTE(v24) = 1;
          updated = EtwpNotifyGuid(CurrentSiloState, v9, v24);
          LODWORD(v34) = 72;
        }
        goto LABEL_33;
      case 18:
        if ( v16 < 0x48 || *((_DWORD *)v9 + 1) != v16 )
          goto LABEL_117;
        *((_DWORD *)v9 + 9) = PsGetCurrentThreadProcessId();
        updated = EtwpSendReplyDataBlock(v9);
        goto LABEL_33;
      case 19:
        if ( v16 != 8 )
          goto LABEL_117;
        started = EtwpReceiveReplyDataBlock(v9);
        LODWORD(v34) = v40;
        goto LABEL_34;
      case 20:
        if ( v16 || v17 )
          goto LABEL_117;
        updated = WdiUpdateSem();
        goto LABEL_33;
      case 21:
        LODWORD(v34) = v17;
        started = EtwpGetTraceGuidList(CurrentSiloState, v9, &v34);
        goto LABEL_34;
      case 22:
        if ( v16 != 16 )
          goto LABEL_117;
        LODWORD(v34) = v17;
        updated = EtwpGetTraceGuidInfo(CurrentSiloState, v9, v9, &v34);
        goto LABEL_33;
      case 23:
        LODWORD(v34) = v17;
        started = EtwpEnumerateTraceGuids(CurrentSiloState, v9, &v34);
        goto LABEL_34;
      case 24:
        if ( v16 || v17 )
          goto LABEL_117;
        if ( *(_DWORD *)(CurrentSiloState + 4072) )
        {
          started = -1073741790;
        }
        else
        {
          *(_DWORD *)(CurrentSiloState + 4072) = PsGetCurrentThreadProcessId();
          started = 0;
        }
        goto LABEL_34;
      case 25:
        if ( v16 != 4 || v17 != 16 )
          goto LABEL_117;
        updated = EtwpQueryReferenceTime(CurrentSiloState, *(unsigned int *)v9, v9);
        LODWORD(v34) = 16;
        goto LABEL_33;
      case 26:
        if ( v16 != 8 )
          goto LABEL_117;
        updated = EtwpTrackProviderBinary(CurrentSiloState, v9);
        LODWORD(v34) = 0;
        goto LABEL_33;
      case 27:
        if ( v16 != 4 )
          goto LABEL_117;
        v25 = (void *)*v20;
        v42 = v25;
        if ( !v25 )
          goto LABEL_117;
        started = EtwpAddNotificationEvent(v25, v36);
        goto LABEL_34;
      case 28:
        if ( v16 < 8 )
          goto LABEL_117;
        v28 = *((_DWORD *)v9 + 1);
        if ( 16LL * v28 + 8 != v16 )
          goto LABEL_117;
        v29 = 0LL;
        if ( v28 )
          v29 = v9 + 1;
        updated = EtwpUpdateDisallowList(CurrentSiloState, *(unsigned int *)v9, v28, v29);
        goto LABEL_33;
      case 31:
        if ( v16 != 16 || v17 )
          goto LABEL_117;
        updated = EtwpUseDescriptorTypeUm(v9);
        goto LABEL_33;
      case 32:
        LODWORD(v34) = v17;
        started = EtwpGetTraceGroupList(CurrentSiloState, v9, &v34);
        goto LABEL_34;
      case 33:
        if ( v16 != 16 )
          goto LABEL_117;
        LODWORD(v34) = v17;
        updated = EtwpGetTraceGroupInfo(CurrentSiloState, v9, v9, &v34);
        goto LABEL_33;
      case 34:
        if ( v16 != 8 )
          goto LABEL_117;
        LODWORD(v34) = v17;
        updated = EtwpGetDisallowList(CurrentSiloState, v9, v9, &v34);
        goto LABEL_33;
      case 35:
        if ( v16 != 16 || v17 )
          goto LABEL_117;
        updated = EtwpSetCompressionSettings((unsigned int *)v9);
        goto LABEL_33;
      case 36:
        if ( v16 != 8 || v17 != 16 )
          goto LABEL_117;
        LODWORD(v34) = 16;
        updated = EtwpGetCompressionSettings((unsigned __int16 *)v9, (unsigned int *)v9);
        goto LABEL_33;
      case 37:
        if ( v16 < 0xC )
          goto LABEL_117;
        v30 = *((unsigned __int16 *)v9 + 4);
        if ( (unsigned __int16)v30 > 0x10u )
          goto LABEL_117;
        v31 = *((unsigned int *)v9 + 1);
        if ( (unsigned int)(v31 - 1) <= 3 || 16LL * (unsigned __int16)v30 + 12 != v16 )
          goto LABEL_117;
        v32 = 0LL;
        if ( (_WORD)v30 )
          v32 = (char *)v9 + 12;
        EtwpUpdatePeriodicCaptureState(*(unsigned int *)v9, v31, v30, v32);
        goto LABEL_34;
      case 38:
        if ( v16 < 8 || (v16 & 7) != 0 || v17 < 2 )
          goto LABEL_117;
        started = EtwpGetPrivateSessionTraceHandle(v9, v16 >> 3, &v37);
        if ( !started )
        {
          LODWORD(v34) = 2;
          *(_WORD *)v9 = v37;
        }
        goto LABEL_34;
      case 39:
        if ( v16 < 2 || v17 < 8 )
          goto LABEL_117;
        v33 = EtwpGetCurrentSiloState();
        started = EtwpRegisterPrivateSession(v33, *(unsigned __int16 *)v9, (char *)v9 + 4, v9);
        if ( !started )
          LODWORD(v34) = 8;
        goto LABEL_34;
      case 40:
        if ( v16 < 8 || v17 < 2 )
          goto LABEL_117;
        started = EtwpQuerySessionDemuxObject(*v9, v9);
        if ( !started )
          LODWORD(v34) = 2;
        goto LABEL_34;
      case 41:
        if ( v16 < 8 )
          goto LABEL_117;
        updated = EtwpSetProviderBinaryTracking(CurrentSiloState, *(unsigned int *)v9, *((unsigned __int8 *)v9 + 4));
        goto LABEL_33;
      case 42:
        if ( v17 < 4 )
          goto LABEL_117;
        v27 = *(_DWORD *)(CurrentSiloState + 16);
        goto LABEL_83;
      case 43:
        if ( v17 < 4 )
          goto LABEL_117;
        v27 = EtwpMaxPmcCounter;
LABEL_83:
        *(_DWORD *)v9 = v27;
        LODWORD(v34) = 4;
        started = 0;
        goto LABEL_34;
      default:
        started = -1073741808;
        goto LABEL_34;
    }
  }
  if ( v17 != 16 )
  {
LABEL_117:
    started = -1073741811;
    goto LABEL_34;
  }
  started = 0;
  EtwpCreateActivityId((volatile signed __int64 *)OutputBuffer);
LABEL_34:
  if ( started >= 0 )
  {
    if ( (_DWORD)v34 )
      memmove(OutputBuffer, v9, (unsigned int)v34);
    *v13 = v34;
  }
  if ( started == -1073741789 && ((unsigned int)(v8 - 15) <= 1 || (unsigned int)(v8 - 21) <= 1)
    || (unsigned int)v8 <= 0x28 && (v22 = 0x1D700880000LL, _bittest64(&v22, v8)) )
  {
    *v13 = v34;
  }
LABEL_46:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return started;
}
