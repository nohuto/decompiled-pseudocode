/*
 * XREFs of ExAllocatePoolWithQuotaTag @ 0x1400B75B0
 * Callers:
 *     PiControlAllocateBufferForUserModeCaller @ 0x140001D7C (PiControlAllocateBufferForUserModeCaller.c)
 *     PopCaptureReasonContext @ 0x140002318 (PopCaptureReasonContext.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140013018 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     NtGetWriteWatch @ 0x140086AC0 (NtGetWriteWatch.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x14008C8B0 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopAllocateIrpPrivate @ 0x1400B9250 (IopAllocateIrpPrivate.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140101DB8 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     RtlInsertDynamicFunctionTable @ 0x140113DC0 (RtlInsertDynamicFunctionTable.c)
 *     RtlIsUntrustedObject @ 0x140131C70 (RtlIsUntrustedObject.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140135748 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x14013FD3C (IopVerifierExAllocatePoolWithQuota_2.c)
 *     FsRtlAllocatePoolWithQuota @ 0x14026F890 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x14026F8C0 (FsRtlAllocatePoolWithQuotaTag.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x14028458C (IopVerifierExAllocatePoolWithQuota_3.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x140285CD0 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     PsSetCpuQuotaInformation @ 0x1402E9948 (PsSetCpuQuotaInformation.c)
 *     ExAllocatePoolWithQuota @ 0x14031A650 (ExAllocatePoolWithQuota.c)
 *     ExGetWakeTimerList @ 0x14031C820 (ExGetWakeTimerList.c)
 *     PiControlMakeUserModeCallersCopy @ 0x140598F3C (PiControlMakeUserModeCallersCopy.c)
 *     CmpNameFromAttributes @ 0x1405B8860 (CmpNameFromAttributes.c)
 *     NtTraceControl @ 0x1405C3F40 (NtTraceControl.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x1405C91E0 (FsRtlAllocateExtraCreateParameter.c)
 *     CmpAllocatePostBlock @ 0x1405CFF38 (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x1405D0040 (CmpNotifyChangeKey.c)
 *     IopXxxControlFile @ 0x1405E9BD0 (IopXxxControlFile.c)
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 *     PspCaptureUserProcessParameters @ 0x140607D50 (PspCaptureUserProcessParameters.c)
 *     IopCreateFile @ 0x14060CAC0 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x14060E4D0 (FsRtlAllocateExtraCreateParameterList.c)
 *     ExpWnfCreateNameInstance @ 0x14060F058 (ExpWnfCreateNameInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x14061134C (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfWriteStateData @ 0x140611CD0 (ExpWnfWriteStateData.c)
 *     PspBuildCreateProcessContext @ 0x140623378 (PspBuildCreateProcessContext.c)
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 *     NtQueryInformationFile @ 0x14063BA30 (NtQueryInformationFile.c)
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 *     NtQueueApcThreadEx @ 0x140678850 (NtQueueApcThreadEx.c)
 *     NtCreateWorkerFactory @ 0x14068B3B0 (NtCreateWorkerFactory.c)
 *     IopAllocateMiniCompletionPacket @ 0x14068BA7C (IopAllocateMiniCompletionPacket.c)
 *     NtQueryDirectoryObject @ 0x14068EE90 (NtQueryDirectoryObject.c)
 *     ExLockUserBuffer @ 0x14069FBD8 (ExLockUserBuffer.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406B2D64 (RtlpProcessIFEOKeyFilter.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406B92A0 (ExpGetSystemFirmwareTableInformation.c)
 *     RtlAcquirePrivilege @ 0x1406BBE6C (RtlAcquirePrivilege.c)
 *     PspReadIFEONodeOptions @ 0x1406BC2D0 (PspReadIFEONodeOptions.c)
 *     PspReadIFEOPerfOptions @ 0x1406BC450 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1406BC640 (RtlQueryImageFileKeyOption.c)
 *     NtRegisterThreadTerminatePort @ 0x1406CBF10 (NtRegisterThreadTerminatePort.c)
 *     DbgkRegisterErrorPort @ 0x140703740 (DbgkRegisterErrorPort.c)
 *     RtlQueryModuleInformation @ 0x140717610 (RtlQueryModuleInformation.c)
 *     PspIsDfssEnabled @ 0x140734FD0 (PspIsDfssEnabled.c)
 *     CmpSaveKeyByFileCopy @ 0x140804490 (CmpSaveKeyByFileCopy.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x14080A59C (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     DbgkpQueueMessage @ 0x140810604 (DbgkpQueueMessage.c)
 *     KeEnableProfiling @ 0x140845628 (KeEnableProfiling.c)
 *     PsCreateVsmEnclave @ 0x14088EDFC (PsCreateVsmEnclave.c)
 *     PsInitializeVsmEnclave @ 0x14088F43C (PsInitializeVsmEnclave.c)
 *     PspPrepareEnclaveThreadWait @ 0x14088F86C (PspPrepareEnclaveThreadWait.c)
 *     PspVsmEnclaveHashAllocator @ 0x14088FBCC (PspVsmEnclaveHashAllocator.c)
 *     RtlAddResourceAttributeAce @ 0x140893C90 (RtlAddResourceAttributeAce.c)
 *     RtlAllocateAndInitializeSidEx @ 0x140894A8C (RtlAllocateAndInitializeSidEx.c)
 *     RtlGetAppContainerParent @ 0x140894FC0 (RtlGetAppContainerParent.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140895DF0 (RtlpGetPolicyValueForSystemCapability.c)
 *     NtQuerySecurityPolicy @ 0x14089C1A0 (NtQuerySecurityPolicy.c)
 *     ExpGetDeviceDataInformation @ 0x1408CC820 (ExpGetDeviceDataInformation.c)
 *     ExpQueryElamCertInfo @ 0x1408CD1D0 (ExpQueryElamCertInfo.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1408CD8C4 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpStringCapture @ 0x1408CDF2C (ExpStringCapture.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140926500 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140943500 (VerifierPortExAllocatePoolWithQuotaTag.c)
 * Callees:
 *     ExIsSpecialPoolAddress @ 0x14000E140 (ExIsSpecialPoolAddress.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     PspExpandQuota @ 0x14012A9D8 (PspExpandQuota.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
  NTSTATUS v32; // esi
  signed __int32 v33[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v34; // [rsp+30h] [rbp-48h] BYREF
  __int64 v35; // [rsp+38h] [rbp-40h]
  char v36; // [rsp+80h] [rbp+8h]
  char *v38; // [rsp+98h] [rbp+20h]

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
  if ( ExpSpecialAllocations && (unsigned int)ExIsSpecialPoolAddress(PoolWithTag) || (v6 & 8) == 0 )
    return v8;
  v9 = *((_WORD *)v8 - 7);
  v10 = v8 - 16;
  v11 = ExpPoolQuotaCookie;
  v12 = 0LL;
  v13 = (unsigned __int8)v9;
  v38 = 0LL;
  *((_QWORD *)v8 - 1) = (unsigned __int64)(v8 - 16) ^ ExpPoolQuotaCookie;
  if ( (v9 & 0x400) != 0 )
  {
    v12 = &v10[-16 * (unsigned __int8)*(_WORD *)v10];
    v38 = v12;
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
  v16 = (unsigned __int64 *)(Process[1].ActiveProcessors.Bitmap[4] + ((unsigned __int64)(unsigned int)v15 << 7));
  v17 = PspResourceFlags[8 * v15];
  v36 = v17;
  v35 = 8 * v15;
  _m_prefetchw(v16);
  v18 = *v16;
  _InterlockedOr(v33, 0);
LABEL_12:
  v19 = v16[8];
LABEL_13:
  v34 = v19;
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
    if ( !(unsigned __int8)PspExpandQuota(v15, (_DWORD)v16, v18, v14, (__int64)&v34) )
      break;
    v19 = v34;
    v17 = v36;
  }
  v32 = *(_DWORD *)&PspResourceFlags[v35 + 4];
  if ( v32 >= 0 )
  {
LABEL_20:
    v12 = v38;
    goto LABEL_21;
  }
  ExFreePoolWithTag(v8, Tag);
  if ( !v4 )
    RtlRaiseStatus(v32);
  return 0LL;
}
