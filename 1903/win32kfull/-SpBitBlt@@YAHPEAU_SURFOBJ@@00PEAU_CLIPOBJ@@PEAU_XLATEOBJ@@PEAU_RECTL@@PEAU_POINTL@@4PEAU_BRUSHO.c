/*
 * XREFs of ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0040050
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C003D9E4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?SpCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C0040000 (-SpCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     OffBitBlt @ 0x1C003F810 (OffBitBlt.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0040A9C (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0040DA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0041334 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0041688 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
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
  struct _XLATEOBJ *v11; // r13
  struct _SURFOBJ *v12; // r15
  struct _POINTL *v13; // r12
  unsigned int v14; // ebx
  HDEV hdev; // rax
  struct _SURFOBJ *v16; // r14
  __int64 v17; // rdi
  __int64 v18; // rsi
  BOOL updated; // eax
  int v20; // eax
  __int64 (__fastcall *v21)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // r10
  USHORT *p_iType; // rbx
  BOOL (__stdcall *v24)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // r13
  _DWORD *v25; // r10
  struct _POINTL *v26; // r8
  CLIPOBJ *v27; // r15
  __int64 *v28; // rdx
  struct _POINTL v29; // rbx
  LONG y; // r12d
  int v31; // eax
  LONG v32; // r12d
  LONG v33; // ebx
  int v34; // r14d
  __int64 *v35; // r13
  int v36; // edx
  int v37; // r8d
  __int64 *v38; // r12
  USHORT *v39; // rbx
  BOOL (__stdcall *v40)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v42; // rax
  __int64 *v43; // [rsp+48h] [rbp-B8h]
  int v44; // [rsp+70h] [rbp-90h]
  struct _SURFOBJ *v45; // [rsp+78h] [rbp-88h] BYREF
  CLIPOBJ *ppco; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v47; // [rsp+88h] [rbp-78h] BYREF
  __int64 v48; // [rsp+90h] [rbp-70h] BYREF
  __int64 v49; // [rsp+98h] [rbp-68h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v52; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v53; // [rsp+B8h] [rbp-48h]
  __int64 v54; // [rsp+C0h] [rbp-40h]
  struct _POINTL *v55; // [rsp+C8h] [rbp-38h]
  struct _POINTL v56; // [rsp+D0h] [rbp-30h] BYREF
  struct _SURFOBJ *v57; // [rsp+D8h] [rbp-28h]
  struct _POINTL *v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+E8h] [rbp-18h]
  __int64 v60; // [rsp+F0h] [rbp-10h]
  struct _POINTL *v61; // [rsp+F8h] [rbp-8h]
  struct _RECTL v62; // [rsp+100h] [rbp+0h] BYREF
  __int64 v63[2]; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v64[4]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v65[912]; // [rsp+130h] [rbp+30h] BYREF

  v11 = a5;
  v47 = 0LL;
  v12 = a2;
  v51 = 0LL;
  v52 = 0LL;
  v13 = a7;
  *(_QWORD *)&v62.left = 0LL;
  *(_QWORD *)&v62.right = 0LL;
  v63[0] = 0LL;
  v63[1] = 0LL;
  v60 = (__int64)a3;
  v14 = 1;
  v57 = a2;
  ppco = a4;
  v44 = 1;
  v45 = a1;
  v54 = (__int64)a5;
  v55 = a7;
  v58 = a8;
  v59 = (__int64)a9;
  v53 = (__int64)a10;
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
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v65, &v45, &v47, &ppco) )
        return v14;
      v16 = v45;
      v17 = 0LL;
      if ( v45
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v45) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 0x200) == 0 )
      {
        v17 = SURFOBJ_TO_SURFACE_NOT_NULL(v16);
        GreLockDisplayDevice(*(_QWORD *)(v17 + 48));
      }
      v18 = 0LL;
      if ( v12
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v12) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v12) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v12) + 112) & 0x200) == 0 )
      {
        v18 = SURFOBJ_TO_SURFACE_NOT_NULL(v12);
        GreLockDisplayDevice(*(_QWORD *)(v18 + 48));
      }
      updated = 1;
      if ( v17 && *(_WORD *)(v17 + 100) == 1 )
        updated = EngUpdateDeviceSurface((SURFOBJ *)(v17 + 24), &ppco);
      if ( updated )
      {
        if ( a11 == 52428 )
        {
          v20 = INVOKEOFFCOPYBITS(&v47, v16, &gptlZero, v12, ppco, v11, &v62, v13);
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
              v16 = v45;
              v24 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(ThreadWin32Thread + 280) + 72LL);
              goto LABEL_33;
            }
            v16 = v45;
          }
          if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v16) )
          {
            if ( W32GetThreadWin32Thread(KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
            {
              v16 = v45;
LABEL_83:
              v24 = EngBitBlt;
LABEL_33:
              v25 = (_DWORD *)v53;
              v26 = v13;
              v27 = ppco;
              v28 = (__int64 *)v53;
              v56 = 0LL;
              v29 = v47;
              v61 = v13;
              y = v47.y;
              v48 = v53;
              if ( ppco && (v47.x || v47.y) )
              {
                ppco->rclBounds.left += v47.x;
                v27->rclBounds.right += v29.x;
                v27->rclBounds.top += y;
                v27->rclBounds.bottom += y;
                if ( v27->iDComplexity )
                {
                  v56 = v29;
                  RGNOBJ::bOffset((RGNOBJ *)&v27[2].rclBounds.top, &v56);
                  v28 = (__int64 *)v48;
                  v26 = v61;
                  v25 = (_DWORD *)v48;
                }
              }
              v49 = 0LL;
              v64[0] = v29.x + v62.left;
              v64[2] = v29.x + v62.right;
              v64[1] = y + v62.top;
              v64[3] = y + v62.bottom;
              if ( v55 )
              {
                v26 = (struct _POINTL *)&v49;
                LODWORD(v49) = gptlZero.x + v55->x;
                HIDWORD(v49) = gptlZero.y + v55->y;
              }
              v50 = 0LL;
              if ( v25 )
              {
                v28 = &v50;
                LODWORD(v50) = v29.x + *v25;
                HIDWORD(v50) = y + v25[1];
              }
              v31 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, __int64, CLIPOBJ *, __int64, _DWORD *, struct _POINTL *, struct _POINTL *, __int64, __int64 *, unsigned int))v24)(
                      v16,
                      v57,
                      v60,
                      v27,
                      v54,
                      v64,
                      v26,
                      v58,
                      v59,
                      v28,
                      a11);
              v48 = 0LL;
              v32 = -y;
              v33 = -v29.x;
              v34 = v31;
              if ( v27 && (v33 || v32) )
              {
                v27->rclBounds.left += v33;
                v27->rclBounds.right += v33;
                v27->rclBounds.top += v32;
                v27->rclBounds.bottom += v32;
                if ( v27->iDComplexity )
                {
                  LODWORD(v48) = v33;
                  HIDWORD(v48) = v32;
                  RGNOBJ::bOffset((RGNOBJ *)&v27[2].rclBounds.top, (struct _POINTL *)&v48);
                }
              }
              v12 = v57;
              v14 = v34 & v44;
              v13 = v55;
              v11 = (struct _XLATEOBJ *)v54;
LABEL_19:
              v44 = v14;
              goto LABEL_20;
            }
            v16 = v45;
          }
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 1) != 0 )
          {
            v24 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v16->hdev + 164);
            goto LABEL_33;
          }
          goto LABEL_83;
        }
        *(struct _RECTL *)v63 = v62;
        if ( !ppco || bIntersect(&ppco->rclBounds, &v62, (struct _RECTL *)v63) )
        {
          v35 = 0LL;
          v36 = LODWORD(v63[0]) - v62.left;
          v37 = HIDWORD(v63[0]) - v62.top;
          if ( v13 )
          {
            v35 = &v51;
            LODWORD(v51) = v36 + v13->x;
            HIDWORD(v51) = v37 + v13->y;
          }
          v38 = 0LL;
          if ( v58 )
          {
            v38 = &v52;
            LODWORD(v52) = v36 + v58->x;
            HIDWORD(v52) = v37 + v58->y;
          }
          v39 = &v16->iType;
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
                v42 = W32GetThreadWin32Thread(KeGetCurrentThread());
                v16 = v45;
                v40 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(v42 + 280) + 72LL);
                goto LABEL_60;
              }
              v16 = v45;
            }
            if ( *v39 != 1 || !(unsigned int)bAllowShareAccess(v16) )
              goto LABEL_58;
            if ( !W32GetThreadWin32Thread(KeGetCurrentThread())
              || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
              || !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
              && !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108) )
            {
              v16 = v45;
              goto LABEL_58;
            }
            v16 = v45;
            goto LABEL_101;
          }
LABEL_58:
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 1) != 0 )
          {
            v40 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v16->hdev + 164);
            goto LABEL_60;
          }
LABEL_101:
          v40 = EngBitBlt;
LABEL_60:
          v43 = v35;
          v11 = (struct _XLATEOBJ *)v54;
          v20 = OffBitBlt(
                  (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v40,
                  (int *)&v47,
                  (__int64)v16,
                  &gptlZero,
                  (__int64)v12,
                  v60,
                  ppco,
                  v54,
                  (int *)v63,
                  v43,
                  (__int64)v38,
                  v59,
                  (__int64 *)v53,
                  a11);
          v14 = v44;
          v13 = v55;
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
