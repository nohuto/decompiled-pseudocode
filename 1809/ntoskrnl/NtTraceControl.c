/*
 * XREFs of NtTraceControl @ 0x1405C2F40
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140742AC0 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x140742D58 (PerfDiagpUpdateCKCLEnableFlags.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1408B0C30 (PerfDiagpSaveActiveDCLLogFileName.c)
 * Callees:
 *     EtwpCreateActivityId @ 0x140014E00 (EtwpCreateActivityId.c)
 *     PsGetCurrentThreadProcessId @ 0x14004D240 (PsGetCurrentThreadProcessId.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B7670 (ExAllocatePoolWithQuotaTag.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109D40 (PsGetCurrentServerSiloGlobals.c)
 *     memmove @ 0x1401D1540 (memmove.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     WdiUpdateSem @ 0x14030DD34 (WdiUpdateSem.c)
 *     EtwpGetCompressionSettings @ 0x1403153EC (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1403158AC (EtwpSetCompressionSettings.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     EtwpAddNotificationEvent @ 0x1405C02F4 (EtwpAddNotificationEvent.c)
 *     EtwpReceiveNotification @ 0x1405C0E00 (EtwpReceiveNotification.c)
 *     EtwpRegisterUMGuid @ 0x1405C3970 (EtwpRegisterUMGuid.c)
 *     EtwpSetProviderTraitsUm @ 0x1405C4840 (EtwpSetProviderTraitsUm.c)
 *     ProbeForWrite @ 0x140629A60 (ProbeForWrite.c)
 *     EtwpEnableGuid @ 0x140655F38 (EtwpEnableGuid.c)
 *     EtwpNotifyGuid @ 0x140658888 (EtwpNotifyGuid.c)
 *     EtwpSendReplyDataBlock @ 0x140658EB0 (EtwpSendReplyDataBlock.c)
 *     EtwpStopTrace @ 0x140658F90 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x140659D80 (EtwpQueryTrace.c)
 *     EtwpValidateLoggerInfo @ 0x140659F38 (EtwpValidateLoggerInfo.c)
 *     EtwpFlushTrace @ 0x1406C2940 (EtwpFlushTrace.c)
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x1406C2A80 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpRealtimeConnect @ 0x1406C2AF8 (EtwpRealtimeConnect.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406CADEC (EtwpReceiveReplyDataBlock.c)
 *     EtwpStartTrace @ 0x1406CDCAC (EtwpStartTrace.c)
 *     EtwpEnumerateTraceGuids @ 0x1406D4A90 (EtwpEnumerateTraceGuids.c)
 *     WdiDispatchControl @ 0x14071745C (WdiDispatchControl.c)
 *     EtwpTrackProviderBinary @ 0x14071D48C (EtwpTrackProviderBinary.c)
 *     EtwpUpdateTrace @ 0x140725ADC (EtwpUpdateTrace.c)
 *     EtwpUpdateDisallowList @ 0x1408B5810 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1408B5A88 (EtwpGetDisallowList.c)
 *     EtwpGetTraceGroupInfo @ 0x1408B5B64 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGroupList @ 0x1408B5DD8 (EtwpGetTraceGroupList.c)
 *     EtwpGetTraceGuidInfo @ 0x1408B5E78 (EtwpGetTraceGuidInfo.c)
 *     EtwpGetTraceGuidList @ 0x1408B63BC (EtwpGetTraceGuidList.c)
 *     EtwpUseDescriptorTypeUm @ 0x1408B6488 (EtwpUseDescriptorTypeUm.c)
 *     EtwpIncrementTraceFile @ 0x1408B6510 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x1408B65F8 (EtwpQueryReferenceTime.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1408BFE24 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpQuerySessionDemuxObject @ 0x1408C0024 (EtwpQuerySessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x1408C0098 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408C034C (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpSetProviderBinaryTracking @ 0x1408C2958 (EtwpSetProviderBinaryTracking.c)
 */

