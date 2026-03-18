/*
 * XREFs of ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x18006B6F0
 * Callers:
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x18006B1C0 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAJAEAVCRegion@@_N@Z @ 0x18006B304 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAJAEAVCRegion@@_N@Z.c)
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18006E580 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800BA8B4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800BAAD8 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800BAC88 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800BAD5C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BA758 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

__int64 __fastcall FastRegion::CRegion::SaveResult(
        FastRegion::CRegion *this,
        struct FastRegion::Internal::CWorkBuffer *a2)
{
  int *v2; // rdi
  int v4; // r8d
  int *v5; // rbx
  int v6; // ebp
  int *v7; // r15
  int v8; // eax
  int v9; // r11d
  __int64 v10; // r10
  int *v11; // rcx
  int v12; // ebp
  _DWORD *v13; // r9
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r10
  __int64 result; // rax
  void *v19; // rbx
  int v20; // ebx

  v2 = (int *)*((_QWORD *)a2 + 1);
  v4 = *v2;
  if ( !*v2 )
  {
    **(_DWORD **)this = 0;
    return 0LL;
  }
  if ( (int *)((char *)a2 + 16) != v2 )
  {
    v20 = *(_DWORD *)a2;
    *(_DWORD *)a2 = 0;
    *((_QWORD *)a2 + 1) = (char *)a2 + 16;
    FastRegion::CRegion::FreeMemory(this);
    *(_QWORD *)this = v2;
    result = 0LL;
    *((_DWORD *)this + 2) = v20;
    return result;
  }
  v5 = *(int **)this;
  v6 = v2[2 * v4 + 2] + 8 * v4 - v2[4] - 12 + 8 * (v4 - 1) + 24;
  v7 = (int *)((char *)this + 8);
  if ( (FastRegion::CRegion *)((char *)this + 8) == *(FastRegion::CRegion **)this )
    v8 = 60;
  else
    v8 = *v7;
  if ( v8 < v6 )
  {
    v19 = DefaultHeap::Alloc(v6);
    if ( !v19 )
      return 2147942414LL;
    FastRegion::CRegion::FreeMemory(this);
    *(_QWORD *)this = v19;
    *v7 = v6;
    v5 = *(int **)this;
    v4 = *v2;
  }
  *v5 = v4;
  v9 = 0;
  v5[1] = v2[1];
  v5[2] = v2[2];
  v10 = (__int64)v2 + v2[4] + 12;
  v11 = &v5[2 * v4 + 3];
  if ( v4 > 0 )
  {
    v12 = 4 * (((char *)&v5[2 * v4] - ((char *)v2 + v2[4])) >> 2);
    v13 = v5 + 3;
    do
    {
      *v13 = *(_DWORD *)((char *)v13 + (char *)v2 - (char *)v5);
      v13 += 2;
      v14 = v9++;
      v5[2 * v14 + 4] = (_DWORD)v2 + 8 * v14 + v12 + v2[2 * v14 + 4] - ((_DWORD)v5 + 8 * v14);
    }
    while ( v9 < *v5 );
  }
  v15 = (unsigned __int64)(8 * *v2 + 4 + v2[2 * *v2 + 2] - v2[4] - 12) >> 2;
  v16 = (int)v15;
  if ( (int)v15 > 0 )
  {
    v17 = v10 - (_QWORD)v11;
    do
    {
      *v11 = *(int *)((char *)v11 + v17);
      ++v11;
      --v16;
    }
    while ( v16 );
  }
  return 0LL;
}
