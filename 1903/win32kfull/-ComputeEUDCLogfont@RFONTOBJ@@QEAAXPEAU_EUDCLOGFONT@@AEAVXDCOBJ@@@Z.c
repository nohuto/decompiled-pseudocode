/*
 * XREFs of ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0105858
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0104A14 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C02A0930 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A0B54 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C004EEA0 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0052D74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00547E0 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C00AA41C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C01014BC (bFToL.c)
 */

void __fastcall RFONTOBJ::ComputeEUDCLogfont(RFONTOBJ *this, struct _EUDCLOGFONT *a2, struct XDCOBJ *a3)
{
  struct XDCOBJ *v4; // rsi
  struct HLFONT__ *v6; // rdx
  HDC *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // r13d
  bool v12; // zf
  __int64 v13; // r14
  int v14; // r8d
  int v15; // esi
  int v16; // eax
  int v17; // eax
  unsigned int v18; // r8d
  int v19; // r12d
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  __m128i v29; // xmm0
  float v30; // xmm0_4
  float v31; // xmm2_4
  float v32; // xmm1_4
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // r8d
  unsigned int v36; // eax
  __int64 v37; // rcx
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // [rsp+20h] [rbp-60h]
  _QWORD v41[3]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v42[5]; // [rsp+40h] [rbp-40h] BYREF
  int v43; // [rsp+68h] [rbp-18h]
  __int64 v44; // [rsp+C0h] [rbp+40h] BYREF
  struct XDCOBJ *v45; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v46; // [rsp+D8h] [rbp+58h] BYREF

  v45 = a3;
  v4 = a3;
  v6 = *(struct HLFONT__ **)(*(_QWORD *)a3 + 1728LL);
  v44 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v46, v6, (struct PDEVOBJ *)&v44);
  v7 = *(HDC **)v4;
  v44 = *(_QWORD *)this;
  v8 = *(_QWORD *)(v44 + 120);
  DCOBJ::DCOBJ((DCOBJ *)v41, *v7);
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)v42,
    *(const struct _IFIMETRICS **)(v8 + 32),
    (struct RFONTOBJ *)&v44,
    (struct DCOBJ *)v41);
  v9 = v46;
  if ( !v46 )
    goto LABEL_13;
  v10 = v42[0];
  v40 = v42[0];
  *(_DWORD *)a2 = *(unsigned __int16 *)(v42[0] + 52LL);
  *((_DWORD *)a2 + 1) = *(_DWORD *)(*(_QWORD *)this + 12LL);
  *((_DWORD *)a2 + 3) = *(_DWORD *)(v9 + 276);
  *((_DWORD *)a2 + 2) = *(_DWORD *)(v9 + 280);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(v9 + 284);
  *((_DWORD *)a2 + 5) = *(_DWORD *)(v9 + 288);
  *((_DWORD *)a2 + 7) = 1065353216;
  v11 = *(_DWORD *)(v10 + 48) & 0x401000;
  v12 = (*(_DWORD *)(v10 + 48) & 0x3000010) == 0;
  *((_DWORD *)a2 + 6) = *(_DWORD *)(v10 + 48) & 0x3000010;
  if ( v12 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x802) != 0x802 )
    {
      if ( v11 )
      {
        v27 = 16 * *(__int16 *)(v10 + 76);
        LODWORD(v45) = 0;
        bFToL((float)v27 * *(float *)(*(_QWORD *)this + 680LL), (int *)&v45, 0);
        *((_DWORD *)a2 + 2) = (_DWORD)v45;
      }
      v28 = *(_QWORD *)this;
      LODWORD(v45) = 0;
      if ( (ulFontLinkControl & 0x4000) != 0 )
        v29 = _mm_cvtsi32_si128(*(_DWORD *)(v28 + 324));
      else
        v29 = _mm_cvtsi32_si128(*(_DWORD *)(v28 + 316));
      bFToL(_mm_cvtepi32_ps(v29).m128_f32[0] * *(float *)(v28 + 684), (int *)&v45, 0);
      *((_DWORD *)a2 + 3) = (_DWORD)v45;
      goto LABEL_40;
    }
    if ( v11 )
      *((_DWORD *)a2 + 2) = *(__int16 *)(v10 + 76);
    v23 = _wcsicmp((const wchar_t *)(v10 + *(int *)(v10 + 16)), L"Ms Sans Serif");
    v24 = *(_QWORD *)this;
    if ( v23 )
    {
      if ( (ulFontLinkControl & 0x4000) != 0 )
      {
        v26 = *(_DWORD *)(v24 + 324);
LABEL_32:
        v25 = (v26 + 8) >> 4;
        goto LABEL_33;
      }
    }
    else if ( (unsigned int)(*(_DWORD *)(v24 + 324) - 193) <= 0x4E )
    {
      v25 = 12;
LABEL_33:
      *((_DWORD *)a2 + 3) = v25;
LABEL_40:
      if ( v11 )
        *((_DWORD *)a2 + 2) *= *(_DWORD *)(*(_QWORD *)this + 648LL);
      goto LABEL_12;
    }
    v26 = *(_DWORD *)(v24 + 316);
    goto LABEL_32;
  }
  v13 = *(_QWORD *)this;
  v14 = *(_DWORD *)(*(_QWORD *)this + 324LL);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x802) == 0x802 )
  {
    v15 = (v14 + 8) >> 4;
  }
  else
  {
    LODWORD(v44) = 0;
    bFToL((float)v14 * *(float *)(v13 + 684), (int *)&v44, 0);
    v10 = v40;
    v15 = v44;
  }
  v16 = *(_DWORD *)(v13 + 380);
  LODWORD(v44) = 0;
  if ( v16 == 0x80000000 )
  {
    v17 = *(__int16 *)(v10 + 56);
    LODWORD(v46) = *(_DWORD *)(v13 + 216);
    bFToL((float)v17 * *(float *)&v46, (int *)&v44, 0);
    v19 = v15 - v44;
    if ( v11 && gbJpn98FixPitch == v18 )
    {
      LODWORD(v46) = *(_DWORD *)(v13 + 212);
      v30 = (float)v43 * *(float *)&v46;
LABEL_48:
      LODWORD(v44) = v18 & v44;
      bFToL(v30, (int *)&v44, v18);
      *((_DWORD *)a2 + 2) = v44;
    }
  }
  else
  {
    bFToL((float)v16 * *(float *)(v13 + 684), (int *)&v44, 0);
    v19 = v44;
    if ( v11 && gbJpn98FixPitch == v18 )
    {
      v30 = (float)*(int *)(v13 + 388) * *(float *)(v13 + 680);
      goto LABEL_48;
    }
  }
  v20 = v19 + v15;
  if ( v19 >= 0 )
    v20 = v15 - v19;
  *((_DWORD *)a2 + 3) = v20;
  if ( v20 > 13 )
    goto LABEL_10;
  if ( v20 != 11 )
  {
    if ( v20 != 13 )
      goto LABEL_10;
    v22 = 13;
    if ( v15 >= 15 )
      v22 = 15;
    goto LABEL_22;
  }
  v22 = 12;
  if ( v15 >= 12 )
