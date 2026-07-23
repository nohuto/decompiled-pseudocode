/*
 * XREFs of PiCMDeleteObject @ 0x140838A10
 * Callers:
 *     PiCMHandleIoctl @ 0x1405984F0 (PiCMHandleIoctl.c)
 * Callees:
 *     PiPnpRtlEndOperation @ 0x140596CA4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140597E08 (PiPnpRtlBeginOperation.c)
 *     PiCMReleaseObjectInputData @ 0x14059E6AC (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14059E6DC (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x1405A060C (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x140700A2C (PiAuDoesClientHaveAccess.c)
 *     _PnpDeleteObject @ 0x1408FB088 (_PnpDeleteObject.c)
 */

__int64 __fastcall PiCMDeleteObject(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r12
  PVOID **v9; // rsi
  int v10; // ebx
  int v11; // edx
  unsigned int v12; // edi
  __int64 v13; // rcx
  char v15[4]; // [rsp+30h] [rbp-48h] BYREF
  int v16; // [rsp+34h] [rbp-44h]
  int v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+40h] [rbp-38h]
  int v19; // [rsp+4Ch] [rbp-2Ch]
  int v20; // [rsp+50h] [rbp-28h]

  v6 = a6;
  v9 = 0LL;
  a6 = 0LL;
  *v6 = 0;
  v10 = PiCMCaptureObjectInputData(a1, a2, a5, v15);
  if ( v10 >= 0 )
  {
    if ( !PiAuDoesClientHaveAccess(2u) )
    {
      v10 = -1073741790;
LABEL_41:
      v10 = PiCMReturnBasicResultData(v10, v20, a3, a4, v6);
      goto LABEL_42;
    }
    if ( !v18 )
      goto LABEL_40;
    if ( v16 )
      goto LABEL_40;
    if ( v19 )
      goto LABEL_40;
    if ( !a3 )
      goto LABEL_40;
    v11 = 8;
    if ( a4 < 8 )
      goto LABEL_40;
    v12 = 0;
    if ( v17 <= 6 )
    {
      switch ( v17 )
      {
        case 6:
          v12 = 6;
          goto LABEL_35;
        case 1:
          v12 = 1;
          goto LABEL_35;
        case 2:
          v12 = 2;
          goto LABEL_36;
        case 3:
          v12 = 4;
          goto LABEL_36;
        case 4:
          v12 = 3;
          goto LABEL_35;
        case 5:
          v12 = 5;
          goto LABEL_35;
      }
      goto LABEL_32;
    }
    if ( v17 == 65537 )
    {
      v11 = 7;
    }
    else if ( v17 != 65538 )
    {
      switch ( v17 )
      {
        case 65539:
          v11 = 9;
          break;
        case 65540:
          v11 = 10;
          break;
        case 65541:
          v11 = 11;
          break;
        default:
          goto LABEL_32;
      }
    }
    v12 = PiDrvDbCtx != 0 ? v11 : 0;
LABEL_32:
    if ( v12 )
    {
      if ( v12 <= 4 || v12 > 6 )
      {
LABEL_36:
        if ( v10 >= 0 )
        {
          v10 = PiPnpRtlBeginOperation(&a6);
          if ( v10 >= 0 )
            v10 = PnpDeleteObject(v13, v18, v12);
          v9 = (PVOID **)a6;
        }
        goto LABEL_41;
      }
LABEL_35:
      v10 = -1073741637;
      goto LABEL_36;
    }
LABEL_40:
    v10 = -1073741811;
    goto LABEL_41;
  }
LABEL_42:
  PiCMReleaseObjectInputData((__int64)v15);
  if ( v9 )
    PiPnpRtlEndOperation(v9);
  return (unsigned int)v10;
}
