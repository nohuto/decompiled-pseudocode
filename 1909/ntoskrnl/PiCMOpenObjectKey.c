/*
 * XREFs of PiCMOpenObjectKey @ 0x1406CD03C
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BBB60 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     _PnpOpenObjectRegKey @ 0x1405BC2A0 (_PnpOpenObjectRegKey.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     PiCMReleaseRegistryInputData @ 0x1406CD204 (PiCMReleaseRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x1406CD234 (PiCMReturnHandleResultData.c)
 *     PiCMCaptureRegistryInputData @ 0x1406CD2B8 (PiCMCaptureRegistryInputData.c)
 *     PiCMDuplicateRegistryHandle @ 0x1406CD4CC (PiCMDuplicateRegistryHandle.c)
 *     PiAuDoesClientHaveAccess @ 0x140721E80 (PiAuDoesClientHaveAccess.c)
 *     _PnpCreateObject @ 0x14093721C (_PnpCreateObject.c)
 */

__int64 __fastcall PiCMOpenObjectKey(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  KPROCESSOR_MODE PreviousMode; // r15
  int Object; // ebx
  unsigned int v12; // edi
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // r9
  int v18; // ecx
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v20; // [rsp+48h] [rbp-38h] BYREF
  __int64 v21[6]; // [rsp+50h] [rbp-30h] BYREF

  memset(v21, 0, sizeof(v21));
  v20 = 0LL;
  Handle = 0LL;
  *a6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = PiCMCaptureRegistryInputData(a1, a2, a5, v21);
  if ( Object < 0 )
    goto LABEL_21;
  if ( !v21[2] || HIDWORD(v21[0]) || HIDWORD(v21[4]) || !a3 || a4 < 0x10 )
    goto LABEL_49;
  v12 = 0;
  if ( SLODWORD(v21[1]) <= 6 )
  {
    switch ( LODWORD(v21[1]) )
    {
      case 6:
        v12 = 6;
        goto LABEL_44;
      case 1:
        v12 = 1;
LABEL_45:
        Object = -1073741637;
        goto LABEL_14;
      case 2:
        v12 = 2;
        goto LABEL_14;
      case 3:
        v12 = 4;
        goto LABEL_14;
      case 4:
        v12 = 3;
        goto LABEL_44;
      case 5:
        v12 = 5;
        goto LABEL_44;
    }
  }
  else
  {
    switch ( LODWORD(v21[1]) )
    {
      case 0x10001:
        v13 = 7;
        goto LABEL_11;
      case 0x10002:
        v13 = 8;
LABEL_11:
        v12 = PiDrvDbCtx != 0 ? v13 : 0;
        break;
      case 0x10003:
        v13 = 9;
        goto LABEL_11;
      case 0x10004:
        v13 = 10;
        goto LABEL_11;
      case 0x10005:
        v13 = 11;
        goto LABEL_11;
    }
  }
  if ( !v12 )
  {
LABEL_49:
    Object = -1073741811;
    goto LABEL_18;
  }
  if ( v12 > 6 || v12 <= 4 )
    goto LABEL_14;
LABEL_44:
  if ( LODWORD(v21[4]) == 1 )
    goto LABEL_45;
LABEL_14:
  if ( Object >= 0 )
  {
    Object = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, v21[2], v12, SHIDWORD(v21[3]), 0, (__int64)&Handle);
    if ( Object != -1073741772 )
      goto LABEL_16;
    if ( LODWORD(v21[4]) == 1 )
    {
      if ( (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
      {
        Object = PnpCreateObject(v18, v21[2], v12, HIDWORD(v21[3]), (__int64)&Handle);
LABEL_16:
        if ( Object >= 0 )
        {
          LOBYTE(v15) = PreviousMode;
          Object = PiCMDuplicateRegistryHandle(Handle, v14, HIDWORD(v21[3]), v15, &v20);
        }
        goto LABEL_18;
      }
      Object = -1073741790;
    }
  }
LABEL_18:
  Object = PiCMReturnHandleResultData((unsigned int)Object, v20, LODWORD(v21[5]), a3, a4, a6);
  if ( Handle )
    ZwClose(Handle);
  if ( Object < 0 && v20 )
    ObCloseHandle(v20, PreviousMode);
LABEL_21:
  PiCMReleaseRegistryInputData(v21);
  return (unsigned int)Object;
}
