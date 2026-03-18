/*
 * XREFs of ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C011D214
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C007BE98 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiFrameRgn @ 0x1C01182C0 (NtGdiFrameRgn.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C012BC28 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     EngStrokeAndFillPath @ 0x1C02597B0 (EngStrokeAndFillPath.c)
 *     NtGdiWidenPath @ 0x1C027E230 (NtGdiWidenPath.c)
 * Callees:
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 */

__int64 __fastcall EPATHOBJ::bComputeWidenedBounds(
        EPATHOBJ *this,
        struct EPATHOBJ *a2,
        struct _XFORMOBJ *a3,
        struct _LINEATTRS *a4)
{
  int v8; // r8d
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rax
  int v14; // edi
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rax
  int v20; // ebx
  bool v21; // zf
  float eMiterLimit; // xmm1_4
  int v23; // esi
  char v24; // r8
  int v25; // esi
  int *v26; // rax
  _DWORD *v27; // r8
  __int64 v28; // r10
  __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // rsi
  __int64 v32; // r11
  int v33; // r10d
  __int64 v34; // r9
  int v35; // edx
  __int64 result; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  int v39; // [rsp+20h] [rbp-20h] BYREF
  int v40; // [rsp+28h] [rbp-18h] BYREF
  int v41; // [rsp+2Ch] [rbp-14h]
  int v42; // [rsp+30h] [rbp-10h]
  int v43; // [rsp+34h] [rbp-Ch]
  int v44; // [rsp+88h] [rbp+48h] BYREF

  bFToL(a4->elWidth.e, &v44, 6);
  v40 = v44;
  v41 = v44;
  v42 = v44;
  v43 = -v44;
  if ( !EXFORMOBJ::bXform((EXFORMOBJ *)a3, (struct _VECTORL *)&v40, (struct _VECTORFX *)&v40, (unsigned int)(v8 - 4)) )
    return 0LL;
  v9 = v40;
  v10 = v40;
  if ( v40 < 0 )
    v10 = -v40;
  v11 = v42;
  v12 = v42;
  if ( v42 < 0 )
    v12 = -v42;
  if ( v10 > v12 )
  {
    if ( v40 < 0 )
      v9 = -v40;
  }
  else
  {
    if ( v42 < 0 )
      v11 = -v42;
    v9 = v11;
  }
  v13 = (__int64)v9 >> 1;
  v14 = v13 + 16;
  if ( (unsigned __int64)(v13 + 2147483664LL) > 0xFFFFFFFF )
    return 0LL;
  v15 = v41;
  v16 = v41;
  v44 = v14;
  if ( v41 < 0 )
    v16 = -v41;
  v17 = v43;
  v18 = v43;
  if ( v43 < 0 )
    v18 = -v43;
  if ( v16 > v18 )
  {
    if ( v41 < 0 )
      v15 = -v41;
  }
  else
  {
    if ( v43 < 0 )
      v17 = -v43;
    v15 = v17;
  }
  v19 = (__int64)v15 >> 1;
  v20 = v19 + 16;
  if ( (unsigned __int64)(v19 + 2147483664LL) > 0xFFFFFFFF )
    return 0LL;
  v21 = a4->iEndCap == 1;
  v39 = v19 + 16;
  if ( v21 )
  {
    v37 = v14 + ((__int64)v14 >> 1);
    if ( (unsigned __int64)(v37 + 0x80000000LL) > 0xFFFFFFFF )
      return 0LL;
    v14 += v14 >> 1;
    v44 = v37;
    v38 = v20 + ((__int64)v20 >> 1);
    if ( (unsigned __int64)(v38 + 0x80000000LL) > 0xFFFFFFFF )
      return 0LL;
    v39 = v20 + (v20 >> 1);
    v20 = v39;
    if ( (unsigned int)(v37 + 0x3FFFFFFF) > 0x7FFFFFFD || (unsigned int)(v38 + 0x3FFFFFFF) > 0x7FFFFFFD )
      return 0LL;
  }
  if ( a4->iJoin == 2 )
  {
    eMiterLimit = a4->eMiterLimit;
    v23 = v14;
    if ( !(unsigned int)bFToL((float)v14 * eMiterLimit, &v44, 6) )
      return 0LL;
    v14 = v44;
    if ( v44 < v23 )
      return 0LL;
    v25 = v20;
    if ( !(unsigned int)bFToL((float)v20 * eMiterLimit, &v39, v24) )
      return 0LL;
    v20 = v39;
    if ( v39 < v25 || (unsigned int)(v14 + 0x3FFFFFFF) > 0x7FFFFFFD || (unsigned int)(v39 + 0x3FFFFFFF) > 0x7FFFFFFD )
      return 0LL;
  }
  v26 = (int *)*((_QWORD *)a2 + 1);
  v27 = (_DWORD *)*((_QWORD *)this + 1);
  v28 = v26[12];
  v29 = v26[14];
  v30 = v26[13];
  v31 = v26[15];
  if ( (unsigned int)(v28 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  if ( (unsigned int)(v29 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  if ( (unsigned int)(v30 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  if ( (unsigned int)(v31 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  v32 = v28 - v14;
  if ( (unsigned __int64)(v32 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  v33 = v14 + v29;
  if ( (unsigned __int64)(v14 + v29 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  v34 = v30 - v20;
  if ( (unsigned __int64)(v34 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  v35 = v20 + v31;
  if ( (unsigned __int64)(v20 + v31 + 0x80000000LL) > 0xFFFFFFFF
    || (unsigned int)(v32 + 0x3FFFFFFF) > 0x7FFFFFFD
    || (unsigned int)(v33 + 0x3FFFFFFF) > 0x7FFFFFFD
    || (unsigned int)(v34 + 0x3FFFFFFF) > 0x7FFFFFFD
    || (unsigned int)(v35 + 0x3FFFFFFF) > 0x7FFFFFFD )
  {
    return 0LL;
  }
  v27[12] = v32;
  result = 1LL;
  v27[14] = v33;
  v27[13] = v34;
  v27[15] = v35;
  return result;
}
