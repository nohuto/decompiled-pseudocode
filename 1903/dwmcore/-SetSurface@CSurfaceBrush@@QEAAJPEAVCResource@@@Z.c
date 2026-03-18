/*
 * XREFs of ?SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@@Z @ 0x180083B5C
 * Callers:
 *     ?ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSURFACE@@@Z @ 0x180083240 (-ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSURFACE.c)
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCSurfaceBrush@@@WRL@Microsoft@@@Z @ 0x1801F17DC (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@@.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::SetSurface(struct CResource **this, struct CResource *a2)
{
  unsigned int v2; // edi
  int v6; // eax
  unsigned int v7; // ecx
  struct CResource *v8; // rax
  unsigned int v9; // ecx

  v2 = 0;
  if ( a2 != this[12] )
  {
    if ( a2 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 39LL)
        && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 194LL)
        && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 83LL)
        && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 125LL) )
      {
        v2 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003303421, 0x434u, 0LL);
        return v2;
      }
      v6 = CResource::RegisterNotifier((CResource *)this, a2);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x437u, 0LL);
        return v2;
      }
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[12]);
    v8 = *this;
    this[12] = a2;
    (*((void (__fastcall **)(struct CResource **, _QWORD, struct CResource **))v8 + 8))(this, 0LL, this);
  }
  return v2;
}
