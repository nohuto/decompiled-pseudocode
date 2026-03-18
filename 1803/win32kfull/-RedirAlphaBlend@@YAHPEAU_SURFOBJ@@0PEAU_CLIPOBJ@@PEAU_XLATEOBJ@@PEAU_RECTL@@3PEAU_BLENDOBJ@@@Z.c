/*
 * XREFs of ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C026B8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C008F874 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     EngAlphaBlend @ 0x1C00A15D0 (EngAlphaBlend.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0269238 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C026AEBC (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C026B87C (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C026D894 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        RECTL *prclSrc,
        BLENDOBJ *pBlendObj)
{
  __int64 v11; // rbx
  struct _DISPSURF *i; // rsi
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v17; // rax
  unsigned int v18; // r8d
  __int64 v20; // [rsp+48h] [rbp-51h] BYREF
  struct SURFACE *v21; // [rsp+50h] [rbp-49h] BYREF
  struct SURFACE *v22; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v23[80]; // [rsp+68h] [rbp-31h] BYREF
  __int64 HDEV; // [rsp+E8h] [rbp+4Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v22, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v21, a2);
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v11 = HDEV;
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v23, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(v11 + 40) & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(v11 + 1792); i; i = *(struct _DISPSURF **)i )
          {
            v13 = *((_QWORD *)i + 6);
            HDEV = v13;
            if ( v13 )
            {
              if ( (*(_DWORD *)(v13 + 1816) & 0x8000000) != 0 && (*(_DWORD *)(v13 + 2120) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v13 + 1784) + 632LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v20,
                    (struct PDEVOBJ *)&HDEV,
                    a1);
                  v15 = *(_QWORD *)(v14 + 1784);
                  DevBitmap = GetDevBitmap(i, a2);
                  v17 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(v15 + 632))(
                    v17,
                    DevBitmap,
                    pco,
                    pxlo,
                    prclDest,
                    prclSrc,
                    pBlendObj);
                  if ( v20 )
                    *(_WORD *)(v20 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v23);
      }
    }
  }
  v18 = EngAlphaBlend(a1, a2, pco, pxlo, prclDest, prclSrc, pBlendObj);
  if ( v21 )
    bMakeOpaque(v21);
  if ( v22 )
    bMakeOpaque(v22);
  return v18;
}
