/*
 * XREFs of AdtpWriteToEtw @ 0x14074E754
 * Callers:
 *     SepRmCallLsa @ 0x14012FC10 (SepRmCallLsa.c)
 * Callees:
 *     AdtpCleanupParameterAllocations @ 0x140188DEC (AdtpCleanupParameterAllocations.c)
 *     EtwWriteKMSecurityEvent @ 0x140188E40 (EtwWriteKMSecurityEvent.c)
 *     AdtpPackageParameters @ 0x140188EDC (AdtpPackageParameters.c)
 *     AdtpNormalizeAuditInfoHelper @ 0x14018CD20 (AdtpNormalizeAuditInfoHelper.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EvaluateCurrentState @ 0x1401B3F70 (EvaluateCurrentState.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     AdtpGetCategoryAndSubCategoryId @ 0x14074EAEC (AdtpGetCategoryAndSubCategoryId.c)
 */

__int64 __fastcall AdtpWriteToEtw(__int64 a1, _BYTE *a2)
{
  unsigned __int16 v4; // bx
  int v5; // r8d
  int v6; // edi
  __int16 v7; // r15
  __int64 v8; // rdx
  unsigned __int16 v9; // ax
  __int16 v10; // di
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  bool v17; // zf
  unsigned __int64 v18; // rax
  unsigned int v19; // ecx
  char *v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int16 v24[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v25; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v26; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 v27; // [rsp+50h] [rbp-B0h] BYREF
  char v28; // [rsp+52h] [rbp-AEh]
  __int16 v29; // [rsp+53h] [rbp-ADh]
  char v30; // [rsp+55h] [rbp-ABh]
  __int16 v31; // [rsp+56h] [rbp-AAh]
  unsigned __int64 v32; // [rsp+58h] [rbp-A8h]
  _BYTE v33[320]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v34; // [rsp+1A0h] [rbp+A0h] BYREF
  char v35; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v36[48]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _BYTE v37[2048]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v4 = 0;
  v24[0] = 0;
  memset(v37, 0, sizeof(v37));
  memset(v33, 0, sizeof(v33));
  memset(v36, 0, sizeof(v36));
  *a2 = 0;
  AdtpNormalizeAuditInfoHelper(a1, 0LL);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v6 = -1073741811;
    goto LABEL_55;
  }
  v7 = *(_WORD *)(a1 + 18);
  v6 = AdtpPackageParameters(a1, 0LL, v5, (__int64)v37, (__int64)v33, (__int64)&v34, v24, (__int64)v36);
  if ( v6 < 0 )
  {
    v4 = v24[0];
    goto LABEL_55;
  }
  v9 = *(_WORD *)(a1 + 16);
  if ( v9 && (int)AdtpGetCategoryAndSubCategoryId(v9, &v25, &v26) >= 0 )
  {
    v8 = (unsigned __int16)(v25 + 48) << 8;
    LOWORD(v8) = v26 + ((v25 + 48) << 8);
    v10 = v8;
  }
  else
  {
    v10 = -256;
  }
  v11 = *(_DWORD *)(a1 + 4);
  if ( v11 > 0x1319 )
  {
    if ( v11 <= 0x1501 )
    {
      if ( v11 < 0x1500 && v11 - 4928 > 5 && v11 != 4937 && v11 - 5058 > 1 )
      {
        v21 = v11 - 5125;
        if ( (unsigned int)v21 > 0x20 )
          goto LABEL_26;
        v22 = 0x180008001LL;
        if ( !_bittest64(&v22, v21) )
          goto LABEL_26;
      }
      goto LABEL_41;
    }
    if ( v11 < 0x154B )
      goto LABEL_26;
    if ( v11 <= 0x154C || v11 == 5632 )
    {
LABEL_41:
      LOBYTE(v8) = 1;
      goto LABEL_27;
    }
    if ( v11 == 5712 )
    {
      LOBYTE(v8) = EvaluateCurrentState((_DWORD **)&g_Feature_Servicing_Opnum_Filter_50613763_FeatureDescriptorDetails);
      goto LABEL_27;
    }
    if ( v11 <= 0x187F )
      goto LABEL_26;
    if ( v11 > 0x1881 )
    {
      if ( v11 > 0x1883 )
        goto LABEL_26;
      goto LABEL_41;
    }
    goto LABEL_50;
  }
  if ( v11 >= 0x1316 )
    goto LABEL_41;
  if ( v11 <= 0x1250 )
  {
    if ( v11 != 4688 )
    {
      v12 = v11 - 4616;
      if ( !v12 )
        goto LABEL_41;
      v13 = v12 - 8;
      if ( v13 )
      {
        v14 = v13 - 30;
        if ( !v14 )
          goto LABEL_41;
        v8 = 2LL;
        v15 = v14 - 2;
        if ( !v15 )
          goto LABEL_41;
        v16 = v15 - 5;
        if ( !v16 )
          goto LABEL_41;
        v17 = v16 == 2;
LABEL_25:
        if ( !v17 )
          goto LABEL_26;
        goto LABEL_41;
      }
    }
    goto LABEL_50;
  }
  if ( v11 >= 0x1259 )
  {
    if ( v11 <= 0x125E || v11 == 4719 )
      goto LABEL_41;
    if ( v11 > 0x129F )
    {
      if ( v11 > 0x12A1 )
      {
        if ( v11 == 4770 )
          goto LABEL_41;
        v17 = v11 == 4816;
        goto LABEL_25;
      }
LABEL_50:
      v8 = 2LL;
      goto LABEL_27;
    }
  }
LABEL_26:
  LOBYTE(v8) = 0;
LABEL_27:
  v27 = *(_WORD *)(a1 + 4);
  v18 = 0x8020000000000000uLL;
  v30 = 0;
  if ( v7 != 8 )
    v18 = 0x8010000000000000uLL;
  v28 = v8;
  v32 = v18;
  v19 = 0;
  v29 = 10;
  v4 = v24[0];
  v31 = v10;
  if ( !v24[0] )
    goto LABEL_52;
  v20 = &v35;
  v8 = v24[0];
  do
  {
    v19 += *(_DWORD *)v20;
    v20 += 16;
    --v8;
  }
  while ( v8 );
  if ( v19 > 0xDC00 )
  {
    *a2 = 1;
    v6 = -2147483643;
  }
  else
  {
LABEL_52:
    v6 = EtwWriteKMSecurityEvent(&v27, v8, v24[0], (unsigned __int64)&v34 & -(__int64)(v24[0] != 0));
    if ( v6 == -1073741058 )
      *a2 = 1;
  }
LABEL_55:
  AdtpCleanupParameterAllocations(v36, &v34, v4);
  return (unsigned int)v6;
}
