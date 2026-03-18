/*
 * XREFs of ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C014F120
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C013E3DC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C0150D14 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     EngStrokeAndFillPath @ 0x1C026CAE0 (EngStrokeAndFillPath.c)
 *     NtGdiFrameRgn @ 0x1C0282B60 (NtGdiFrameRgn.c)
 *     NtGdiWidenPath @ 0x1C02913E0 (NtGdiWidenPath.c)
 * Callees:
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
 */

__int64 __fastcall EPATHOBJ::bComputeWidenedBounds(
        EPATHOBJ *this,
        struct EPATHOBJ *a2,
        struct _XFORMOBJ *a3,
        struct _LINEATTRS *a4)
{
  FLOAT_LONG v4; // xmm0_4
  int v9; // r8d
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // rdi
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rbx
  bool v20; // zf
  int *v21; // rax
  _DWORD *v22; // r8
  __int64 v23; // r10
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rsi
  __int64 v27; // r11
  int v28; // r10d
  __int64 v29; // r9
  int v30; // edx
  __int64 result; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  float eMiterLimit; // xmm1_4
  int v35; // esi
  unsigned int v36; // r8d
  int v37; // esi
  int v38; // [rsp+30h] [rbp-20h] BYREF
  int v39; // [rsp+38h] [rbp-18h] BYREF
  int v40; // [rsp+3Ch] [rbp-14h]
  int v41; // [rsp+40h] [rbp-10h]
  int v42; // [rsp+44h] [rbp-Ch]
  int v43; // [rsp+98h] [rbp+48h] BYREF

  LODWORD(v4.e) = a4->elWidth;
  v43 = 0;
  bFToL(v4.e, &v43, 6u);
  v39 = v43;
  v40 = v43;
  v41 = v43;
  v42 = -v43;
  if ( !EXFORMOBJ::bXform((EXFORMOBJ *)a3, (struct _VECTORL *)&v39, (struct _VECTORFX *)&v39, (unsigned int)(v9 - 4), 0) )
    return 0LL;
  v10 = v39;
  v11 = v39;
  if ( v39 < 0 )
    v11 = -v39;
  v12 = v41;
  v13 = v41;
  if ( v41 < 0 )
    v13 = -v41;
  if ( v11 > v13 )
  {
    if ( v39 < 0 )
      v10 = -v39;
  }
  else
  {
    if ( v41 < 0 )
      v12 = -v41;
    v10 = v12;
  }
  v14 = ((__int64)v10 >> 1) + 16;
  if ( (unsigned __int64)(((__int64)v10 >> 1) + 2147483664LL) > 0xFFFFFFFF )
    return 0LL;
  v15 = v40;
  v16 = v40;
  v43 = v14;
  if ( v40 < 0 )
    v16 = -v40;
  v17 = v42;
  v18 = v42;
  if ( v42 < 0 )
    v18 = -v42;
  if ( v16 > v18 )
  {
    if ( v40 < 0 )
      v15 = -v40;
  }
  else
  {
    if ( v42 < 0 )
      v17 = -v42;
    v15 = v17;
  }
  v19 = ((__int64)v15 >> 1) + 16;
  if ( (unsigned __int64)(((__int64)v15 >> 1) + 2147483664LL) > 0xFFFFFFFF )
    return 0LL;
  v20 = a4->iEndCap == 1;
  v38 = (v15 >> 1) + 16;
  if ( v20 )
  {
    v32 = (int)v14 + ((__int64)(int)v14 >> 1);
    if ( (unsigned __int64)(v32 + 0x80000000LL) > 0xFFFFFFFF )
      return 0LL;
    LODWORD(v14) = v14 + ((int)v14 >> 1);
    v43 = v32;
    v33 = (int)v19 + ((__int64)(int)v19 >> 1);
    if ( (unsigned __int64)(v33 + 0x80000000LL) > 0xFFFFFFFF )
      return 0LL;
    v38 = v19 + ((int)v19 >> 1);
    LODWORD(v19) = v38;
    if ( (unsigned int)(v32 + 0x3FFFFFFF) > 0x7FFFFFFD || (unsigned int)(v33 + 0x3FFFFFFF) > 0x7FFFFFFD )
      return 0LL;
  }
  if ( a4->iJoin == 2 )
  {
    eMiterLimit = a4->eMiterLimit;
    v35 = v14;
    if ( !(unsigned int)bFToL((float)(int)v14 * eMiterLimit, &v43, 6u) )
      return 0LL;
    LODWORD(v14) = v43;
    if ( v43 < v35 )
      return 0LL;
    v37 = v19;
    if ( !(unsigned int)bFToL((float)(int)v19 * eMiterLimit, &v38, v36) )
      return 0LL;
    LODWORD(v19) = v38;
    if ( v38 < v37 || (unsigned int)(v14 + 0x3FFFFFFF) > 0x7FFFFFFD || (unsigned int)(v38 + 0x3FFFFFFF) > 0x7FFFFFFD )
      return 0LL;
  }
  v21 = (int *)*((_QWORD *)a2 + 1);
  v22 = (_DWORD *)*((_QWORD *)this + 1);
  v23 = v21[12];
  v24 = v21[14];
  v25 = v21[13];
  v26 = v21[15];
  if ( (unsigned int)(v23 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  if ( (unsigned int)(v24 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  if ( (unsigned int)(v25 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  if ( (unsigned int)(v26 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  v27 = v23 - (int)v14;
  if ( (unsigned __int64)(v27 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  v28 = v14 + v24;
  if ( (unsigned __int64)((int)v14 + v24 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  v29 = v25 - (int)v19;
  if ( (unsigned __int64)(v29 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  v30 = v19 + v26;
  if ( (unsigned __int64)((int)v19 + v26 + 0x80000000LL) > 0xFFFFFFFF
    || (unsigned int)(v27 + 0x3FFFFFFF) > 0x7FFFFFFD
    || (unsigned int)(v28 + 0x3FFFFFFF) > 0x7FFFFFFD
    || (unsigned int)(v29 + 0x3FFFFFFF) > 0x7FFFFFFD
    || (unsigned int)(v30 + 0x3FFFFFFF) > 0x7FFFFFFD )
  {
    return 0LL;
  }
  v22[12] = v27;
  result = 1LL;
  v22[14] = v28;
  v22[13] = v29;
  v22[15] = v30;
  return result;
}
