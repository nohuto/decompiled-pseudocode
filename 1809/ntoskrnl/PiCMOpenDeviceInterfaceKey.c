/*
 * XREFs of PiCMOpenDeviceInterfaceKey @ 0x1408396DC
 * Callers:
 *     PiCMHandleIoctl @ 0x1405984F0 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14059C4E8 (_CmOpenDeviceInterfaceRegKey.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     PiCMReleaseRegistryInputData @ 0x1406A8484 (PiCMReleaseRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x1406A84B4 (PiCMReturnHandleResultData.c)
 *     PiCMCaptureRegistryInputData @ 0x1406A8540 (PiCMCaptureRegistryInputData.c)
 *     PiCMDuplicateRegistryHandle @ 0x1406A8754 (PiCMDuplicateRegistryHandle.c)
 *     PiAuDoesClientHaveAccess @ 0x140700A2C (PiAuDoesClientHaveAccess.c)
 */

__int64 __fastcall PiCMOpenDeviceInterfaceKey(
        _DWORD *a1,
        unsigned int a2,
        _OWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *Handle)
{
  _DWORD *v6; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rdi
  int v13; // esi
  __int64 v14; // rdx
  int v15; // ebx
  __int64 v16; // r9
  HANDLE v18; // [rsp+40h] [rbp-40h] BYREF
  char v19[4]; // [rsp+48h] [rbp-38h] BYREF
  int v20; // [rsp+4Ch] [rbp-34h]
  int v21; // [rsp+50h] [rbp-30h]
  __int64 v22; // [rsp+58h] [rbp-28h]
  int v23; // [rsp+64h] [rbp-1Ch]
  int v24; // [rsp+68h] [rbp-18h]
  int v25; // [rsp+6Ch] [rbp-14h]
  int v26; // [rsp+70h] [rbp-10h]

  v6 = Handle;
  v18 = 0LL;
  Handle = 0LL;
  *v6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = PiCMCaptureRegistryInputData(a1, a2, a5, v19);
  if ( v10 < 0 )
    goto LABEL_22;
  v12 = v22;
  if ( !v22 || v20 || v21 != 4 || v25 || !a3 || a4 < 0x10 )
  {
    v15 = -1073741811;
    goto LABEL_16;
  }
  v13 = v23;
  v15 = CmOpenDeviceInterfaceRegKey(*(__int64 *)&PiPnpRtlCtx, v22, 0x32u, v11, v23, 0, (__int64)&Handle, 0LL);
  if ( v15 != -1073741772 )
    goto LABEL_13;
  if ( v24 == 1 )
  {
    if ( !PiAuDoesClientHaveAccess(2u) )
    {
      v15 = -1073741790;
      goto LABEL_16;
    }
    v15 = CmOpenDeviceInterfaceRegKey(*(__int64 *)&PiPnpRtlCtx, v12, 0x32u, v16, v13, 1, (__int64)&Handle, 0LL);
LABEL_13:
    if ( v15 >= 0 )
      v15 = PiCMDuplicateRegistryHandle(Handle, v14, v13, PreviousMode, &v18);
  }
LABEL_16:
  v10 = PiCMReturnHandleResultData(v15, (__int64)v18, v26, a3, a4, v6);
  if ( Handle )
    ZwClose(Handle);
  if ( v10 < 0 || v15 < 0 )
  {
    if ( v18 )
      ObCloseHandle(v18, PreviousMode);
  }
LABEL_22:
  PiCMReleaseRegistryInputData((__int64)v19);
  return (unsigned int)v10;
}
