/*
 * XREFs of AdtpWriteToEtw @ 0x1406E1AC8
 * Callers:
 *     SepRmCallLsa @ 0x140133120 (SepRmCallLsa.c)
 * Callees:
 *     AdtpCleanupParameterAllocations @ 0x1401334BC (AdtpCleanupParameterAllocations.c)
 *     EtwWriteKMSecurityEvent @ 0x14013350C (EtwWriteKMSecurityEvent.c)
 *     AdtpPackageParameters @ 0x1401335A8 (AdtpPackageParameters.c)
 *     AdtpNormalizeAuditInfoHelper @ 0x14013C538 (AdtpNormalizeAuditInfoHelper.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     AdtpGetCategoryAndSubCategoryId @ 0x1406E1E0C (AdtpGetCategoryAndSubCategoryId.c)
 */

__int64 __fastcall AdtpWriteToEtw(__int64 a1, _BYTE *a2)
{
  unsigned __int16 v4; // bx
  int v5; // r8d
  int v6; // edi
  __int16 v7; // r15
  __int64 v8; // rdx
  unsigned __int16 v9; // ax
  __int16 v10; // r8
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned __int64 v16; // rax
  unsigned int v17; // ecx
  char *v18; // rax
  bool v19; // cc
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int16 v23[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v24; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v25; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 v26; // [rsp+50h] [rbp-B0h] BYREF
  char v27; // [rsp+52h] [rbp-AEh]
  __int16 v28; // [rsp+53h] [rbp-ADh]
  char v29; // [rsp+55h] [rbp-ABh]
  __int16 v30; // [rsp+56h] [rbp-AAh]
  unsigned __int64 v31; // [rsp+58h] [rbp-A8h]
  _BYTE v32[320]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR v33; // [rsp+1A0h] [rbp+A0h] BYREF
  char v34; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v35[48]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _BYTE v36[2048]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v4 = 0;
  v23[0] = 0;
  memset(v36, 0, sizeof(v36));
  memset(v32, 0, sizeof(v32));
  memset(v35, 0, sizeof(v35));
  *a2 = 0;
  AdtpNormalizeAuditInfoHelper(a1, 0LL);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v6 = -1073741811;
    goto LABEL_47;
  }
  v7 = *(_WORD *)(a1 + 18);
  v6 = AdtpPackageParameters(a1, 0LL, v5, (__int64)v36, (__int64)v32, (__int64)&v33, v23, (__int64)v35);
  if ( v6 < 0 )
  {
    v4 = v23[0];
    goto LABEL_47;
  }
  v9 = *(_WORD *)(a1 + 16);
  if ( v9 && (int)AdtpGetCategoryAndSubCategoryId(v9, &v24, &v25) >= 0 )
  {
    v8 = (unsigned __int16)(v24 + 48) << 8;
    LOWORD(v8) = v25 + ((v24 + 48) << 8);
    v10 = v8;
  }
  else
  {
    v10 = -256;
  }
  v11 = *(_DWORD *)(a1 + 4);
  if ( v11 <= 0x1349 )
  {
    if ( v11 == 4937 )
      goto LABEL_30;
    if ( v11 <= 0x1237 )
    {
      if ( v11 == 4663 )
        goto LABEL_30;
      v12 = v11 - 4616;
      if ( !v12 )
        goto LABEL_30;
      v13 = v12 - 8;
      if ( v13 )
      {
        v14 = v13 - 30;
        if ( v14 )
        {
          v8 = 2LL;
          v15 = v14 - 2;
          if ( v15 )
          {
            if ( v15 != 5 )
              goto LABEL_17;
          }
        }
LABEL_30:
        LOBYTE(v8) = 1;
        goto LABEL_18;
      }
LABEL_43:
      v8 = 2LL;
      goto LABEL_18;
    }
    if ( v11 == 4688 )
      goto LABEL_43;
    if ( v11 - 4697 <= 5 || v11 == 4816 )
      goto LABEL_30;
    v19 = v11 - 4928 <= 5;
    goto LABEL_29;
  }
  if ( v11 <= 0x1501 )
  {
    if ( v11 < 0x1500 && v11 - 5058 > 1 )
    {
      v20 = v11 - 5125;
      if ( (unsigned int)v20 > 0x20 )
        goto LABEL_17;
      v21 = 0x180008001LL;
      if ( !_bittest64(&v21, v20) )
        goto LABEL_17;
    }
    goto LABEL_30;
  }
  if ( v11 >= 0x154B )
  {
    if ( v11 <= 0x154C || v11 == 5632 )
      goto LABEL_30;
    if ( v11 > 0x187F )
    {
      if ( v11 <= 0x1881 )
        goto LABEL_43;
      v19 = v11 <= 0x1883;
LABEL_29:
      if ( v19 )
        goto LABEL_30;
    }
  }
LABEL_17:
  LOBYTE(v8) = 0;
LABEL_18:
  v26 = *(_WORD *)(a1 + 4);
  v16 = 0x8020000000000000uLL;
  v29 = 0;
  if ( v7 != 8 )
    v16 = 0x8010000000000000uLL;
  v27 = v8;
  v31 = v16;
  v17 = 0;
  v28 = 10;
  v4 = v23[0];
  v30 = v10;
  if ( !v23[0] )
    goto LABEL_44;
  v18 = &v34;
  v8 = v23[0];
  do
  {
    v17 += *(_DWORD *)v18;
    v18 += 16;
    --v8;
  }
  while ( v8 );
  if ( v17 > 0xDC00 )
  {
    *a2 = 1;
    v6 = -2147483643;
  }
  else
  {
LABEL_44:
    v6 = EtwWriteKMSecurityEvent(&v26, v8, v23[0], (unsigned __int64)&v33 & -(__int64)(v23[0] != 0));
    if ( v6 == -1073741058 )
      *a2 = 1;
  }
LABEL_47:
  AdtpCleanupParameterAllocations(v35, &v33, v4);
  return (unsigned int)v6;
}
