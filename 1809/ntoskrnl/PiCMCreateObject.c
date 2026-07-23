/*
 * XREFs of PiCMCreateObject @ 0x140838158
 * Callers:
 *     PiCMHandleIoctl @ 0x1405984F0 (PiCMHandleIoctl.c)
 * Callees:
 *     PiCMReleaseObjectInputData @ 0x14059E6AC (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14059E6DC (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x1405A060C (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x140700A2C (PiAuDoesClientHaveAccess.c)
 *     _PnpCreateObject @ 0x1408FADE0 (_PnpCreateObject.c)
 */

__int64 __fastcall PiCMCreateObject(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  int Object; // ebx
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // r8d
  char v13[4]; // [rsp+40h] [rbp-38h] BYREF
  int v14; // [rsp+44h] [rbp-34h]
  int v15; // [rsp+48h] [rbp-30h]
  __int64 v16; // [rsp+50h] [rbp-28h]
  int v17; // [rsp+5Ch] [rbp-1Ch]
  int v18; // [rsp+60h] [rbp-18h]

  *a6 = 0;
  Object = PiCMCaptureObjectInputData(a1, a2, a5, v13);
  if ( Object >= 0 )
  {
    if ( !PiAuDoesClientHaveAccess(2u) )
    {
      Object = -1073741790;
LABEL_39:
      Object = PiCMReturnBasicResultData(Object, v18, a3, a4, a6);
      goto LABEL_40;
    }
    if ( !v16 )
      goto LABEL_38;
    if ( v14 )
      goto LABEL_38;
    if ( v17 )
      goto LABEL_38;
    if ( !a3 )
      goto LABEL_38;
    v9 = 8;
    if ( a4 < 8 )
      goto LABEL_38;
    v10 = v15;
    v11 = 0;
    if ( v15 <= 6 )
    {
      if ( v15 == 6 )
      {
        v11 = 6;
        goto LABEL_35;
      }
      v10 = v15 - 1;
      if ( v15 == 1 )
      {
        v11 = 1;
        goto LABEL_35;
      }
      v10 = v15 - 2;
      if ( v15 == 2 )
      {
        v11 = 2;
        goto LABEL_36;
      }
      v10 = v15 - 3;
      if ( v15 == 3 )
      {
        v11 = 4;
        goto LABEL_36;
      }
      v10 = v15 - 4;
      if ( v15 == 4 )
      {
        v11 = 3;
        goto LABEL_35;
      }
      if ( v15 == 5 )
      {
        v11 = 5;
        goto LABEL_35;
      }
      goto LABEL_32;
    }
    v10 = v15 - 65537;
    if ( v15 == 65537 )
    {
      v9 = 7;
    }
    else
    {
      v10 = v15 - 65538;
      if ( v15 != 65538 )
      {
        v10 = v15 - 65539;
        if ( v15 == 65539 )
        {
          v9 = 9;
        }
        else
        {
          v10 = v15 - 65540;
          if ( v15 == 65540 )
          {
            v9 = 10;
          }
          else
          {
            if ( v15 != 65541 )
              goto LABEL_32;
            v9 = 11;
          }
        }
      }
    }
    v11 = PiDrvDbCtx != 0 ? v9 : 0;
LABEL_32:
    if ( v11 )
    {
      if ( v11 <= 4 || v11 > 6 )
      {
LABEL_36:
        if ( Object >= 0 )
          Object = PnpCreateObject(v10, v16, v11, 0, 0LL);
        goto LABEL_39;
      }
LABEL_35:
      Object = -1073741637;
      goto LABEL_36;
    }
LABEL_38:
    Object = -1073741811;
    goto LABEL_39;
  }
LABEL_40:
  PiCMReleaseObjectInputData((__int64)v13);
  return (unsigned int)Object;
}