__int64 __fastcall NtTraceControl(
        unsigned int a1,
        unsigned int *a2,
        unsigned int a3,
        volatile void *a4,
        unsigned int Length,
        _DWORD *a6)
{
  unsigned int v7; // esi
  _QWORD *v8; // r15
  _QWORD *v9; // rdi
  char PreviousMode; // bl
  __int64 v11; // r14
  unsigned int v12; // r13d
  int v13; // eax
  __int64 v14; // rbx
  int updated; // ebx
  int v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // esi
  SIZE_T v19; // rdx
  _QWORD *PoolWithQuotaTag; // rax
  unsigned __int64 v21; // r8
  __int64 v22; // rdx
  void *v24; // rcx
  unsigned __int64 v25; // rsi
  void *v26; // rcx
  unsigned int v27; // edx
  __int64 v28; // r8
  __int64 v29; // rdx
  _QWORD *CurrentServerSiloGlobals; // rax
  _DWORD *v31; // rcx
  __int64 v32; // rdx
  _WORD v34[2]; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v35; // [rsp+34h] [rbp-64h]
  _DWORD Size[4]; // [rsp+38h] [rbp-60h] BYREF
  void *Src; // [rsp+48h] [rbp-50h]
  __int64 v38; // [rsp+50h] [rbp-48h]
  void *v39; // [rsp+58h] [rbp-40h]

  v7 = a1;
  v35 = a1;
  v8 = 0LL;
  v9 = 0LL;
  Src = 0LL;
  Size[0] = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  LOBYTE(v12) = 0;
  if ( PreviousMode )
  {
    v12 = v7 >> 31;
    v13 = v7 & 0x7FFFFFFF;
    if ( (v7 & 0x80000000) == 0 )
      v13 = v7;
    v7 = v13;
    v35 = v13;
    v14 = 0x7FFFFFFF0000LL;
    if ( a2 )
    {
      if ( a3 && ((unsigned __int64)a2 + a3 > 0x7FFFFFFF0000LL || (unsigned int *)((char *)a2 + a3) < a2) )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      a3 = 0;
    }
    if ( a4 )
      ProbeForWrite(a4, Length, 1u);
    else
      Length = 0;
    if ( !a6 )
    {
      updated = -1073741811;
      Size[1] = -1073741811;
      goto LABEL_158;
    }
    if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
      v14 = (__int64)a6;
    *(_DWORD *)v14 = *(_DWORD *)v14;
  }
  if ( v7 <= 0x1B && (v16 = 134238208, _bittest(&v16, v7)) )
  {
    v17 = Length;
    v18 = a3;
  }
  else
  {
    v18 = a3;
    v17 = Length;
    if ( a3 || Length )
    {
      v19 = Length;
      if ( a3 > Length )
        v19 = a3;
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v19, 0x50777445u);
      v9 = PoolWithQuotaTag;
      Src = PoolWithQuotaTag;
      if ( !PoolWithQuotaTag )
      {
        updated = -1073741801;
        goto LABEL_158;
      }
      memset(PoolWithQuotaTag, 0, Length);
      if ( a2 )
        memmove(v9, a2, a3);
    }
  }
  v21 = 0x140000000uLL;
  switch ( v35 )
  {
    case 1u:
    case 2u:
    case 3u:
    case 4u:
    case 5u:
    case 6u:
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
    case 0xBu:
      if ( v18 != 96 || v17 != 96 )
        goto LABEL_67;
      updated = EtwpRealtimeConnect(v9);
      Size[0] = 96;
      goto LABEL_146;
    case 0xCu:
      if ( v17 != 16 )
        goto LABEL_67;
      updated = 0;
      EtwpCreateActivityId((volatile signed __int64 *)a4);
      v25 = v35;
      goto LABEL_147;
    case 0xDu:
      if ( v18 != 48 || v17 )
        goto LABEL_67;
      updated = WdiDispatchControl(v9);
      goto LABEL_146;
    case 0xEu:
      if ( v18 != 8 || v17 )
        goto LABEL_67;
      v38 = *a2;
      updated = EtwpRealtimeDisconnectConsumerByHandle();
      goto LABEL_146;
    case 0xFu:
      if ( v18 != 160 || v17 - 160 > 0xFF60 )
        goto LABEL_67;
      updated = EtwpRegisterUMGuid(v11, (_DWORD)v9, v17, (unsigned __int8)v12, (__int64)Size);
      goto LABEL_146;
    case 0x10u:
      if ( v18 || v17 - 72 > 0xFFB8 )
        goto LABEL_67;
      updated = EtwpReceiveNotification(v9, v17, v12, Size);
      goto LABEL_146;
    case 0x11u:
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
    case 0x12u:
      if ( v18 < 0x48 || *((_DWORD *)v9 + 1) != v18 )
        goto LABEL_67;
      *((_DWORD *)v9 + 9) = PsGetCurrentThreadProcessId();
      updated = EtwpSendReplyDataBlock(v9);
      goto LABEL_146;
    case 0x13u:
      if ( v18 != 8 )
        goto LABEL_67;
      updated = EtwpReceiveReplyDataBlock(v9);
      Size[0] = Size[2];
      goto LABEL_146;
    case 0x14u:
      if ( v18 || v17 )
        goto LABEL_67;
      updated = WdiUpdateSem();
      goto LABEL_146;
    case 0x15u:
      Size[0] = v17;
      updated = EtwpGetTraceGuidList(v11, v9, Size);
      goto LABEL_146;
    case 0x16u:
      if ( v18 != 16 )
        goto LABEL_67;
      Size[0] = v17;
      updated = EtwpGetTraceGuidInfo(v11, v9, v9, Size);
      goto LABEL_146;
    case 0x17u:
      Size[0] = v17;
      updated = EtwpEnumerateTraceGuids(v11, v9, Size);
      goto LABEL_146;
    case 0x18u:
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
    case 0x19u:
      if ( v18 != 4 || v17 != 16 )
        goto LABEL_67;
      updated = EtwpQueryReferenceTime(v11, *(unsigned int *)v9, v9);
      Size[0] = 16;
      goto LABEL_146;
    case 0x1Au:
      if ( v18 != 8 )
        goto LABEL_67;
      updated = EtwpTrackProviderBinary(v11, v9);
      Size[0] = 0;
      goto LABEL_146;
    case 0x1Bu:
      if ( v18 != 4 )
        goto LABEL_67;
      v26 = (void *)*a2;
      v39 = v26;
      if ( !v26 )
        goto LABEL_67;
      updated = EtwpAddNotificationEvent(v26, v12);
      goto LABEL_146;
    case 0x1Cu:
      if ( v18 < 8 )
        goto LABEL_67;
      v27 = *((_DWORD *)v9 + 1);
      if ( 16LL * v27 + 8 != v18 )
        goto LABEL_67;
      if ( v27 )
        v8 = v9 + 1;
      updated = EtwpUpdateDisallowList(v11, *(unsigned int *)v9, v27, v8);
      goto LABEL_146;
    case 0x1Eu:
      if ( v18 != 24 || v17 - 120 > 0xFF88 )
        goto LABEL_67;
      updated = EtwpSetProviderTraitsUm((_DWORD)v9, v17, (unsigned int)Size);
      goto LABEL_146;
    case 0x1Fu:
      if ( v18 != 16 || v17 )
        goto LABEL_67;
      updated = EtwpUseDescriptorTypeUm(v9);
      goto LABEL_146;
    case 0x20u:
      Size[0] = v17;
      updated = EtwpGetTraceGroupList(v11, v9, Size);
      goto LABEL_146;
    case 0x21u:
      if ( v18 != 16 )
        goto LABEL_67;
      Size[0] = v17;
      updated = EtwpGetTraceGroupInfo(v11, v9, v9, Size);
      goto LABEL_146;
    case 0x22u:
      if ( v18 != 8 )
        goto LABEL_67;
      Size[0] = v17;
      updated = EtwpGetDisallowList(v11, v9, v9, Size);
      goto LABEL_146;
    case 0x23u:
      if ( v18 != 16 || v17 )
        goto LABEL_67;
      updated = EtwpSetCompressionSettings((unsigned int *)v9);
      goto LABEL_146;
    case 0x24u:
      if ( v18 != 8 || v17 != 16 )
        goto LABEL_67;
      Size[0] = 16;
      updated = EtwpGetCompressionSettings((unsigned __int16 *)v9, (unsigned int *)v9);
      if ( !updated )
        Size[0] = 16;
      goto LABEL_146;
    case 0x25u:
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
      v25 = v35;
      v24 = (void *)a4;
LABEL_147:
      if ( updated < 0 )
      {
        v31 = a6;
      }
      else
      {
        if ( Size[0] )
          memmove(v24, v9, Size[0]);
        v31 = a6;
        *a6 = Size[0];
      }
      if ( updated == -1073741789 && ((unsigned int)(v25 - 15) <= 1 || (unsigned int)(v25 - 21) <= 1)
        || (unsigned int)v25 <= 0x28 && (v32 = 0x1D700880000LL, _bittest64(&v32, v25)) )
      {
        *v31 = Size[0];
      }
LABEL_158:
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      return (unsigned int)updated;
    case 0x26u:
      if ( v18 < 8 || (v18 & 7) != 0 || v17 < 2 )
        goto LABEL_67;
      updated = EtwpGetPrivateSessionTraceHandle(v9, v18 >> 3, v34);
      if ( !updated )
      {
        Size[0] = 2;
        *(_WORD *)v9 = v34[0];
      }
      goto LABEL_146;
    case 0x27u:
      if ( v18 < 2 || v17 < 8 )
        goto LABEL_67;
      CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
      updated = EtwpRegisterPrivateSession(CurrentServerSiloGlobals[108], *(unsigned __int16 *)v9, (char *)v9 + 4, v9);
      if ( !updated )
        Size[0] = 8;
      goto LABEL_146;
    case 0x28u:
      if ( v18 < 8 || v17 < 2 )
        goto LABEL_67;
      updated = EtwpQuerySessionDemuxObject(*v9, v9);
      if ( !updated )
        Size[0] = 2;
      goto LABEL_146;
    case 0x29u:
      if ( v18 < 8 )
        goto LABEL_67;
      updated = EtwpSetProviderBinaryTracking(v11, *(unsigned int *)v9, *((unsigned __int8 *)v9 + 4));
      goto LABEL_146;
    case 0x2Au:
      v25 = v35;
      v24 = (void *)a4;
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
