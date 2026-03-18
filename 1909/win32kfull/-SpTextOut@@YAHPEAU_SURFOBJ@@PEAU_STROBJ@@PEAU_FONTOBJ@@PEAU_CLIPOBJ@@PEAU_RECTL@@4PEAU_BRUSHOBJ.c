/*
 * XREFs of ?SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C00847B0
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0084B2C (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0084E30 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0085718 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
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
  _BOOL8 v10; // rbx
  struct _STROBJ *v11; // r14
  unsigned int v14; // r12d
  FLONG flFontType; // ecx
  ULONG cGlyphs; // edi
  struct _RECTL *p_rclBkGround; // r9
  struct _SURFOBJ *v18; // r14
  __int64 v19; // rax
  USHORT *p_iType; // rbx
  __int64 v21; // rdi
  CLIPOBJ *v22; // r13
  struct _POINTL v23; // rbx
  struct _RECTL *v24; // rax
  LONG y; // esi
  struct _STROBJ *v26; // rdx
  int v27; // eax
  LONG v28; // esi
  LONG v29; // ebx
  int v30; // eax
  HDEV hdev; // rax
  bool v33; // zf
  __int64 ThreadWin32Thread; // rax
  int x; // r10d
  int pwszOrg; // ecx
  int v37; // r11d
  __int64 v38; // rax
  ULONG v39; // r8d
  _DWORD *v40; // r9
  _DWORD *v41; // rcx
  ULONG v42; // ecx
  _DWORD *v43; // rax
  int v44; // r9d
  int v45; // ecx
  int v46; // r10d
  __int64 v47; // rax
  ULONG v48; // edx
  _DWORD *v49; // r8
  _DWORD *v50; // rcx
  ULONG v51; // ecx
  _DWORD *v52; // rax
  struct _RECTL *v53; // [rsp+60h] [rbp-A0h]
  int v54; // [rsp+60h] [rbp-A0h]
  BOOL (__stdcall *v55)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // [rsp+68h] [rbp-98h] BYREF
  struct _SURFOBJ *v56; // [rsp+70h] [rbp-90h] BYREF
  struct _STROBJ *v57; // [rsp+78h] [rbp-88h]
  CLIPOBJ *ppco; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v59; // [rsp+88h] [rbp-78h] BYREF
  _BOOL8 v60; // [rsp+90h] [rbp-70h]
  ULONG v61; // [rsp+98h] [rbp-68h]
  struct _POINTL v62; // [rsp+A0h] [rbp-60h] BYREF
  struct _POINTL *v63; // [rsp+A8h] [rbp-58h]
  struct _BRUSHOBJ *v64; // [rsp+B0h] [rbp-50h]
  struct _BRUSHOBJ *v65; // [rsp+B8h] [rbp-48h]
  struct _RECTL *v66; // [rsp+C0h] [rbp-40h]
  struct _FONTOBJ *v67; // [rsp+C8h] [rbp-38h]
  __int64 v68; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v69; // [rsp+D8h] [rbp-28h]
  _BYTE v70[912]; // [rsp+E0h] [rbp-20h] BYREF

  v10 = 0LL;
  v56 = a1;
  v11 = a2;
  v57 = a2;
  v67 = a3;
  v14 = 1;
  v66 = a5;
  v65 = a7;
  v64 = a8;
  v63 = a9;
  flFontType = a3->flFontType;
  ppco = a4;
  v59 = 0LL;
  v60 = 0LL;
  if ( (flFontType & 0x10000) != 0 )
  {
    hdev = a1->hdev;
    if ( (flFontType & 0x10000000) != 0 )
    {
      v33 = ((_DWORD)hdev[532] & 0x4000) == 0;
      v60 = 0LL;
      if ( !v33 )
        goto LABEL_2;
      v10 = 1LL;
    }
    else
    {
      v10 = ((_DWORD)hdev[456] & 0x1000000) == 0;
    }
    v60 = v10;
  }
LABEL_2:
  cGlyphs = v11[1].cGlyphs;
  v61 = cGlyphs;
  p_rclBkGround = a6;
  if ( !a6 )
    p_rclBkGround = &v11->rclBkGround;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v70, a1, a4, p_rclBkGround);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v70, &v56, &v59, &ppco) )
  {
    do
    {
      v11[1].cGlyphs = cGlyphs;
      v18 = v56;
      v19 = SURFOBJ_TO_SURFACE_NOT_NULL(v56);
      if ( (*(_DWORD *)(v19 + 116) & 1) == 0 && (*(_DWORD *)(v19 + 112) & 0x800) != 0 && *(_WORD *)(v19 + 100) == 3 )
      {
        v55 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))RedirTextOut;
      }
      else
      {
        if ( v10 )
          goto LABEL_36;
        p_iType = &v18->iType;
        if ( v18->iType != 1 )
          goto LABEL_8;
        if ( !(unsigned int)bAllowShareAccess(v18) )
          goto LABEL_51;
        if ( !W32GetThreadWin32Thread(KeGetCurrentThread())
          || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
          || !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
          && !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)
          || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 8) == 0 )
        {
          v18 = v56;
LABEL_51:
          if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v18) )
          {
            if ( W32GetThreadWin32Thread(KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
            {
              v18 = v56;
LABEL_36:
              v55 = EngTextOut;
              goto LABEL_10;
            }
            v18 = v56;
          }
LABEL_8:
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 8) != 0 )
          {
            v55 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))*((_QWORD *)v18->hdev + 167);
            goto LABEL_10;
          }
          goto LABEL_36;
        }
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v18 = v56;
        v55 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 96LL);
      }
LABEL_10:
      v21 = 0LL;
      if ( !v18
        || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 0x4000) == 0
        && *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) >= 0
        || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 0x200) != 0
        || (v21 = SURFOBJ_TO_SURFACE_NOT_NULL(v18),
            GreLockDisplayDevice(*(_QWORD *)(v21 + 48)),
            *(_WORD *)(v21 + 100) != 1)
        || EngUpdateDeviceSurface((SURFOBJ *)(v21 + 24), &ppco) )
      {
        v22 = ppco;
        v23 = v59;
        v24 = a6;
        y = v59.y;
        v53 = a6;
        v68 = 0LL;
        v69 = 0LL;
        if ( a6 )
        {
          v24 = (struct _RECTL *)&v68;
          v53 = (struct _RECTL *)&v68;
          LODWORD(v68) = v59.x + a6->left;
          LODWORD(v69) = v59.x + a6->right;
          HIDWORD(v68) = v59.y + a6->top;
          HIDWORD(v69) = v59.y + a6->bottom;
        }
        if ( v59.x || v59.y )
        {
          v26 = v57;
          x = 16 * v59.x;
          v57->rclBkGround.left += v59.x;
          v26->rclBkGround.right += v23.x;
          v26->rclBkGround.top += y;
          v26->rclBkGround.bottom += y;
          pwszOrg = (int)v26[4].pwszOrg;
          if ( (pwszOrg & 0x100) == 0 )
            x = v23.x;
          v37 = 16 * y;
          v38 = *(_QWORD *)&v26[1].rclBkGround.top;
          if ( ((__int64)v26[4].pwszOrg & 0x100) == 0 )
            v37 = y;
          if ( (pwszOrg & 0x1400) != 0 )
          {
            v39 = v26->cGlyphs;
            v40 = *(_DWORD **)&v26[4].rclBkGround.top;
            if ( v26->cGlyphs )
            {
              v41 = (_DWORD *)(v38 + 20);
              do
              {
                if ( *v40 == HIDWORD(v26[4].pwszOrg) )
                {
                  *(v41 - 1) += x;
                  --v39;
                  *v41 += v37;
                }
                v41 += 6;
                ++v40;
              }
              while ( v39 );
              v24 = v53;
              goto LABEL_18;
            }
          }
          else
          {
            if ( v26->ulCharInc )
            {
              *(_DWORD *)(v38 + 16) += x;
              *(_DWORD *)(v38 + 20) += v37;
              v24 = v53;
              goto LABEL_18;
            }
            v42 = v26->cGlyphs;
            if ( v26->cGlyphs )
            {
              v43 = (_DWORD *)(v38 + 20);
              do
              {
                *(v43 - 1) += x;
                *v43 += v37;
                v43 += 6;
                --v42;
              }
              while ( v42 );
            }
          }
          v24 = v53;
        }
        else
        {
          v26 = v57;
        }
LABEL_18:
        v62 = 0LL;
        if ( v22 && (v23.x || y) )
        {
          v22->rclBounds.left += v23.x;
          v22->rclBounds.right += v23.x;
          v22->rclBounds.top += y;
          v22->rclBounds.bottom += y;
          if ( v22->iDComplexity )
          {
            v62 = v23;
            RGNOBJ::bOffset((RGNOBJ *)&v22[2].rclBounds.top, &v62);
            v24 = v53;
            v26 = v57;
          }
        }
        v27 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))v55)(
                v18,
                v26,
                v67,
                v22,
                v66,
                v24,
                v65,
                v64,
                v63,
                a10);
        v28 = -y;
        v54 = v27;
        v29 = -v23.x;
        if ( v29 || v28 )
        {
          v11 = v57;
          v44 = 16 * v29;
          v57->rclBkGround.left += v29;
          v11->rclBkGround.right += v29;
          v11->rclBkGround.top += v28;
          v11->rclBkGround.bottom += v28;
          v45 = (int)v11[4].pwszOrg;
          if ( (v45 & 0x100) == 0 )
            v44 = v29;
          v46 = 16 * v28;
          v47 = *(_QWORD *)&v11[1].rclBkGround.top;
          if ( ((__int64)v11[4].pwszOrg & 0x100) == 0 )
            v46 = v28;
          if ( (v45 & 0x1400) != 0 )
          {
            v48 = v11->cGlyphs;
            v49 = *(_DWORD **)&v11[4].rclBkGround.top;
            if ( v11->cGlyphs )
            {
              v50 = (_DWORD *)(v47 + 20);
              do
              {
                if ( *v49 == HIDWORD(v11[4].pwszOrg) )
                {
                  *(v50 - 1) += v44;
                  --v48;
                  *v50 += v46;
                }
                v50 += 6;
                ++v49;
              }
              while ( v48 );
            }
          }
          else if ( v11->ulCharInc )
          {
            *(_DWORD *)(v47 + 16) += v44;
            *(_DWORD *)(v47 + 20) += v46;
          }
          else
          {
            v51 = v11->cGlyphs;
            if ( v11->cGlyphs )
            {
              v52 = (_DWORD *)(v47 + 20);
              do
              {
                *(v52 - 1) += v44;
                *v52 += v46;
                v52 += 6;
                --v51;
              }
              while ( v51 );
            }
          }
          v27 = v54;
        }
        else
        {
          v11 = v57;
        }
        v55 = 0LL;
        if ( v22 && (v29 || v28) )
        {
          v22->rclBounds.left += v29;
          v22->rclBounds.right += v29;
          v22->rclBounds.top += v28;
          v22->rclBounds.bottom += v28;
          if ( v22->iDComplexity )
          {
            LODWORD(v55) = v29;
            HIDWORD(v55) = v28;
            RGNOBJ::bOffset((RGNOBJ *)&v22[2].rclBounds.top, (struct _POINTL *)&v55);
            v27 = v54;
          }
        }
        v14 &= v27;
        if ( v21 )
          GreUnlockDisplayDevice(*(_QWORD *)(v21 + 48));
        goto LABEL_29;
      }
      GreUnlockDisplayDevice(*(_QWORD *)(v21 + 48));
      v11 = v57;
LABEL_29:
      v30 = ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v70, &v56, &v59, &ppco);
      v10 = v60;
      cGlyphs = v61;
    }
    while ( v30 );
  }
  return v14;
}
