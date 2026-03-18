/*
 * XREFs of PiCMGetRegistryProperty @ 0x1406D2E3C
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BBB60 (PiCMHandleIoctl.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x1405BCE40 (PiCMReturnBufferResultData.c)
 *     _CmGetDeviceRegProp @ 0x1405C2714 (_CmGetDeviceRegProp.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x1406D300C (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMConvertRegistryProperty @ 0x1406D3060 (PiCMConvertRegistryProperty.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1406D31CC (PiCMCaptureRegistryPropertyInputData.c)
 *     _CmGetInstallerClassRegProp @ 0x140702F70 (_CmGetInstallerClassRegProp.c)
 */

__int64 __fastcall PiCMGetRegistryProperty(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v10; // r13
  PVOID PoolWithTag; // rsi
  signed int v12; // ebx
  signed int DeviceRegProp; // eax
  signed int v14; // eax
  int v16; // [rsp+58h] [rbp-9h] BYREF
  int v17; // [rsp+5Ch] [rbp-5h] BYREF
  __int64 v18[7]; // [rsp+60h] [rbp-1h] BYREF

  memset(v18, 0, sizeof(v18));
  v10 = a6;
  PoolWithTag = 0LL;
  v16 = 0;
  v17 = 0;
  *a6 = 0;
  LODWORD(a6) = 0;
  v12 = PiCMCaptureRegistryPropertyInputData(a1, a2, a5, v18);
  if ( v12 < 0 )
    goto LABEL_21;
  if ( v18[2] && !HIDWORD(v18[0]) && !v18[5] && !LODWORD(v18[6]) && !LODWORD(v18[4]) )
  {
    if ( !a3 || a4 < 0x14 )
    {
      v12 = -1073741811;
      goto LABEL_22;
    }
    if ( a4 != 20 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, a4 - 20, 0x34706E50u);
      if ( !PoolWithTag )
        v12 = -1073741670;
    }
    if ( v12 < 0 )
      goto LABEL_22;
    v12 = PiCMConvertRegistryProperty(HIDWORD(v18[3]), &v17);
    if ( v12 < 0 )
      goto LABEL_22;
    LODWORD(a6) = a4 - 20;
    if ( LODWORD(v18[1]) == 1 )
    {
      DeviceRegProp = CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v18[2],
                        0LL,
                        v17,
                        (__int64)&v16,
                        (__int64)PoolWithTag,
                        (__int64)&a6,
                        0);
LABEL_16:
      v12 = DeviceRegProp;
      goto LABEL_17;
    }
    if ( LODWORD(v18[1]) == 2 )
    {
      DeviceRegProp = CmGetInstallerClassRegProp(
                        PiPnpRtlCtx,
                        v18[2],
                        0,
                        v17,
                        (__int64)&v16,
                        (__int64)PoolWithTag,
                        (__int64)&a6);
      goto LABEL_16;
    }
  }
  v12 = -1073741811;
LABEL_17:
  if ( v12 >= 0 )
  {
    v14 = PiCMReturnBufferResultData(
            v12,
            (unsigned int)a6,
            v16,
            PoolWithTag,
            (unsigned int)a6,
            SHIDWORD(v18[6]),
            a3,
            a4,
            v10);
    goto LABEL_19;
  }
LABEL_22:
  v14 = PiCMReturnBufferResultData(v12, (unsigned int)a6, v16, 0LL, 0, SHIDWORD(v18[6]), a3, a4, v10);
LABEL_19:
  v12 = v14;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_21:
  PiCMReleaseRegistryPropertyInputData(v18);
  return (unsigned int)v12;
}
