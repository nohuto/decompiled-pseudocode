/*
 * XREFs of ?BmpDevTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0294F70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0293464 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C02934C8 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C02951A8 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0295258 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v12; // r14d
  HDEV hdev; // rbx
  unsigned int v14; // eax
  __int64 v15; // rax
  struct _DISPSURF *v16; // rsi
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v22; // rax
  __int64 v24; // [rsp+50h] [rbp-48h] BYREF
  __int64 v25; // [rsp+58h] [rbp-40h] BYREF
  struct SURFACE *v26; // [rsp+60h] [rbp-38h] BYREF
  struct SURFACE *v27; // [rsp+68h] [rbp-30h] BYREF
  unsigned int v28; // [rsp+A0h] [rbp+8h]

  v12 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v27, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v26, a2);
  if ( a1 )
  {
    hdev = a1->hdev;
    v14 = (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x8000) != 0
        ? (*((__int64 (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, unsigned int, unsigned int))hdev
           + 410))(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8)
        : ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, unsigned int, unsigned int))EngTransparentBlt)(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8);
    v12 = v14;
    v28 = v14;
    v15 = UserGetHDEV();
    if ( v15 )
    {
      if ( (*(_DWORD *)(v15 + 40) & 0x20000000) != 0 )
      {
        v16 = **(struct _DISPSURF ***)(v15 + 1800);
        if ( v16 )
        {
          do
          {
            v17 = *((_QWORD *)v16 + 6);
            v24 = v17;
            if ( v17 )
            {
              if ( (*(_DWORD *)(v17 + 1824) & 0x8000000) != 0 )
              {
                v18 = *(_DWORD *)(v17 + 2128);
                if ( (v18 & 0x1000) != 0 && (v18 & 0x8000) != 0 )
                {
                  if ( *(_QWORD *)(*(_QWORD *)(v17 + 1792) + 656LL) )
                  {
                    MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                      (MARK_ACCDRV_NOTIFICATION *)&v25,
                      (struct PDEVOBJ *)&v24,
                      a1);
                    v20 = *(_QWORD *)(v19 + 1792);
                    DevBitmap = GetDevBitmap(v16, a2);
                    v22 = GetDevBitmap(v16, a1);
                    (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, unsigned int, unsigned int))(v20 + 656))(
                      v22,
                      DevBitmap,
                      a3,
                      a4,
                      a5,
                      a6,
                      a7,
                      a8);
                    if ( v25 )
                      *(_WORD *)(v25 + 78) &= ~0x8000u;
                  }
                }
              }
            }
            v16 = *(struct _DISPSURF **)v16;
          }
          while ( v16 );
          v12 = v28;
        }
      }
    }
  }
  if ( v26 )
    bBmpMakeOpaque(v26);
  if ( v27 )
    bBmpMakeOpaque(v27);
  return v12;
}
