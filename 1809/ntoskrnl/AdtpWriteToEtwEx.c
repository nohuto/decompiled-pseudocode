/*
 * XREFs of AdtpWriteToEtwEx @ 0x140325BC0
 * Callers:
 *     SeAuditPlugAndPlay @ 0x14089E368 (SeAuditPlugAndPlay.c)
 * Callees:
 *     AdtpCleanupParameterAllocations @ 0x140188DEC (AdtpCleanupParameterAllocations.c)
 *     EtwWriteKMSecurityEvent @ 0x140188E40 (EtwWriteKMSecurityEvent.c)
 *     AdtpPackageParameters @ 0x140188EDC (AdtpPackageParameters.c)
 *     AdtpNormalizeAuditInfoHelper @ 0x14018CD20 (AdtpNormalizeAuditInfoHelper.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     AdtpGetCategoryAndSubCategoryId @ 0x14074EAEC (AdtpGetCategoryAndSubCategoryId.c)
 */

__int64 __fastcall AdtpWriteToEtwEx(__int64 a1, _BYTE *a2)
{
  unsigned __int16 v4; // bx
  int v5; // r8d
  int v6; // edi
  __int16 v7; // r15
  unsigned __int16 v8; // ax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned int v11; // ecx
  char *v12; // rax
  unsigned __int16 v14[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v15; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v16; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 v17; // [rsp+50h] [rbp-B0h] BYREF
  char v18; // [rsp+52h] [rbp-AEh]
  __int16 v19; // [rsp+53h] [rbp-ADh]
  char v20; // [rsp+55h] [rbp-ABh]
  __int16 v21; // [rsp+56h] [rbp-AAh]
  unsigned __int64 v22; // [rsp+58h] [rbp-A8h]
  _BYTE v23[320]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v24; // [rsp+1A0h] [rbp+A0h] BYREF
  char v25; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v26[48]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _BYTE v27[2048]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v4 = 0;
  v14[0] = 0;
  memset(v27, 0, sizeof(v27));
  memset(v23, 0, sizeof(v23));
  memset(v26, 0, sizeof(v26));
  *a2 = 0;
  AdtpNormalizeAuditInfoHelper(0LL, a1);
  if ( *(_QWORD *)(a1 + 56) )
  {
    v7 = *(_WORD *)(a1 + 22);
    v6 = AdtpPackageParameters(0LL, a1, v5, (__int64)v27, (__int64)v23, (__int64)&v24, v14, (__int64)v26);
    if ( v6 < 0 )
    {
      v4 = v14[0];
    }
    else
    {
      v8 = *(_WORD *)(a1 + 20);
      if ( v8 && (int)AdtpGetCategoryAndSubCategoryId(v8, &v15, &v16) >= 0 )
      {
        v9 = (unsigned __int16)(v15 + 48) << 8;
        LOWORD(v9) = v16 + ((v15 + 48) << 8);
      }
      else
      {
        v9 = 65280LL;
      }
      v17 = *(_WORD *)(a1 + 4);
      v18 = *(_BYTE *)(a1 + 8);
      v10 = 0x8020000000000000uLL;
      if ( v7 != 8 )
        v10 = 0x8010000000000000uLL;
      v20 = 0;
      v22 = v10;
      v11 = 0;
      v19 = 10;
      v4 = v14[0];
      v21 = v9;
      if ( !v14[0] )
        goto LABEL_15;
      v12 = &v25;
      v9 = v14[0];
      do
      {
        v11 += *(_DWORD *)v12;
        v12 += 16;
        --v9;
      }
      while ( v9 );
      if ( v11 > 0xDC00 )
      {
        *a2 = 1;
        v6 = -2147483643;
      }
      else
      {
LABEL_15:
        v6 = EtwWriteKMSecurityEvent(&v17, v9, v14[0], (unsigned __int64)&v24 & -(__int64)(v14[0] != 0));
        if ( v6 == -1073741058 )
          *a2 = 1;
      }
    }
  }
  else
  {
    v6 = -1073741811;
  }
  AdtpCleanupParameterAllocations(v26, &v24, v4);
  return (unsigned int)v6;
}
