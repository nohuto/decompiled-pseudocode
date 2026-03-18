/*
 * XREFs of PiCMOpenDeviceKey @ 0x140717D8C
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BB780 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     _CmOpenDeviceRegKey @ 0x1405C2B40 (_CmOpenDeviceRegKey.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     PiCMReleaseRegistryInputData @ 0x1406CE464 (PiCMReleaseRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x1406CE494 (PiCMReturnHandleResultData.c)
 *     PiCMCaptureRegistryInputData @ 0x1406CE518 (PiCMCaptureRegistryInputData.c)
 *     PiCMDuplicateRegistryHandle @ 0x1406CE72C (PiCMDuplicateRegistryHandle.c)
 *     PiCMConvertDeviceKeyType @ 0x140717F20 (PiCMConvertDeviceKeyType.c)
 *     PiAuDoesClientHaveAccess @ 0x14071FFE0 (PiAuDoesClientHaveAccess.c)
 */

__int64 __fastcall PiCMOpenDeviceKey(_DWORD *a1, unsigned int a2, _OWORD *a3, unsigned int a4, int a5, _DWORD *a6)
{
  _DWORD *v10; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  int v12; // edi
  __int64 v13; // rdi
  int v14; // ebx
  ACCESS_MASK v15; // esi
  __int64 v16; // rdx
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v20; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v21[6]; // [rsp+50h] [rbp-30h] BYREF

  memset(v21, 0, sizeof(v21));
  v20 = 0LL;
  Handle = 0LL;
  v10 = a6;
  LODWORD(a6) = 0;
  *v10 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v12 = PiCMCaptureRegistryInputData(a1, a2, a5, (char *)v21);
  if ( v12 < 0 )
    goto LABEL_14;
  v13 = v21[2];
  if ( v21[2] && LODWORD(v21[1]) == 1 && a3 && a4 >= 0x10 )
  {
    v14 = PiCMConvertDeviceKeyType(HIDWORD(v21[0]), &a6);
    if ( v14 >= 0 )
    {
      v15 = HIDWORD(v21[3]);
      v14 = CmOpenDeviceRegKey(
              *(__int64 *)&PiPnpRtlCtx,
              v13,
              (int)a6,
              SHIDWORD(v21[4]),
              SHIDWORD(v21[3]),
              0,
              (__int64)&Handle,
              0LL);
      if ( v14 != -1073741772 )
        goto LABEL_8;
      if ( LODWORD(v21[4]) == 1 )
      {
        if ( (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
        {
          v14 = CmOpenDeviceRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  v13,
                  (int)a6,
                  SHIDWORD(v21[4]),
                  v15,
                  1,
                  (__int64)&Handle,
                  0LL);
LABEL_8:
          if ( v14 >= 0 )
            v14 = PiCMDuplicateRegistryHandle(Handle, v16, v15, PreviousMode, &v20);
          goto LABEL_10;
        }
        v14 = -1073741790;
      }
    }
  }
  else
  {
    v14 = -1073741811;
  }
LABEL_10:
  v12 = PiCMReturnHandleResultData(v14, (__int64)v20, v21[5], a3, a4, v10);
  if ( Handle )
    ZwClose(Handle);
  if ( v12 < 0 || v14 < 0 )
  {
    if ( v20 )
      ObCloseHandle(v20, PreviousMode);
  }
LABEL_14:
  PiCMReleaseRegistryInputData((__int64)v21);
  return (unsigned int)v12;
}
