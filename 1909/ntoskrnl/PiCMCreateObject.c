/*
 * XREFs of PiCMCreateObject @ 0x140870FE0
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BBB60 (PiCMHandleIoctl.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     PiCMReleaseObjectInputData @ 0x1406CF518 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406CF74C (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x140721E08 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x140721E80 (PiAuDoesClientHaveAccess.c)
 *     _PnpCreateObject @ 0x14093721C (_PnpCreateObject.c)
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
  int v11; // edx
  int v12; // ecx
  unsigned int v13; // r8d
  _QWORD v15[6]; // [rsp+40h] [rbp-38h] BYREF

  memset(v15, 0, 0x28uLL);
  *a6 = 0;
  Object = PiCMCaptureObjectInputData(a1, a2, a5, (char *)v15);
  if ( Object >= 0 )
  {
    if ( !PiAuDoesClientHaveAccess(2u) )
    {
      Object = -1073741790;
LABEL_39:
      Object = PiCMReturnBasicResultData(Object, v15[4], a3, a4, a6);
      goto LABEL_40;
    }
    if ( !v15[2] )
      goto LABEL_38;
    if ( HIDWORD(v15[0]) )
      goto LABEL_38;
    if ( HIDWORD(v15[3]) )
      goto LABEL_38;
    if ( !a3 )
      goto LABEL_38;
    v11 = 8;
    if ( a4 < 8 )
      goto LABEL_38;
    v12 = v15[1];
    v13 = 0;
    if ( SLODWORD(v15[1]) <= 6 )
    {
      if ( LODWORD(v15[1]) == 6 )
      {
        v13 = 6;
        goto LABEL_35;
      }
      v12 = LODWORD(v15[1]) - 1;
      if ( LODWORD(v15[1]) == 1 )
      {
        v13 = 1;
        goto LABEL_35;
      }
      v12 = LODWORD(v15[1]) - 2;
      if ( LODWORD(v15[1]) == 2 )
      {
        v13 = 2;
        goto LABEL_36;
      }
      v12 = LODWORD(v15[1]) - 3;
      if ( LODWORD(v15[1]) == 3 )
      {
        v13 = 4;
        goto LABEL_36;
      }
      v12 = LODWORD(v15[1]) - 4;
      if ( LODWORD(v15[1]) == 4 )
      {
        v13 = 3;
        goto LABEL_35;
      }
      if ( LODWORD(v15[1]) == 5 )
      {
        v13 = 5;
        goto LABEL_35;
      }
      goto LABEL_32;
    }
    v12 = LODWORD(v15[1]) - 65537;
    if ( LODWORD(v15[1]) == 65537 )
    {
      v11 = 7;
    }
    else
    {
      v12 = LODWORD(v15[1]) - 65538;
      if ( LODWORD(v15[1]) != 65538 )
      {
        v12 = LODWORD(v15[1]) - 65539;
        if ( LODWORD(v15[1]) == 65539 )
        {
          v11 = 9;
        }
        else
        {
          v12 = LODWORD(v15[1]) - 65540;
          if ( LODWORD(v15[1]) == 65540 )
          {
            v11 = 10;
          }
          else
          {
            if ( LODWORD(v15[1]) != 65541 )
              goto LABEL_32;
            v11 = 11;
          }
        }
      }
    }
    v13 = PiDrvDbCtx != 0 ? v11 : 0;
LABEL_32:
    if ( v13 )
    {
      if ( v13 <= 4 || v13 > 6 )
      {
LABEL_36:
        if ( Object >= 0 )
          Object = PnpCreateObject(v12, v15[2], v13, 0, 0LL);
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
  PiCMReleaseObjectInputData((__int64)v15);
  return (unsigned int)Object;
}
