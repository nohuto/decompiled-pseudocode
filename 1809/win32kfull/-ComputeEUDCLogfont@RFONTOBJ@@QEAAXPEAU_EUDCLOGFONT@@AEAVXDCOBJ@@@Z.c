/*
 * XREFs of ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C00074D0
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00C3E78 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C028A810 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C028AB48 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0023F04 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00853D0 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C009A850 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
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
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  _DWORD *v20; // r14
  int v21; // esi
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r12d
  int v26; // ecx
  int v27; // eax
  float v28; // xmm2_4
  float v29; // xmm1_4
  __int64 v30; // rdx
  int v31; // eax
  unsigned int v32; // r8d
  unsigned int v33; // eax
  __int64 v34; // rcx
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // [rsp+20h] [rbp-69h]
  __int64 v38; // [rsp+28h] [rbp-61h] BYREF
  int v39; // [rsp+30h] [rbp-59h]
  _BYTE v40[16]; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v41[40]; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v42[5]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v43; // [rsp+F0h] [rbp+67h] BYREF
  struct XDCOBJ *v44; // [rsp+100h] [rbp+77h] BYREF
  __int64 v45; // [rsp+108h] [rbp+7Fh] BYREF

  v44 = a3;
  v4 = a3;
  v6 = *(struct HLFONT__ **)(*(_QWORD *)a3 + 1752LL);
  v43 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v45, v6, (struct PDEVOBJ *)&v43);
  v7 = *(_QWORD *)this;
  v8 = *(HDC **)v4;
  v39 = 0;
  v38 = v7;
  v9 = *(_QWORD *)(v7 + 120);
  DCOBJ::DCOBJ((DCOBJ *)v40, *v8);
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)v42,
    *(const struct _IFIMETRICS **)(v9 + 32),
    (struct RFONTOBJ *)&v38,
    (struct DCOBJ *)v40);
  v10 = v45;
  if ( !v45 )
    goto LABEL_56;
  v11 = v42[0];
  v37 = v42[0];
  *(_DWORD *)a2 = *(unsigned __int16 *)(v42[0] + 52LL);
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
  if ( !v13 )
  {
    v20 = *(_DWORD **)this;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x802) == 0x802 )
    {
      v21 = (*(_DWORD *)(*(_QWORD *)this + 324LL) + 8) >> 4;
    }
    else
    {
      LODWORD(v43) = 0;
      bFToL(2050LL, &v43, 0LL);
      v21 = v43;
    }
    v22 = v20[95];
    LODWORD(v43) = 0;
    if ( v22 == 0x80000000 )
    {
      LODWORD(v45) = v20[54];
      bFToL(v14, &v43, 0LL);
      v25 = v21 - v43;
      if ( v12 && gbJpn98FixPitch == (_DWORD)v24 )
      {
        LODWORD(v45) = v20[53];
LABEL_28:
        LODWORD(v43) = v24 & v43;
        bFToL(v23, &v43, v24);
        *((_DWORD *)a2 + 2) = v43;
      }
    }
    else
    {
      bFToL(v14, &v43, 0LL);
      v25 = v43;
      if ( v12 && gbJpn98FixPitch == (_DWORD)v24 )
        goto LABEL_28;
    }
    v26 = v25 + v21;
    if ( v25 >= 0 )
      v26 = v21 - v25;
    *((_DWORD *)a2 + 3) = v26;
    if ( v26 > 13 )
      goto LABEL_39;
    if ( v26 == 11 )
    {
      v27 = 12;
      if ( v21 < 12 )
        goto LABEL_39;
    }
    else
    {
      if ( v26 != 13 )
        goto LABEL_39;
      v27 = 13;
      if ( v21 >= 15 )
        v27 = 15;
    }
    *((_DWORD *)a2 + 3) = v27;
LABEL_39:
    if ( *(_DWORD *)(v10 + 280) && !v12 )
    {
      *((_DWORD *)a2 + 2) = 0;
      v28 = *(float *)(*(_QWORD *)this + 152LL);
      v29 = *(float *)(*(_QWORD *)this + 136LL);
      *(float *)&v43 = v28;
      if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)&v43) )
      {
        v29 = *(float *)(v30 + 140);
        v28 = *(float *)(v30 + 156);
      }
      *((float *)a2 + 7) = v29 / v28;
    }
    v4 = v44;
    goto LABEL_45;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x802) != 0x802 )
  {
    if ( v12 )
    {
      LODWORD(v44) = 0;
      bFToL(2050LL, &v44, 0LL);
      *((_DWORD *)a2 + 2) = (_DWORD)v44;
    }
    v19 = *(_QWORD *)this;
    LODWORD(v44) = 0;
    bFToL(v19, &v44, 0LL);
    *((_DWORD *)a2 + 3) = (_DWORD)v44;
    goto LABEL_17;
  }
  if ( v12 )
    *((_DWORD *)a2 + 2) = *(__int16 *)(v11 + 76);
  v15 = _wcsicmp((const wchar_t *)(v11 + *(int *)(v11 + 16)), L"Ms Sans Serif");
  v16 = *(_QWORD *)this;
  if ( v15 )
  {
    if ( (ulFontLinkControl & 0x4000) != 0 )
    {
      v18 = *(_DWORD *)(v16 + 324);
LABEL_12:
      v17 = (v18 + 8) >> 4;
      goto LABEL_13;
    }
LABEL_11:
    v18 = *(_DWORD *)(v16 + 316);
    goto LABEL_12;
  }
  if ( (unsigned int)(*(_DWORD *)(v16 + 324) - 193) > 0x4E )
    goto LABEL_11;
  v17 = 12;
LABEL_13:
  *((_DWORD *)a2 + 3) = v17;
LABEL_17:
  if ( v12 )
    *((_DWORD *)a2 + 2) *= *(_DWORD *)(*(_QWORD *)this + 648LL);
LABEL_45:
  v31 = *(_DWORD *)(v37 + 48);
  if ( (v31 & 0x10) == 0 )
  {
    if ( (v31 & 0x200000) != 0 )
    {
      if ( *((_DWORD *)a2 + 5) )
      {
        v32 = ((__int64 (*)(void))lNormAngle)();
        v33 = 900 * (v32 / 0x384);
        *((_DWORD *)a2 + 5) = v33;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x40) != 0 && v32 != v33 )
          *((_DWORD *)a2 + 5) = lNormAngle(v33 + 900);
      }
      v34 = *((unsigned int *)a2 + 4);
      if ( (_DWORD)v34 )
      {
        v35 = lNormAngle(v34);
        v36 = 900 * (v35 / 900);
        *((_DWORD *)a2 + 4) = v36;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x40) != 0 && v35 != v36 )
          *((_DWORD *)a2 + 4) = lNormAngle((unsigned int)(v36 + 900));
      }
    }
    else
    {
      *((_QWORD *)a2 + 2) = 0LL;
    }
  }
LABEL_56:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v40);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v41);
  v38 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v38);
  if ( v10 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v10);
}
