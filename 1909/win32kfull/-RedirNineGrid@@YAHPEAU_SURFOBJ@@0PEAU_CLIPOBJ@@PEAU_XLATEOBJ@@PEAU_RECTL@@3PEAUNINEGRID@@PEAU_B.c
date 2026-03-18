/*
 * XREFs of ?RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C02965C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     EngNineGrid @ 0x1C00C87B0 (EngNineGrid.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0292F18 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C0294BF8 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02954C4 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0297A60 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirNineGrid(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct NINEGRID *a7,
        struct _BLENDOBJ *a8,
        void *a9)
{
  __int64 HDEV; // rax
  __int64 v14; // rbx
  int v15; // eax
  struct _DISPSURF *i; // rsi
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v21; // rax
  unsigned int v22; // r8d
  __int64 v24; // [rsp+58h] [rbp-61h] BYREF
  struct SURFACE *v25; // [rsp+60h] [rbp-59h] BYREF
  struct SURFACE *v26; // [rsp+68h] [rbp-51h] BYREF
  __int128 v27; // [rsp+78h] [rbp-41h] BYREF
  __int64 v28; // [rsp+88h] [rbp-31h]
  int v29; // [rsp+90h] [rbp-29h]
  _QWORD v30[2]; // [rsp+98h] [rbp-21h] BYREF
  __int16 v31; // [rsp+A8h] [rbp-11h]
  __int64 v32; // [rsp+B0h] [rbp-9h]
  __int64 v33; // [rsp+B8h] [rbp-1h]
  __int64 v34; // [rsp+F8h] [rbp+3Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v26, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v25, a2);
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v14 = HDEV;
      if ( HDEV )
      {
        v15 = *(_DWORD *)(HDEV + 40);
        v27 = 0LL;
        v30[1] = 0LL;
        v31 = 256;
        v33 = 0LL;
        v32 = 0LL;
        v30[0] = 0LL;
        v29 = 1;
        if ( (v15 & 1) != 0 )
        {
          *(_QWORD *)&v27 = *(_QWORD *)(v14 + 48);
          v28 = v14;
          GreAcquireSemaphore(v27);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v27, 11LL);
          v15 = *(_DWORD *)(v14 + 40);
        }
        if ( (v15 & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(v14 + 1800); i; i = *(struct _DISPSURF **)i )
          {
            v17 = *((_QWORD *)i + 6);
            v34 = v17;
            if ( v17 )
            {
              if ( (*(_DWORD *)(v17 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v17 + 2128) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v17 + 1792) + 792LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v24,
                    (struct PDEVOBJ *)&v34,
                    a1);
                  v19 = *(_QWORD *)(v18 + 1792);
                  DevBitmap = GetDevBitmap(i, a2);
                  v21 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, struct NINEGRID *, struct _BLENDOBJ *, void *))(v19 + 792))(
                    v21,
                    DevBitmap,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7,
                    a8,
                    a9);
                  if ( v24 )
                    *(_WORD *)(v24 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v27);
        if ( v30[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v30);
      }
    }
  }
  v22 = EngNineGrid((int)a1, (__int64)a2, (int)a3, (int)a4, (__int64)a5, (__int64)a6, (__int64)a7, (__int64)a8);
  if ( v25 )
    bMakeOpaque(v25);
  if ( v26 )
    bMakeOpaque(v26);
  return v22;
}
