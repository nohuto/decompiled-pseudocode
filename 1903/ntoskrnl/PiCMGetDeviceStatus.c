/*
 * XREFs of PiCMGetDeviceStatus @ 0x1406CFFBC
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BB780 (PiCMHandleIoctl.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     _CmGetDeviceStatus @ 0x140625EA8 (_CmGetDeviceStatus.c)
 *     PiCMReleaseObjectInputData @ 0x1406D02A8 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406D04DC (PiCMCaptureObjectInputData.c)
 *     PiCMReturnStatusResultData @ 0x1406D06FC (PiCMReturnStatusResultData.c)
 */

__int64 __fastcall PiCMGetDeviceStatus(
        __int64 a1,
        unsigned int a2,
        volatile void *a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v10; // r15
  int v11; // ebx
  int DeviceStatus; // ecx
  SIZE_T Length; // [rsp+30h] [rbp-40h]
  int v15; // [rsp+40h] [rbp-30h] BYREF
  int v16; // [rsp+44h] [rbp-2Ch] BYREF
  const WCHAR *v17[5]; // [rsp+48h] [rbp-28h] BYREF

  memset(v17, 0, sizeof(v17));
  v10 = a6;
  v16 = 0;
  v15 = 0;
  *(_DWORD *)a6 = 0;
  LODWORD(a6) = 0;
  v11 = PiCMCaptureObjectInputData(a1, a2, a5, v17);
  if ( v11 >= 0 )
  {
    if ( v17[2] && !HIDWORD(v17[0]) && LODWORD(v17[1]) == 1 && !HIDWORD(v17[3]) && a3 && a4 >= 0x14 )
      DeviceStatus = CmGetDeviceStatus(*(__int64 *)&PiPnpRtlCtx, v17[2], 0LL, &v16, &v15, &a6, Length);
    else
      DeviceStatus = -1073741811;
    LODWORD(Length) = a4;
    v11 = PiCMReturnStatusResultData(DeviceStatus, v16, v15, a6, (int)v17[4], a3, Length, v10);
  }
  PiCMReleaseObjectInputData(v17);
  return (unsigned int)v11;
}
