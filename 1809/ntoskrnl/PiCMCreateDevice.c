/*
 * XREFs of PiCMCreateDevice @ 0x140837A14
 * Callers:
 *     PiCMHandleIoctl @ 0x1405984F0 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140006AF0 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlStringCchLengthW @ 0x14000733C (RtlStringCchLengthW.c)
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     RtlStringCchCopyExW @ 0x14013DE50 (RtlStringCchCopyExW.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiPnpRtlEndOperation @ 0x140596CA4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140597E08 (PiPnpRtlBeginOperation.c)
 *     PiCMReturnBufferResultData @ 0x14059ADD4 (PiCMReturnBufferResultData.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14059BC4C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14059CEB4 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14059CF10 (PpDevNodeLockTree.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
 *     _CmValidateDeviceName @ 0x1405C86D0 (_CmValidateDeviceName.c)
 *     _CmIsRootDevice @ 0x1406EAA2C (_CmIsRootDevice.c)
 *     PpDeviceRegistration @ 0x1406EF568 (PpDeviceRegistration.c)
 *     _CmCreateDevice @ 0x1406FE62C (_CmCreateDevice.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1406FF91C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PiAuDoesClientHaveAccess @ 0x140700A2C (PiAuDoesClientHaveAccess.c)
 *     _PnpCtxRegQueryValue @ 0x14073D4F4 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegCloseKey @ 0x14073D52C (_PnpCtxRegCloseKey.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140829F2C (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x14083728C (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMGenerateDeviceInstance @ 0x140839064 (PiCMGenerateDeviceInstance.c)
 *     PiInitializeDevice @ 0x14083D3C4 (PiInitializeDevice.c)
 *     _PnpCtxRegDeleteValue @ 0x1408F7174 (_PnpCtxRegDeleteValue.c)
 *     _PnpCtxRegSetValue @ 0x1408F71A8 (_PnpCtxRegSetValue.c)
 */

