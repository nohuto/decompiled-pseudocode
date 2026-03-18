/*
 * XREFs of ExAllocatePoolWithQuotaTag @ 0x14009EE00
 * Callers:
 *     IopAllocateIrpPrivate @ 0x1400375B0 (IopAllocateIrpPrivate.c)
 *     NtGetWriteWatch @ 0x14005C290 (NtGetWriteWatch.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x1400896A4 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14008CFF8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     PiControlAllocateBufferForUserModeCaller @ 0x1400D4E9C (PiControlAllocateBufferForUserModeCaller.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400DE82C (IopVerifierExAllocatePoolWithQuota_1.c)
 *     RtlInsertDynamicFunctionTable @ 0x1400E4940 (RtlInsertDynamicFunctionTable.c)
 *     PopCaptureReasonContext @ 0x1401055A8 (PopCaptureReasonContext.c)
 *     RtlIsUntrustedObject @ 0x140132B70 (RtlIsUntrustedObject.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x140154138 (IopVerifierExAllocatePoolWithQuota_2.c)
 *     FsRtlAllocatePoolWithQuota @ 0x140282F60 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x140282F90 (FsRtlAllocatePoolWithQuotaTag.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x140299440 (IopVerifierExAllocatePoolWithQuota_3.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x14029AA78 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     IopVerifierExAllocatePoolWithQuota_5 @ 0x14029ABE0 (IopVerifierExAllocatePoolWithQuota_5.c)
 *     PsSetCpuQuotaInformation @ 0x1403067E8 (PsSetCpuQuotaInformation.c)
 *     ExAllocatePoolWithQuota @ 0x140338C30 (ExAllocatePoolWithQuota.c)
 *     ExGetWakeTimerList @ 0x14033B030 (ExGetWakeTimerList.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1405BDCCC (PiControlMakeUserModeCallersCopy.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x1405C5EB0 (FsRtlAllocateExtraCreateParameter.c)
 *     NtQueryDirectoryObject @ 0x1405C68B0 (NtQueryDirectoryObject.c)
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     PspBuildCreateProcessContext @ 0x14060D280 (PspBuildCreateProcessContext.c)
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     IopCreateFile @ 0x140618CB0 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x140619E40 (FsRtlAllocateExtraCreateParameterList.c)
 *     CmpAllocatePostBlock @ 0x14062FC90 (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x14062FDF0 (CmpNotifyChangeKey.c)
 *     CmpNameFromAttributes @ 0x14063D5C0 (CmpNameFromAttributes.c)
 *     NtTraceControl @ 0x14064C530 (NtTraceControl.c)
 *     ExpWnfCreateNameInstance @ 0x140653EBC (ExpWnfCreateNameInstance.c)
 *     ExpWnfWriteStateData @ 0x14065491C (ExpWnfWriteStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x140656614 (ExpWnfSubscribeNameInstance.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     NtCreateWorkerFactory @ 0x140680E40 (NtCreateWorkerFactory.c)
 *     IopAllocateMiniCompletionPacket @ 0x14068178C (IopAllocateMiniCompletionPacket.c)
 *     ExLockUserBuffer @ 0x1406A49BC (ExLockUserBuffer.c)
 *     PspCaptureUserProcessParameters @ 0x1406B2990 (PspCaptureUserProcessParameters.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406D39F4 (RtlpProcessIFEOKeyFilter.c)
 *     NtQueueApcThreadEx @ 0x1406D84B0 (NtQueueApcThreadEx.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406DADE4 (ExpGetSystemFirmwareTableInformation.c)
 *     PspReadIFEOPerfOptions @ 0x1406DD06C (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1406DD260 (RtlQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x1406DD5F4 (RtlAcquirePrivilege.c)
 *     NtRegisterThreadTerminatePort @ 0x1406EC0D0 (NtRegisterThreadTerminatePort.c)
 *     DbgkRegisterErrorPort @ 0x140729B54 (DbgkRegisterErrorPort.c)
 *     RtlQueryModuleInformation @ 0x140742B20 (RtlQueryModuleInformation.c)
 *     PspIsDfssEnabled @ 0x140763D94 (PspIsDfssEnabled.c)
 *     CmpSaveKeyByFileCopy @ 0x14083BD00 (CmpSaveKeyByFileCopy.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x1408422C8 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     DbgkpQueueMessage @ 0x1408483C8 (DbgkpQueueMessage.c)
 *     KeEnableProfiling @ 0x14087EEE8 (KeEnableProfiling.c)
 *     PsCreateVsmEnclave @ 0x1408CBB04 (PsCreateVsmEnclave.c)
 *     PsInitializeVsmEnclave @ 0x1408CC168 (PsInitializeVsmEnclave.c)
 *     PspPrepareEnclaveThreadWait @ 0x1408CC624 (PspPrepareEnclaveThreadWait.c)
 *     PspVsmEnclaveHashAllocator @ 0x1408CC954 (PspVsmEnclaveHashAllocator.c)
 *     RtlAddResourceAttributeAce @ 0x1408D05A0 (RtlAddResourceAttributeAce.c)
 *     RtlAllocateAndInitializeSidEx @ 0x1408D1300 (RtlAllocateAndInitializeSidEx.c)
 *     RtlGetAppContainerParent @ 0x1408D1800 (RtlGetAppContainerParent.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1408D23A0 (RtlpGetPolicyValueForSystemCapability.c)
 *     NtQuerySecurityPolicy @ 0x1408D9340 (NtQuerySecurityPolicy.c)
 *     ExpGetDeviceDataInformation @ 0x140908970 (ExpGetDeviceDataInformation.c)
 *     ExpQueryElamCertInfo @ 0x140909244 (ExpQueryElamCertInfo.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14090997C (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpStringCapture @ 0x140909FB4 (ExpStringCapture.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140972520 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140981DE0 (VerifierPortExAllocatePoolWithQuotaTag.c)
 * Callees:
 *     ExGetHeapFromVA @ 0x14000331C (ExGetHeapFromVA.c)
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     PspExpandQuota @ 0x14012D310 (PspExpandQuota.c)
 *     ExpHpIsSpecialPoolHeap @ 0x14019D65C (ExpHpIsSpecialPoolHeap.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1402ED44C (ObpPushStackInfo.c)
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
