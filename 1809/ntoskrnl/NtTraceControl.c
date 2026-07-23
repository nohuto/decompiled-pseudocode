/*
 * XREFs of NtTraceControl @ 0x1405C3F40
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140743CB0 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x140743F48 (PerfDiagpUpdateCKCLEnableFlags.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1408B1E90 (PerfDiagpSaveActiveDCLLogFileName.c)
 * Callees:
 *     EtwpCreateActivityId @ 0x140014E00 (EtwpCreateActivityId.c)
 *     PsGetCurrentThreadProcessId @ 0x14004D240 (PsGetCurrentThreadProcessId.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     WdiUpdateSem @ 0x14030DF24 (WdiUpdateSem.c)
 *     EtwpGetCompressionSettings @ 0x1403155DC (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x140315A9C (EtwpSetCompressionSettings.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpAddNotificationEvent @ 0x1405C12F4 (EtwpAddNotificationEvent.c)
 *     EtwpReceiveNotification @ 0x1405C1E00 (EtwpReceiveNotification.c)
 *     EtwpRegisterUMGuid @ 0x1405C4970 (EtwpRegisterUMGuid.c)
 *     EtwpSetProviderTraitsUm @ 0x1405C5840 (EtwpSetProviderTraitsUm.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     EtwpEnableGuid @ 0x1406570F8 (EtwpEnableGuid.c)
 *     EtwpNotifyGuid @ 0x140659A48 (EtwpNotifyGuid.c)
 *     EtwpSendReplyDataBlock @ 0x14065A070 (EtwpSendReplyDataBlock.c)
 *     EtwpStopTrace @ 0x14065A150 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x14065AF40 (EtwpQueryTrace.c)
 *     EtwpValidateLoggerInfo @ 0x14065B0F8 (EtwpValidateLoggerInfo.c)
 *     EtwpFlushTrace @ 0x1406C3BE0 (EtwpFlushTrace.c)
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x1406C3D20 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpRealtimeConnect @ 0x1406C3D98 (EtwpRealtimeConnect.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406CC08C (EtwpReceiveReplyDataBlock.c)
 *     EtwpStartTrace @ 0x1406CEF4C (EtwpStartTrace.c)
 *     EtwpEnumerateTraceGuids @ 0x1406D5D30 (EtwpEnumerateTraceGuids.c)
 *     WdiDispatchControl @ 0x1407186FC (WdiDispatchControl.c)
 *     EtwpTrackProviderBinary @ 0x14071E72C (EtwpTrackProviderBinary.c)
 *     EtwpUpdateTrace @ 0x140726D7C (EtwpUpdateTrace.c)
 *     EtwpUpdateDisallowList @ 0x1408B6AD0 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1408B6D48 (EtwpGetDisallowList.c)
 *     EtwpGetTraceGroupInfo @ 0x1408B6E24 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGroupList @ 0x1408B7098 (EtwpGetTraceGroupList.c)
 *     EtwpGetTraceGuidInfo @ 0x1408B7138 (EtwpGetTraceGuidInfo.c)
 *     EtwpGetTraceGuidList @ 0x1408B767C (EtwpGetTraceGuidList.c)
 *     EtwpUseDescriptorTypeUm @ 0x1408B7748 (EtwpUseDescriptorTypeUm.c)
 *     EtwpIncrementTraceFile @ 0x1408B77D0 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x1408B78B8 (EtwpQueryReferenceTime.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1408C10E4 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpQuerySessionDemuxObject @ 0x1408C12E4 (EtwpQuerySessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x1408C1358 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408C160C (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpSetProviderBinaryTracking @ 0x1408C3C18 (EtwpSetProviderBinaryTracking.c)
 */

