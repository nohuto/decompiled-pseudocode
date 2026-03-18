/*
 * XREFs of ?SpGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C014B870
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0061588 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0061880 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00F50B4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00F50E8 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00FBF0C (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     OffGradientFill @ 0x1C014BA34 (OffGradientFill.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall SpGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _XLATEOBJ *a3,
        struct _TRIVERTEX *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        struct _RECTL *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  unsigned int v10; // esi
  struct _SURFOBJ *v11; // rbx
  USHORT *p_iType; // rdi
  BOOL (__stdcall *v13)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  struct _SURFOBJ *v25; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-98h] BYREF
  struct _CLIPOBJ *v27; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v28; // [rsp+78h] [rbp-88h] BYREF
  struct _POINTL *v29; // [rsp+80h] [rbp-80h]
  void *v30; // [rsp+88h] [rbp-78h]
  struct _TRIVERTEX *v31; // [rsp+90h] [rbp-70h]
  struct _XLATEOBJ *v32; // [rsp+98h] [rbp-68h]
  __int64 *v33[114]; // [rsp+A0h] [rbp-60h] BYREF

  v10 = 1;
  v32 = a3;
  v30 = a6;
  v27 = a2;
  v31 = a4;
  v25 = a1;
  v29 = a9;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v33, a1, a2, a8);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum(v33, &v25, &v28, &v27) )
  {
    while ( 1 )
    {
      v11 = v25;
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v26, v25);
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v26, &v27) )
        break;
LABEL_7:
      if ( v26 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v26 + 48));
        v26 = 0LL;
      }
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v33, &v25, &v28, &v27) )
        return v10;
    }
    p_iType = &v11->iType;
    if ( v11->iType == 1 )
    {
      if ( bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18) + 280) + 20LL) & 0x20000) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19);
          v11 = v25;
          v13 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 136LL);
          goto LABEL_6;
        }
        v11 = v25;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24) + 108)) )
        {
          v11 = v25;
          goto LABEL_26;
        }
        v11 = v25;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x20000) != 0 )
    {
      v13 = (BOOL (__stdcall *)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))*((_QWORD *)v11->hdev + 172);
LABEL_6:
      v10 &= OffGradientFill(v13, &v28, v11, v27, v32, v31, a5, v30, a7, a8, v29, a10);
      goto LABEL_7;
    }
LABEL_26:
    v13 = EngGradientFill;
    goto LABEL_6;
  }
  return v10;
}
