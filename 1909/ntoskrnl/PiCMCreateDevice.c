/*
 * XREFs of PiCMCreateDevice @ 0x140870890
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BBB60 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140002850 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     RtlStringCchLengthW @ 0x1400EDF4C (RtlStringCchLengthW.c)
 *     RtlStringCchCopyExW @ 0x14013E378 (RtlStringCchCopyExW.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiPnpRtlEndOperation @ 0x1405BB924 (PiPnpRtlEndOperation.c)
 *     PiCMReturnBufferResultData @ 0x1405BCE40 (PiCMReturnBufferResultData.c)
 *     PiPnpRtlBeginOperation @ 0x1405BD6D8 (PiPnpRtlBeginOperation.c)
 *     _CmGetDeviceRegProp @ 0x1405C2714 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1405C3010 (_CmOpenDeviceRegKey.c)
 *     _CmValidateDeviceName @ 0x1405C3710 (_CmValidateDeviceName.c)
 *     PpDevNodeUnlockTree @ 0x14066FFEC (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140670048 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeLockTree @ 0x140670114 (PpDevNodeLockTree.c)
 *     _CmIsRootDevice @ 0x1406F3284 (_CmIsRootDevice.c)
 *     _PnpCtxRegCloseKey @ 0x1406F4868 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegQueryValue @ 0x1406F4B54 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegSetValue @ 0x14070AA00 (_PnpCtxRegSetValue.c)
 *     _CmCreateDevice @ 0x14071B3C0 (_CmCreateDevice.c)
 *     PiAuDoesClientHaveAccess @ 0x140721E80 (PiAuDoesClientHaveAccess.c)
 *     IopIsRootEnumeratedDeviceObjectActive @ 0x1407237A0 (IopIsRootEnumeratedDeviceObjectActive.c)
 *     PpDeviceRegistration @ 0x1407249B8 (PpDeviceRegistration.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140725050 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140862A0C (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140870108 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMGenerateDeviceInstance @ 0x140872074 (PiCMGenerateDeviceInstance.c)
 *     PiInitializeDevice @ 0x1408769E0 (PiInitializeDevice.c)
 *     _PnpCtxRegDeleteValue @ 0x1409335E0 (_PnpCtxRegDeleteValue.c)
 */

