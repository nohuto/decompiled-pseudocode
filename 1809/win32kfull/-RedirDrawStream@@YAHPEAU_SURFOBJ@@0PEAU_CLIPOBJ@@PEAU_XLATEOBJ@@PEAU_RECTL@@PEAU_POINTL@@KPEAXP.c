/*
 * XREFs of ?RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C027FE80
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0099774 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     EngDrawStream @ 0x1C00F54C0 (EngDrawStream.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C027D1B8 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C027EE98 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C027F7B0 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02818A8 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirDrawStream(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        unsigned int a7,
        _DWORD *a8,
        struct _DSSTATE *a9)
{
  __int64 v13; // rbx
  struct _DISPSURF *i; // rsi
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v19; // rax
  unsigned int v20; // r8d
  __int64 v22; // [rsp+58h] [rbp-81h] BYREF
  struct SURFACE *v23; // [rsp+60h] [rbp-79h] BYREF
  struct SURFACE *v24; // [rsp+68h] [rbp-71h] BYREF
  _BYTE v25[32]; // [rsp+78h] [rbp-61h] BYREF
  _BYTE v26[80]; // [rsp+98h] [rbp-41h] BYREF
  __int64 HDEV; // [rsp+118h] [rbp+3Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v24, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v23, a2);
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v13 = HDEV;
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v25, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(v13 + 40) & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(v13 + 1800); i; i = *(struct _DISPSURF **)i )
          {
            v15 = *((_QWORD *)i + 6);
            HDEV = v15;
            if ( v15 )
            {
              if ( (*(_DWORD *)(v15 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v15 + 2128) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v15 + 1792) + 784LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v22,
                    (struct PDEVOBJ *)&HDEV,
                    a1);
                  v17 = *(_QWORD *)(v16 + 1792);
                  DevBitmap = GetDevBitmap(i, a2);
                  v19 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, unsigned int, _DWORD *, struct _DSSTATE *))(v17 + 784))(
                    v19,
                    DevBitmap,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7,
                    a8,
                    a9);
                  if ( v22 )
                    *(_WORD *)(v22 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v25);
        DCOBJ::~DCOBJ((DCOBJ *)v26);
      }
    }
  }
  v20 = EngDrawStream((__int64)a1, (__int64)a2, (__int64)a3, (__int64)a4, (int)a5, (int *)a6, a7, a8, a9);
  if ( v23 )
    bMakeOpaque(v23);
  if ( v24 )
    bMakeOpaque(v24);
  return v20;
}
