/*
 * XREFs of PfSnParametersRead @ 0x140753510
 * Callers:
 *     PfpParametersWatcher @ 0x140866C70 (PfpParametersWatcher.c)
 *     PfpParametersInitialize @ 0x1409D572C (PfpParametersInitialize.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x1400073A0 (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wcsupr @ 0x140195D90 (_wcsupr.c)
 *     PfpGetParameter @ 0x140753A78 (PfpGetParameter.c)
 *     PfSnParametersVerify @ 0x140753B60 (PfSnParametersVerify.c)
 */

__int64 __fastcall PfSnParametersRead(__int64 a1)
{
  __int64 v1; // r14
  _BYTE *v2; // rdx
  _OWORD *v3; // rax
  __int64 v4; // r8
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rax
  void *v16; // r12
  _DWORD *v17; // rax
  signed int v18; // r15d
  _DWORD *v19; // rdi
  char *v20; // rsi
  const wchar_t **v21; // r13
  const wchar_t *v22; // rbx
  int v23; // eax
  const wchar_t *v24; // r8
  __int64 v25; // rcx
  wchar_t *v26; // rax
  wchar_t *v27; // rdx
  __int64 v28; // rax
  char *v29; // r9
  wchar_t v30; // r8
  __int64 v31; // rcx
  wchar_t *v32; // rax
  wchar_t *v33; // rdx
  __int64 v34; // rax
  char *v35; // r9
  wchar_t v36; // r8
  __int64 v37; // rcx
  wchar_t *v38; // rax
  wchar_t *v39; // rdx
  __int64 v40; // rax
  char *v41; // r9
  wchar_t v42; // r8
  __int64 result; // rax
  __int64 v44; // rdi
  _OWORD *v45; // rcx
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int64 v55; // rcx
  __int64 v56; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v57; // [rsp+38h] [rbp-C8h]
  __int64 v58; // [rsp+40h] [rbp-C0h]
  _BYTE v59[8]; // [rsp+50h] [rbp-B0h] BYREF
  char v60; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t String[128]; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t pszDest[80]; // [rsp+1F0h] [rbp+F0h] BYREF

  v1 = 3LL;
  v58 = a1 + 96;
  v2 = v59;
  v3 = (_OWORD *)(a1 + 96);
  v4 = 3LL;
  do
  {
    v2 += 128;
    v6 = *v3;
    v7 = v3[1];
    v3 += 8;
    *((_OWORD *)v2 - 8) = v6;
    v8 = *(v3 - 6);
    *((_OWORD *)v2 - 7) = v7;
    v9 = *(v3 - 5);
    *((_OWORD *)v2 - 6) = v8;
    v10 = *(v3 - 4);
    *((_OWORD *)v2 - 5) = v9;
    v11 = *(v3 - 3);
    *((_OWORD *)v2 - 4) = v10;
    v12 = *(v3 - 2);
    *((_OWORD *)v2 - 3) = v11;
    v13 = *(v3 - 1);
    *((_OWORD *)v2 - 2) = v12;
    *((_OWORD *)v2 - 1) = v13;
    --v4;
  }
  while ( v4 );
  v14 = *v3;
  v15 = *((_QWORD *)v3 + 2);
  v16 = *(void **)(a1 + 8);
  *(_OWORD *)v2 = v14;
  *((_QWORD *)v2 + 2) = v15;
  v56 = 4LL;
  if ( (int)PfpGetParameter(v16, (__int64)&v56) < 0 )
    v17 = 0LL;
  else
    v17 = (_DWORD *)&v56 + 1;
  v18 = 0;
  v57 = v17;
  v19 = v59;
  v20 = &v60;
  v21 = (const wchar_t **)(a1 + 520);
  do
  {
    v22 = *v21;
    if ( v17 )
    {
      v23 = *v17;
      if ( _bittest(&v23, v18) )
        LODWORD(v17) = 1;
      else
        LODWORD(v17) = 2;
    }
    v24 = *v21;
    *v19 = (_DWORD)v17;
    RtlStringCbCopyW(pszDest, 0xA0uLL, v24);
    v25 = 80LL;
    v26 = pszDest;
    while ( *v26 )
    {
      ++v26;
      if ( !--v25 )
        goto LABEL_19;
    }
    v27 = &pszDest[80 - v25];
    v28 = 2147483646LL;
    v29 = (char *)((char *)L"MaxNumPages" - (char *)v27);
    while ( v28 )
    {
      v30 = *(wchar_t *)((char *)v27 + (_QWORD)v29);
      if ( !v30 )
        break;
      *v27 = v30;
      --v28;
      ++v27;
      if ( !--v25 )
      {
        --v27;
        break;
      }
    }
    *v27 = 0;
LABEL_19:
    LODWORD(v56) = 4;
    PfpGetParameter(v16, (__int64)&v56);
    RtlStringCbCopyW(pszDest, 0xA0uLL, v22);
    v31 = 80LL;
    v32 = pszDest;
    while ( *v32 )
    {
      ++v32;
      if ( !--v31 )
        goto LABEL_29;
    }
    v33 = &pszDest[80 - v31];
    v34 = 2147483646LL;
    v35 = (char *)((char *)L"MaxNumSections" - (char *)v33);
    while ( v34 )
    {
      v36 = *(wchar_t *)((char *)v33 + (_QWORD)v35);
      if ( !v36 )
        break;
      *v33 = v36;
      --v34;
      ++v33;
      if ( !--v31 )
      {
        --v33;
        break;
      }
    }
    *v33 = 0;
LABEL_29:
    LODWORD(v56) = 4;
    PfpGetParameter(v16, (__int64)&v56);
    RtlStringCbCopyW(pszDest, 0xA0uLL, v22);
    v37 = 80LL;
    v38 = pszDest;
    while ( *v38 )
    {
      ++v38;
      if ( !--v37 )
        goto LABEL_39;
    }
    v39 = &pszDest[80 - v37];
    v40 = 2147483646LL;
    v41 = (char *)((char *)L"TimerPeriod" - (char *)v39);
    while ( v40 )
    {
      v42 = *(_WORD *)&v41[(_QWORD)v39];
      if ( !v42 )
        break;
      *v39 = v42;
      --v40;
      ++v39;
      if ( !--v37 )
      {
        --v39;
        break;
      }
    }
    *v39 = 0;
LABEL_39:
    LODWORD(v56) = 8;
    PfpGetParameter(v16, (__int64)&v56);
    v17 = v57;
    ++v18;
    v20 += 16;
    ++v21;
    ++v19;
  }
  while ( v18 < 2 );
  LODWORD(v56) = 96;
  PfpGetParameter(v16, (__int64)&v56);
  LODWORD(v56) = 4;
  PfpGetParameter(v16, (__int64)&v56);
  LODWORD(v56) = 4;
  PfpGetParameter(v16, (__int64)&v56);
  LODWORD(v56) = 4;
  PfpGetParameter(v16, (__int64)&v56);
  LODWORD(v56) = 256;
  PfpGetParameter(v16, (__int64)&v56);
  String[127] = 0;
  wcsupr(String);
  LODWORD(v56) = 4;
  PfpGetParameter(v16, (__int64)&v56);
  result = PfSnParametersVerify(v59);
  v44 = v58;
  if ( (int)result >= 0 )
  {
    v45 = v59;
    do
    {
      v44 += 128LL;
      v46 = *v45;
      v47 = v45[1];
      v45 += 8;
      *(_OWORD *)(v44 - 128) = v46;
      v48 = *(v45 - 6);
      *(_OWORD *)(v44 - 112) = v47;
      v49 = *(v45 - 5);
      *(_OWORD *)(v44 - 96) = v48;
      v50 = *(v45 - 4);
      *(_OWORD *)(v44 - 80) = v49;
      v51 = *(v45 - 3);
      *(_OWORD *)(v44 - 64) = v50;
      v52 = *(v45 - 2);
      *(_OWORD *)(v44 - 48) = v51;
      v53 = *(v45 - 1);
      *(_OWORD *)(v44 - 32) = v52;
      *(_OWORD *)(v44 - 16) = v53;
      --v1;
    }
    while ( v1 );
    v54 = *v45;
    v55 = *((_QWORD *)v45 + 2);
    result = 0LL;
    *(_OWORD *)v44 = v54;
    *(_QWORD *)(v44 + 16) = v55;
  }
  return result;
}
