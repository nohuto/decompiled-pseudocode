/*
 * XREFs of PiCMOpenObjectKey @ 0x1406A82D4
 * Callers:
 *     PiCMHandleIoctl @ 0x1405984F0 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _PnpOpenObjectRegKey @ 0x140598118 (_PnpOpenObjectRegKey.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     PiCMReleaseRegistryInputData @ 0x1406A8484 (PiCMReleaseRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x1406A84B4 (PiCMReturnHandleResultData.c)
 *     PiCMCaptureRegistryInputData @ 0x1406A8540 (PiCMCaptureRegistryInputData.c)
 *     PiCMDuplicateRegistryHandle @ 0x1406A8754 (PiCMDuplicateRegistryHandle.c)
 *     PiAuDoesClientHaveAccess @ 0x140700A2C (PiAuDoesClientHaveAccess.c)
 *     _PnpCreateObject @ 0x1408FADE0 (_PnpCreateObject.c)
 */

__int64 __fastcall PiCMOpenObjectKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  KPROCESSOR_MODE PreviousMode; // r15
  int Object; // ebx
  unsigned int v10; // edi
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // r9
  int v16; // ecx
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v18; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v19[4]; // [rsp+50h] [rbp-30h] BYREF
  int v20; // [rsp+54h] [rbp-2Ch]
  int v21; // [rsp+58h] [rbp-28h]
  __int64 v22; // [rsp+60h] [rbp-20h]
  unsigned int v23; // [rsp+6Ch] [rbp-14h]
  int v24; // [rsp+70h] [rbp-10h]
  int v25; // [rsp+74h] [rbp-Ch]
  unsigned int v26; // [rsp+78h] [rbp-8h]

  v18 = 0LL;
  Handle = 0LL;
  *a6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = PiCMCaptureRegistryInputData(a1, a2, a5, v19);
  if ( Object < 0 )
    goto LABEL_21;
  if ( !v22 || v20 || v25 || !a3 || a4 < 0x10 )
    goto LABEL_49;
  v10 = 0;
  if ( v21 <= 6 )
  {
    switch ( v21 )
    {
      case 6:
        v10 = 6;
        goto LABEL_44;
      case 1:
        v10 = 1;
LABEL_45:
        Object = -1073741637;
        goto LABEL_14;
      case 2:
        v10 = 2;
        goto LABEL_14;
      case 3:
        v10 = 4;
        goto LABEL_14;
      case 4:
        v10 = 3;
        goto LABEL_44;
      case 5:
        v10 = 5;
        goto LABEL_44;
    }
  }
  else
  {
    switch ( v21 )
    {
      case 65537:
        v11 = 7;
        goto LABEL_11;
      case 65538:
        v11 = 8;
LABEL_11:
        v10 = PiDrvDbCtx != 0 ? v11 : 0;
        break;
      case 65539:
        v11 = 9;
        goto LABEL_11;
      case 65540:
        v11 = 10;
        goto LABEL_11;
      case 65541:
        v11 = 11;
        goto LABEL_11;
    }
  }
  if ( !v10 )
  {
LABEL_49:
    Object = -1073741811;
    goto LABEL_18;
  }
  if ( v10 > 6 || v10 <= 4 )
    goto LABEL_14;
LABEL_44:
  if ( v24 == 1 )
    goto LABEL_45;
LABEL_14:
  if ( Object >= 0 )
  {
    Object = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, v22, v10, v23, 0, (__int64)&Handle);
    if ( Object != -1073741772 )
      goto LABEL_16;
    if ( v24 == 1 )
    {
      if ( (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
      {
        Object = PnpCreateObject(v16, v22, v10, v23, (__int64)&Handle);
LABEL_16:
        if ( Object >= 0 )
        {
          LOBYTE(v13) = PreviousMode;
          Object = PiCMDuplicateRegistryHandle(Handle, v12, v23, v13, &v18);
        }
        goto LABEL_18;
      }
      Object = -1073741790;
    }
  }
LABEL_18:
  Object = PiCMReturnHandleResultData((unsigned int)Object, v18, v26, a3, a4, a6);
  if ( Handle )
    ZwClose(Handle);
  if ( Object < 0 && v18 )
    ObCloseHandle(v18, PreviousMode);
LABEL_21:
  PiCMReleaseRegistryInputData(v19);
  return (unsigned int)Object;
}
