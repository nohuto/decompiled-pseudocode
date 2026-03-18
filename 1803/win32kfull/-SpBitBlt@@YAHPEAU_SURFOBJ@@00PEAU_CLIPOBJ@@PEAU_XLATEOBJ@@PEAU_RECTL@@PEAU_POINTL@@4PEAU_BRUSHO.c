/*
 * XREFs of ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C009EBF0
 * Callers:
 *     ?SpCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C009EBA0 (-SpCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C024E794 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C008D520 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C008DBA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C009F23C (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00B28B8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffBitBlt @ 0x1C010B5E4 (OffBitBlt.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
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
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // [rsp+48h] [rbp-B8h]
  int v63; // [rsp+70h] [rbp-90h]
  struct _SURFOBJ *v64; // [rsp+78h] [rbp-88h] BYREF
  CLIPOBJ *ppco; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v66; // [rsp+88h] [rbp-78h] BYREF
  BOOL (__stdcall *v67)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // [rsp+90h] [rbp-70h]
  __int64 v68; // [rsp+98h] [rbp-68h]
  __int64 v69; // [rsp+A0h] [rbp-60h]
  struct _POINTL *v70; // [rsp+A8h] [rbp-58h]
  _DWORD v71[2]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v72[2]; // [rsp+B8h] [rbp-48h] BYREF
  struct _POINTL v73; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v74[2]; // [rsp+C8h] [rbp-38h] BYREF
  struct _POINTL *v75; // [rsp+D0h] [rbp-30h]
  _DWORD v76[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v77; // [rsp+E0h] [rbp-20h]
  __int64 v78; // [rsp+E8h] [rbp-18h]
  struct _POINTL v79; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v80; // [rsp+F8h] [rbp-8h]
  struct _POINTL *v81; // [rsp+100h] [rbp+0h]
  struct _RECTL v82; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v83[4]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v84[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v85[114]; // [rsp+140h] [rbp+40h] BYREF

  v11 = a5;
  v13 = a7;
  v78 = (__int64)a3;
  v14 = 1;
  ppco = a4;
  v75 = a8;
  v68 = (__int64)a10;
  v64 = a1;
  v69 = (__int64)a5;
  v70 = a7;
  v77 = (__int64)a9;
  v63 = 1;
  if ( a2 )
    hdev = a2->hdev;
  else
    hdev = 0LL;
  if ( !hdev || a2 != *((struct _SURFOBJ **)hdev + 14) )
  {
    v82 = *a6;
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v85, a1, a4, a6);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v85, &v64, &v66, &ppco) )
        return v14;
      v16 = v64;
      v17 = 0LL;
      if ( v64
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v64) + 112) & 0x4000) != 0
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
          v20 = INVOKEOFFCOPYBITS(&v66, v16, &gptlZero, a2, ppco, v11, &v82, v13);
          goto LABEL_18;
        }
        if ( (unsigned __int8)a11 == a11 >> 8 )
        {
          p_iType = &v16->iType;
          if ( v16->iType == 1 && (unsigned int)bAllowShareAccess(v16) )
          {
            if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40)
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43) + 108))
              && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43) + 280) + 20LL) & 1) != 0 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44);
              v16 = v64;
              v24 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(ThreadWin32Thread + 280) + 72LL);
              goto LABEL_33;
            }
            v16 = v64;
          }
          if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v16) )
          {
            v49 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48);
            if ( v49
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v52) + 108)) )
            {
              v16 = v64;
LABEL_83:
              v24 = EngBitBlt;
LABEL_33:
              v25 = (_DWORD *)v68;
              v26 = v13;
              v27 = v66;
              v28 = (_DWORD *)v68;
              y = v66.y;
              v81 = v13;
              v30 = ppco;
              v80 = v68;
              v67 = v24;
              if ( ppco && (v66.x || v66.y) )
              {
                ppco->rclBounds.left += v66.x;
                v30->rclBounds.right += v27.x;
                v30->rclBounds.top += y;
                v30->rclBounds.bottom += y;
                if ( v30->iDComplexity )
                {
                  v79 = v27;
                  RGNOBJ::bOffset((RGNOBJ *)&v30[2].rclBounds.top, &v79);
                  v28 = (_DWORD *)v80;
                  v26 = v81;
                  v25 = (_DWORD *)v80;
                }
              }
              v83[0] = v27.x + v82.left;
              v83[2] = v27.x + v82.right;
              v83[1] = y + v82.top;
              v83[3] = y + v82.bottom;
              if ( v70 )
              {
                v26 = (struct _POINTL *)v71;
                v71[0] = gptlZero.x + v70->x;
                v71[1] = gptlZero.y + v70->y;
              }
              if ( v25 )
              {
                v28 = v72;
                v72[0] = v27.x + *v25;
                v72[1] = y + v25[1];
              }
              v31 = -y;
              v32 = -v27.x;
              v33 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, __int64, CLIPOBJ *, __int64, _DWORD *, struct _POINTL *, struct _POINTL *, __int64, _DWORD *, unsigned int))v67)(
                      v16,
                      a2,
                      v78,
                      v30,
                      v69,
                      v83,
                      v26,
                      v75,
                      v77,
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
                  v73.x = v32;
                  v73.y = v31;
                  RGNOBJ::bOffset((RGNOBJ *)&v30[2].rclBounds.top, &v73);
                }
              }
              v13 = v70;
              v14 = v33 & v63;
              v11 = (struct _XLATEOBJ *)v69;
LABEL_19:
              v63 = v14;
              goto LABEL_20;
            }
            v16 = v64;
          }
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 1) != 0 )
          {
            v24 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v16->hdev + 163);
            goto LABEL_33;
          }
          goto LABEL_83;
        }
        *(struct _RECTL *)v84 = v82;
        if ( !ppco || bIntersect(&ppco->rclBounds, &v82, (struct _RECTL *)v84) )
        {
          v34 = 0LL;
          v35 = LODWORD(v84[0]) - v82.left;
          v36 = HIDWORD(v84[0]) - v82.top;
          if ( v13 )
          {
            v34 = v74;
            v74[0] = v35 + v13->x;
            v74[1] = v36 + v13->y;
          }
          v37 = 0LL;
          if ( v75 )
          {
            v37 = v76;
            v76[0] = v35 + v75->x;
            v76[1] = v36 + v75->y;
          }
          v38 = &v16->iType;
          if ( v16->iType == 1 )
          {
            if ( (unsigned int)bAllowShareAccess(v16) )
            {
              if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46)
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53) + 280)
                && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54) + 104)
                 || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55) + 108))
                && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55) + 280) + 20LL) & 1) != 0 )
              {
                v57 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v56);
                LODWORD(v16) = (_DWORD)v64;
                v39 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(v57 + 280) + 72LL);
                goto LABEL_62;
              }
              v16 = v64;
            }
            if ( *v38 != 1 || !(unsigned int)bAllowShareAccess(v16) )
              goto LABEL_60;
            v58 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47);
            if ( !v58
              || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v59) + 280)
              || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v60) + 104)
              && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61) + 108) )
            {
              v16 = v64;
              goto LABEL_60;
            }
            LODWORD(v16) = (_DWORD)v64;
            goto LABEL_101;
          }
LABEL_60:
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 1) != 0 )
          {
            v39 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v16->hdev + 163);
            goto LABEL_62;
          }
LABEL_101:
          v39 = EngBitBlt;
LABEL_62:
          v62 = (__int64)v34;
          v11 = (struct _XLATEOBJ *)v69;
          v20 = OffBitBlt(
                  (int)v39,
                  (int)&v66,
                  (int)v16,
                  (int)&gptlZero,
                  (__int64)a2,
                  v78,
                  ppco,
                  v69,
                  (__int64)v84,
                  v62,
                  (__int64)v37,
                  v77,
                  v68,
                  a11);
          v14 = v63;
          v13 = v70;
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
