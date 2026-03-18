/*
 * XREFs of ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800A9C8C
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048740 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800A8CC8 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     _lambda_02dc2f4d7908bb70852dff4dd76791d3_::operator() @ 0x1800EF668 (_lambda_02dc2f4d7908bb70852dff4dd76791d3_--operator().c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x18005D2D4 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?GetAdditionalDirtyRects@CVisual@@QEBAPEAVCMergedRect@@XZ @ 0x1800A8F38 (-GetAdditionalDirtyRects@CVisual@@QEBAPEAVCMergedRect@@XZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AA1B4 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CVisual::AddAdditionalDirtyRects(CVisual *this, struct D2D_RECT_F *a2)
{
  unsigned int v4; // ebx
  struct CMergedRect *AdditionalDirtyRects; // rdi
  char v6; // al
  struct CMergedRect *v8; // rax
  unsigned int v9; // ecx
  _DWORD *v10; // r8
  char *v11; // rax
  __int64 v12; // rcx
  _BYTE *v13; // rdx
  unsigned int i; // eax

  v4 = 0;
  if ( !IsEmpty(a2) )
  {
    AdditionalDirtyRects = CVisual::GetAdditionalDirtyRects(this);
    if ( !AdditionalDirtyRects )
    {
      v8 = (struct CMergedRect *)HeapAlloc(WPF::g_processHeap, 0, 0x4CuLL);
      AdditionalDirtyRects = v8;
      if ( v8 )
      {
        memset_0(v8, 0, 0x4CuLL);
        *((_DWORD *)AdditionalDirtyRects + 17) = 1;
      }
      else
      {
        AdditionalDirtyRects = 0LL;
      }
      if ( !AdditionalDirtyRects )
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0xCB0u);
        return v4;
      }
      v10 = (_DWORD *)*((_QWORD *)this + 28);
      if ( (*v10 & 0x20000000) != 0 )
      {
        v12 = (unsigned int)v10[1];
        v13 = v10 + 2;
        for ( i = 0; i < (unsigned int)v12; ++v13 )
        {
          if ( *v13 == 3 )
            break;
          ++i;
        }
        if ( i >= (unsigned int)v12 )
          v11 = 0LL;
        else
          v11 = (char *)v10 + v12 + 8LL * i - (((_BYTE)v12 + 15) & 7) + 15;
      }
      else
      {
        v11 = CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot((_QWORD *)this + 28, 3);
      }
      *(_QWORD *)v11 = AdditionalDirtyRects;
    }
    v6 = *((_BYTE *)this + 93);
    if ( v6 < 0 )
    {
      *((_BYTE *)this + 93) = v6 & 0x7F;
      *((_DWORD *)AdditionalDirtyRects + 16) = 0;
      *(_QWORD *)((char *)AdditionalDirtyRects + 68) = 1LL;
    }
    CMergedRectBase<4>::Add(AdditionalDirtyRects, a2);
    CVisual::PropagateFlags((__int64)this, 8u, 0);
  }
  return v4;
}
