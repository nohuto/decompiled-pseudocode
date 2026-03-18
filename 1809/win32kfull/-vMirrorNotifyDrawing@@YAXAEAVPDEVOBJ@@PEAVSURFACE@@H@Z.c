/*
 * XREFs of ?vMirrorNotifyDrawing@@YAXAEAVPDEVOBJ@@PEAVSURFACE@@H@Z @ 0x1C027F494
 * Callers:
 *     vMirrorIncludeNotifyWrap @ 0x1C00F5F70 (vMirrorIncludeNotifyWrap.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C027EE98 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 */

void __fastcall vMirrorNotifyDrawing(struct PDEVOBJ *a1, struct SURFACE *a2, int a3)
{
  __int64 v3; // r9
  __int64 v5; // rbp
  struct _DISPSURF *i; // rdi
  __int64 v7; // rbx
  int v8; // ecx
  __int64 v9; // rax
  struct _SURFOBJ *DevBitmap; // rax
  void (__fastcall *v11)(__int64, __int64, __int64, char **); // rax
  __int64 v12; // rcx
  char *v13; // [rsp+30h] [rbp-18h] BYREF
  int v14; // [rsp+38h] [rbp-10h]

  v3 = *(_QWORD *)a1;
  v5 = a3;
  if ( *(_QWORD *)a1 && (*(_DWORD *)(v3 + 40) & 0x1000000) != 0 )
  {
    for ( i = **(struct _DISPSURF ***)(v3 + 1800); i; i = *(struct _DISPSURF **)i )
    {
      v7 = *((_QWORD *)i + 6);
      if ( v7 )
      {
        if ( (*(_DWORD *)(v7 + 1824) & 0x8000000) != 0 )
        {
          v8 = *(_DWORD *)(v7 + 2128);
          if ( (v8 & 0x1000) != 0 )
          {
            v9 = *(_QWORD *)(v7 + 1792);
            if ( (v8 & 0x8000) != 0 )
            {
              if ( *(_QWORD *)(v9 + 760) )
              {
                DevBitmap = GetDevBitmap(
                              i,
                              (struct _SURFOBJ *)(((unsigned __int64)a2 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64)));
                (*(void (__fastcall **)(struct _SURFOBJ *, __int64, __int64))(*(_QWORD *)(v7 + 1792) + 760LL))(
                  DevBitmap,
                  7LL,
                  v5);
              }
            }
            else
            {
              v11 = *(void (__fastcall **)(__int64, __int64, __int64, char **))(v9 + 808);
              if ( v11 )
              {
                if ( a2 )
                  v13 = (char *)a2 + 24;
                else
                  v13 = 0LL;
                v12 = *(_QWORD *)(v7 + 1800);
                v14 = v5;
                v11(v12, 1LL, 16LL, &v13);
              }
            }
          }
        }
      }
    }
  }
}
