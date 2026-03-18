/*
 * XREFs of ?BmpDevStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C026A420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02691E0 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0269238 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C026AEBC (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C026AF68 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  unsigned int v15; // r15d
  HDEV hdev; // rbx
  unsigned int v17; // eax
  __int64 v18; // rax
  struct _DISPSURF *v19; // r14
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rbx
  struct _SURFOBJ *DevBitmap; // rsi
  struct _SURFOBJ *v25; // rdi
  struct _SURFOBJ *v26; // rax
  __int64 v28; // [rsp+60h] [rbp-68h] BYREF
  __int64 v29; // [rsp+68h] [rbp-60h] BYREF
  struct SURFACE *v30; // [rsp+70h] [rbp-58h] BYREF
  struct SURFACE *v31; // [rsp+78h] [rbp-50h] BYREF
  struct SURFACE *v32; // [rsp+80h] [rbp-48h] BYREF
  unsigned int v33; // [rsp+D0h] [rbp+8h]

  v15 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v32, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v31, a2);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v30, a3);
  if ( a1 )
  {
    hdev = a1->hdev;
    v17 = (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 2) != 0
        ? (*((__int64 (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct tagCOLORADJUSTMENT *, struct _POINTL *, struct _RECTL *, struct _RECTL *, struct _POINTL *, unsigned int))hdev
           + 355))(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10,
            a11)
        : ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct tagCOLORADJUSTMENT *, struct _POINTL *, struct _RECTL *, struct _RECTL *, struct _POINTL *, unsigned int))EngStretchBlt)(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10,
            a11);
    v15 = v17;
    v33 = v17;
    v18 = UserGetHDEV();
    if ( v18 )
    {
      if ( (*(_DWORD *)(v18 + 40) & 0x20000000) != 0 )
      {
        v19 = **(struct _DISPSURF ***)(v18 + 1792);
        if ( v19 )
        {
          do
          {
            v20 = *((_QWORD *)v19 + 6);
            v28 = v20;
            if ( v20 )
            {
              if ( (*(_DWORD *)(v20 + 1816) & 0x8000000) != 0 )
              {
                v21 = *(_DWORD *)(v20 + 2120);
                if ( (v21 & 0x1000) != 0 && (v21 & 0x8000) != 0 )
                {
                  if ( *(_QWORD *)(*(_QWORD *)(v20 + 1784) + 224LL) )
                  {
                    MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                      (MARK_ACCDRV_NOTIFICATION *)&v29,
                      (struct PDEVOBJ *)&v28,
                      a1);
                    v23 = *(_QWORD *)(v22 + 1784);
                    DevBitmap = GetDevBitmap(v19, a3);
                    v25 = GetDevBitmap(v19, a2);
                    v26 = GetDevBitmap(v19, a1);
                    (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct tagCOLORADJUSTMENT *, struct _POINTL *, struct _RECTL *, struct _RECTL *, struct _POINTL *, unsigned int))(v23 + 224))(
                      v26,
                      v25,
                      DevBitmap,
                      a4,
                      a5,
                      a6,
                      a7,
                      a8,
                      a9,
                      a10,
                      a11);
                    if ( v29 )
                      *(_WORD *)(v29 + 78) &= ~0x8000u;
                  }
                }
              }
            }
            v19 = *(struct _DISPSURF **)v19;
          }
          while ( v19 );
          v15 = v33;
        }
      }
    }
  }
  if ( v30 )
    bBmpMakeOpaque(v30);
  if ( v31 )
    bBmpMakeOpaque(v31);
  if ( v32 )
    bBmpMakeOpaque(v32);
  return v15;
}
