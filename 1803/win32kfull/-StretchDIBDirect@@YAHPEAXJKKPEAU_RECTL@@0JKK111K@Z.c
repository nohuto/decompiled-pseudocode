/*
 * XREFs of ?StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1C00A2924
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C00A3068 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C025ED3C (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StretchDIBDirect(
        void *a1,
        __int64 a2,
        int a3,
        int a4,
        struct _RECTL *a5,
        void *a6,
        int a7,
        signed int a8,
        signed int a9,
        struct _RECTL *a10,
        struct _RECTL *a11,
        struct _RECTL *a12)
{
  struct _RECTL *v13; // r15
  LONG right; // r13d
  int v15; // edi
  int v16; // eax
  LONG v17; // esi
  int v18; // r10d
  LONG v19; // r9d
  int v20; // r11d
  LONG v21; // r12d
  LONG v22; // r14d
  LONG v23; // r15d
  LONG v24; // eax
  LONG v25; // edi
  LONG v26; // esi
  unsigned __int64 v28; // rax
  unsigned int v29; // r12d
  unsigned int v30; // r14d
  int v31; // r10d
  unsigned __int64 v32; // rax
  unsigned int v33; // r9d
  unsigned int v34; // edi
  int v35; // r11d
  LONG left; // [rsp+30h] [rbp-118h]
  LONG v37; // [rsp+34h] [rbp-114h]
  LONG top; // [rsp+3Ch] [rbp-10Ch]
  LONG v39; // [rsp+40h] [rbp-108h]
  LONG v40; // [rsp+5Ch] [rbp-ECh]
  struct _RECTL *v41; // [rsp+70h] [rbp-D8h]
  LONG bottom; // [rsp+90h] [rbp-B8h]
  __int64 v43; // [rsp+100h] [rbp-48h] BYREF
  int v44; // [rsp+108h] [rbp-40h]
  int v45; // [rsp+10Ch] [rbp-3Ch]

  v13 = a12;
  v41 = a12;
  right = a5->right;
  left = a5->left;
  v15 = right - a5->left;
  bottom = a5->bottom;
  top = a5->top;
  v16 = bottom - top;
  v17 = a10->right;
  v18 = v17 - a10->left;
  v40 = a10->bottom;
  v19 = a10->top;
  v20 = v40 - v19;
  v21 = a10->left;
  v37 = a5->left;
  v39 = top;
  if ( v15 <= 0 || v16 <= 0 || v18 <= 0 || v20 <= 0 )
    return 1LL;
  if ( v15 <= 0x7FFF && v16 <= 0x7FFF && v18 <= 0x7FFF && v20 <= 0x7FFF )
  {
    if ( !a12 )
    {
      v13 = (struct _RECTL *)&v43;
      v41 = (struct _RECTL *)&v43;
      v43 = 0LL;
      v44 = a3;
      v45 = a4;
    }
    if ( v21 < 0 || v17 > a8 )
    {
      v28 = __PAIR64__(v15, 0) / (unsigned int)v18;
      if ( v21 >= 0 )
      {
        v30 = v28;
      }
      else
      {
        v29 = -v21;
        if ( (int)(v18 - v29) <= 0 )
          return 1LL;
        v30 = v28;
        v37 += (v28 * v29 + 0x7FFFFFFF) >> 32;
      }
      if ( v17 > a8 )
      {
        v31 = v18 - (v17 - a8);
        if ( v31 <= 0 )
          return 1LL;
        right = left + ((__PAIR64__(HIDWORD(v28), v30) * (unsigned int)v31 + 0x7FFFFFFF) >> 32);
      }
    }
    v22 = v13->left;
    if ( v37 >= v13->left )
      v22 = v37;
    v23 = v13->right;
    if ( right <= v23 )
      v23 = right;
    if ( v23 <= v22 )
      return 1LL;
    if ( v19 >= 0 && v40 <= a9 )
      goto LABEL_20;
    v32 = __PAIR64__(bottom - top, 0) / (unsigned int)v20;
    if ( v19 >= 0 )
    {
      v34 = v32;
    }
    else
    {
      v33 = -v19;
      if ( (int)(v20 - v33) <= 0 )
        return 1LL;
      v34 = v32;
      v39 = ((v32 * v33 + 0x7FFFFFFF) >> 32) + top;
    }
    if ( v40 <= a9 )
    {
LABEL_20:
      v24 = bottom;
LABEL_21:
      v25 = v41->top;
      if ( v39 >= v25 )
        v25 = v39;
      v26 = v41->bottom;
      if ( v24 <= v26 )
        v26 = v24;
      if ( v26 > v25 )
      {
        _guard_dispatch_icall_fptr();
        a11->left = v22;
        a11->right = v23;
        a11->top = v25;
        a11->bottom = v26;
      }
      return 1LL;
    }
    v35 = v20 - (v40 - a9);
    if ( v35 > 0 )
    {
      v24 = top + ((__PAIR64__(HIDWORD(v32), v34) * (unsigned int)v35 + 0x7FFFFFFF) >> 32);
      goto LABEL_21;
    }
    return 1LL;
  }
  return 0LL;
}
