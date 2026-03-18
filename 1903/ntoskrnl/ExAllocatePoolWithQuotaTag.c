/*
 * XREFs of ExAllocatePoolWithQuotaTag @ 0x1400BEF80
 * Callers:
 *     IopAllocateIrpPrivate @ 0x1400371B0 (IopAllocateIrpPrivate.c)
 *     NtGetWriteWatch @ 0x14005C1F0 (NtGetWriteWatch.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x1400883A4 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14008BCF8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     RtlInsertDynamicFunctionTable @ 0x1400AE3F0 (RtlInsertDynamicFunctionTable.c)
 *     PopCaptureReasonContext @ 0x1400EB774 (PopCaptureReasonContext.c)
 *     PiControlAllocateBufferForUserModeCaller @ 0x1400EE5E4 (PiControlAllocateBufferForUserModeCaller.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400EEE18 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     RtlIsUntrustedObject @ 0x1401340C0 (RtlIsUntrustedObject.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x140153A98 (IopVerifierExAllocatePoolWithQuota_2.c)
 *     FsRtlAllocatePoolWithQuota @ 0x140283200 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x140283230 (FsRtlAllocatePoolWithQuotaTag.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x1402996E0 (IopVerifierExAllocatePoolWithQuota_3.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x14029AD18 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     IopVerifierExAllocatePoolWithQuota_5 @ 0x14029AE80 (IopVerifierExAllocatePoolWithQuota_5.c)
 *     PsSetCpuQuotaInformation @ 0x140306D38 (PsSetCpuQuotaInformation.c)
 *     ExAllocatePoolWithQuota @ 0x1403391D0 (ExAllocatePoolWithQuota.c)
 *     ExGetWakeTimerList @ 0x14033B5D0 (ExGetWakeTimerList.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1405BD8EC (PiControlMakeUserModeCallersCopy.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x1405C59B0 (FsRtlAllocateExtraCreateParameter.c)
 *     NtQueryDirectoryObject @ 0x1405C63B0 (NtQueryDirectoryObject.c)
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 *     PspBuildCreateProcessContext @ 0x14060B770 (PspBuildCreateProcessContext.c)
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     IopCreateFile @ 0x1406171A0 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x140618330 (FsRtlAllocateExtraCreateParameterList.c)
 *     CmpAllocatePostBlock @ 0x14062BE40 (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x14062BFA0 (CmpNotifyChangeKey.c)
 *     CmpNameFromAttributes @ 0x14063A530 (CmpNameFromAttributes.c)
 *     ExpWnfCreateNameInstance @ 0x14064036C (ExpWnfCreateNameInstance.c)
 *     ExpWnfWriteStateData @ 0x140640DCC (ExpWnfWriteStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x140642AC4 (ExpWnfSubscribeNameInstance.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     NtTraceControl @ 0x1406865C0 (NtTraceControl.c)
 *     NtCreateWorkerFactory @ 0x14068D8D0 (NtCreateWorkerFactory.c)
 *     IopAllocateMiniCompletionPacket @ 0x14068E21C (IopAllocateMiniCompletionPacket.c)
 *     PspCaptureUserProcessParameters @ 0x1406B0910 (PspCaptureUserProcessParameters.c)
 *     ExLockUserBuffer @ 0x1406BF9BC (ExLockUserBuffer.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406D430C (RtlpProcessIFEOKeyFilter.c)
 *     NtQueueApcThreadEx @ 0x1406D8840 (NtQueueApcThreadEx.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406DA4E4 (ExpGetSystemFirmwareTableInformation.c)
 *     PspReadIFEOPerfOptions @ 0x1406DC3E4 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1406DC5E0 (RtlQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x1406DC974 (RtlAcquirePrivilege.c)
 *     NtRegisterThreadTerminatePort @ 0x1406EAE10 (NtRegisterThreadTerminatePort.c)
 *     DbgkRegisterErrorPort @ 0x1407287E4 (DbgkRegisterErrorPort.c)
 *     RtlQueryModuleInformation @ 0x140740C20 (RtlQueryModuleInformation.c)
 *     PspIsDfssEnabled @ 0x14075F470 (PspIsDfssEnabled.c)
 *     CmpSaveKeyByFileCopy @ 0x14083C6A0 (CmpSaveKeyByFileCopy.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x140842C58 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     DbgkpQueueMessage @ 0x140848CC8 (DbgkpQueueMessage.c)
 *     KeEnableProfiling @ 0x14087F7E8 (KeEnableProfiling.c)
 *     PsCreateVsmEnclave @ 0x1408CC224 (PsCreateVsmEnclave.c)
 *     PsInitializeVsmEnclave @ 0x1408CC888 (PsInitializeVsmEnclave.c)
 *     PspPrepareEnclaveThreadWait @ 0x1408CCD44 (PspPrepareEnclaveThreadWait.c)
 *     PspVsmEnclaveHashAllocator @ 0x1408CD074 (PspVsmEnclaveHashAllocator.c)
 *     RtlAddResourceAttributeAce @ 0x1408D0CA0 (RtlAddResourceAttributeAce.c)
 *     RtlAllocateAndInitializeSidEx @ 0x1408D1A00 (RtlAllocateAndInitializeSidEx.c)
 *     RtlGetAppContainerParent @ 0x1408D1F00 (RtlGetAppContainerParent.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1408D2AA0 (RtlpGetPolicyValueForSystemCapability.c)
 *     NtQuerySecurityPolicy @ 0x1408D9A40 (NtQuerySecurityPolicy.c)
 *     ExpGetDeviceDataInformation @ 0x140908F10 (ExpGetDeviceDataInformation.c)
 *     ExpQueryElamCertInfo @ 0x1409097E4 (ExpQueryElamCertInfo.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x140909F1C (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpStringCapture @ 0x14090A554 (ExpStringCapture.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140972520 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140981DE0 (VerifierPortExAllocatePoolWithQuotaTag.c)
 * Callees:
 *     ExGetHeapFromVA @ 0x14000331C (ExGetHeapFromVA.c)
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     PspExpandQuota @ 0x14012C840 (PspExpandQuota.c)
 *     ExpHpIsSpecialPoolHeap @ 0x14019CEDC (ExpHpIsSpecialPoolHeap.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1402ED6EC (ObpPushStackInfo.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

PVOID __stdcall ExAllocatePoolWithQuotaTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  unsigned __int32 v3; // r9d
  __int32 v4; // r13d
  PEPROCESS Process; // rdi
  POOL_TYPE v6; // ebp
  ULONG_PTR PoolWithTag; // rax
  char *v8; // r15
  __int16 v9; // cx
  char *v10; // rbx
  __int64 v11; // rdx
  char *v12; // r8
  __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  __int64 v15; // rbp
  unsigned __int64 *v16; // r14
  char v17; // r8
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  bool v21; // zf
  signed __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  signed __int64 BugCheckParameter4; // rbx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  __int64 HeapFromVA; // rax
  NTSTATUS v33; // esi
  signed __int32 v34[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v35; // [rsp+30h] [rbp-48h] BYREF
  __int64 v36; // [rsp+38h] [rbp-40h]
  char v37; // [rsp+80h] [rbp+8h]
  char *v39; // [rsp+98h] [rbp+20h]

  v3 = PoolType & 0xFFFFFFF7;
  v4 = PoolType & 8;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (PoolType & 8) == 0 )
    v3 = PoolType;
  v6 = v3 + 8;
  if ( Process == PsInitialSystemProcess )
    v6 = v3;
  PoolWithTag = (ULONG_PTR)ExAllocatePoolWithTag(v6, NumberOfBytes, Tag);
  v8 = (char *)PoolWithTag;
  if ( (PoolWithTag & 0xFFF) == 0 )
  {
    if ( !PoolWithTag && !v4 )
      RtlRaiseStatus(-1073741670);
    return v8;
  }
  if ( ExpSpecialAllocations )
  {
    HeapFromVA = ExGetHeapFromVA(PoolWithTag);
    if ( (unsigned int)ExpHpIsSpecialPoolHeap(HeapFromVA) )
      return v8;
  }
  if ( (v6 & 8) == 0 )
    return v8;
  v9 = *((_WORD *)v8 - 7);
  v10 = v8 - 16;
  v11 = ExpPoolQuotaCookie;
  v12 = 0LL;
  v13 = (unsigned __int8)v9;
  v39 = 0LL;
  *((_QWORD *)v8 - 1) = (unsigned __int64)(v8 - 16) ^ ExpPoolQuotaCookie;
  if ( (v9 & 0x400) != 0 )
  {
    v12 = &v10[-16 * (unsigned __int8)*(_WORD *)v10];
    v39 = v12;
    v13 = (unsigned __int8)*((_WORD *)v12 + 1);
    *((_QWORD *)v12 + 1) = (unsigned __int64)v12 ^ v11;
  }
  v14 = 16 * v13;
  if ( Process == PsInitialSystemProcess )
  {
LABEL_21:
    v26 = ExpPoolQuotaCookie;
    *((_QWORD *)v10 + 1) = (unsigned __int64)Process ^ (unsigned __int64)v10 ^ ExpPoolQuotaCookie;
    if ( v12 )
      *((_QWORD *)v12 + 1) = (unsigned __int64)Process ^ (unsigned __int64)v12 ^ v26;
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)Process - 48);
    BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)&Process[-1].Spare2[39]);
    if ( BugCheckParameter4 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Process, 0x10uLL, BugCheckParameter4);
    return v8;
  }
  v15 = v6 & 1;
  v16 = (unsigned __int64 *)(Process[1].ActiveProcessors.Bitmap[3] + ((unsigned __int64)(unsigned int)v15 << 7));
  v17 = PspResourceFlags[8 * v15];
  v37 = v17;
  v36 = 8 * v15;
  _m_prefetchw(v16);
  v18 = *v16;
  _InterlockedOr(v34, 0);
LABEL_12:
  v19 = v16[8];
LABEL_13:
  v35 = v19;
  while ( 1 )
  {
    v20 = v18 + v14;
    if ( v18 + v14 < v18 )
      break;
    if ( v20 <= v19 )
    {
      v22 = _InterlockedCompareExchange64((volatile signed __int64 *)v16, v20, v18);
      v21 = v18 == v22;
      v18 = v22;
      if ( !v21 )
        goto LABEL_12;
      _m_prefetchw(v16 + 1);
      v23 = v16[1];
      if ( v20 > v23 )
      {
        do
        {
          v30 = v23;
          v23 = _InterlockedCompareExchange64((volatile signed __int64 *)v16 + 1, v20, v23);
        }
        while ( v23 != v30 && v20 > v23 );
      }
      if ( (v17 & 4) != 0 )
      {
        v24 = v14 + _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].ThreadListHead.Blink + v15, v14);
        _m_prefetchw(&Process[1].DeepFreezeStartTime + v15);
        v25 = *(&Process[1].DeepFreezeStartTime + v15);
        if ( v24 > v25 )
        {
          do
          {
            v29 = v25;
            v25 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&Process[1].DeepFreezeStartTime + v15,
                    v24,
                    v25);
          }
          while ( v25 != v29 && v24 > v25 );
        }
      }
      goto LABEL_20;
    }
    if ( (v17 & 1) == 0 || !v16[10] )
      break;
    v31 = _InterlockedExchange64((volatile __int64 *)v16 + 9, 0LL);
    if ( v31 )
    {
      v19 = v31 + _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 8, v31);
      goto LABEL_13;
    }
    if ( !(unsigned __int8)PspExpandQuota(v15, (_DWORD)v16, v18, v14, (__int64)&v35) )
      break;
    v19 = v35;
    v17 = v37;
  }
  v33 = *(_DWORD *)&PspResourceFlags[v36 + 4];
  if ( v33 >= 0 )
  {
LABEL_20:
    v12 = v39;
    goto LABEL_21;
  }
  ExFreePoolWithTag(v8, Tag);
  if ( !v4 )
    RtlRaiseStatus(v33);
  return 0LL;
}
