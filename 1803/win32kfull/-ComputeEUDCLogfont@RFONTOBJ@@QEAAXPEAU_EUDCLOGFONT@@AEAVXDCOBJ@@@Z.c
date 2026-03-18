/*
 * XREFs of ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C000406C
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C000399C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C0277338 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02775D8 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0083964 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0096D1C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00CB7B4 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 */

void __fastcall RFONTOBJ::ComputeEUDCLogfont(RFONTOBJ *this, struct _EUDCLOGFONT *a2, struct XDCOBJ *a3)
{
  struct XDCOBJ *v4; // rsi
  struct HLFONT__ *v6; // rdx
  __int64 v7; // rax
  HDC *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdx
  int v12; // r13d
  bool v13; // zf
  __int64 v14; // rcx
  _DWORD *v15; // r14
  int v16; // esi
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r12d
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  float v29; // xmm2_4
  float v30; // xmm1_4
  __int64 v31; // rdx
  unsigned int v32; // r8d
  unsigned int v33; // eax
  __int64 v34; // rcx
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // [rsp+20h] [rbp-49h]
  __int64 v38; // [rsp+28h] [rbp-41h] BYREF
  int v39; // [rsp+30h] [rbp-39h]
  _QWORD v40[3]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v41[5]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v42; // [rsp+D0h] [rbp+67h] BYREF
  struct XDCOBJ *v43; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v44; // [rsp+E8h] [rbp+7Fh] BYREF

  v43 = a3;
  v4 = a3;
  v6 = *(struct HLFONT__ **)(*(_QWORD *)a3 + 2136LL);
  v42 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v44, v6, (struct PDEVOBJ *)&v42);
  v7 = *(_QWORD *)this;
  v8 = *(HDC **)v4;
  v39 = 0;
  v38 = v7;
  v9 = *(_QWORD *)(v7 + 104);
  MDCOBJ::MDCOBJ((MDCOBJ *)v40, *v8);
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)v41,
    *(const struct _IFIMETRICS **)(v9 + 32),
    (struct RFONTOBJ *)&v38,
    (struct DCOBJ *)v40);
  v10 = v44;
  if ( !v44 )
    goto LABEL_15;
  v11 = v41[0];
  v37 = v41[0];
  *(_DWORD *)a2 = *(unsigned __int16 *)(v41[0] + 52LL);
  *((_DWORD *)a2 + 1) = *(_DWORD *)(*(_QWORD *)this + 12LL);
  *((_DWORD *)a2 + 3) = *(_DWORD *)(v10 + 276);
  *((_DWORD *)a2 + 2) = *(_DWORD *)(v10 + 280);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(v10 + 284);
  *((_DWORD *)a2 + 5) = *(_DWORD *)(v10 + 288);
  *((_DWORD *)a2 + 7) = 1065353216;
  v12 = *(_DWORD *)(v11 + 48) & 0x401000;
  v13 = (*(_DWORD *)(v11 + 48) & 0x3000010) == 0;
  *((_DWORD *)a2 + 6) = *(_DWORD *)(v11 + 48) & 0x3000010;
  v14 = 2050LL;
  if ( v13 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 80LL) + 352LL) & 0x802) != 0x802 )
    {
      if ( v12 )
      {
        LODWORD(v43) = 0;
        bFToL(2050LL, &v43, 0LL);
        *((_DWORD *)a2 + 2) = (_DWORD)v43;
      }
      v27 = *(_QWORD *)this;
      LODWORD(v43) = 0;
      bFToL(v27, &v43, 0LL);
      *((_DWORD *)a2 + 3) = (_DWORD)v43;
      goto LABEL_34;
    }
    if ( v12 )
      *((_DWORD *)a2 + 2) = *(__int16 *)(v11 + 76);
    v23 = _wcsicmp((const wchar_t *)(v11 + *(int *)(v11 + 16)), L"Ms Sans Serif");
    v24 = *(_QWORD *)this;
    if ( v23 )
    {
      if ( (ulFontLinkControl & 0x4000) != 0 )
      {
        v26 = *(_DWORD *)(v24 + 308);
LABEL_29:
        v25 = (v26 + 8) >> 4;
        goto LABEL_30;
      }
    }
    else if ( (unsigned int)(*(_DWORD *)(v24 + 308) - 193) <= 0x4E )
    {
      v25 = 12;
LABEL_30:
      *((_DWORD *)a2 + 3) = v25;
LABEL_34:
      if ( v12 )
        *((_DWORD *)a2 + 2) *= *(_DWORD *)(*(_QWORD *)this + 632LL);
      goto LABEL_14;
    }
    v26 = *(_DWORD *)(v24 + 300);
    goto LABEL_29;
  }
  v15 = *(_DWORD **)this;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 80LL) + 352LL) & 0x802) == 0x802 )
  {
    v16 = (*(_DWORD *)(*(_QWORD *)this + 308LL) + 8) >> 4;
  }
  else
  {
    LODWORD(v42) = 0;
    bFToL(2050LL, &v42, 0LL);
    v16 = v42;
  }
  v17 = v15[92];
  LODWORD(v42) = 0;
  if ( v17 == 0x80000000 )
  {
    LODWORD(v44) = v15[50];
    bFToL(v14, &v42, 0LL);
    v20 = v16 - v42;
    if ( v12 && gbJpn98FixPitch == (_DWORD)v19 )
    {
      LODWORD(v44) = v15[49];
LABEL_41:
      LODWORD(v42) = v19 & v42;
      bFToL(v18, &v42, v19);
      *((_DWORD *)a2 + 2) = v42;
    }
  }
  else
  {
    bFToL(v14, &v42, 0LL);
    v20 = v42;
    if ( v12 && gbJpn98FixPitch == (_DWORD)v19 )
      goto LABEL_41;
  }
  v21 = v20 + v16;
  if ( v20 >= 0 )
    v21 = v16 - v20;
  *((_DWORD *)a2 + 3) = v21;
  if ( v21 > 13 )
    goto LABEL_12;
  if ( v21 == 11 )
  {
    v28 = 12;
    if ( v16 < 12 )
      goto LABEL_12;
  }
  else
  {
    if ( v21 != 13 )
      goto LABEL_12;
    v28 = 13;
    if ( v16 >= 15 )
      v28 = 15;
  }
  *((_DWORD *)a2 + 3) = v28;
