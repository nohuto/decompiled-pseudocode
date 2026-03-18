/*
 * XREFs of PiCMDeleteClassKey @ 0x1408711A4
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BBB60 (PiCMHandleIoctl.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     PiCMReleaseObjectInputData @ 0x1406CF518 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406CF74C (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x140721E08 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x140721E80 (PiAuDoesClientHaveAccess.c)
 *     _CmDeleteInstallerClass @ 0x14093531C (_CmDeleteInstallerClass.c)
 *     _CmDeleteInterfaceClass @ 0x1409356EC (_CmDeleteInterfaceClass.c)
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
