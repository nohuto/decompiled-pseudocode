/*
 * XREFs of ?PreCompute@CHolographicInteropTarget@@AEAAJXZ @ 0x180245870
 * Callers:
 *     ?PreRender@CHolographicInteropTarget@@UEAAJXZ @ 0x180245960 (-PreRender@CHolographicInteropTarget@@UEAAJXZ.c)
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180055FF0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z @ 0x180241A78 (-GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z.c)
 */

__int64 __fastcall CHolographicInteropTarget::PreCompute(CHolographicInteropTarget *this)
{
  unsigned int v2; // ebx
  RTL_SRWLOCK *v3; // rcx
  unsigned int v4; // edi
  struct CHolographicInteropTexture *TextureAtIndex; // rax
  __int64 v6; // rcx
  signed int v7; // eax

  v2 = 0;
  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 21);
  v4 = 0;
  if ( (unsigned int)(((char *)v3[19].Ptr - (char *)v3[18].Ptr) >> 3) )
  {
    while ( 1 )
    {
      TextureAtIndex = CHolographicManager::GetTextureAtIndex(v3, v4);
      if ( TextureAtIndex )
      {
        v6 = *((_QWORD *)TextureAtIndex + 10);
        v2 = 0;
        if ( v6 && ((*(_BYTE *)(*(_QWORD *)(v6 + 24) + 88LL) & 0x7F) != 0 || !*((_QWORD *)TextureAtIndex + 11)) )
        {
          v7 = CVisualTree::PreCompute(v6, 0LL);
          v2 = v7;
          if ( v7 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v7, 0x2CEu, 0LL);
        }
        if ( (v2 & 0x80000000) != 0 )
          break;
      }
      v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 21);
      if ( ++v4 >= (unsigned int)(((char *)v3[19].Ptr - (char *)v3[18].Ptr) >> 3) )
        return v2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v2, 0x6Eu, 0LL);
  }
  return v2;
}
