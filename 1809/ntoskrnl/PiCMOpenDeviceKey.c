/*
 * XREFs of PiCMOpenDeviceKey @ 0x1406A8158
 * Callers:
 *     PiCMHandleIoctl @ 0x1405984F0 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     PiCMReleaseRegistryInputData @ 0x1406A8484 (PiCMReleaseRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x1406A84B4 (PiCMReturnHandleResultData.c)
 *     PiCMCaptureRegistryInputData @ 0x1406A8540 (PiCMCaptureRegistryInputData.c)
 *     PiCMDuplicateRegistryHandle @ 0x1406A8754 (PiCMDuplicateRegistryHandle.c)
 *     PiCMConvertDeviceKeyType @ 0x1406A87F0 (PiCMConvertDeviceKeyType.c)
 *     PiAuDoesClientHaveAccess @ 0x140700A2C (PiAuDoesClientHaveAccess.c)
 */

__int64 __fastcall PiCMOpenDeviceKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  _DWORD *v7; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  int v10; // edi
  __int64 v11; // rdi
  int v12; // ebx
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // r9
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v19; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v20[4]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v21; // [rsp+54h] [rbp-2Ch]
  int v22; // [rsp+58h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp-20h]
  unsigned int v24; // [rsp+6Ch] [rbp-14h]
  int v25; // [rsp+70h] [rbp-10h]
  int v26; // [rsp+74h] [rbp-Ch]
  unsigned int v27; // [rsp+78h] [rbp-8h]

  v19 = 0LL;
  Handle = 0LL;
  v7 = a6;
  LODWORD(a6) = 0;
  *v7 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = PiCMCaptureRegistryInputData(a1, a2, a5, v20);
  if ( v10 < 0 )
    goto LABEL_14;
  v11 = v23;
  if ( v23 && v22 == 1 && a3 && a4 >= 0x10 )
  {
    v12 = PiCMConvertDeviceKeyType(v21, &a6);
    if ( v12 >= 0 )
    {
      v13 = v24;
      v12 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v11, (int)a6, v26, v24, 0, (__int64)&Handle, 0LL);
      if ( v12 != -1073741772 )
        goto LABEL_8;
      if ( v25 == 1 )
      {
        if ( (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
        {
          v12 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v11, (int)a6, v26, v13, 1, (__int64)&Handle, 0LL);
LABEL_8:
          if ( v12 >= 0 )
          {
            LOBYTE(v15) = PreviousMode;
            v12 = PiCMDuplicateRegistryHandle(Handle, v14, v13, v15, &v19);
          }
          goto LABEL_10;
        }
        v12 = -1073741790;
      }
    }
  }
  else
  {
    v12 = -1073741811;
  }
LABEL_10:
  v10 = PiCMReturnHandleResultData((unsigned int)v12, v19, v27, a3, a4, v7);
  if ( Handle )
    ZwClose(Handle);
  if ( v10 < 0 || v12 < 0 )
  {
    if ( v19 )
      ObCloseHandle(v19, PreviousMode);
  }
LABEL_14:
  PiCMReleaseRegistryInputData(v20);
  return (unsigned int)v10;
}
