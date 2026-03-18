/*
 * XREFs of ?SetSource@CNineGridBrush@@QEAAJPEAVCSpriteVisualContent@@@Z @ 0x1800CEB3C
 * Callers:
 *     ?ProcessSetSource@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETSOURCE@@@Z @ 0x1800CEAE0 (-ProcessSetSource@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETSOURCE.c)
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCNineGridBrush@@@WRL@Microsoft@@@Z @ 0x1801EFF00 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::SetSource(struct CResource **this, struct CSpriteVisualContent *a2)
{
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct CResource *v7; // rax

  if ( a2 != this[10] )
  {
    if ( a2 )
    {
      v4 = CResource::RegisterNotifier((CResource *)this, a2);
      v6 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x17Bu, 0LL);
        return v6;
      }
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
    v7 = *this;
    this[10] = a2;
    (*((void (__fastcall **)(struct CResource **, __int64))v7 + 8))(this, 14LL);
  }
  return 0;
}