__int64 __fastcall PiCMCreateDevice(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r12
  unsigned int v7; // r15d
  wchar_t *PoolWithTag; // rdi
  char v9; // r14
  int v10; // esi
  _WORD *v11; // r13
  int DeviceInputData; // ebx
  signed int inited; // ebx
  int v14; // eax
  __int64 v15; // rcx
  struct _KTHREAD *v16; // rax
  char PreviousMode; // di
  const wchar_t *v19; // r13
  char v20; // r12
  int v21; // r15d
  __int64 v22; // rcx
  int v23; // r12d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int DeviceRegProp; // eax
  __int64 v33; // rdx
  int v34; // ecx
  int DeviceInstanceCsConfigFlags; // eax
  char v36; // dl
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // eax
  struct _KTHREAD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // [rsp+58h] [rbp-89h] BYREF
  _WORD *v43; // [rsp+60h] [rbp-81h]
  unsigned int v44; // [rsp+68h] [rbp-79h] BYREF
  int v45; // [rsp+6Ch] [rbp-75h] BYREF
  int v46; // [rsp+70h] [rbp-71h] BYREF
  HANDLE v47; // [rsp+78h] [rbp-69h] BYREF
  size_t pcchLength; // [rsp+80h] [rbp-61h] BYREF
  int v49; // [rsp+88h] [rbp-59h] BYREF
  int v50; // [rsp+8Ch] [rbp-55h] BYREF
  int v51; // [rsp+90h] [rbp-51h] BYREF
  HANDLE v52; // [rsp+98h] [rbp-49h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-41h]
  PVOID P; // [rsp+A8h] [rbp-39h] BYREF
  UNICODE_STRING v55; // [rsp+B0h] [rbp-31h] BYREF
  char v56[4]; // [rsp+C0h] [rbp-21h] BYREF
  int v57; // [rsp+C4h] [rbp-1Dh]
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+C8h] [rbp-19h]
  unsigned int v59; // [rsp+D0h] [rbp-11h]
  PCWSTR SourceString; // [rsp+D8h] [rbp-9h]
  unsigned int v61; // [rsp+E0h] [rbp-1h]
  int v62; // [rsp+E4h] [rbp+3h]
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp+7h] BYREF

  v6 = a3;
  v7 = a4;
  v46 = 0;
  v49 = 0;
  PoolWithTag = 0LL;
  *a6 = 0;
  v9 = 0;
  Object = 0LL;
  v10 = 0;
  v47 = 0LL;
  v11 = 0LL;
  P = 0LL;
  pcchLength = 0LL;
  v43 = 0LL;
  DeviceInputData = PiCMCaptureCreateDeviceInputData(a1, a2, a5, v56);
  if ( DeviceInputData < 0 )
    goto LABEL_15;
  if ( !PiAuDoesClientHaveAccess(2u) )
  {
    inited = -1073741790;
    goto LABEL_4;
  }
  v19 = pszSrc;
  if ( !pszSrc || v59 < 2 || !SourceString || v61 < 2 )
  {
    inited = -1073741811;
    v11 = 0LL;
    goto LABEL_58;
  }
  if ( !v6 || v7 < 0x14 || (v20 = v57, (v57 & 0xFFFFFFF0) != 0) || (v21 = v57 & 2, !CmIsRootDevice(SourceString)) )
  {
    inited = -1073741811;
    goto LABEL_30;
  }
  inited = PiPnpRtlBeginOperation(&P);
  if ( inited < 0 )
  {
LABEL_35:
    v11 = 0LL;
    goto LABEL_4;
  }
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x34706E50u);
  if ( !PoolWithTag )
  {
    inited = -1073741670;
    goto LABEL_35;
  }
  v23 = v20 & 4;
  if ( !v23 )
  {
    inited = CmValidateDeviceName(v22, v19);
LABEL_40:
    if ( inited >= 0 )
    {
      if ( !v23 )
      {
        inited = RtlStringCchCopyExW(PoolWithTag, 0xC8uLL, v19, 0LL, 0LL, 0x800u);
        if ( inited < 0 )
          goto LABEL_48;
      }
      inited = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)PoolWithTag, 16, 0, 131103, 0, (__int64)&v47, 0LL);
      if ( (int)(inited + 0x80000000) < 0 || inited == -1073741810 )
      {
        if ( v21 )
        {
          if ( v47 )
          {
LABEL_47:
            inited = -1073741771;
LABEL_48:
            v11 = 0LL;
            goto LABEL_4;
          }
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
          LOBYTE(v42) = 0;
          v9 = 1;
          inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)PoolWithTag, 131078, &v52, &v42, 0);
          if ( inited < 0 )
            goto LABEL_52;
          if ( !(_BYTE)v42 )
          {
            inited = -1073741771;
            PnpCtxRegCloseKey(v25, v52);
LABEL_52:
            v10 = pcchLength;
            goto LABEL_53;
          }
          v50 = 1;
          inited = PnpCtxRegSetValue(v25, v52, L"Phantom", 4LL, &v50, 4);
          PnpCtxRegCloseKey(v26, v52);
          if ( inited < 0 )
            goto LABEL_52;
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegion();
          v10 = pcchLength;
        }
        else
        {
          if ( v47 )
          {
            if ( RtlInitUnicodeStringEx(&DestinationString, PoolWithTag) >= 0 )
            {
              PpDevNodeLockTree(0);
              v27 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
              Object = v27;
              if ( v27 )
                v28 = *(_QWORD *)(v27[39] + 40LL);
              else
                v28 = 0LL;
              PpDevNodeUnlockTree(0);
              if ( v28 )
              {
                if ( (*(_DWORD *)(v28 + 396) & 0x10000) == 0 )
                  goto LABEL_47;
              }
              else
              {
                PiPnpRtlEnsureObjectCached(v29, PoolWithTag, v30, v31);
              }
            }
          }
          else
          {
            v40 = KeGetCurrentThread();
            --v40->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            LOBYTE(v42) = 0;
            v9 = 1;
            inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)PoolWithTag, 131103, &v47, &v42, 0);
            if ( inited < 0 )
              goto LABEL_52;
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            KeLeaveCriticalRegion();
            v9 = 0;
            v10 = pcchLength;
            if ( !(_BYTE)v42 )
            {
              inited = -1073741771;
              goto LABEL_53;
            }
          }
          inited = RtlInitUnicodeStringEx(&v55, PoolWithTag);
          v9 = 0;
          if ( inited < 0 )
            goto LABEL_53;
          v44 = 4;
          v45 = 0;
          DeviceRegProp = CmGetDeviceRegProp(
                            *(__int64 *)&PiPnpRtlCtx,
                            (__int64)PoolWithTag,
                            (__int64)v47,
                            11,
                            (__int64)&v45,
                            (__int64)&v46,
                            (__int64)&v44,
                            0);
          v34 = v46;
          if ( DeviceRegProp < 0 )
            v34 = 0;
          v46 = v34;
          DeviceInstanceCsConfigFlags = PnpGetDeviceInstanceCsConfigFlags(&v55.Length, v33, &v49);
          v36 = v49;
          if ( DeviceInstanceCsConfigFlags < 0 )
            v36 = 0;
          if ( (v46 & 0x12) != 0 || (v36 & 2) != 0 )
          {
            inited = -1073741808;
            v9 = 0;
            goto LABEL_53;
          }
          inited = PiInitializeDevice(&v55);
          if ( inited < 0 )
          {
LABEL_53:
            v11 = v43;
            goto LABEL_4;
          }
          v44 = 4;
          if ( (int)PnpCtxRegQueryValue(v37, v47, L"Phantom", &v45, &v51, &v44) < 0 || v45 != 4 || (v39 = v51, v44 != 4) )
            v39 = 0;
          if ( v39 )
            PnpCtxRegDeleteValue(v38, v47, L"Phantom");
          if ( (v57 & 8) != 0 )
          {
            v44 = 512;
            v11 = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x34706E50u);
            if ( !v11 )
            {
              inited = -1073741670;
              v9 = 0;
              goto LABEL_4;
            }
            if ( (int)CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        (__int64)PoolWithTag,
                        (__int64)v47,
                        5,
                        (__int64)&v45,
                        (__int64)v11,
                        (__int64)&v44,
                        0) >= 0
              && v45 == 1
              && v44 <= 0x200 )
            {
              if ( *v11 )
              {
                inited = RtlInitUnicodeStringEx(&v55, PoolWithTag);
                if ( inited >= 0 )
                {
                  LOBYTE(v41) = 1;
                  inited = PpDeviceRegistration((__int64)&v55, v41, 0LL, 0);
                }
              }
            }
            goto LABEL_57;
          }
        }
        v11 = v43;
      }
      else
      {
        v11 = 0LL;
      }