__int64 __fastcall PiCMCreateDevice(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  unsigned int v8; // r12d
  wchar_t *PoolWithTag; // rsi
  char v10; // r15
  int v11; // r14d
  _WORD *v12; // r13
  int DeviceInputData; // edi
  signed int inited; // ebx
  const wchar_t *v15; // r13
  char v16; // r12
  int v17; // edi
  __int64 v18; // rcx
  int v19; // r12d
  NTSTATUS v20; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  struct _KTHREAD *v25; // rax
  char PreviousMode; // bl
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // r12
  __int64 v31; // rbx
  __int64 v32; // rcx
  int DeviceRegProp; // eax
  __int64 v34; // rdx
  int v35; // ecx
  int DeviceInstanceCsConfigFlags; // eax
  char v37; // dl
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // eax
  struct _KTHREAD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // [rsp+58h] [rbp-89h] BYREF
  _WORD *v44; // [rsp+60h] [rbp-81h]
  unsigned int v45; // [rsp+68h] [rbp-79h] BYREF
  int v46; // [rsp+6Ch] [rbp-75h] BYREF
  int v47; // [rsp+70h] [rbp-71h] BYREF
  HANDLE v48; // [rsp+78h] [rbp-69h] BYREF
  size_t pcchLength; // [rsp+80h] [rbp-61h] BYREF
  int v50; // [rsp+88h] [rbp-59h] BYREF
  int v51; // [rsp+8Ch] [rbp-55h] BYREF
  int v52; // [rsp+90h] [rbp-51h] BYREF
  HANDLE v53; // [rsp+98h] [rbp-49h] BYREF
  UNICODE_STRING v54; // [rsp+A0h] [rbp-41h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-31h]
  PVOID P; // [rsp+B8h] [rbp-29h] BYREF
  NTSTRSAFE_PCWSTR v57[5]; // [rsp+C0h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp+7h] BYREF

  *(_QWORD *)&v54.Length = 0LL;
  v54.Buffer = 0LL;
  v8 = a4;
  memset(v57, 0, sizeof(v57));
  *(_QWORD *)&DestinationString.Length = 0LL;
  PoolWithTag = 0LL;
  DestinationString.Buffer = 0LL;
  v10 = 0;
  v11 = 0;
  v47 = 0;
  v12 = 0LL;
  v50 = 0;
  Object = 0LL;
  *a6 = 0;
  v48 = 0LL;
  P = 0LL;
  pcchLength = 0LL;
  v44 = 0LL;
  DeviceInputData = PiCMCaptureCreateDeviceInputData(a1, a2, a5, (char *)v57);
  if ( DeviceInputData < 0 )
    goto LABEL_46;
  if ( !PiAuDoesClientHaveAccess(2u) )
  {
    inited = -1073741790;
    goto LABEL_35;
  }
  v15 = v57[1];
  if ( !v57[1] || LODWORD(v57[2]) < 2 || !v57[3] || LODWORD(v57[4]) < 2 )
  {
    inited = -1073741811;
    v12 = 0LL;
    goto LABEL_57;
  }
  if ( !a3
    || v8 < 0x14
    || (v16 = BYTE4(v57[0]), (HIDWORD(v57[0]) & 0xFFFFFFF0) != 0)
    || (v17 = BYTE4(v57[0]) & 2, !CmIsRootDevice(v57[3])) )
  {
    inited = -1073741811;
LABEL_12:
    v12 = 0LL;
    goto LABEL_35;
  }
  inited = PiPnpRtlBeginOperation(&P);
  if ( inited < 0 )
    goto LABEL_12;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x34706E50u);
  if ( !PoolWithTag )
  {
    inited = -1073741670;
LABEL_17:
    v12 = 0LL;
    goto LABEL_35;
  }
  v19 = v16 & 4;
  if ( !v19 )
  {
    inited = CmValidateDeviceName(v18, v15);
LABEL_22:
    if ( inited < 0 )
      goto LABEL_17;
    if ( !v19 )
    {
      v20 = RtlStringCchCopyExW(PoolWithTag, 0xC8uLL, v15, 0LL, 0LL, 0x800u);
      v12 = 0LL;
      inited = v20;
      if ( v20 < 0 )
        goto LABEL_35;
    }
    inited = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)PoolWithTag, 16, 0, 131103, 0, (__int64)&v48, 0LL);
    if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741810 )
      goto LABEL_20;
    if ( v17 )
    {
      if ( v48 )
      {
LABEL_29:
        inited = -1073741771;
        goto LABEL_17;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      LOBYTE(v43) = 0;
      v10 = 1;
      inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)PoolWithTag, 131078, &v53, &v43, 0);
      if ( inited < 0 )
        goto LABEL_33;
      if ( !(_BYTE)v43 )
      {
        inited = -1073741771;
        PnpCtxRegCloseKey(v22, v53);
LABEL_33:
        v11 = pcchLength;
        goto LABEL_34;
      }
      v51 = 1;
      inited = PnpCtxRegSetValue(v22, v53, (__int64)L"Phantom", 4LL, (__int64)&v51, 4u);
      PnpCtxRegCloseKey(v28, v53);
      if ( inited < 0 )
        goto LABEL_33;
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegion();
      v11 = pcchLength;
    }
    else
    {
      if ( v48 )
      {
        if ( RtlInitUnicodeStringEx(&DestinationString, PoolWithTag) >= 0 )
        {
          PpDevNodeLockTree(0);
          v29 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
          Object = v29;
          v30 = (__int64)v29;
          if ( v29 )
            v31 = *(_QWORD *)(v29[39] + 40LL);
          else
            v31 = 0LL;
          PpDevNodeUnlockTree(0);
          if ( v31 )
          {
            if ( IopIsRootEnumeratedDeviceObjectActive(v30) )
              goto LABEL_29;
          }
          else
          {
            PiPnpRtlEnsureObjectCached(v32, PoolWithTag);
          }
        }
      }
      else
      {
        v41 = KeGetCurrentThread();
        --v41->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        LOBYTE(v43) = 0;
        v10 = 1;
        inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)PoolWithTag, 131103, &v48, &v43, 0);
        if ( inited < 0 )
          goto LABEL_33;
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegion();
        v10 = 0;
        v11 = pcchLength;
        if ( !(_BYTE)v43 )
        {
          inited = -1073741771;
          goto LABEL_34;
        }
      }
      inited = RtlInitUnicodeStringEx(&v54, PoolWithTag);
      v10 = 0;
      if ( inited < 0 )
        goto LABEL_34;
      v45 = 4;
      v46 = 0;
      DeviceRegProp = CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        (__int64)PoolWithTag,
                        (__int64)v48,
                        11,
                        (__int64)&v46,
                        (__int64)&v47,
                        (__int64)&v45,
                        0);
      v35 = v47;
      if ( DeviceRegProp < 0 )
        v35 = 0;
      v47 = v35;
      DeviceInstanceCsConfigFlags = PnpGetDeviceInstanceCsConfigFlags(&v54.Length, v34, &v50);
      v37 = v50;
      if ( DeviceInstanceCsConfigFlags < 0 )
        v37 = 0;
      if ( (v47 & 0x12) != 0 || (v37 & 2) != 0 )
      {
        inited = -1073741808;
        v10 = 0;
        goto LABEL_34;
      }
      inited = PiInitializeDevice(&v54);
      if ( inited < 0 )
      {
LABEL_34:
        v12 = v44;
        goto LABEL_35;
      }
      v45 = 4;
      if ( (int)PnpCtxRegQueryValue(v38, v48, L"Phantom", &v46, &v52, &v45) < 0 || v46 != 4 || (v40 = v52, v45 != 4) )
        v40 = 0;
      if ( v40 )
        PnpCtxRegDeleteValue(v39, v48, L"Phantom");
      if ( (BYTE4(v57[0]) & 8) != 0 )
      {
        v45 = 512;
        v12 = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x34706E50u);
        if ( !v12 )
        {
          inited = -1073741670;
          v10 = 0;
          goto LABEL_35;
        }
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)PoolWithTag,
                    (__int64)v48,
                    5,
                    (__int64)&v46,
                    (__int64)v12,
                    (__int64)&v45,
                    0) >= 0
          && v46 == 1
          && v45 <= 0x200 )
        {
          if ( *v12 )
          {
            inited = RtlInitUnicodeStringEx(&v54, PoolWithTag);
            if ( inited >= 0 )
            {
              LOBYTE(v42) = 1;
              inited = PpDeviceRegistration((__int64)&v54, v42, 0LL, 0);
            }
          }
        }
        goto LABEL_56;
      }
    }
    v12 = v44;
    goto LABEL_56;
  }
  inited = PiCMGenerateDeviceInstance(v15);
  if ( !v17 )
    goto LABEL_22;
