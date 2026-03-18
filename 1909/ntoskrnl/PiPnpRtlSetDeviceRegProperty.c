/*
 * XREFs of PiPnpRtlSetDeviceRegProperty @ 0x1406FB220
 * Callers:
 *     PiDevCfgSetDeviceRegProp @ 0x1406FB1D4 (PiDevCfgSetDeviceRegProp.c)
 *     PiCMSetRegistryProperty @ 0x1408731D4 (PiCMSetRegistryProperty.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     _CmGetDeviceRegProp @ 0x1405C2714 (_CmGetDeviceRegProp.c)
 *     _CmIsRootEnumeratedDevice @ 0x14067032C (_CmIsRootEnumeratedDevice.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406787B0 (SeAuditingWithTokenForSubcategory.c)
 *     _CmSetDeviceRegProp @ 0x1407059C0 (_CmSetDeviceRegProp.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x140877844 (PiAuditDeviceEnableDisableRequest.c)
 */

__int64 __fastcall PiPnpRtlSetDeviceRegProperty(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned int *a6,
        int a7,
        int a8)
{
  int v8; // r12d
  unsigned int v9; // r15d
  unsigned int *v10; // rbx
  char v11; // r14
  unsigned int v15; // ebx
  bool v17; // zf
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // r9
  int v20; // [rsp+40h] [rbp-20h] BYREF
  int v21; // [rsp+44h] [rbp-1Ch] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v24; // [rsp+B8h] [rbp+58h] BYREF

  v8 = a7;
  v24 = 0;
  v9 = 0;
  v10 = a6;
  v11 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( a4 < 2 )
    goto LABEL_7;
  if ( a4 <= 3 )
  {
    v17 = CmIsRootEnumeratedDevice(a2) == 0;
  }
  else
  {
    if ( a4 == 11 )
    {
      if ( !a6 || a7 != 4 )
        return (unsigned int)-1073741811;
      if ( SeAuditingWithTokenForSubcategory(137, 0LL) )
      {
        v20 = 4;
        if ( (int)CmGetDeviceRegProp(a1, (__int64)a2, a3, 11, (__int64)&v21, (__int64)&v24, (__int64)&v20, 0) < 0
          || v20 != 4
          || v21 != 4 )
        {
          v24 = 0;
        }
        v9 = *v10;
      }
      goto LABEL_7;
    }
    if ( a4 == 9 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v11 = 1;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      goto LABEL_7;
    }
    if ( a4 <= 15 )
      goto LABEL_7;
    if ( a4 <= 17 || a4 == 29 )
      return (unsigned int)-1073741790;
    v17 = a4 == 37;
  }
  if ( v17 )
    return (unsigned int)-1073741790;
LABEL_7:
  v15 = CmSetDeviceRegProp(a1, (_DWORD)a2, a3, a4, a5, (__int64)v10, v8, a8);
  if ( a4 == 11 && SeAuditingWithTokenForSubcategory(137, 0LL) )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    LOBYTE(v19) = (v15 & 0x80000000) == 0;
    PiAuditDeviceEnableDisableRequest(&DestinationString, v24, v9, v19);
  }
  if ( v11 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v15;
}