NTSTATUS __cdecl NtTraceControl(
        ETWTRACECONTROLCODE FunctionCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  ETWTRACECONTROLCODE v7; // esi
  _QWORD *v8; // r15
  _QWORD *v9; // rdi
  char PreviousMode; // bl
  __int64 v11; // r14
  unsigned int v12; // r13d
  int v13; // eax
  __int64 v14; // rbx
  NTSTATUS updated; // ebx
  int v16; // eax
  ULONG v17; // ebx
  ULONG v18; // esi
  SIZE_T v19; // rdx
  _QWORD *PoolWithQuotaTag; // rax
  unsigned __int64 v21; // r8
  __int64 v22; // rdx
  PVOID v24; // rcx
  unsigned __int64 v25; // rsi
  void *v26; // rcx
  unsigned int v27; // edx
  __int64 v28; // r8
  __int64 v29; // rdx
  _QWORD *CurrentServerSiloGlobals; // rax
  PULONG v31; // rcx
  __int64 v32; // rdx
  _WORD v34[2]; // [rsp+30h] [rbp-68h] BYREF
  ETWTRACECONTROLCODE v35; // [rsp+34h] [rbp-64h]
  _DWORD Size[4]; // [rsp+38h] [rbp-60h] BYREF
  void *Src; // [rsp+48h] [rbp-50h]
  __int64 v38; // [rsp+50h] [rbp-48h]
  void *v39; // [rsp+58h] [rbp-40h]

  v7 = FunctionCode;
  v35 = FunctionCode;
  v8 = 0LL;
  v9 = 0LL;
  Src = 0LL;
  Size[0] = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  LOBYTE(v12) = 0;
  if ( PreviousMode )
  {
    v12 = (unsigned int)v7 >> 31;
    v13 = v7 & 0x7FFFFFFF;
    if ( v7 >= 0 )
      v13 = v7;
    v7 = v13;
    v35 = v13;
    v14 = 0x7FFFFFFF0000LL;
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
    if ( !ReturnLength )
    {
      updated = -1073741811;
      Size[1] = -1073741811;
      goto LABEL_158;
    }
    if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
      v14 = (__int64)ReturnLength;
    *(_DWORD *)v14 = *(_DWORD *)v14;
  }
  if ( (unsigned int)v7 <= EtwAddNotificationEvent && (v16 = 134238208, _bittest(&v16, v7)) )
  {
    v17 = OutputBufferLength;
    v18 = InputBufferLength;
  }
  else
  {
    v18 = InputBufferLength;
    v17 = OutputBufferLength;
    if ( InputBufferLength || OutputBufferLength )
    {
      v19 = OutputBufferLength;
      if ( InputBufferLength > OutputBufferLength )
        v19 = InputBufferLength;
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v19, 0x50777445u);
      v9 = PoolWithQuotaTag;
      Src = PoolWithQuotaTag;
      if ( !PoolWithQuotaTag )
      {
        updated = -1073741801;
        goto LABEL_158;
      }
      memset(PoolWithQuotaTag, 0, OutputBufferLength);
      if ( InputBuffer )
        memmove(v9, InputBuffer, InputBufferLength);
    }
  }
  v21 = 0x140000000uLL;
  switch ( v35 )
  {
    case EtwStartLoggerCode:
    case EtwStopLoggerCode:
    case EtwQueryLoggerCode:
    case EtwUpdateLoggerCode:
    case EtwFlushLoggerCode:
    case EtwIncrementLoggerFile:
      if ( v18 < 0xB0 || v17 < 0xB0 )
        goto LABEL_34;
      updated = EtwpValidateLoggerInfo(v9);
      if ( updated >= 0 )
      {
        if ( *(_DWORD *)v9 > v18 )
        {
LABEL_34:
          updated = -1073741306;
          goto LABEL_146;
        }
        updated = 0;
      }
      if ( updated >= 0 )
      {
        if ( (unsigned int)v22 <= 5 )
          __asm { jmp     rdx }
        Size[0] = 176;
      }
      goto LABEL_146;
    case EtwRealtimeConnectCode:
      if ( v18 != 96 || v17 != 96 )
        goto LABEL_67;
      updated = EtwpRealtimeConnect(v9);
      Size[0] = 96;
      goto LABEL_146;
    case EtwActivityIdCreate:
      if ( v17 != 16 )
        goto LABEL_67;
      updated = 0;
      EtwpCreateActivityId((volatile signed __int64 *)OutputBuffer);
      v25 = (unsigned int)v35;
      goto LABEL_147;
    case EtwWdiScenarioCode:
      if ( v18 != 48 || v17 )
        goto LABEL_67;
      updated = WdiDispatchControl(v9);
      goto LABEL_146;
    case EtwRealtimeDisconnectCode:
      if ( v18 != 8 || v17 )
        goto LABEL_67;
      v38 = *(unsigned int *)InputBuffer;
      updated = EtwpRealtimeDisconnectConsumerByHandle();
      goto LABEL_146;
    case EtwRegisterGuidsCode:
      if ( v18 != 160 || v17 - 160 > 0xFF60 )
        goto LABEL_67;
      updated = EtwpRegisterUMGuid(v11, (_DWORD)v9, v17, (unsigned __int8)v12, (__int64)Size);
      goto LABEL_146;
    case EtwReceiveNotification:
      if ( v18 || v17 - 72 > 0xFFB8 )
        goto LABEL_67;
      updated = EtwpReceiveNotification(v9, v17, v12, Size);
      goto LABEL_146;
    case EtwSendDataBlock:
      if ( v18 < 0x48 || v17 != 72 || *((_DWORD *)v9 + 1) != v18 )
        goto LABEL_67;
      if ( *(_DWORD *)v9 == 3 )
      {
        if ( v18 < 0x78 )
          goto LABEL_67;
        LOBYTE(v21) = 1;
        updated = EtwpEnableGuid(v11, v9, v21);
        Size[0] = 72;
      }
      else
      {
        LOBYTE(v21) = 1;
        updated = EtwpNotifyGuid(v11, v9, v21);
        Size[0] = 72;
      }
      goto LABEL_146;
    case EtwSendReplyDataBlock:
      if ( v18 < 0x48 || *((_DWORD *)v9 + 1) != v18 )
        goto LABEL_67;
      *((_DWORD *)v9 + 9) = PsGetCurrentThreadProcessId();
      updated = EtwpSendReplyDataBlock(v9);
      goto LABEL_146;
    case EtwReceiveReplyDataBlock:
      if ( v18 != 8 )
        goto LABEL_67;
      updated = EtwpReceiveReplyDataBlock(v9);
      Size[0] = Size[2];
      goto LABEL_146;
    case EtwWdiSemUpdate:
      if ( v18 || v17 )
        goto LABEL_67;
      updated = WdiUpdateSem();
      goto LABEL_146;
    case EtwEnumTraceGuidList:
      Size[0] = v17;
      updated = EtwpGetTraceGuidList(v11, v9, Size);
      goto LABEL_146;
    case EtwGetTraceGuidInfo:
      if ( v18 != 16 )
        goto LABEL_67;
      Size[0] = v17;
      updated = EtwpGetTraceGuidInfo(v11, v9, v9, Size);
      goto LABEL_146;
    case EtwEnumerateTraceGuids:
      Size[0] = v17;
      updated = EtwpEnumerateTraceGuids(v11, v9, Size);
      goto LABEL_146;
    case EtwRegisterSecurityProv:
      if ( v18 || v17 )
        goto LABEL_67;
      if ( *(_DWORD *)(v11 + 4072) )
      {
        updated = -1073741790;
      }
      else
      {
        *(_DWORD *)(v11 + 4072) = PsGetCurrentThreadProcessId();
        updated = 0;
      }
      goto LABEL_146;
    case EtwReferenceTimeCode:
      if ( v18 != 4 || v17 != 16 )
        goto LABEL_67;
      updated = EtwpQueryReferenceTime(v11, *(unsigned int *)v9, v9);
      Size[0] = 16;
      goto LABEL_146;
    case EtwTrackBinaryCode:
      if ( v18 != 8 )
        goto LABEL_67;
      updated = EtwpTrackProviderBinary(v11, v9);
      Size[0] = 0;
      goto LABEL_146;
    case EtwAddNotificationEvent:
      if ( v18 != 4 )
        goto LABEL_67;
      v26 = (void *)*(unsigned int *)InputBuffer;
      v39 = v26;
      if ( !v26 )
        goto LABEL_67;
      updated = EtwpAddNotificationEvent(v26, v12);
      goto LABEL_146;
    case EtwUpdateDisallowList:
      if ( v18 < 8 )
        goto LABEL_67;
      v27 = *((_DWORD *)v9 + 1);
      if ( 16LL * v27 + 8 != v18 )
        goto LABEL_67;
      if ( v27 )
        v8 = v9 + 1;
      updated = EtwpUpdateDisallowList(v11, *(unsigned int *)v9, v27, v8);
      goto LABEL_146;
    case EtwSetProviderTraitsCode:
      if ( v18 != 24 || v17 - 120 > 0xFF88 )
        goto LABEL_67;
      updated = EtwpSetProviderTraitsUm((_DWORD)v9, v17, (unsigned int)Size);
      goto LABEL_146;
    case EtwUseDescriptorTypeCode:
      if ( v18 != 16 || v17 )
        goto LABEL_67;
      updated = EtwpUseDescriptorTypeUm(v9);
      goto LABEL_146;
    case EtwEnumTraceGroupList:
      Size[0] = v17;
      updated = EtwpGetTraceGroupList(v11, v9, Size);
      goto LABEL_146;
    case EtwGetTraceGroupInfo:
      if ( v18 != 16 )
        goto LABEL_67;
      Size[0] = v17;
      updated = EtwpGetTraceGroupInfo(v11, v9, v9, Size);
      goto LABEL_146;
    case EtwGetDisallowList:
      if ( v18 != 8 )
        goto LABEL_67;
      Size[0] = v17;
      updated = EtwpGetDisallowList(v11, v9, v9, Size);
      goto LABEL_146;
    case EtwSetCompressionSettings:
      if ( v18 != 16 || v17 )
        goto LABEL_67;
      updated = EtwpSetCompressionSettings((unsigned int *)v9);
      goto LABEL_146;
    case EtwGetCompressionSettings:
      if ( v18 != 8 || v17 != 16 )
        goto LABEL_67;
      Size[0] = 16;
      updated = EtwpGetCompressionSettings((unsigned __int16 *)v9, (unsigned int *)v9);
      if ( !updated )
        Size[0] = 16;
      goto LABEL_146;
    case EtwUpdatePeriodicCaptureState:
      if ( v18 < 0xC )
        goto LABEL_67;
      v28 = *((unsigned __int16 *)v9 + 4);
      if ( (unsigned __int16)v28 > 0x10u )
      {
        updated = -1073741811;
        goto LABEL_146;
      }
      v29 = *((unsigned int *)v9 + 1);
      if ( (unsigned int)(v29 - 1) <= 3 )
      {
        updated = -1073741811;
        goto LABEL_146;
      }
      if ( (_WORD)v28 )
      {
        if ( !(_DWORD)v29 )
        {
          updated = -1073741811;
          goto LABEL_146;
        }
      }
      else if ( (_DWORD)v29 )
      {
LABEL_67:
        updated = -1073741811;
        goto LABEL_146;
      }
      if ( 16LL * (unsigned __int16)v28 + 12 != v18 )
        goto LABEL_67;
      if ( (_WORD)v28 )
        v8 = (_QWORD *)((char *)v9 + 12);
      updated = EtwpUpdatePeriodicCaptureState(*(unsigned int *)v9, v29, v28, v8);
LABEL_146:
      v25 = (unsigned int)v35;
      v24 = OutputBuffer;
LABEL_147:
      if ( updated < 0 )
      {
        v31 = ReturnLength;
      }
      else
      {
        if ( Size[0] )
          memmove(v24, v9, Size[0]);
        v31 = ReturnLength;
        *ReturnLength = Size[0];
      }
      if ( updated == -1073741789 && ((unsigned int)(v25 - 15) <= 1 || (unsigned int)(v25 - 21) <= 1)
        || (unsigned int)v25 <= 0x28 && (v32 = 0x1D700880000LL, _bittest64(&v32, v25)) )
      {
        *v31 = Size[0];
      }
LABEL_158:
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      return updated;
    case EtwGetPrivateSessionTraceHandle:
      if ( v18 < 8 || (v18 & 7) != 0 || v17 < 2 )
        goto LABEL_67;
      updated = EtwpGetPrivateSessionTraceHandle(v9, v18 >> 3, v34);
      if ( !updated )
      {
        Size[0] = 2;
        *(_WORD *)v9 = v34[0];
      }
      goto LABEL_146;
    case EtwRegisterPrivateSession:
      if ( v18 < 2 || v17 < 8 )
        goto LABEL_67;
      CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
      updated = EtwpRegisterPrivateSession(CurrentServerSiloGlobals[108], *(unsigned __int16 *)v9, (char *)v9 + 4, v9);
      if ( !updated )
        Size[0] = 8;
      goto LABEL_146;
    case EtwQuerySessionDemuxObject:
      if ( v18 < 8 || v17 < 2 )
        goto LABEL_67;
      updated = EtwpQuerySessionDemuxObject(*v9, v9);
      if ( !updated )
        Size[0] = 2;
      goto LABEL_146;
    case EtwSetProviderBinaryTracking:
      if ( v18 < 8 )
        goto LABEL_67;
      updated = EtwpSetProviderBinaryTracking(v11, *(unsigned int *)v9, *((unsigned __int8 *)v9 + 4));
      goto LABEL_146;
    case EtwMaxLoggers:
      v25 = (unsigned int)v35;
      v24 = OutputBuffer;
      if ( v17 < 4 )
      {
        updated = -1073741811;
      }
      else
      {
        *(_DWORD *)v9 = *(_DWORD *)(v11 + 16);
        Size[0] = 4;
        updated = 0;
      }
      goto LABEL_147;
    default:
      updated = -1073741808;
      goto LABEL_146;
  }
}
