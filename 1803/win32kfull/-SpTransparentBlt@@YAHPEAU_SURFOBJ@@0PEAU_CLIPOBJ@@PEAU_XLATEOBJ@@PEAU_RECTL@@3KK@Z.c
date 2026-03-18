/*
 * XREFs of ?SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C00B2220
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C008D520 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C008DBA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     EngTransparentBlt @ 0x1C00B1C40 (EngTransparentBlt.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00B2888 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00B28B8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffTransparentBlt @ 0x1C00B28E4 (OffTransparentBlt.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall SpTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        RECTL *prclDst,
        RECTL *prclSrc,
        ULONG iTransColor,
        ULONG ulReserved)
{
  unsigned int v9; // r12d
  HDEV hdev; // rax
  struct _SURFOBJ *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdi
  USHORT *p_iType; // r14
  __int64 v15; // rdx
  __int64 v16; // rdx
  BOOL (__stdcall *v17)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  struct _SURFOBJ *v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  struct _CLIPOBJ *v29; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v30; // [rsp+78h] [rbp-88h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  __int64 *v33[114]; // [rsp+90h] [rbp-70h] BYREF

  v9 = 1;
  v32 = (__int64)a4;
  v27 = a1;
  hdev = a2->hdev;
  v29 = a3;
  v31 = (__int64)prclSrc;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v33, a1, a3, prclDst);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v33, &v27, &v30, &v29) )
        return v9;
      v11 = v27;
      v12 = 0LL;
      v28 = 0LL;
      if ( v27
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x200) == 0 )
      {
        v12 = SURFOBJ_TO_SURFACE_NOT_NULL(v11);
        v28 = v12;
        GreLockDisplayDevice(*(_QWORD *)(v12 + 48));
      }
      v13 = 0LL;
      if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x200) == 0 )
      {
        v13 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
        GreLockDisplayDevice(*(_QWORD *)(v13 + 48));
      }
      if ( (unsigned int)NEEDDDILOCK::bRender((NEEDDDILOCK *)&v28, &v29) )
        break;
LABEL_18:
      if ( v13 )
        GreUnlockDisplayDevice(*(_QWORD *)(v13 + 48));
      if ( v12 )
        GreUnlockDisplayDevice(*(_QWORD *)(v12 + 48));
    }
    p_iType = &v11->iType;
    if ( v11->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21) + 280) + 20LL) & 0x8000) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22);
          v12 = v28;
          LODWORD(v11) = (_DWORD)v27;
          v17 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 112LL);
          goto LABEL_17;
        }
        v12 = v28;
        v11 = v27;
      }
      if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26) + 108)) )
        {
          v12 = v28;
          LODWORD(v11) = (_DWORD)v27;
          goto LABEL_16;
        }
        v12 = v28;
        v11 = v27;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x8000) != 0 )
    {
      v17 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))*((_QWORD *)v11->hdev + 168);
      goto LABEL_17;
    }
LABEL_16:
    v17 = EngTransparentBlt;
LABEL_17:
    v9 &= OffTransparentBlt(
            (int)v17,
            (int)&v30,
            (int)v11,
            (int)&gptlZero,
            (__int64)a2,
            v29,
            v32,
            (__int64)prclDst,
            v31,
            iTransColor,
            ulReserved);
    goto LABEL_18;
  }
  return EngTransparentBlt(a1, a2, a3, a4, prclDst, prclSrc, iTransColor, ulReserved);
}
