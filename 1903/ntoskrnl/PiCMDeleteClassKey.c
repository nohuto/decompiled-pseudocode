/*
 * XREFs of PiCMDeleteClassKey @ 0x140871AA4
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BB780 (PiCMHandleIoctl.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PiCMReleaseObjectInputData @ 0x1406D02A8 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406D04DC (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x14071FF68 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x14071FFE0 (PiAuDoesClientHaveAccess.c)
 *     _CmDeleteInstallerClass @ 0x1409358A8 (_CmDeleteInstallerClass.c)
 *     _CmDeleteInterfaceClass @ 0x140935C78 (_CmDeleteInterfaceClass.c)
 */

__int64 __fastcall PiCMDeleteClassKey(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  int v10; // ebx
  int v11; // eax
  _QWORD v13[6]; // [rsp+30h] [rbp-38h] BYREF

  memset(v13, 0, 0x28uLL);
  *a6 = 0;
  v10 = PiCMCaptureObjectInputData(a1, a2, a5, (char *)v13);
  if ( v10 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      if ( v13[2]
        && !HIDWORD(v13[3])
        && a3
        && a4 >= 8
        && (unsigned int)(LODWORD(v13[1]) - 2) <= 1
        && (unsigned int)(HIDWORD(v13[0]) - 1) <= 1 )
      {
        if ( LODWORD(v13[1]) == 3 )
          v11 = CmDeleteInterfaceClass(*(_QWORD *)&PiPnpRtlCtx, v13[2], 0LL);
        else
          v11 = CmDeleteInstallerClass(*(_QWORD *)&PiPnpRtlCtx, v13[2], 0LL);
      }
      else
      {
        v11 = -1073741811;
      }
    }
    else
    {
      v11 = -1073741790;
    }
    v10 = PiCMReturnBasicResultData(v11, v13[4], a3, a4, a6);
  }
  PiCMReleaseObjectInputData((__int64)v13);
  return (unsigned int)v10;
}
