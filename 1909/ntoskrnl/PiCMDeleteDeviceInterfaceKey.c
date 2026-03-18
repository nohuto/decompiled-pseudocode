/*
 * XREFs of PiCMDeleteDeviceInterfaceKey @ 0x140871608
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BBB60 (PiCMHandleIoctl.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     PiCMReleaseObjectInputData @ 0x1406CF518 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406CF74C (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x140721E08 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x140721E80 (PiAuDoesClientHaveAccess.c)
 *     _CmDeleteDeviceInterfaceRegKey @ 0x140934050 (_CmDeleteDeviceInterfaceRegKey.c)
 */

__int64 __fastcall PiCMDeleteDeviceInterfaceKey(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  int v10; // ebx
  int v11; // r9d
  int v12; // eax
  _QWORD v14[6]; // [rsp+30h] [rbp-38h] BYREF

  memset(v14, 0, 0x28uLL);
  *a6 = 0;
  v10 = PiCMCaptureObjectInputData(a1, a2, a5, (char *)v14);
  if ( v10 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      if ( v14[2] && !HIDWORD(v14[0]) && LODWORD(v14[1]) == 4 && !HIDWORD(v14[3]) && a3 && a4 >= 8 )
        v12 = CmDeleteDeviceInterfaceRegKey(PiPnpRtlCtx, v14[2], 50, v11, 1);
      else
        v12 = -1073741811;
    }
    else
    {
      v12 = -1073741790;
    }
    v10 = PiCMReturnBasicResultData(v12, v14[4], a3, a4, a6);
  }
  PiCMReleaseObjectInputData((__int64)v14);
  return (unsigned int)v10;
}
