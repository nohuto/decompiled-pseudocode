/*
 * XREFs of ?SpGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C0154460
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0084B2C (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0084E30 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0085718 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C008574C (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00E0B78 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     OffGradientFill @ 0x1C015462C (OffGradientFill.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
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
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r8
  struct _SURFOBJ *v34; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  struct _CLIPOBJ *v36; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v37; // [rsp+78h] [rbp-88h] BYREF
  struct _POINTL *v38; // [rsp+80h] [rbp-80h]
  void *v39; // [rsp+88h] [rbp-78h]
  struct _TRIVERTEX *v40; // [rsp+90h] [rbp-70h]
  struct _XLATEOBJ *v41; // [rsp+98h] [rbp-68h]
  __int64 *v42[114]; // [rsp+A0h] [rbp-60h] BYREF

  v10 = 1;
  v37 = 0LL;
  v41 = a3;
  v39 = a6;
  v36 = a2;
  v40 = a4;
  v34 = a1;
  v38 = a9;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v42, a1, a2, a8);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum(v42, &v34, &v37, &v36) )
  {
    while ( 1 )
    {
      v11 = v34;
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v35, v34);
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v35, &v36) )
        break;
LABEL_7:
      if ( v35 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v35 + 48));
        v35 = 0LL;
      }
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v42, &v34, &v37, &v36) )
        return v10;
    }
    p_iType = &v11->iType;
    if ( v11->iType == 1 )
    {
      if ( bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22) + 280) + 20LL) & 0x20000) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24);
          v11 = v34;
          v13 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 136LL);
          goto LABEL_6;
        }
        v11 = v34;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33) + 108)) )
        {
          v11 = v34;
          goto LABEL_26;
        }
        v11 = v34;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x20000) != 0 )
    {
      v13 = (BOOL (__stdcall *)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))*((_QWORD *)v11->hdev + 172);
LABEL_6:
      v10 &= OffGradientFill(v13, &v37, v11, v36, v41, v40, a5, v39, a7, a8, v38, a10);
      goto LABEL_7;
    }
LABEL_26:
    v13 = EngGradientFill;
    goto LABEL_6;
  }
  return v10;
}
