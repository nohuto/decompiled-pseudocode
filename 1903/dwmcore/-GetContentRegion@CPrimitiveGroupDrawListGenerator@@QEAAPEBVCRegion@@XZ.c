/*
 * XREFs of ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x180258370
 * Callers:
 *     ?GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801C6610 (-GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CCont.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180259FD4 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x180070C78 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x180071334 (-Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800B7B28 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x180183A1C (--_GCRegion@@QEAAPEAXI@Z.c)
 */

const struct CRegion *__fastcall CPrimitiveGroupDrawListGenerator::GetContentRegion(
        CPrimitiveGroupDrawListGenerator *this)
{
  _DWORD *v2; // rax
  void **v3; // rcx
  void **v4; // rcx
  unsigned int i; // edi
  __int64 v6; // r11
  const struct FastRegion::Internal::CRgnData **v7; // rcx
  _BYTE v9[8]; // [rsp+30h] [rbp-48h] BYREF
  __int128 *v10; // [rsp+38h] [rbp-40h]
  __int128 v11; // [rsp+50h] [rbp-28h] BYREF

  if ( !*((_QWORD *)this + 17) )
  {
    v2 = DefaultHeap::Alloc(0x48uLL);
    if ( v2 )
    {
      *(_QWORD *)v2 = v2 + 2;
      v2[2] = 0;
    }
    v3 = (void **)*((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = v2;
    if ( v3 )
    {
      CRegion::`scalar deleting destructor'(v3, 1);
      v2 = (_DWORD *)*((_QWORD *)this + 17);
    }
    if ( v2 )
    {
      for ( i = 0; i < *(_DWORD *)(*((_QWORD *)this + 3) + 8LL); ++i )
      {
        CPrimitiveGroupDrawListGenerator::GetIteratorForState((__int64)this, (__int64)v9, i);
        if ( (*(_BYTE *)(v6 + 4) & 2) == 0 && *(_DWORD *)v6 && *(_DWORD *)(v6 + 40) < *((_DWORD *)this + 16) )
        {
          do
          {
            v7 = (const struct FastRegion::Internal::CRgnData **)*((_QWORD *)this + 17);
            v11 = *v10;
            CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
              v7,
              (__int64)&v11);
          }
          while ( CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v9) );
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v3, 0LL, 0, 0x8007000E, 0x2A6u, 0LL);
      v4 = (void **)*((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = 0LL;
      if ( v4 )
        CRegion::`scalar deleting destructor'(v4, 1);
    }
  }
  return (const struct CRegion *)*((_QWORD *)this + 17);
}
