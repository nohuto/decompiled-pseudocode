/*
 * XREFs of PiCMDeleteDevice @ 0x1408712B4
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BBB60 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140171E88 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     ZwPlugPlayControl @ 0x1401C31F0 (ZwPlugPlayControl.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PiPnpRtlEndOperation @ 0x1405BB924 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405BD6D8 (PiPnpRtlBeginOperation.c)
 *     _CmValidateDeviceName @ 0x1405C3710 (_CmValidateDeviceName.c)
 *     _CmGetDeviceStatus @ 0x140629D58 (_CmGetDeviceStatus.c)
 *     PpDevNodeUnlockTree @ 0x14066FFEC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x140670114 (PpDevNodeLockTree.c)
 *     _CmIsRootEnumeratedDevice @ 0x14067032C (_CmIsRootEnumeratedDevice.c)
 *     PiCMReleaseObjectInputData @ 0x1406CF518 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406CF74C (PiCMCaptureObjectInputData.c)
 *     _CmIsRootDevice @ 0x1406F3284 (_CmIsRootDevice.c)
 *     PiCMReturnBasicResultData @ 0x140721E08 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x140721E80 (PiAuDoesClientHaveAccess.c)
 *     PpDeviceRegistration @ 0x1407249B8 (PpDeviceRegistration.c)
 *     PiQueueDeviceRequest @ 0x14087708C (PiQueueDeviceRequest.c)
 *     _CmDeleteDevice @ 0x140933DF8 (_CmDeleteDevice.c)
 */

__int64 __fastcall PiCMDeleteDevice(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        __int64 a6)
{
  _DWORD *v10; // r12
  int v11; // ebx
  __int64 v12; // rcx
  int inited; // ebx
  const WCHAR *v14; // rdi
  struct _KTHREAD *CurrentThread; // rax
  const WCHAR *v16; // rdi
  struct _KTHREAD *v17; // rax
  int v18; // r8d
  unsigned int v20; // [rsp+38h] [rbp-59h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-49h] BYREF
  PVOID P; // [rsp+58h] [rbp-39h] BYREF
  int v23; // [rsp+60h] [rbp-31h] BYREF
  int v24; // [rsp+64h] [rbp-2Dh] BYREF
  UNICODE_STRING v25; // [rsp+68h] [rbp-29h] BYREF
  PCWSTR v26[5]; // [rsp+78h] [rbp-19h] BYREF
  _BYTE Buffer[40]; // [rsp+A0h] [rbp+Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v26, 0, sizeof(v26));
  memset(Buffer, 0, sizeof(Buffer));
  v10 = (_DWORD *)a6;
  P = 0LL;
  *(_QWORD *)&v25.Length = 0LL;
  *(_DWORD *)a6 = 0;
  v25.Buffer = 0LL;
  v11 = PiCMCaptureObjectInputData(a1, a2, a5, (char *)v26);
  if ( v11 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      v14 = v26[2];
      if ( !v26[2] || *(PCWSTR *)((char *)v26 + 4) != (PCWSTR)0x100000000LL || HIDWORD(v26[3]) || !a3 || a4 < 8 )
        goto LABEL_27;
      inited = CmValidateDeviceName(v12, v26[2]);
      if ( inited < 0 )
        goto LABEL_28;
      if ( CmIsRootDevice(v14) )
      {
LABEL_27:
        inited = -1073741811;
        goto LABEL_28;
      }
      inited = PiPnpRtlBeginOperation(&P);
      if ( inited >= 0 )
      {
        if ( (int)CmGetDeviceStatus(*(__int64 *)&PiPnpRtlCtx, v14, 0LL, (int *)&a6, &v24, &v23, v20) >= 0
          && (a6 & 2) != 0 )
        {
          if ( (a6 & 0x2001) == 1 )
          {
            inited = -1073741808;
            goto LABEL_28;
          }
          inited = RtlInitUnicodeStringEx(&DestinationString, v14);
          if ( inited < 0 )
            goto LABEL_28;
          PpDevNodeLockTree(3);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
          PpDeviceRegistration((__int64)&DestinationString, 0LL, 0LL, 1);
          v16 = v26[2];
          inited = CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, v26[2], 0LL);
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegion();
          PpDevNodeUnlockTree(3);
          if ( inited < 0 )
            goto LABEL_28;
          if ( RtlInitUnicodeStringEx((PUNICODE_STRING)Buffer, v16) >= 0 )
          {
            *(_DWORD *)&Buffer[16] = 1;
            *(_DWORD *)&Buffer[20] = 0x40000;
            ZwPlugPlayControl(PlugPlayControlDeviceStatus, Buffer, 0x28u);
          }
        }
        else
        {
          inited = RtlInitUnicodeStringEx(&DestinationString, v14);
          if ( inited < 0 )
            goto LABEL_28;
          PpDevNodeLockTree(3);
          v17 = KeGetCurrentThread();
          --v17->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
          PpDeviceRegistration((__int64)&DestinationString, 0LL, 0LL, 1);
          v16 = v26[2];
          inited = CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, v26[2], 0LL);
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegion();
          PpDevNodeUnlockTree(3);
          if ( inited < 0 )
            goto LABEL_28;
          if ( CmIsRootEnumeratedDevice(v16) && RtlInitUnicodeStringEx(&DestinationString, L"HTREE\\ROOT\\0") >= 0 )
            PiQueueDeviceRequest((unsigned int)&DestinationString, 8, v18, 1, 0LL);
        }
        if ( RtlInitUnicodeStringEx(&v25, v16) >= 0 )
          PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&v25.Length);
      }
    }
    else
    {
      inited = -1073741790;
    }
LABEL_28:
    v11 = PiCMReturnBasicResultData(inited, (int)v26[4], a3, a4, v10);
  }
  PiCMReleaseObjectInputData((__int64)v26);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)v11;
}
