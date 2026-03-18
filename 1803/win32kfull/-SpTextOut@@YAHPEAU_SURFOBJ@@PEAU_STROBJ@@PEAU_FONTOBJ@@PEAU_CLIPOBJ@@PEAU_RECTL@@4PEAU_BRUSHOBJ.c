/*
 * XREFs of ?SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C008BD10
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C008D520 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C008DBA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00B28B8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpTextOut(
        struct _SURFOBJ *a1,
        struct _STROBJ *a2,
        struct _FONTOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  BOOL v10; // edi
  struct _STROBJ *v11; // rbx
  unsigned int v14; // r12d
  FLONG flFontType; // ecx
  ULONG cGlyphs; // esi
  struct _RECTL *p_rclBkGround; // r9
  struct _SURFOBJ *v18; // r14
  struct _SURFOBJ *v19; // rcx
  __int64 v20; // rax
  USHORT *p_iType; // rbx
  __int64 v22; // rdi
  CLIPOBJ *v23; // r13
  struct _RECTL *v24; // rax
  struct _POINTL v25; // rbx
  LONG y; // esi
  int v27; // ecx
  LONG v28; // ecx
  LONG x; // edx
  struct _STROBJ *v30; // r11
  LONG v31; // esi
  int v32; // r14d
  LONG v33; // ebx
  int v34; // ecx
  int v35; // edx
  int v36; // eax
  HDEV hdev; // rax
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdx
  int pwszOrg; // r9d
  __int64 v50; // r8
  ULONG v51; // r9d
  _DWORD *v52; // r10
  _DWORD *v53; // r8
  ULONG v54; // r9d
  _DWORD *v55; // r8
  struct _STROBJ *v56; // r11
  int v57; // r8d
  __int64 v58; // rax
  ULONG v59; // r9d
  _DWORD *v60; // r10
  _DWORD *v61; // r8
  ULONG v62; // r8d
  _DWORD *v63; // rax
  int v64; // [rsp+60h] [rbp-A0h]
  struct _SURFOBJ *v65; // [rsp+68h] [rbp-98h] BYREF
  ULONG v66; // [rsp+70h] [rbp-90h]
  BOOL (__stdcall *v67)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // [rsp+78h] [rbp-88h]
  struct _STROBJ *v68; // [rsp+80h] [rbp-80h]
  CLIPOBJ *ppco; // [rsp+88h] [rbp-78h] BYREF
  struct _RECTL *v70; // [rsp+90h] [rbp-70h]
  struct _POINTL v71; // [rsp+98h] [rbp-68h] BYREF
  struct _POINTL v72; // [rsp+A0h] [rbp-60h] BYREF
  struct _POINTL v73; // [rsp+A8h] [rbp-58h] BYREF
  struct _POINTL *v74; // [rsp+B0h] [rbp-50h]
  struct _BRUSHOBJ *v75; // [rsp+B8h] [rbp-48h]
  struct _BRUSHOBJ *v76; // [rsp+C0h] [rbp-40h]
  struct _RECTL *v77; // [rsp+C8h] [rbp-38h]
  struct _FONTOBJ *v78; // [rsp+D0h] [rbp-30h]
  _DWORD v79[6]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v80[912]; // [rsp+F0h] [rbp-10h] BYREF

  v10 = 0;
  v65 = a1;
  v11 = a2;
  v68 = a2;
  v78 = a3;
  v14 = 1;
  v77 = a5;
  v76 = a7;
  v75 = a8;
  v74 = a9;
  flFontType = a3->flFontType;
  ppco = a4;
  v64 = 0;
  if ( (flFontType & 0x10000) != 0 )
  {
    hdev = a1->hdev;
    if ( (flFontType & 0x10000000) != 0 )
    {
      if ( ((_DWORD)hdev[530] & 0x4000) == 0 )
      {
        v10 = 1;
        v64 = 1;
      }
    }
    else
    {
      v10 = ((_DWORD)hdev[454] & 0x1000000) == 0;
      v64 = v10;
    }
  }
  cGlyphs = v11[1].cGlyphs;
  v66 = cGlyphs;
  p_rclBkGround = a6;
  if ( !a6 )
    p_rclBkGround = &v11->rclBkGround;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v80, a1, a4, p_rclBkGround);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v80, &v65, &v71, &ppco) )
  {
    do
    {
      v18 = v65;
      v19 = v65;
      v11[1].cGlyphs = cGlyphs;
      v20 = SURFOBJ_TO_SURFACE_NOT_NULL(v19);
      if ( (*(_DWORD *)(v20 + 116) & 1) == 0 && (*(_DWORD *)(v20 + 112) & 0x800) != 0 && *(_WORD *)(v20 + 100) == 3 )
      {
        v67 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))RedirTextOut;
        goto LABEL_10;
      }
      if ( v10 )
        goto LABEL_36;
      p_iType = &v18->iType;
      if ( v18->iType == 1 )
      {
        if ( (unsigned int)bAllowShareAccess(v18) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42) + 280) + 20LL) & 8) != 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43);
            v18 = v65;
            v67 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 96LL);
            goto LABEL_10;
          }
          v18 = v65;
        }
        if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v18) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48) + 108)) )
          {
            v18 = v65;
LABEL_36:
            v67 = EngTextOut;
            goto LABEL_10;
          }
          v18 = v65;
        }
      }
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 8) == 0 )
        goto LABEL_36;
      v67 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))*((_QWORD *)v18->hdev + 166);
LABEL_10:
      v22 = 0LL;
      if ( v18
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 0x200) == 0
        && (v22 = SURFOBJ_TO_SURFACE_NOT_NULL(v18),
            GreLockDisplayDevice(*(_QWORD *)(v22 + 48)),
            *(_WORD *)(v22 + 100) == 1)
        && !EngUpdateDeviceSurface((SURFOBJ *)(v22 + 24), &ppco) )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v22 + 48));
      }
      else
      {
        v23 = ppco;
        v24 = a6;
        v25 = v71;
        y = v71.y;
        v70 = a6;
        if ( a6 )
        {
          v24 = (struct _RECTL *)v79;
          v27 = v71.x + a6->left;
          v70 = (struct _RECTL *)v79;
          v79[0] = v27;
          v79[2] = v71.x + a6->right;
          v79[1] = v71.y + a6->top;
          v79[3] = v71.y + a6->bottom;
        }
        v28 = v71.y;
        x = v71.x;
        if ( v71.x || v71.y )
        {
          v30 = v68;
          v68->rclBkGround.left += v71.x;
          v30->rclBkGround.right += x;
          v30->rclBkGround.top += y;
          v30->rclBkGround.bottom += y;
          pwszOrg = (int)v30[4].pwszOrg;
          if ( (pwszOrg & 0x100) != 0 )
          {
            x *= 16;
            v28 = 16 * y;
          }
          v50 = *(_QWORD *)&v30[1].rclBkGround.top;
          if ( (pwszOrg & 0x1400) != 0 )
          {
            v51 = v30->cGlyphs;
            v52 = *(_DWORD **)&v30[4].rclBkGround.top;
            if ( v30->cGlyphs )
            {
              v53 = (_DWORD *)(v50 + 20);
              do
              {
                if ( *v52 == HIDWORD(v30[4].pwszOrg) )
                {
                  *(v53 - 1) += x;
                  --v51;
                  *v53 += v28;
                }
                v53 += 6;
                ++v52;
              }
              while ( v51 );
              v24 = v70;
            }
          }
          else if ( v30->ulCharInc )
          {
            *(_DWORD *)(v50 + 16) += x;
            *(_DWORD *)(v50 + 20) += v28;
          }
          else
          {
            v54 = v30->cGlyphs;
            if ( v30->cGlyphs )
            {
              v55 = (_DWORD *)(v50 + 20);
              do
              {
                *(v55 - 1) += x;
                *v55 += v28;
                v55 += 6;
                --v54;
              }
              while ( v54 );
            }
          }
        }
        else
        {
          v30 = v68;
        }
        if ( v23 && (v25.x || y) )
        {
          v23->rclBounds.left += v25.x;
          v23->rclBounds.right += v25.x;
          v23->rclBounds.top += y;
          v23->rclBounds.bottom += y;
          if ( v23->iDComplexity )
          {
            v73 = v25;
            RGNOBJ::bOffset((RGNOBJ *)&v23[2].rclBounds.top, &v73);
            v24 = v70;
            v30 = v68;
          }
        }
        v31 = -y;
        v32 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))v67)(
                v18,
                v30,
                v78,
                v23,
                v77,
                v24,
                v76,
                v75,
                v74,
                a10);
        v33 = -v25.x;
        v34 = v31;
        v35 = v33;
        if ( v33 || v31 )
        {
          v56 = v68;
          v68->rclBkGround.left += v33;
          v56->rclBkGround.right += v33;
          v56->rclBkGround.top += v31;
          v56->rclBkGround.bottom += v31;
          v57 = (int)v56[4].pwszOrg;
          if ( (v57 & 0x100) != 0 )
          {
            v35 = 16 * v33;
            v34 = 16 * v31;
          }
          v58 = *(_QWORD *)&v56[1].rclBkGround.top;
          if ( (v57 & 0x1400) != 0 )
          {
            v59 = v56->cGlyphs;
            v60 = *(_DWORD **)&v56[4].rclBkGround.top;
            if ( v56->cGlyphs )
            {
              v61 = (_DWORD *)(v58 + 20);
              do
              {
                if ( *v60 == HIDWORD(v56[4].pwszOrg) )
                {
                  *(v61 - 1) += v35;
                  --v59;
                  *v61 += v34;
                }
                v61 += 6;
                ++v60;
              }
              while ( v59 );
            }
          }
          else if ( v56->ulCharInc )
          {
            *(_DWORD *)(v58 + 16) += v35;
            *(_DWORD *)(v58 + 20) += v34;
          }
          else
          {
            v62 = v56->cGlyphs;
            if ( v56->cGlyphs )
            {
              v63 = (_DWORD *)(v58 + 20);
              do
              {
                *(v63 - 1) += v35;
                *v63 += v34;
                v63 += 6;
                --v62;
              }
              while ( v62 );
            }
          }
        }
        if ( v23 && (v33 || v31) )
        {
          v23->rclBounds.left += v33;
          v23->rclBounds.right += v33;
          v23->rclBounds.top += v31;
          v23->rclBounds.bottom += v31;
          if ( v23->iDComplexity )
          {
            v72.x = v33;
            v72.y = v31;
            RGNOBJ::bOffset((RGNOBJ *)&v23[2].rclBounds.top, &v72);
          }
        }
        v14 &= v32;
        if ( v22 )
          GreUnlockDisplayDevice(*(_QWORD *)(v22 + 48));
        cGlyphs = v66;
      }
      v36 = ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v80, &v65, &v71, &ppco);
      v11 = v68;
      v10 = v64;
    }
    while ( v36 );
  }
  return v14;
}
