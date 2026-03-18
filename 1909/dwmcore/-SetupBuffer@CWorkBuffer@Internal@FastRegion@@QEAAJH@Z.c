/*
 * XREFs of ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x1800BAE2C
 * Callers:
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18006E580 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800BA8B4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800BAAD8 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800BAC88 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800BAD5C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall FastRegion::Internal::CWorkBuffer::SetupBuffer(FastRegion::Internal::CWorkBuffer *this, int a2)
{
  LPVOID v4; // rax

  if ( *(_DWORD *)this )
    return 2147500037LL;
  *(_DWORD *)this = a2;
  if ( (unsigned __int64)a2 <= 0x100 )
    return 0LL;
  v4 = DefaultHeap::Alloc(a2);
  if ( v4 )
  {
    *((_QWORD *)this + 1) = v4;
    return 0LL;
  }
  return 2147942414LL;
}
