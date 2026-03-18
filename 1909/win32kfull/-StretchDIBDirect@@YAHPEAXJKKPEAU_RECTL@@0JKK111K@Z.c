/*
 * XREFs of ?StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1C00A69FC
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C00A7038 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C0288340 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StretchDIBDirect(
        char *a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
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
  LONG right; // r9d
  int v14; // r12d
  LONG bottom; // r10d
  int v16; // edx
  LONG v17; // r15d
  LONG v18; // r8d
  int v19; // esi
  int v20; // r14d
  LONG v21; // ecx
  __int64 v22; // rbx
  __int64 v23; // kr00_8
  LONG v24; // r11d
  LONG v25; // r15d
  LONG v26; // r12d
  unsigned int v27; // r9d
  int v28; // r11d
  int v29; // r8d
  LONG v30; // r9d
  LONG v31; // esi
  LONG v32; // r14d
  unsigned int v33; // edx
  int v34; // r10d
  int v35; // r9d
  int v36; // edx
  int v37; // ecx
  unsigned __int64 v39; // rax
  unsigned int v40; // r8d
  unsigned int v41; // r12d
  int v42; // esi
  unsigned __int64 v43; // rax
  unsigned int v44; // esi
  LONG left; // [rsp+20h] [rbp-178h]
  int v46; // [rsp+24h] [rbp-174h]
  unsigned int v48; // [rsp+28h] [rbp-170h]
  LONG v49; // [rsp+2Ch] [rbp-16Ch]
  LONG top; // [rsp+38h] [rbp-160h]
  LONG v52; // [rsp+3Ch] [rbp-15Ch]
  int v53; // [rsp+40h] [rbp-158h]
  LONG v54; // [rsp+48h] [rbp-150h]
  unsigned int v55; // [rsp+58h] [rbp-140h]
  int v56; // [rsp+60h] [rbp-138h]
  __int64 v58; // [rsp+70h] [rbp-128h]
  __int64 v59; // [rsp+80h] [rbp-118h]
  struct _RECTL *v60; // [rsp+90h] [rbp-108h]
  unsigned int v61; // [rsp+98h] [rbp-100h]
  LONG v62; // [rsp+A0h] [rbp-F8h]
  unsigned __int64 v63; // [rsp+A8h] [rbp-F0h]
  __int64 v64; // [rsp+B8h] [rbp-E0h]
  unsigned __int64 v65; // [rsp+C8h] [rbp-D0h]
  char *v67; // [rsp+F0h] [rbp-A8h] BYREF
  int v68; // [rsp+F8h] [rbp-A0h]
  int v69; // [rsp+FCh] [rbp-9Ch]
  char *v70; // [rsp+100h] [rbp-98h]
  int v71; // [rsp+108h] [rbp-90h]
  LONG v72; // [rsp+10Ch] [rbp-8Ch]
  LONG v73; // [rsp+110h] [rbp-88h]
  int v74; // [rsp+114h] [rbp-84h]
  int v75; // [rsp+118h] [rbp-80h]
  int v76; // [rsp+11Ch] [rbp-7Ch]
  int v77; // [rsp+120h] [rbp-78h]
  int v78; // [rsp+124h] [rbp-74h]
  int v79; // [rsp+128h] [rbp-70h]
  int v80; // [rsp+12Ch] [rbp-6Ch]
  unsigned __int64 v81; // [rsp+130h] [rbp-68h]
  unsigned __int64 v82; // [rsp+138h] [rbp-60h]
  unsigned __int64 v83; // [rsp+140h] [rbp-58h]
  unsigned __int64 v84; // [rsp+148h] [rbp-50h]
  __int64 v85; // [rsp+150h] [rbp-48h] BYREF
  unsigned __int64 v86; // [rsp+158h] [rbp-40h]

  v60 = a12;
  right = a5->right;
  left = a5->left;
  v14 = right - a5->left;
  bottom = a5->bottom;
  top = a5->top;
  v16 = bottom - top;
  v55 = bottom - top;
  v17 = a10->right;
  v18 = a10->left;
  v54 = a10->left;
  v19 = v17 - a10->left;
  v49 = a10->bottom;
  v62 = a10->top;
  v20 = v49 - v62;
  v46 = left;
  v21 = v62;
  v52 = top;
  v22 = 0LL;
  v53 = 0;
  v56 = 0;
  v85 = 0LL;
  v86 = 0LL;
  if ( right - left <= 0 || v16 <= 0 || v19 <= 0 || v20 <= 0 )
    return 1LL;
  if ( v14 <= 0x7FFF && v16 <= 0x7FFF && v19 <= 0x7FFF && v20 <= 0x7FFF )
  {
    if ( !a12 )
    {
      v60 = (struct _RECTL *)&v85;
      v86 = __PAIR64__(a4, a3);
      HIDWORD(v85) = 0;
    }
    LODWORD(v65) = -1;
    HIDWORD(v65) = v19 - 1;
    v81 = v65 / (unsigned int)v14;
    v48 = v81 + 1;
    v61 = (v81 + 1) >> 32;
    LODWORD(v63) = -1;
    HIDWORD(v63) = v20 - 1;
    v82 = v63 / v55;
    v23 = v82 + 1;
    if ( v18 >= 0 && v17 <= a8 )
      goto LABEL_13;
    v53 = 1;
    v39 = __PAIR64__(v14, 0) / (unsigned int)v19;
    v83 = v39;
    if ( v18 >= 0 )
    {
      v41 = v39;
    }
    else
    {
      v40 = -v18;
      if ( (int)(v19 - v40) <= 0 )
        return 1LL;
      v41 = v39;
      v59 = v39 * v40 + 0x7FFFFFFF;
      v18 = 0;
      v46 = HIDWORD(v59) + left;
    }
    if ( v17 <= a8 )
    {
LABEL_13:
      v24 = left;
    }
    else
    {
      v42 = v19 - (v17 - a8);
      if ( v42 <= 0 )
        return 1LL;
      v24 = left;
      right = left + ((__PAIR64__(HIDWORD(v39), v41) * (unsigned int)v42 + 0x7FFFFFFF) >> 32);
    }
    v25 = v60->left;
    if ( v46 >= v60->left )
      v25 = v46;
    v26 = v60->right;
    if ( right <= v26 )
      v26 = right;
    if ( v26 <= v25 )
      return 1LL;
    v27 = v25 - v24;
    if ( v53 || v27 )
    {
      LODWORD(v64) = (v61 << 31) | (v48 >> 1);
      HIDWORD(v64) = v61 >> 1;
      v29 = v54 + ((v64 + __PAIR64__(v61, v48) * v27) >> 32);
      v28 = v64 + v48 * v27;
    }
    else
    {
      v28 = (v61 << 31) | (v48 >> 1);
      v29 = (v61 >> 1) + v18;
    }
    if ( v62 >= 0 && v49 <= a9 )
      goto LABEL_24;
    v56 = 1;
    v43 = __PAIR64__(v55, 0) / (unsigned int)v20;
    v84 = v43;
    if ( v62 >= 0 )
    {
      v44 = v43;
    }
    else
    {
      if ( v49 <= 0 )
        return 1LL;
      v44 = v43;
      v21 = 0;
      v52 = ((v43 * (unsigned int)-v62 + 0x7FFFFFFF) >> 32) + top;
    }
    if ( v49 <= a9 )
    {
LABEL_24:
      v30 = top;
LABEL_25:
      v31 = v60->top;
      if ( v52 >= v31 )
        v31 = v52;
      v32 = v60->bottom;
      if ( bottom <= v32 )
        v32 = bottom;
      if ( v32 > v31 )
      {
        v33 = v31 - v30;
        if ( v56 || v33 )
        {
          v34 = v82 + 1;
          v35 = (v82 + 1) >> 32;
          LODWORD(v58) = (__int64)(v82 + 1) >> 1;
          HIDWORD(v58) = HIDWORD(v23) >> 1;
          v37 = v62 + ((v58 + v23 * (unsigned __int64)v33) >> 32);
          v36 = v58 + v23 * v33;
        }
        else
        {
          v34 = v82 + 1;
          v35 = (v82 + 1) >> 32;
          v36 = v23 >> 1;
          v37 = (HIDWORD(v23) >> 1) + v21;
        }
        v67 = &a6[v37 * a7];
        v70 = &a1[a2 * v31];
        v68 = a7;
        v69 = v29;
        v72 = v25;
        v71 = a2;
        v73 = v26;
        v74 = v32 - v31;
        v75 = (v81 + 1) >> 32;
        v76 = v81 + 1;
        v77 = v35;
        v78 = v34;
        v79 = v28;
        v80 = v36;
        if ( v26 - v25 < 7 )
          v22 = 8LL;
        ((void (__fastcall *)(char **))(&pfnStrArray)[a13 | (unsigned __int64)v22])(&v67);
        a11->left = v25;
        a11->right = v26;
        a11->top = v31;
        a11->bottom = v32;
      }
      return 1LL;
    }
    if ( a9 - v62 > 0 )
    {
      v30 = top;
      bottom = top + ((__PAIR64__(HIDWORD(v43), v44) * (unsigned int)(a9 - v62) + 0x7FFFFFFF) >> 32);
      goto LABEL_25;
    }
    return 1LL;
  }
  return 0LL;
}