LABEL_57:
      v7 = a4;
      v6 = a3;
      goto LABEL_58;
    }
LABEL_30:
    v11 = 0LL;
    goto LABEL_4;
  }
  inited = PiCMGenerateDeviceInstance(v19);
  if ( !v21 )
    goto LABEL_40;
  v7 = a4;
  v11 = 0LL;
  v6 = a3;
LABEL_58:
  v9 = 0;
  if ( inited >= 0 )
  {
    inited = RtlStringCchLengthW(PoolWithTag, 0xC8uLL, &pcchLength);
    if ( inited < 0 )
    {
      v10 = 0;
    }
    else
    {
      v10 = pcchLength + 1;
      if ( (unsigned __int64)v7 - 20 < 2 * (pcchLength + 1) )
        inited = -1073741789;
    }
    v9 = 0;
    if ( inited >= 0 )
    {
      v14 = PiCMReturnBufferResultData(inited, 2 * v10, 0, PoolWithTag, 2 * v10, v62, v6, v7, a6);
      v9 = 0;
      goto LABEL_5;
    }
  }
LABEL_4:
  v14 = PiCMReturnBufferResultData(inited, 2 * v10, 0, 0LL, 0, v62, a3, a4, a6);
LABEL_5:
  DeviceInputData = v14;
  if ( v47 )
    PnpCtxRegCloseKey(v15, v47);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x34706E50u);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v9 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
LABEL_15:
  v16 = KeGetCurrentThread();
  PreviousMode = v16->PreviousMode;
  if ( pszSrc )
    PiControlFreeUserModeCallersBuffer(v16->PreviousMode, (void *)pszSrc);
  if ( SourceString )
    PiControlFreeUserModeCallersBuffer(PreviousMode, (void *)SourceString);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)DeviceInputData;
}
