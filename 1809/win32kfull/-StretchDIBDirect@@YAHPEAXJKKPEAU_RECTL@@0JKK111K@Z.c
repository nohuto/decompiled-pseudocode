/*
 * XREFs of ?StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1C0050CAC
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0051258 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C0272870 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StretchDIBDirect(
        char *a1,
        int a2,
        int a3,
        int a4,
        struct _RECTL *a5,
        char *a6,
        int a7,
        signed int a8,
        signed int a9,
        struct _RECTL *a10,
        struct _RECTL *a11,
        struct _RECTL *a12,
        unsigned int a13)
{
  struct _RECTL *v14; // r14
  LONG right; // r12d
  int v16; // ebx
  int v17; // eax
  LONG v18; // edi
  int v19; // r10d
  LONG v20; // r9d
  int v21; // r11d
  LONG v22; // r15d
  __int64 v23; // r8
  signed __int64 v24; // kr00_8
  signed __int64 v25; // kr08_8
  LONG v26; // ecx
  LONG v27; // esi
  LONG v28; // r14d
  unsigned int v29; // edx
  unsigned __int64 v30; // r12
  int v31; // r15d
  LONG v32; // r10d
  LONG v33; // eax
  LONG v34; // ebx
  LONG v35; // edi
  unsigned int v36; // edx
  int v37; // r11d
  int v38; // r10d
  unsigned __int64 v39; // rdx
  int v40; // r9d
  unsigned __int64 v42; // rax
  unsigned int v43; // r15d
  unsigned int v44; // esi
  int v45; // r10d
  unsigned __int64 v46; // rax
  unsigned int v47; // r9d
  unsigned int v48; // ebx
  int v49; // r11d
  unsigned __int64 v50; // [rsp+20h] [rbp-118h]
  unsigned __int64 v51; // [rsp+20h] [rbp-118h]
  unsigned __int64 v52; // [rsp+28h] [rbp-110h]
  LONG left; // [rsp+30h] [rbp-108h]
  LONG v54; // [rsp+34h] [rbp-104h]
  unsigned int v55; // [rsp+38h] [rbp-100h]
  LONG top; // [rsp+40h] [rbp-F8h]
  LONG v58; // [rsp+44h] [rbp-F4h]
  LONG v59; // [rsp+4Ch] [rbp-ECh]
  unsigned __int64 v60; // [rsp+50h] [rbp-E8h]
  int v61; // [rsp+58h] [rbp-E0h]
  LONG v62; // [rsp+5Ch] [rbp-DCh]
  int v63; // [rsp+60h] [rbp-D8h]
  struct _RECTL *v64; // [rsp+68h] [rbp-D0h]
  LONG v65; // [rsp+78h] [rbp-C0h]
  LONG bottom; // [rsp+88h] [rbp-B0h]
  char *v69; // [rsp+B0h] [rbp-88h] BYREF
  int v70; // [rsp+B8h] [rbp-80h]
  int v71; // [rsp+BCh] [rbp-7Ch]
  char *v72; // [rsp+C0h] [rbp-78h]
  int v73; // [rsp+C8h] [rbp-70h]
  LONG v74; // [rsp+CCh] [rbp-6Ch]
  LONG v75; // [rsp+D0h] [rbp-68h]
  int v76; // [rsp+D4h] [rbp-64h]
  int v77; // [rsp+D8h] [rbp-60h]
  int v78; // [rsp+DCh] [rbp-5Ch]
  int v79; // [rsp+E0h] [rbp-58h]
  int v80; // [rsp+E4h] [rbp-54h]
  int v81; // [rsp+E8h] [rbp-50h]
  int v82; // [rsp+ECh] [rbp-4Ch]
  __int64 v83; // [rsp+F0h] [rbp-48h] BYREF
  int v84; // [rsp+F8h] [rbp-40h]
  int v85; // [rsp+FCh] [rbp-3Ch]

  v14 = a12;
  v64 = a12;
  right = a5->right;
  left = a5->left;
  v16 = right - a5->left;
  bottom = a5->bottom;
  top = a5->top;
  v17 = bottom - top;
  v55 = bottom - top;
  v18 = a10->right;
  v59 = a10->left;
  v19 = v18 - a10->left;
  v62 = a10->bottom;
  v20 = a10->top;
  v65 = v20;
  v21 = v62 - v20;
  v22 = a10->left;
  v54 = a5->left;
  v58 = top;
  v23 = 0LL;
  v61 = 0;
  v63 = 0;
  if ( v16 <= 0 || v17 <= 0 || v19 <= 0 || v21 <= 0 )
    return 1LL;
  if ( v16 <= 0x7FFF && v17 <= 0x7FFF && v19 <= 0x7FFF && v21 <= 0x7FFF )
  {
    if ( !a12 )
    {
      v14 = (struct _RECTL *)&v83;
      v64 = (struct _RECTL *)&v83;
      v83 = 0LL;
      v84 = a3;
      v85 = a4;
    }
    LODWORD(v60) = -1;
    HIDWORD(v60) = v19 - 1;
    v24 = v60 / (unsigned int)v16 + 1;
    LODWORD(v52) = -1;
    HIDWORD(v52) = v21 - 1;
    v25 = v52 / v55 + 1;
    if ( v22 >= 0 && v18 <= a8 )
      goto LABEL_13;
    v61 = 1;
    v42 = __PAIR64__(v16, 0) / (unsigned int)v19;
    if ( v22 >= 0 )
    {
      v44 = v42;
    }
    else
    {
      v43 = -v22;
      if ( (int)(v19 - v43) <= 0 )
        return 1LL;
      v44 = v42;
      v50 = v42 * v43;
      v22 = 0;
      v54 += (v50 + 0x7FFFFFFF) >> 32;
    }
    if ( v18 <= a8 )
    {
LABEL_13:
      v26 = left;
    }
    else
    {
      v45 = v19 - (v18 - a8);
      if ( v45 <= 0 )
        return 1LL;
      v26 = left;
      right = left + ((__PAIR64__(HIDWORD(v42), v44) * (unsigned int)v45 + 0x7FFFFFFF) >> 32);
    }
    v27 = v14->left;
    if ( v54 >= v14->left )
      v27 = v54;
    v28 = v14->right;
    if ( right <= v28 )
      v28 = right;
    if ( v28 <= v27 )
      return 1LL;
    v29 = v27 - v26;
    if ( v61 || v29 )
    {
      v30 = v24 * v29 + ((unsigned __int64)v24 >> 1);
      v31 = v59 + HIDWORD(v30);
    }
    else
    {
      LODWORD(v30) = v24 >> 1;
      v31 = (HIDWORD(v24) >> 1) + v22;
    }
    if ( v20 >= 0 && v62 <= a9 )
      goto LABEL_24;
    v63 = 1;
    v46 = __PAIR64__(v55, 0) / (unsigned int)v21;
    if ( v20 >= 0 )
    {
      v48 = v46;
    }
    else
    {
      v47 = -v20;
      if ( (int)(v21 - v47) <= 0 )
        return 1LL;
      v48 = v46;
      v51 = v46 * v47;
      v20 = 0;
      v58 = ((v51 + 0x7FFFFFFF) >> 32) + top;
    }
    if ( v62 <= a9 )
    {
LABEL_24:
      v32 = top;
      v33 = bottom;
LABEL_25:
      v34 = v64->top;
      if ( v58 >= v34 )
        v34 = v58;
      v35 = v64->bottom;
      if ( v33 <= v35 )
        v35 = v33;
      if ( v35 > v34 )
      {
        v36 = v34 - v32;
        if ( v63 || v36 )
        {
          v37 = v52 / v55 + 1;
          v38 = (v52 / v55 + 1) >> 32;
          v39 = v25 * v36 + ((unsigned __int64)v25 >> 1);
          v40 = v65 + HIDWORD(v39);
        }
        else
        {
          v37 = v52 / v55 + 1;
          v38 = (v52 / v55 + 1) >> 32;
          v39 = (unsigned int)(v25 >> 1);
          v40 = (HIDWORD(v25) >> 1) + v20;
        }
        v69 = &a6[v40 * a7];
        v72 = &a1[a2 * v34];
        v70 = a7;
        v71 = v31;
        v74 = v27;
        v73 = a2;
        v75 = v28;
        v76 = v35 - v34;
        v77 = HIDWORD(v24);
        v78 = v24;
        v79 = v38;
        v80 = v37;
        v81 = v30;
        v82 = v39;
        if ( v28 - v27 < 7 )
          v23 = 8LL;
        ((void (__fastcall *)(char **, unsigned __int64, unsigned __int64))(&pfnStrArray)[a13 | (unsigned __int64)v23])(
          &v69,
          v39,
          a13 | (unsigned __int64)v23);
        a11->left = v27;
        a11->right = v28;
        a11->top = v34;
        a11->bottom = v35;
      }
      return 1LL;
    }
    v49 = v21 - (v62 - a9);
    if ( v49 > 0 )
    {
      v32 = top;
      v33 = top + ((__PAIR64__(HIDWORD(v46), v48) * (unsigned int)v49 + 0x7FFFFFFF) >> 32);
      goto LABEL_25;
    }
    return 1LL;
  }
  return 0LL;
}
