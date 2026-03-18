/*
 * XREFs of PiCMOpenDeviceInterfaceKey @ 0x14087303C
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BB780 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14062535C (_CmOpenDeviceInterfaceRegKey.c)
 *     PiCMReleaseRegistryInputData @ 0x1406CE464 (PiCMReleaseRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x1406CE494 (PiCMReturnHandleResultData.c)
 *     PiCMCaptureRegistryInputData @ 0x1406CE518 (PiCMCaptureRegistryInputData.c)
 *     PiCMDuplicateRegistryHandle @ 0x1406CE72C (PiCMDuplicateRegistryHandle.c)
 *     PiAuDoesClientHaveAccess @ 0x14071FFE0 (PiAuDoesClientHaveAccess.c)
 */

__int64 __fastcall PiCMOpenDeviceInterfaceKey(
        _DWORD *a1,
        unsigned int a2,
        _OWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *Handle)
{
  _DWORD *v10; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  int v12; // edi
  __int64 v13; // r9
  __int64 v14; // rdi
  ACCESS_MASK v15; // esi
  __int64 v16; // rdx
  int v17; // ebx
  __int64 v18; // r9
  HANDLE v20; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21[7]; // [rsp+48h] [rbp-38h] BYREF

  memset(v21, 0, 0x30uLL);
  v10 = Handle;
  v20 = 0LL;
  Handle = 0LL;
  *v10 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v12 = PiCMCaptureRegistryInputData(a1, a2, a5, (char *)v21);
  if ( v12 < 0 )
    goto LABEL_22;
  v14 = v21[2];
  if ( !v21[2] || HIDWORD(v21[0]) || LODWORD(v21[1]) != 4 || HIDWORD(v21[4]) || !a3 || a4 < 0x10 )
  {
    v17 = -1073741811;
    goto LABEL_16;
  }
  v15 = HIDWORD(v21[3]);
  v17 = CmOpenDeviceInterfaceRegKey(
          *(__int64 *)&PiPnpRtlCtx,
          v21[2],
          0x32u,
          v13,
          SHIDWORD(v21[3]),
          0,
          (__int64)&Handle,
          0LL);
  if ( v17 != -1073741772 )
    goto LABEL_13;
  if ( LODWORD(v21[4]) == 1 )
  {
    if ( !PiAuDoesClientHaveAccess(2u) )
    {
      v17 = -1073741790;
      goto LABEL_16;
    }
    v17 = CmOpenDeviceInterfaceRegKey(*(__int64 *)&PiPnpRtlCtx, v14, 0x32u, v18, v15, 1, (__int64)&Handle, 0LL);
LABEL_13:
    if ( v17 >= 0 )
      v17 = PiCMDuplicateRegistryHandle(Handle, v16, v15, PreviousMode, &v20);
  }
LABEL_16:
  v12 = PiCMReturnHandleResultData(v17, (__int64)v20, v21[5], a3, a4, v10);
  if ( Handle )
    ZwClose(Handle);
  if ( v12 < 0 || v17 < 0 )
  {
    if ( v20 )
      ObCloseHandle(v20, PreviousMode);
  }
LABEL_22:
  PiCMReleaseRegistryInputData((__int64)v21);
  return (unsigned int)v12;
}
