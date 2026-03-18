/*
 * XREFs of ?SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C00F3CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0061588 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0061880 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     EngTransparentBlt @ 0x1C0093A50 (EngTransparentBlt.c)
 *     OffTransparentBlt @ 0x1C00F3ED4 (OffTransparentBlt.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00F50B4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00F50E8 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00FBF0C (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
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
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  struct _SURFOBJ *v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  __int64 v28; // [rsp+70h] [rbp-90h] BYREF
  struct _CLIPOBJ *v29; // [rsp+78h] [rbp-88h] BYREF
  struct _POINTL v30; // [rsp+80h] [rbp-80h] BYREF
  __int64 v31; // [rsp+88h] [rbp-78h]
  __int64 v32; // [rsp+90h] [rbp-70h]
  __int64 *v33[114]; // [rsp+A0h] [rbp-60h] BYREF

  v9 = 1;
  v32 = (__int64)a4;
  v26 = a1;
  hdev = a2->hdev;
  v29 = a3;
  v31 = (__int64)prclSrc;
  if ( hdev && *((struct _SURFOBJ **)hdev + 15) == a2 )
  {
    return EngTransparentBlt(a1, a2, a3, a4, prclDst, prclSrc, iTransColor, ulReserved);
  }
  else
  {
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v33, a1, a3, prclDst);
    if ( (unsigned int)ENUMUNDERLAYS::bEnum(v33, &v26, &v30, &v29) )
    {
      while ( 1 )
      {
        v11 = v26;
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v27, v26);
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v28, a2);
        if ( (unsigned int)NEEDDDILOCK::bRender((NEEDDDILOCK *)&v27, &v29) )
          break;
LABEL_9:
        if ( v28 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v28 + 48));
          v28 = 0LL;
        }
        if ( v27 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v27 + 48));
          v27 = 0LL;
        }
        if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v33, &v26, &v30, &v29) )
          return v9;
      }
      p_iType = &v11->iType;
      if ( v11->iType == 1 )
      {
        if ( (unsigned int)bAllowShareAccess(v11) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19) + 280) + 20LL) & 0x8000) != 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20);
            LODWORD(v11) = (_DWORD)v26;
            v13 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 112LL);
            goto LABEL_8;
          }
          v11 = v26;
        }
        if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v11) )
        {
          v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
          if ( v22
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25) + 108)) )
          {
            LODWORD(v11) = (_DWORD)v26;
            goto LABEL_19;
          }
          v11 = v26;
        }
      }
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x8000) != 0 )
      {
        v13 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))*((_QWORD *)v11->hdev + 169);
LABEL_8:
        v9 &= OffTransparentBlt(
                (int)v13,
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
        goto LABEL_9;
      }
LABEL_19:
      v13 = EngTransparentBlt;
      goto LABEL_8;
    }
  }
  return v9;
}
