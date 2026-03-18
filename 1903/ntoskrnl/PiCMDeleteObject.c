/*
 * XREFs of PiCMDeleteObject @ 0x140872250
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BB780 (PiCMHandleIoctl.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PiPnpRtlEndOperation @ 0x1405BB544 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405BD2F8 (PiPnpRtlBeginOperation.c)
 *     PiCMReleaseObjectInputData @ 0x1406D02A8 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406D04DC (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x14071FF68 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x14071FFE0 (PiAuDoesClientHaveAccess.c)
 *     _PnpDeleteObject @ 0x140937A2C (_PnpDeleteObject.c)
 */

__int64 __fastcall PiCMDeleteObject(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v10; // r13
  PVOID **v11; // rsi
  int v12; // ebx
  int v13; // edx
  unsigned int v14; // edi
  __int64 v15; // rcx
  _QWORD v17[6]; // [rsp+30h] [rbp-30h] BYREF

  memset(v17, 0, 0x28uLL);
  v10 = a6;
  v11 = 0LL;
  a6 = 0LL;
  *v10 = 0;
  v12 = PiCMCaptureObjectInputData(a1, a2, a5, (char *)v17);
  if ( v12 >= 0 )
  {
    if ( !PiAuDoesClientHaveAccess(2u) )
    {
      v12 = -1073741790;
LABEL_41:
      v12 = PiCMReturnBasicResultData(v12, v17[4], a3, a4, v10);
      goto LABEL_42;
    }
    if ( !v17[2] )
      goto LABEL_40;
    if ( HIDWORD(v17[0]) )
      goto LABEL_40;
    if ( HIDWORD(v17[3]) )
      goto LABEL_40;
    if ( !a3 )
      goto LABEL_40;
    v13 = 8;
    if ( a4 < 8 )
      goto LABEL_40;
    v14 = 0;
    if ( SLODWORD(v17[1]) <= 6 )
    {
      switch ( LODWORD(v17[1]) )
      {
        case 6:
          v14 = 6;
          goto LABEL_35;
        case 1:
          v14 = 1;
          goto LABEL_35;
        case 2:
          v14 = 2;
          goto LABEL_36;
        case 3:
          v14 = 4;
          goto LABEL_36;
        case 4:
          v14 = 3;
          goto LABEL_35;
        case 5:
          v14 = 5;
          goto LABEL_35;
      }
      goto LABEL_32;
    }
    if ( LODWORD(v17[1]) == 65537 )
    {
      v13 = 7;
    }
    else if ( LODWORD(v17[1]) != 65538 )
    {
      switch ( LODWORD(v17[1]) )
      {
        case 0x10003:
          v13 = 9;
          break;
        case 0x10004:
          v13 = 10;
          break;
        case 0x10005:
          v13 = 11;
          break;
        default:
          goto LABEL_32;
      }
    }
    v14 = PiDrvDbCtx != 0 ? v13 : 0;
LABEL_32:
    if ( v14 )
    {
      if ( v14 <= 4 || v14 > 6 )
      {
LABEL_36:
        if ( v12 >= 0 )
        {
          v12 = PiPnpRtlBeginOperation(&a6);
          if ( v12 >= 0 )
            v12 = PnpDeleteObject(v15, v17[2], v14);
          v11 = (PVOID **)a6;
        }
        goto LABEL_41;
      }
LABEL_35:
      v12 = -1073741637;
      goto LABEL_36;
    }
LABEL_40:
    v12 = -1073741811;
    goto LABEL_41;
  }
LABEL_42:
  PiCMReleaseObjectInputData((__int64)v17);
  if ( v11 )
    PiPnpRtlEndOperation(v11);
  return (unsigned int)v12;
}
