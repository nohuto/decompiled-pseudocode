/*
 * XREFs of PiCMDeleteDeviceInterfaceKey @ 0x140838710
 * Callers:
 *     PiCMHandleIoctl @ 0x1405984F0 (PiCMHandleIoctl.c)
 * Callees:
 *     PiCMReleaseObjectInputData @ 0x14059E6AC (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14059E6DC (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x1405A060C (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x140700A2C (PiAuDoesClientHaveAccess.c)
 *     _CmDeleteDeviceInterfaceRegKey @ 0x1408F7BC0 (_CmDeleteDeviceInterfaceRegKey.c)
 */

__int64 __fastcall PiCMDeleteDeviceInterfaceKey(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  int v8; // ebx
  int v9; // r9d
  int v10; // eax
  char v12[4]; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+34h] [rbp-34h]
  int v14; // [rsp+38h] [rbp-30h]
  __int64 v15; // [rsp+40h] [rbp-28h]
  int v16; // [rsp+4Ch] [rbp-1Ch]
  int v17; // [rsp+50h] [rbp-18h]

  *a6 = 0;
  v8 = PiCMCaptureObjectInputData(a1, a2, a5, v12);
  if ( v8 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      if ( v15 && !v13 && v14 == 4 && !v16 && a3 && a4 >= 8 )
        v10 = CmDeleteDeviceInterfaceRegKey(PiPnpRtlCtx, v15, 50, v9, 1);
      else
        v10 = -1073741811;
    }
    else
    {
      v10 = -1073741790;
    }
    v8 = PiCMReturnBasicResultData(v10, v17, a3, a4, a6);
  }
  PiCMReleaseObjectInputData((__int64)v12);
  return (unsigned int)v8;
}
