/*
 * XREFs of ?SpGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C01536A0
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0040A9C (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0040DA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0041688 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00416BC (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C0106918 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     OffGradientFill @ 0x1C015386C (OffGradientFill.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
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
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  struct _SURFOBJ *v43; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  struct _CLIPOBJ *v45; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v46; // [rsp+78h] [rbp-88h] BYREF
  struct _POINTL *v47; // [rsp+80h] [rbp-80h]
  void *v48; // [rsp+88h] [rbp-78h]
  struct _TRIVERTEX *v49; // [rsp+90h] [rbp-70h]
  struct _XLATEOBJ *v50; // [rsp+98h] [rbp-68h]
  __int64 *v51[114]; // [rsp+A0h] [rbp-60h] BYREF

  v10 = 1;
  v46 = 0LL;
  v50 = a3;
  v48 = a6;
  v45 = a2;
  v49 = a4;
  v43 = a1;
  v47 = a9;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v51, a1, a2, a8);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum(v51, &v43, &v46, &v45) )
  {
    while ( 1 )
    {
      v11 = v43;
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v44, v43);
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v44, &v45) )
        break;
LABEL_7:
      if ( v44 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v44 + 48));
        v44 = 0LL;
      }
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v51, &v43, &v46, &v45) )
        return v10;
    }
    p_iType = &v11->iType;
    if ( v11->iType == 1 )
    {
      if ( bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22, v23) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26) + 280) + 20LL) & 0x20000) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29);
          v11 = v43;
          v13 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 136LL);
          goto LABEL_6;
        }
        v11 = v43;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v38, v39) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41, v42) + 108)) )
        {
          v11 = v43;
          goto LABEL_26;
        }
        v11 = v43;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x20000) != 0 )
    {
      v13 = (BOOL (__stdcall *)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))*((_QWORD *)v11->hdev + 172);
LABEL_6:
      v10 &= OffGradientFill(v13, &v46, v11, v45, v50, v49, a5, v48, a7, a8, v47, a10);
      goto LABEL_7;
    }
LABEL_26:
    v13 = EngGradientFill;
    goto LABEL_6;
  }
  return v10;
}
