/*
 * XREFs of ?SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C0155F90
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0084B2C (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0084E30 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0085718 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C008574C (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A22F8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00E0B78 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     EngStretchBltROP @ 0x1C00E49C0 (EngStretchBltROP.c)
 *     OffStretchBltROP @ 0x1C01561FC (OffStretchBltROP.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
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
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // r8
  struct _SURFOBJ *v42; // [rsp+80h] [rbp-80h] BYREF
  __int64 v43; // [rsp+88h] [rbp-78h] BYREF
  __int64 v44; // [rsp+90h] [rbp-70h] BYREF
  struct _CLIPOBJ *v45; // [rsp+98h] [rbp-68h] BYREF
  struct _POINTL v46; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-58h]
  __int64 v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  __int64 v50; // [rsp+C0h] [rbp-40h]
  __int64 v51; // [rsp+C8h] [rbp-38h]
  __int64 v52; // [rsp+D0h] [rbp-30h]
  __int64 v53; // [rsp+D8h] [rbp-28h]
  struct _RECTL v54; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v55[114]; // [rsp+F0h] [rbp-10h] BYREF

  v46 = 0LL;
  v14 = 1;
  hdev = a2->hdev;
  v42 = psoDest;
  v45 = a4;
  v53 = (__int64)a3;
  v52 = (__int64)pxlo;
  v51 = (__int64)pca;
  v50 = (__int64)pptlHTOrg;
  v49 = (__int64)prclSrc;
  v48 = (__int64)pptlMask;
  v47 = (__int64)pbo;
  if ( hdev && *((struct _SURFOBJ **)hdev + 15) == a2 )
  {
    return EngStretchBltROP(psoDest, a2, a3, a4, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode, pbo, rop4);
  }
  else
  {
    v54 = *prclDest;
    ERECTL::vOrder((ERECTL *)&v54);
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v55, v16, v17, &v54);
    if ( (unsigned int)ENUMUNDERLAYS::bEnum(v55, &v42, &v46, &v45) )
    {
      while ( 1 )
      {
        v18 = v42;
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v43, v42);
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v44, a2);
        if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v43, &v45) )
          break;
LABEL_9:
        if ( v44 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v44 + 48));
          v44 = 0LL;
        }
        if ( v43 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v43 + 48));
          v43 = 0LL;
        }
        if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v55, &v42, &v46, &v45) )
          return v14;
      }
      p_iType = &v18->iType;
      if ( v18->iType == 1 )
      {
        if ( bAllowShareAccess(v18) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30) + 280) + 20LL) & 0x2000) != 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32);
            LODWORD(v18) = (_DWORD)v42;
            v21 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(*(_QWORD *)(ThreadWin32Thread + 280) + 152LL);
            goto LABEL_8;
          }
          v18 = v42;
        }
        if ( *p_iType == 1 && bAllowShareAccess(v18) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v37) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38, v39) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41) + 108)) )
          {
            LODWORD(v18) = (_DWORD)v42;
            goto LABEL_31;
          }
          v18 = v42;
        }
      }
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 0x2000) != 0 )
      {
        v21 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))*((_QWORD *)v18->hdev + 174);
LABEL_8:
        v14 &= OffStretchBltROP(
                 (int)v21,
                 (int)&v46,
                 (int)v18,
                 v20,
                 (__int64)a2,
                 v53,
                 v45,
                 v52,
                 v51,
                 v50,
                 (__int64)prclDest,
                 v49,
                 v48,
                 iMode,
                 v47,
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
