/*
 * XREFs of ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x18009E660
 * Callers:
 *     ??_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z @ 0x18009E620 (--_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceBitmap::~CCompositionSurfaceBitmap(CCompositionSurfaceBitmap *this)
{
  char *v2; // rsi
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // ecx
  __int64 v7; // r9
  __int64 v8; // rcx

  *(_QWORD *)this = &CCompositionSurfaceBitmap::`vftable'{for `CContent'};
  v2 = (char *)this + 72;
  v3 = 0;
  *((_QWORD *)this + 7) = &CCompositionSurfaceBitmap::`vftable'{for `ISwapChainContent'};
  *((_QWORD *)this + 8) = &CCompositionSurfaceBitmap::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 9) = &CCompositionSurfaceBitmap::`vftable'{for `ICompositionSurfaceInfoListener'};
  *((_QWORD *)this + 10) = &CCompositionSurfaceBitmap::`vftable'{for `IDirtyRectSource'};
  if ( *((_BYTE *)this + 144) )
    --*(_DWORD *)(*((_QWORD *)this + 2) + 268LL);
  if ( *((_BYTE *)this + 145) )
    --*(_DWORD *)(*((_QWORD *)this + 2) + 264LL);
  v4 = *((_QWORD *)this + 12);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 392);
    v7 = *(_QWORD *)(v5 + 368);
    if ( v6 )
    {
      do
      {
        if ( v2 == *(char **)(v7 + 8LL * v3) )
          break;
        ++v3;
      }
      while ( v3 < v6 );
    }
    if ( v3 < v6 )
    {
      for ( ; v3 < v6 - 1; v6 = *(_DWORD *)(v5 + 392) )
      {
        v8 = v3++;
        *(_QWORD *)(v7 + 8 * v8) = *(_QWORD *)(v7 + 8LL * v3);
      }
      *(_DWORD *)(v5 + 392) = v6 - 1;
    }
    CGdiSpriteBitmap::Release(*((CGdiSpriteBitmap **)this + 11));
  }
  CResource::~CResource(this);
}
