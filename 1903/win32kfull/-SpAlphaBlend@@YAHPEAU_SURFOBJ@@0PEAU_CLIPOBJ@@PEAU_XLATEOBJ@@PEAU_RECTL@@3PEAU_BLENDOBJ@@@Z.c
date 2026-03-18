/*
 * XREFs of ?SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C003F9A0
 * Callers:
 *     <none>
 * Callees:
 *     OffAlphaBlend @ 0x1C003FBB0 (OffAlphaBlend.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0040A9C (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0040DA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0041688 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00416BC (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     EngAlphaBlend @ 0x1C005B220 (EngAlphaBlend.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C0106918 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall SpAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        RECTL *prclDest,
        struct _RECTL *prclSrc,
        struct _BLENDOBJ *pBlendObj)
{
  unsigned int v9; // r14d
  HDEV hdev; // rax
  struct _SURFOBJ *v11; // rbx
  USHORT *p_iType; // rdi
  BOOL (__stdcall *v13)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  __int64 ThreadWin32Thread; // rax
  struct _SURFOBJ *v16; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIPOBJ *v19; // [rsp+68h] [rbp-98h] BYREF
  struct _POINTL v20; // [rsp+70h] [rbp-90h] BYREF
  __int64 v21; // [rsp+78h] [rbp-88h]
  _BYTE v22[912]; // [rsp+80h] [rbp-80h] BYREF

  v16 = a1;
  v19 = a3;
  v9 = 1;
  hdev = a2->hdev;
  v21 = (__int64)pBlendObj;
  v20 = 0LL;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 15) != a2 )
  {
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v22, a1, a3, prclDest);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v22, &v16, &v20, &v19) )
        return v9;
      v11 = v16;
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v17, v16);
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v18, a2);
      if ( (unsigned int)NEEDDDILOCK::bRender((NEEDDDILOCK *)&v17, &v19) )
        break;
LABEL_10:
      if ( v18 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v18 + 48));
        v18 = 0LL;
      }
      if ( v17 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v17 + 48));
        v17 = 0LL;
      }
    }
    p_iType = &v11->iType;
    if ( v11->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread(KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 0x10000) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          LODWORD(v11) = (_DWORD)v16;
          v13 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)(ThreadWin32Thread + 280) + 120LL);
          goto LABEL_9;
        }
        v11 = v16;
      }
      if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread(KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
        {
          LODWORD(v11) = (_DWORD)v16;
          goto LABEL_19;
        }
        v11 = v16;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x10000) != 0 )
    {
      v13 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))*((_QWORD *)v11->hdev + 170);
LABEL_9:
      v9 &= OffAlphaBlend(
              (int)v13,
              (int)&v20,
              (int)v11,
              (int)&gptlZero,
              (__int64)a2,
              v19,
              (__int64)a4,
              (__int64)prclDest,
              (__int64)prclSrc,
              v21);
      goto LABEL_10;
    }
LABEL_19:
    v13 = EngAlphaBlend;
    goto LABEL_9;
  }
  return EngAlphaBlend(a1, a2, a3, a4, prclDest, prclSrc, pBlendObj);
}
