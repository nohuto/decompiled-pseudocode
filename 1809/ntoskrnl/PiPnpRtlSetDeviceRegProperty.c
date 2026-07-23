/*
 * XREFs of PiPnpRtlSetDeviceRegProperty @ 0x1406F7BEC
 * Callers:
 *     PiDevCfgSetDeviceRegProp @ 0x1406F7BA0 (PiDevCfgSetDeviceRegProp.c)
 *     PiCMSetRegistryProperty @ 0x14083A104 (PiCMSetRegistryProperty.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     _CmIsRootEnumeratedDevice @ 0x14059D4CC (_CmIsRootEnumeratedDevice.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14060B3C0 (SeAuditingWithTokenForSubcategory.c)
 *     _CmSetDeviceRegProp @ 0x1406E3CC4 (_CmSetDeviceRegProp.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x14083E1B8 (PiAuditDeviceEnableDisableRequest.c)
 */

__int64 __fastcall PiPnpRtlSetDeviceRegProperty(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        signed int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  char v10; // bp
  unsigned int *v11; // rbx
  unsigned int v16; // ebx
  bool v18; // zf
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // r9
  int v21; // [rsp+40h] [rbp-48h] BYREF
  int v22; // [rsp+44h] [rbp-44h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v24; // [rsp+A8h] [rbp+20h] BYREF

  v24 = 0;
  v8 = 0;
  v9 = a7;
  v10 = 0;
  v11 = a6;
  if ( a4 < 2 )
    goto LABEL_7;
  if ( a4 <= 3 )
  {
    v18 = CmIsRootEnumeratedDevice(a2) == 0;
  }
  else
  {
    if ( a4 == 11 )
    {
      if ( !a6 || a7 != 4 )
        return (unsigned int)-1073741811;
      if ( SeAuditingWithTokenForSubcategory(138, 0LL) )
      {
        v21 = 4;
        if ( (int)CmGetDeviceRegProp(a1, (__int64)a2, a3, 11, (__int64)&v22, (__int64)&v24, (__int64)&v21, 0) < 0
          || v21 != 4
          || v22 != 4 )
        {
          v24 = 0;
        }
        v8 = *v11;
      }
      goto LABEL_7;
    }
    if ( a4 == 9 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v10 = 1;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      goto LABEL_7;
    }
    if ( a4 <= 15 )
      goto LABEL_7;
    if ( a4 <= 17 || a4 == 29 )
      return (unsigned int)-1073741790;
    v18 = a4 == 37;
  }
  if ( v18 )
    return (unsigned int)-1073741790;
LABEL_7:
  v16 = CmSetDeviceRegProp(a1, (__int64)a2, a3, a4, a5, (__int64)v11, v9, a8);
  if ( a4 == 11 && SeAuditingWithTokenForSubcategory(138, 0LL) )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    LOBYTE(v20) = (v16 & 0x80000000) == 0;
    PiAuditDeviceEnableDisableRequest(&DestinationString, v24, v8, v20);
  }
  if ( v10 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v16;
}
