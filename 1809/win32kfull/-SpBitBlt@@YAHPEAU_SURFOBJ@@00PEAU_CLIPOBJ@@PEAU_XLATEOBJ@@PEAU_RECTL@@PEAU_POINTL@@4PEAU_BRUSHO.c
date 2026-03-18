/*
 * XREFs of ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0061E30
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00958D4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?SpCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C00FE610 (-SpCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0061588 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0061880 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     OffBitBlt @ 0x1C00F4008 (OffBitBlt.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00F4C00 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00F50B4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  struct _XLATEOBJ *v11; // r12
  struct _POINTL *v13; // r15
  unsigned int v14; // ebx
  HDEV hdev; // rax
  struct _SURFOBJ *v16; // r14
  __int64 v17; // rdi
  __int64 v18; // rsi
  BOOL updated; // eax
  int v20; // eax
  __int64 (__fastcall *v21)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // r10
  USHORT *p_iType; // rbx
  BOOL (__stdcall *v24)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rax
  _DWORD *v25; // r10
  struct _POINTL *v26; // r8
  struct _POINTL v27; // rbx
  _DWORD *v28; // rdx
  LONG y; // r12d
  CLIPOBJ *v30; // r15
  LONG v31; // r12d
  LONG v32; // ebx
  int v33; // r14d
  _DWORD *v34; // r12
  int v35; // edx
  int v36; // r8d
  _DWORD *v37; // r15
  USHORT *v38; // rbx
  BOOL (__stdcall *v39)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v41; // rax
  __int64 v42; // [rsp+48h] [rbp-B8h]
  int v43; // [rsp+70h] [rbp-90h]
  struct _SURFOBJ *v44; // [rsp+78h] [rbp-88h] BYREF
  CLIPOBJ *ppco; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v46; // [rsp+88h] [rbp-78h] BYREF
  BOOL (__stdcall *v47)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // [rsp+90h] [rbp-70h]
  __int64 v48; // [rsp+98h] [rbp-68h]
  __int64 v49; // [rsp+A0h] [rbp-60h]
  struct _POINTL *v50; // [rsp+A8h] [rbp-58h]
  _DWORD v51[2]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v52[2]; // [rsp+B8h] [rbp-48h] BYREF
  struct _POINTL v53; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v54[2]; // [rsp+C8h] [rbp-38h] BYREF
  struct _POINTL *v55; // [rsp+D0h] [rbp-30h]
  _DWORD v56[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  struct _POINTL v59; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v60; // [rsp+F8h] [rbp-8h]
  struct _POINTL *v61; // [rsp+100h] [rbp+0h]
  struct _RECTL v62; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v63[4]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v64[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v65[114]; // [rsp+140h] [rbp+40h] BYREF

  v11 = a5;
  v13 = a7;
  v58 = (__int64)a3;
  v14 = 1;
  ppco = a4;
  v55 = a8;
  v48 = (__int64)a10;
  v44 = a1;
  v49 = (__int64)a5;
  v50 = a7;
  v57 = (__int64)a9;
  v43 = 1;
  if ( a2 )
    hdev = a2->hdev;
  else
    hdev = 0LL;
  if ( !hdev || a2 != *((struct _SURFOBJ **)hdev + 15) )
  {
    v62 = *a6;
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v65, a1, a4, a6);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v65, &v44, &v46, &ppco) )
        return v14;
      v16 = v44;
      v17 = 0LL;
      if ( v44
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v44) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 0x200) == 0 )
      {
        v17 = SURFOBJ_TO_SURFACE_NOT_NULL(v16);
        GreLockDisplayDevice(*(_QWORD *)(v17 + 48));
      }
      v18 = 0LL;
      if ( a2
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x200) == 0 )
      {
        v18 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
        GreLockDisplayDevice(*(_QWORD *)(v18 + 48));
      }
      updated = 1;
      if ( v17 && *(_WORD *)(v17 + 100) == 1 )
        updated = EngUpdateDeviceSurface((SURFOBJ *)(v17 + 24), &ppco);
      if ( updated )
      {
        if ( a11 == 52428 )
        {
          v20 = INVOKEOFFCOPYBITS(&v46, v16, &gptlZero, a2, ppco, v11, &v62, v13);
          goto LABEL_18;
        }
        if ( (unsigned __int8)a11 == a11 >> 8 )
        {
          p_iType = &v16->iType;
          if ( v16->iType == 1 && (unsigned int)bAllowShareAccess(v16) )
          {
            if ( W32GetThreadWin32Thread(KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
              && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
              v16 = v44;
              v24 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(ThreadWin32Thread + 280) + 72LL);
              goto LABEL_33;
            }
            v16 = v44;
          }
          if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v16) )
          {
            if ( W32GetThreadWin32Thread(KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
            {
              v16 = v44;
LABEL_83:
              v24 = EngBitBlt;
LABEL_33:
              v25 = (_DWORD *)v48;
              v26 = v13;
              v27 = v46;
              v28 = (_DWORD *)v48;
              y = v46.y;
              v61 = v13;
              v30 = ppco;
              v60 = v48;
              v47 = v24;
              if ( ppco && (v46.x || v46.y) )
              {
                ppco->rclBounds.left += v46.x;
                v30->rclBounds.right += v27.x;
                v30->rclBounds.top += y;
                v30->rclBounds.bottom += y;
                if ( v30->iDComplexity )
                {
                  v59 = v27;
                  RGNOBJ::bOffset((RGNOBJ *)&v30[2].rclBounds.top, &v59);
                  v28 = (_DWORD *)v60;
                  v26 = v61;
                  v25 = (_DWORD *)v60;
                }
              }
              v63[0] = v27.x + v62.left;
              v63[2] = v27.x + v62.right;
              v63[1] = y + v62.top;
              v63[3] = y + v62.bottom;
              if ( v50 )
              {
                v26 = (struct _POINTL *)v51;
                v51[0] = gptlZero.x + v50->x;
                v51[1] = gptlZero.y + v50->y;
              }
              if ( v25 )
              {
                v28 = v52;
                v52[0] = v27.x + *v25;
                v52[1] = y + v25[1];
              }
              v31 = -y;
              v32 = -v27.x;
              v33 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, __int64, CLIPOBJ *, __int64, _DWORD *, struct _POINTL *, struct _POINTL *, __int64, _DWORD *, unsigned int))v47)(
                      v16,
                      a2,
                      v58,
                      v30,
                      v49,
                      v63,
                      v26,
                      v55,
                      v57,
                      v28,
                      a11);
              if ( v30 && (v32 || v31) )
              {
                v30->rclBounds.left += v32;
                v30->rclBounds.right += v32;
                v30->rclBounds.top += v31;
                v30->rclBounds.bottom += v31;
                if ( v30->iDComplexity )
                {
                  v53.x = v32;
                  v53.y = v31;
                  RGNOBJ::bOffset((RGNOBJ *)&v30[2].rclBounds.top, &v53);
                }
              }
              v13 = v50;
              v14 = v33 & v43;
              v11 = (struct _XLATEOBJ *)v49;
LABEL_19:
              v43 = v14;
              goto LABEL_20;
            }
            v16 = v44;
          }
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 1) != 0 )
          {
            v24 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v16->hdev + 164);
            goto LABEL_33;
          }
          goto LABEL_83;
        }
        *(struct _RECTL *)v64 = v62;
        if ( !ppco || bIntersect(&ppco->rclBounds, &v62, (struct _RECTL *)v64) )
        {
          v34 = 0LL;
          v35 = LODWORD(v64[0]) - v62.left;
          v36 = HIDWORD(v64[0]) - v62.top;
          if ( v13 )
          {
            v34 = v54;
            v54[0] = v35 + v13->x;
            v54[1] = v36 + v13->y;
          }
          v37 = 0LL;
          if ( v55 )
          {
            v37 = v56;
            v56[0] = v35 + v55->x;
            v56[1] = v36 + v55->y;
          }
          v38 = &v16->iType;
          if ( v16->iType == 1 )
          {
            if ( (unsigned int)bAllowShareAccess(v16) )
            {
              if ( W32GetThreadWin32Thread(KeGetCurrentThread())
                && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
                && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
                 || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
                && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
              {
                v41 = W32GetThreadWin32Thread(KeGetCurrentThread());
                LODWORD(v16) = (_DWORD)v44;
                v39 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(v41 + 280) + 72LL);
                goto LABEL_60;
              }
              v16 = v44;
            }
            if ( *v38 != 1 || !(unsigned int)bAllowShareAccess(v16) )
              goto LABEL_58;
            if ( !W32GetThreadWin32Thread(KeGetCurrentThread())
              || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
              || !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
              && !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108) )
            {
              v16 = v44;
              goto LABEL_58;
            }
            LODWORD(v16) = (_DWORD)v44;
            goto LABEL_101;
          }
LABEL_58:
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 1) != 0 )
          {
            v39 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v16->hdev + 164);
            goto LABEL_60;
          }
LABEL_101:
          v39 = EngBitBlt;
LABEL_60:
          v42 = (__int64)v34;
          v11 = (struct _XLATEOBJ *)v49;
          v20 = OffBitBlt(
                  (int)v39,
                  (int)&v46,
                  (int)v16,
                  (int)&gptlZero,
                  (__int64)a2,
                  v58,
                  ppco,
                  v49,
                  (__int64)v64,
                  v42,
                  (__int64)v37,
                  v57,
                  v48,
                  a11);
          v14 = v43;
          v13 = v50;
LABEL_18:
          v14 &= v20;
          goto LABEL_19;
        }
      }
LABEL_20:
      if ( v18 )
        GreUnlockDisplayDevice(*(_QWORD *)(v18 + 48));
      if ( v17 )
        GreUnlockDisplayDevice(*(_QWORD *)(v17 + 48));
    }
  }
  v21 = bSpBltScreenToScreen;
  if ( a1 != a2 )
    v21 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))bSpBltFromScreen;
  return (unsigned int)v21(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