LABEL_22:
    *((_DWORD *)a2 + 3) = v22;
LABEL_10:
  if ( *(_DWORD *)(v9 + 280) && !v11 )
  {
    *((_DWORD *)a2 + 2) = 0;
    v31 = *(float *)(*(_QWORD *)this + 152LL);
    v32 = *(float *)(*(_QWORD *)this + 136LL);
    *(float *)&v44 = v31;
    if ( EFLOAT::bIsZero((EFLOAT *)&v44) )
    {
      v32 = *(float *)(v33 + 140);
      v31 = *(float *)(v33 + 156);
    }
    *((float *)a2 + 7) = v32 / v31;
  }
  v4 = v45;
LABEL_12:
  v21 = *(_DWORD *)(v40 + 48);
  if ( (v21 & 0x10) == 0 )
  {
    if ( (v21 & 0x200000) != 0 )
    {
      v34 = *((unsigned int *)a2 + 5);
      if ( (_DWORD)v34 )
      {
        v35 = lNormAngle(v34);
        v36 = 900 * (v35 / 0x384);
        *((_DWORD *)a2 + 5) = v36;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x40) != 0 && v35 != v36 )
          *((_DWORD *)a2 + 5) = lNormAngle(v36 + 900);
      }
      v37 = *((unsigned int *)a2 + 4);
      if ( (_DWORD)v37 )
      {
        v38 = lNormAngle(v37);
        v39 = 900 * (v38 / 900);
        *((_DWORD *)a2 + 4) = v39;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x40) != 0 && v38 != v39 )
          *((_DWORD *)a2 + 4) = lNormAngle((unsigned int)(v39 + 900));
      }
    }
    else
    {
      *((_QWORD *)a2 + 2) = 0LL;
    }
  }
LABEL_13:
  if ( v41[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v41);
  v44 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v44);
  if ( v9 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v9);
}
