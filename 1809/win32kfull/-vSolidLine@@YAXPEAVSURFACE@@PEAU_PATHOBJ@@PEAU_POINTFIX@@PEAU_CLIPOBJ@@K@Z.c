/*
 * XREFs of ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x1C00FD230
 * Callers:
 *     EngLineTo @ 0x1C00FD110 (EngLineTo.c)
 *     EngStrokePath @ 0x1C013BB90 (EngStrokePath.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C008FDD0 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?vDrawLine@@YAXPEAU_POINTFIX@@0PEAEJKPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C00FD478 (-vDrawLine@@YAXPEAU_POINTFIX@@0PEAEJKPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall vSolidLine(
        struct SURFACE *a1,
        struct _PATHOBJ *a2,
        struct _POINTFIX *a3,
        struct _CLIPOBJ *a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  struct _W32KCDD_ENG_CALLBACKS *v7; // r9
  struct _RECTL *v8; // r13
  unsigned __int8 *v9; // r10
  int v11; // r8d
  struct _PATHOBJ *v12; // r15
  unsigned int v13; // ebx
  unsigned int v14; // edi
  RECTL rclBounds; // xmm0
  int v16; // ecx
  LONG right; // eax
  LONG bottom; // eax
  struct _PATHOBJ v19; // rcx
  int v20; // r12d
  ULONG count; // eax
  ULONG v22; // esi
  char flags; // r8
  POINTFIX *pptfx; // rdx
  POINTFIX *v25; // r14
  POINTFIX *v26; // rcx
  unsigned __int8 *v27; // r12
  int v28; // ebx
  unsigned int v29; // ebx
  int v30; // [rsp+40h] [rbp-81h]
  struct _PATHDATA v31; // [rsp+48h] [rbp-79h] BYREF
  int v32; // [rsp+58h] [rbp-69h]
  struct _W32KCDD_ENG_CALLBACKS *v33; // [rsp+60h] [rbp-61h]
  unsigned __int8 *v34; // [rsp+68h] [rbp-59h]
  struct _POINTFIX v35; // [rsp+70h] [rbp-51h] BYREF
  struct _PATHOBJ *v36; // [rsp+78h] [rbp-49h]
  struct _POINTFIX v37; // [rsp+80h] [rbp-41h] BYREF
  RECTL v38; // [rsp+90h] [rbp-31h] BYREF
  LONG top; // [rsp+A0h] [rbp-21h]
  LONG left; // [rsp+A4h] [rbp-1Dh]
  LONG v41; // [rsp+A8h] [rbp-19h]
  LONG v42; // [rsp+ACh] [rbp-15h]
  LONG v43; // [rsp+B0h] [rbp-11h]
  int v44; // [rsp+B4h] [rbp-Dh]
  LONG v45; // [rsp+B8h] [rbp-9h]
  int v46; // [rsp+BCh] [rbp-5h]
  int v47; // [rsp+C0h] [rbp-1h]
  LONG v48; // [rsp+C4h] [rbp+3h]
  int v49; // [rsp+C8h] [rbp+7h]
  LONG v50; // [rsp+CCh] [rbp+Bh]

  v5 = *((_DWORD *)a1 + 24);
  v7 = (struct _W32KCDD_ENG_CALLBACKS *)*((_QWORD *)a1 + 79);
  v8 = 0LL;
  v9 = (unsigned __int8 *)*((_QWORD *)a1 + 10);
  v11 = *((_DWORD *)a1 + 22);
  v12 = a2;
  v33 = v7;
  v36 = a2;
  v30 = v11;
  v34 = v9;
  switch ( v5 )
  {
    case 1u:
      v13 = -(a5 != 0);
      goto LABEL_8;
    case 2u:
      v29 = (16 * a5) | a5;
      goto LABEL_34;
    case 3u:
      v29 = a5;
LABEL_34:
      v28 = (v29 << 8) | v29;
      goto LABEL_35;
    case 4u:
      v28 = a5;
LABEL_35:
      v13 = (v28 << 16) | v28;
LABEL_8:
      if ( a4 && a4->iDComplexity == 1 )
      {
        v8 = &v38;
        rclBounds = a4->rclBounds;
        left = a4->rclBounds.left;
        v43 = left;
        v48 = left;
        v16 = 1 - a4->rclBounds.top;
        top = a4->rclBounds.top;
        right = a4->rclBounds.right;
        v46 = v16;
        v49 = v16;
        v42 = right;
        v45 = right;
        v50 = right;
        bottom = a4->rclBounds.bottom;
        v44 = 1 - bottom;
        v47 = 1 - bottom;
        v38 = rclBounds;
        v41 = bottom;
      }
      v14 = v5 - 1;
      if ( v12 )
      {
        v31.flags = 0;
        v19 = v12[1];
        v12->fl &= ~8u;
        *(_QWORD *)(*(_QWORD *)&v19 + 72LL) = *(_QWORD *)(*(_QWORD *)&v19 + 32LL);
        do
        {
          v20 = EPATHOBJ::bEnum((EPATHOBJ *)v12, &v31);
          v32 = v20;
          count = v31.count;
          v22 = v31.count;
          if ( !v31.count )
            break;
          flags = v31.flags;
          pptfx = v31.pptfx;
          if ( (v31.flags & 1) != 0 )
          {
            v25 = v31.pptfx + 1;
            v37 = *v31.pptfx;
            v22 = v31.count - 1;
            v26 = v31.pptfx;
          }
          else
          {
            v26 = &v35;
            v25 = v31.pptfx;
          }
          if ( v22 )
          {
            v27 = v34;
            do
            {
              vDrawLine(v26, v25, v27, v30, v13, v8, v14, v33);
              v26 = v25++;
              --v22;
            }
            while ( v22 );
            pptfx = v31.pptfx;
            count = v31.count;
            flags = v31.flags;
            v12 = v36;
            v20 = v32;
          }
          v35 = pptfx[count - 1];
          if ( (flags & 8) != 0 )
            vDrawLine(&v35, &v37, v34, v30, v13, v8, v14, v33);
        }
        while ( v20 );
      }
      else
      {
        vDrawLine(a3, a3 + 1, v9, v11, v13, v8, v14, v7);
      }
      return;
  }
  if ( v5 > 4 && v5 <= 6 )
    goto LABEL_7;
  if ( !bUMPDSecurityGateEx((__int64)a1, (__int64)a2) )
  {
    v11 = v30;
    v9 = v34;
    v7 = v33;
LABEL_7:
    v13 = a5;
    goto LABEL_8;
  }
  if ( gfUMPDDebug )
    DbgPrint("windows\\core\\ntgdi\\gre\\windows\\solline.cxx:%d:vSolidLine:Invalid surface format.\n", 178);
}
