/*
 * XREFs of ?SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0083310
 * Callers:
 *     <none>
 * Callees:
 *     OffTransparentBlt @ 0x1C008354C (OffTransparentBlt.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0084B2C (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0084E30 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0085718 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C008574C (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     EngTransparentBlt @ 0x1C00D2CA0 (EngTransparentBlt.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00E0B78 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
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
  unsigned int v9; // r14d
  HDEV hdev; // rax
  struct _SURFOBJ *v11; // rbx
  USHORT *p_iType; // rdi
  BOOL (__stdcall *v13)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  __int64 ThreadWin32Thread; // rax
  struct _SURFOBJ *v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h] BYREF
  __int64 v18; // [rsp+70h] [rbp-90h] BYREF
  struct _CLIPOBJ *v19; // [rsp+78h] [rbp-88h] BYREF
  struct _POINTL v20; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+88h] [rbp-78h]
  __int64 v22; // [rsp+90h] [rbp-70h]
  _BYTE v23[912]; // [rsp+A0h] [rbp-60h] BYREF

  v22 = (__int64)a4;
  v16 = a1;
  v19 = a3;
  v9 = 1;
  hdev = a2->hdev;
  v21 = (__int64)prclSrc;
  v20 = 0LL;
  if ( hdev && *((struct _SURFOBJ **)hdev + 15) == a2 )
  {
    return EngTransparentBlt(a1, a2, a3, a4, prclDst, prclSrc, iTransColor, ulReserved);
  }
  else
  {
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v23, a1, a3, prclDst);
    if ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v23, &v16, &v20, &v19) )
    {
      while ( 1 )
      {
        v11 = v16;
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v17, v16);
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v18, a2);
        if ( (unsigned int)NEEDDDILOCK::bRender((NEEDDDILOCK *)&v17, &v19) )
          break;
LABEL_9:
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
        if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v23, &v16, &v20, &v19) )
          return v9;
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
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 0x8000) != 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            LODWORD(v11) = (_DWORD)v16;
            v13 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 112LL);
            goto LABEL_8;
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
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x8000) != 0 )
      {
        v13 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))*((_QWORD *)v11->hdev + 169);
LABEL_8:
        v9 &= OffTransparentBlt(
                (int)v13,
                (int)&v20,
                (int)v11,
                (int)&gptlZero,
                (__int64)a2,
                v19,
                v22,
                (__int64)prclDst,
                v21,
                iTransColor,
                ulReserved);
        goto LABEL_9;
      }
LABEL_19:
      v13 = EngTransparentBlt;
      goto LABEL_8;
    }
  }
  return v9;
}
