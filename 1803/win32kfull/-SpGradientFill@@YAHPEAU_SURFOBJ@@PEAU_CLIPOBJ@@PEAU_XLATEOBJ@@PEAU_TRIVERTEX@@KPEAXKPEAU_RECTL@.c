/*
 * XREFs of ?SpGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C012B540
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C008D520 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C008DBA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00B2888 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00B28B8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffGradientFill @ 0x1C012B758 (OffGradientFill.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
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
  unsigned int v10; // r14d
  struct _SURFOBJ *v11; // rdi
  __int64 v12; // rbx
  USHORT *p_iType; // rsi
  BOOL (__stdcall *v14)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  struct _SURFOBJ *v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  struct _CLIPOBJ *v28; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v29; // [rsp+78h] [rbp-88h] BYREF
  struct _POINTL *v30; // [rsp+80h] [rbp-80h]
  struct _RECTL *v31; // [rsp+88h] [rbp-78h]
  void *v32; // [rsp+90h] [rbp-70h]
  struct _TRIVERTEX *v33; // [rsp+98h] [rbp-68h]
  struct _XLATEOBJ *v34; // [rsp+A0h] [rbp-60h]
  __int64 *v35[114]; // [rsp+B0h] [rbp-50h] BYREF

  v10 = 1;
  v34 = a3;
  v30 = a9;
  v32 = a6;
  v28 = a2;
  v33 = a4;
  v26 = a1;
  v31 = a8;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v35, a1, a2, a8);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum(v35, &v26, &v29, &v28) )
  {
    v11 = v26;
    v12 = 0LL;
    v27 = 0LL;
    if ( v26
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v26) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x200) == 0 )
    {
      v12 = SURFOBJ_TO_SURFACE_NOT_NULL(v11);
      v27 = v12;
      GreLockDisplayDevice(*(_QWORD *)(v12 + 48));
    }
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v27, &v28) )
      goto LABEL_10;
    p_iType = &v11->iType;
    if ( v11->iType == 1 )
    {
      if ( bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19) + 280) + 20LL) & 0x20000) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20);
          v12 = v27;
          v11 = v26;
          v14 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 136LL);
          goto LABEL_9;
        }
        v12 = v27;
        v11 = v26;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25) + 108)) )
        {
          v12 = v27;
          v11 = v26;
LABEL_31:
          v14 = EngGradientFill;
          goto LABEL_9;
        }
        v12 = v27;
        v11 = v26;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x20000) == 0 )
      goto LABEL_31;
    v14 = (BOOL (__stdcall *)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))*((_QWORD *)v11->hdev + 171);
LABEL_9:
    v10 &= OffGradientFill(v14, &v29, v11, v28, v34, v33, a5, v32, a7, v31, v30, a10);
LABEL_10:
    if ( v12 )
      GreUnlockDisplayDevice(*(_QWORD *)(v12 + 48));
  }
  return v10;
}
