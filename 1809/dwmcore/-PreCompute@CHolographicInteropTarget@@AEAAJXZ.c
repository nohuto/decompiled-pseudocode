/*
 * XREFs of ?PreCompute@CHolographicInteropTarget@@AEAAJXZ @ 0x180210E28
 * Callers:
 *     ?PreRender@CHolographicInteropTarget@@UEAAJXZ @ 0x180210F00 (-PreRender@CHolographicInteropTarget@@UEAAJXZ.c)
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048740 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z @ 0x18020B2F4 (-GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z.c)
 */

__int64 __fastcall CHolographicInteropTarget::PreCompute(CHolographicInteropTarget *this)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx
  unsigned int v4; // edi
  struct CHolographicInteropTexture *TextureAtIndex; // rax
  struct CVisualTree *v6; // rcx
  int v7; // eax

  v2 = 0;
  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 21);
  v4 = 0;
  if ( (unsigned int)(((char *)v3[16].Ptr - (char *)v3[15].Ptr) >> 3) )
  {
    while ( 1 )
    {
      TextureAtIndex = CHolographicManager::GetTextureAtIndex(v3, v4);
      if ( TextureAtIndex )
      {
        v6 = (struct CVisualTree *)*((_QWORD *)TextureAtIndex + 10);
        v2 = 0;
        if ( v6 && ((*(_BYTE *)(*((_QWORD *)v6 + 3) + 88LL) & 0x7F) != 0 || !*((_QWORD *)TextureAtIndex + 11)) )
        {
          v7 = CVisualTree::PreCompute(v6, 0LL);
          v2 = v7;
          if ( v7 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, v7, 0x2D9u);
        }
        if ( v2 < 0 )
          break;
      }
      v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 21);
      if ( ++v4 >= (unsigned int)(((char *)v3[16].Ptr - (char *)v3[15].Ptr) >> 3) )
        return (unsigned int)v2;
    }
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, v2, 0x72u);
  }
  return (unsigned int)v2;
}
