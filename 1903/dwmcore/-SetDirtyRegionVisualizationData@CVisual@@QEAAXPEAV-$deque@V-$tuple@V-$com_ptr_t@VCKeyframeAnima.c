/*
 * XREFs of ?SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@@Z @ 0x1801C4938
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180069E10 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ?RemoveDirtyRegionVisualizationData@CVisual@@AEAAXXZ @ 0x180089E24 (-RemoveDirtyRegionVisualizationData@CVisual@@AEAAXXZ.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801C2588 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x180089300 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800BAD3C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

__int64 __fastcall CVisual::SetDirtyRegionVisualizationData(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r10
  _DWORD *v3; // r11
  __int64 result; // rax
  char v6; // r10
  __int64 v7; // r11
  __int64 v8; // rcx
  _BYTE *v9; // rdx
  __int64 v10; // r10

  v2 = 0LL;
  v3 = *(_DWORD **)(a1 + 224);
  result = *v3 & 0x40000;
  if ( a2 )
  {
    if ( (_DWORD)result )
    {
      v8 = (unsigned int)v3[1];
      v9 = v3 + 2;
      for ( result = 0LL; (unsigned int)result < (unsigned int)v8; ++v9 )
      {
        if ( *v9 == 14 )
          break;
        result = (unsigned int)(result + 1);
      }
      if ( (unsigned int)result < (unsigned int)v8 )
      {
        v10 = 8LL * (unsigned int)result;
        result = ((_BYTE)v8 + 15) & 7;
        v2 = (_QWORD *)((char *)v3 + v10 - result + v8 + 15);
      }
      *v2 = a2;
    }
    else
    {
      result = (__int64)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(a1 + 224, 14);
      *(_QWORD *)result = a2;
    }
  }
  else if ( (_DWORD)result )
  {
    *v3 &= ~0x40000u;
    result = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot((__int64)v3, 14);
    if ( (unsigned int)result < *(_DWORD *)(v7 + 4) )
    {
      result = (unsigned int)result;
      *(_BYTE *)((unsigned int)result + v7 + 8) = v6;
    }
  }
  return result;
}
