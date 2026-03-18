/*
 * XREFs of ?GetTransform@CRenderTargetBitmap@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001D040
 * Callers:
 *     ?GetBounds@CRenderTargetImageSource@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001D010 (-GetBounds@CRenderTargetImageSource@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@M.c)
 *     ?GetTransform@CRenderTargetImageSource@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801AACB0 (-GetTransform@CRenderTargetImageSource@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRenderTargetBitmap::GetTransform(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rcx
  char result; // al
  __int64 v7; // rcx

  if ( a3 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    a3[1] = 0LL;
    *a3 = 0LL;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 48LL))(v5, a3);
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 24);
      if ( v7 )
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v7 + 320LL))(v7, a3);
    }
  }
  result = 1;
  *(_OWORD *)a2 = _xmm;
  *(_WORD *)(a2 + 64) = 32085;
  *(_OWORD *)(a2 + 16) = _xmm;
  *(_OWORD *)(a2 + 32) = _xmm;
  *(_OWORD *)(a2 + 48) = _xmm;
  return result;
}
