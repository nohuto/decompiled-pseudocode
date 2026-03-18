/*
 * XREFs of ?SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@@Z @ 0x1800BD050
 * Callers:
 *     ?ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETSURFACE@@@Z @ 0x1800BCF7C (-ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETSURFACE@@@.c)
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCImageSourceResource@@@WRL@Microsoft@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCSurfaceBrush@@@45@@Z @ 0x1801CA17C (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV-$ComPtr@VCImageSourceReso.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??4?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z @ 0x18006C0D8 (--4-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?SetForHwndBitmap@CCachedVisualImage@@QEAAX_N@Z @ 0x18018D6AC (-SetForHwndBitmap@CCachedVisualImage@@QEAAX_N@Z.c)
 */

__int64 __fastcall CSurfaceBrush::SetSurface(CSurfaceBrush *this, struct CResource *a2)
{
  unsigned int v2; // ebx
  char *v6; // rsi
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ecx

  v2 = 0;
  if ( a2 != *((struct CResource **)this + 11) )
  {
    v6 = 0LL;
    if ( a2 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 37LL) )
      {
        v6 = (char *)a2 + 64;
      }
      else if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 15LL) )
      {
        *((_BYTE *)a2 + 361) = 1;
        CCachedVisualImage::SetForHwndBitmap((struct CResource *)((char *)a2 - 16), 0);
        v6 = (char *)(((unsigned __int64)a2 - 8) & -(__int64)(a2 != (struct CResource *)16));
      }
      else if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 79LL) )
      {
        v6 = (char *)a2 + 56;
      }
      else if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 109LL) )
      {
        v2 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003303421, 0x3BCu);
        return v2;
      }
      v7 = CResource::RegisterNotifier(this, a2);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x3BFu);
        return v2;
      }
    }
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 11));
    *((_QWORD *)this + 11) = a2;
    Microsoft::WRL::ComPtr<ID3D11PixelShader>::operator=((__int64 *)this + 12, (__int64)v6);
    (*(void (__fastcall **)(CSurfaceBrush *, _QWORD, CSurfaceBrush *))(*(_QWORD *)this + 64LL))(this, 0LL, this);
  }
  return v2;
}
