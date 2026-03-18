/*
 * XREFs of ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x180079560
 * Callers:
 *     _lambda_896d46864d60d2b7d5e734e8b1f76c71_::operator() @ 0x18006A76C (_lambda_896d46864d60d2b7d5e734e8b1f76c71_--operator().c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x180078F04 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007FDD0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18006C430 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007968C (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedRect@@@Z @ 0x1800CE824 (-SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedRect@@@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 */

__int64 __fastcall CVisual::AddAdditionalDirtyRects(CVisual *this, const struct MilRectF *a2)
{
  unsigned int v2; // ebp
  _DWORD *v5; // r8
  __int64 v6; // rcx
  _BYTE *v7; // rdx
  unsigned int i; // eax
  void **v9; // rbx
  struct CMergedRect *v10; // rbx
  char v11; // al
  struct CMergedRect *v13; // rax
  __int64 v14; // rcx

  v2 = 0;
  if ( *((float *)a2 + 2) > *(float *)a2 && *((float *)a2 + 3) > *((float *)a2 + 1) )
  {
    v5 = (_DWORD *)*((_QWORD *)this + 28);
    if ( (*v5 & 0x20000000) == 0 )
      goto LABEL_15;
    v6 = (unsigned int)v5[1];
    v7 = v5 + 2;
    for ( i = 0; i < (unsigned int)v6; ++v7 )
    {
      if ( *v7 == 3 )
        break;
      ++i;
    }
    v9 = i >= (unsigned int)v6 ? 0LL : (void **)((char *)v5 + 8LL * i - (((_BYTE)v6 + 15) & 7) + v6 + 15);
    v10 = (struct CMergedRect *)*v9;
    if ( !v10 )
    {
LABEL_15:
      v13 = (struct CMergedRect *)DefaultHeap::Alloc(0x4CuLL);
      v10 = v13;
      if ( v13 )
      {
        memset_0(v13, 0, 0x4CuLL);
        *((_DWORD *)v10 + 17) = 1;
      }
      else
      {
        v10 = 0LL;
      }
      if ( !v10 )
      {
        v2 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, 0x8007000E, 0xD18u, 0LL);
        return v2;
      }
      CVisual::SetAdditionalDirtyRects(this, v10);
    }
    v11 = *((_BYTE *)this + 93);
    if ( v11 < 0 )
    {
      *((_BYTE *)this + 93) = v11 & 0x7F;
      *((_DWORD *)v10 + 16) = 0;
      *((_DWORD *)v10 + 18) = 0;
      *((_DWORD *)v10 + 17) = 1;
    }
    CMergedRectBase<4>::Add(v10, a2);
    CVisual::PropagateFlags((__int64)this, 8u, 0);
  }
  return v2;
}
