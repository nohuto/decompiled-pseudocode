/*
 * XREFs of ?SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C014DE10
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0061588 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0061880 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009E31C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     EngStretchBltROP @ 0x1C00A05D0 (EngStretchBltROP.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00F50B4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00F50E8 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00FBF0C (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     OffStretchBltROP @ 0x1C014E074 (OffStretchBltROP.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall SpStretchBltROP(
        SURFOBJ *psoDest,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        POINTL *pptlMask,
        ULONG iMode,
        struct _BRUSHOBJ *pbo,
        DWORD rop4)
{
  unsigned int v14; // r14d
  HDEV hdev; // rax
  struct _SURFOBJ *v16; // r10
  struct _CLIPOBJ *v17; // r11
  struct _SURFOBJ *v18; // rbx
  USHORT *p_iType; // rdi
  int v20; // r9d
  BOOL (__stdcall *v21)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  struct _SURFOBJ *v33; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+88h] [rbp-78h] BYREF
  __int64 v35; // [rsp+90h] [rbp-70h] BYREF
  struct _CLIPOBJ *v36; // [rsp+98h] [rbp-68h] BYREF
  struct _POINTL v37; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-58h]
  __int64 v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  __int64 v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  __int64 v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  struct _RECTL v45; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v46[114]; // [rsp+F0h] [rbp-10h] BYREF

  v14 = 1;
  hdev = a2->hdev;
  v33 = psoDest;
  v36 = a4;
  v44 = (__int64)a3;
  v43 = (__int64)pxlo;
  v42 = (__int64)pca;
  v41 = (__int64)pptlHTOrg;
  v40 = (__int64)prclSrc;
  v39 = (__int64)pptlMask;
  v38 = (__int64)pbo;
  if ( hdev && *((struct _SURFOBJ **)hdev + 15) == a2 )
  {
    return EngStretchBltROP(psoDest, a2, a3, a4, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode, pbo, rop4);
  }
  else
  {
    v45 = *prclDest;
    ERECTL::vOrder((ERECTL *)&v45);
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v46, v16, v17, &v45);
    if ( (unsigned int)ENUMUNDERLAYS::bEnum(v46, &v33, &v37, &v36) )
    {
      while ( 1 )
      {
        v18 = v33;
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v34, v33);
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v35, a2);
        if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v34, &v36) )
          break;
LABEL_9:
        if ( v35 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v35 + 48));
          v35 = 0LL;
        }
        if ( v34 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v34 + 48));
          v34 = 0LL;
        }
        if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v46, &v33, &v37, &v36) )
          return v14;
      }
      p_iType = &v18->iType;
      if ( v18->iType == 1 )
      {
        if ( bAllowShareAccess(v18) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26) + 280) + 20LL) & 0x2000) != 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27);
            LODWORD(v18) = (_DWORD)v33;
            v21 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(*(_QWORD *)(ThreadWin32Thread + 280) + 152LL);
            goto LABEL_8;
          }
          v18 = v33;
        }
        if ( *p_iType == 1 && bAllowShareAccess(v18) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32) + 108)) )
          {
            LODWORD(v18) = (_DWORD)v33;
            goto LABEL_31;
          }
          v18 = v33;
        }
      }
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 0x2000) != 0 )
      {
        v21 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))*((_QWORD *)v18->hdev + 174);
LABEL_8:
        v14 &= OffStretchBltROP(
                 (int)v21,
                 (int)&v37,
                 (int)v18,
                 v20,
                 (__int64)a2,
                 v44,
                 v36,
                 v43,
                 v42,
                 v41,
                 (__int64)prclDest,
                 v40,
                 v39,
                 iMode,
                 v38,
                 rop4);
        goto LABEL_9;
      }
LABEL_31:
      v21 = EngStretchBltROP;
      goto LABEL_8;
    }
  }
  return v14;
}