LABEL_12:
  if ( *(_DWORD *)(v10 + 280) && !v12 )
  {
    *((_DWORD *)a2 + 2) = 0;
    v29 = *(float *)(*(_QWORD *)this + 136LL);
    v30 = *(float *)(*(_QWORD *)this + 120LL);
    *(float *)&v42 = v29;
    if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)&v42) )
    {
      v30 = *(float *)(v31 + 124);
      v29 = *(float *)(v31 + 140);
    }
    *((float *)a2 + 7) = v30 / v29;
  }
  v4 = v43;
LABEL_14:
  v22 = *(_DWORD *)(v37 + 48);
  if ( (v22 & 0x10) == 0 )
  {
    if ( (v22 & 0x200000) != 0 )
    {
      if ( *((_DWORD *)a2 + 5) )
      {
        v32 = ((__int64 (*)(void))lNormAngle)();
        v33 = 900 * (v32 / 0x384);
        *((_DWORD *)a2 + 5) = v33;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 80LL) + 352LL) & 0x40) != 0 && v32 != v33 )
          *((_DWORD *)a2 + 5) = lNormAngle(v33 + 900);
      }
      v34 = *((unsigned int *)a2 + 4);
      if ( (_DWORD)v34 )
      {
        v35 = lNormAngle(v34);
        v36 = 900 * (v35 / 900);
        *((_DWORD *)a2 + 4) = v36;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 80LL) + 352LL) & 0x40) != 0 && v35 != v36 )
          *((_DWORD *)a2 + 4) = lNormAngle((unsigned int)(v36 + 900));
      }
    }
    else
    {
      *((_QWORD *)a2 + 2) = 0LL;
    }
  }
LABEL_15:
  if ( v40[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v40);
  v38 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v38);
  if ( v10 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v10);
}