LABEL_20:
  v12 = 0LL;
LABEL_56:
  v8 = a4;
LABEL_57:
  v10 = 0;
  if ( inited >= 0 )
  {
    inited = RtlStringCchLengthW(PoolWithTag, 0xC8uLL, &pcchLength);
    if ( inited < 0 )
    {
      v11 = 0;
    }
    else
    {
      v11 = pcchLength + 1;
      if ( (unsigned __int64)v8 - 20 < 2 * (pcchLength + 1) )
        inited = -1073741789;
    }
    v10 = 0;
    if ( inited >= 0 )
    {
      v23 = PiCMReturnBufferResultData(inited, 2 * v11, 0, PoolWithTag, 2 * v11, SHIDWORD(v57[4]), a3, v8, a6);
      v10 = 0;
      goto LABEL_36;
    }
  }
LABEL_35:
  v23 = PiCMReturnBufferResultData(inited, 2 * v11, 0, 0LL, 0, SHIDWORD(v57[4]), a3, a4, a6);
LABEL_36:
  DeviceInputData = v23;
  if ( v48 )
    PnpCtxRegCloseKey(v24, v48);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x34706E50u);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v10 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
LABEL_46:
  v25 = KeGetCurrentThread();
  PreviousMode = v25->PreviousMode;
  if ( v57[1] )
    PiControlFreeUserModeCallersBuffer(v25->PreviousMode, (void *)v57[1]);
  if ( v57[3] )
    PiControlFreeUserModeCallersBuffer(PreviousMode, (void *)v57[3]);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)DeviceInputData;
}
