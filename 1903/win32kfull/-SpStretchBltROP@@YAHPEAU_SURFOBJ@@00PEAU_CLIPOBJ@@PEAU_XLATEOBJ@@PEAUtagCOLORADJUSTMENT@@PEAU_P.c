/*
 * XREFs of ?SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C01551D0
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0040A9C (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0040DA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0041688 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00416BC (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00589F4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C0106918 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     EngStretchBltROP @ 0x1C010A420 (EngStretchBltROP.c)
 *     OffStretchBltROP @ 0x1C015543C (OffStretchBltROP.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
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
  __int64 v20; // r9
  BOOL (__stdcall *v21)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // r8
  struct _SURFOBJ *v50; // [rsp+80h] [rbp-80h] BYREF
  __int64 v51; // [rsp+88h] [rbp-78h] BYREF
  __int64 v52; // [rsp+90h] [rbp-70h] BYREF
  struct _CLIPOBJ *v53; // [rsp+98h] [rbp-68h] BYREF
  struct _POINTL v54; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-58h]
  __int64 v56; // [rsp+B0h] [rbp-50h]
  __int64 v57; // [rsp+B8h] [rbp-48h]
  __int64 v58; // [rsp+C0h] [rbp-40h]
  __int64 v59; // [rsp+C8h] [rbp-38h]
  __int64 v60; // [rsp+D0h] [rbp-30h]
  __int64 v61; // [rsp+D8h] [rbp-28h]
  struct _RECTL v62; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v63[114]; // [rsp+F0h] [rbp-10h] BYREF

  v54 = 0LL;
  v14 = 1;
  hdev = a2->hdev;
  v50 = psoDest;
  v53 = a4;
  v61 = (__int64)a3;
  v60 = (__int64)pxlo;
  v59 = (__int64)pca;
  v58 = (__int64)pptlHTOrg;
  v57 = (__int64)prclSrc;
  v56 = (__int64)pptlMask;
  v55 = (__int64)pbo;
  if ( hdev && *((struct _SURFOBJ **)hdev + 15) == a2 )
  {
    return EngStretchBltROP(psoDest, a2, a3, a4, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode, pbo, rop4);
  }
  else
  {
    v62 = *prclDest;
    ERECTL::vOrder((ERECTL *)&v62);
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v63, v16, v17, &v62);
    if ( (unsigned int)ENUMUNDERLAYS::bEnum(v63, &v50, &v54, &v53) )
    {
      while ( 1 )
      {
        v18 = v50;
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v51, v50);
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v52, a2);
        if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v51, &v53) )
          break;
LABEL_9:
        if ( v52 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v52 + 48));
          v52 = 0LL;
        }
        if ( v51 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v51 + 48));
          v51 = 0LL;
        }
        if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v63, &v50, &v54, &v53) )
          return v14;
      }
      p_iType = &v18->iType;
      if ( v18->iType == 1 )
      {
        if ( bAllowShareAccess(v18) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30, v31) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34) + 280)
                          + 20LL) & 0x2000) != 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37);
            LODWORD(v18) = (_DWORD)v50;
            v21 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(*(_QWORD *)(ThreadWin32Thread + 280) + 152LL);
            goto LABEL_8;
          }
          v18 = v50;
        }
        if ( *p_iType == 1 && bAllowShareAccess(v18) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40, v41)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42, v43, v44) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v46, v47) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48, v49, v20) + 108)) )
          {
            LODWORD(v18) = (_DWORD)v50;
            goto LABEL_31;
          }
          v18 = v50;
        }
      }
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 0x2000) != 0 )
      {
        v21 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))*((_QWORD *)v18->hdev + 174);
LABEL_8:
        v14 &= OffStretchBltROP(
                 (int)v21,
                 (int)&v54,
                 (int)v18,
                 v20,
                 (__int64)a2,
                 v61,
                 v53,
                 v60,
                 v59,
                 v58,
                 (__int64)prclDest,
                 v57,
                 v56,
                 iMode,
                 v55,
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
