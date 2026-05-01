/*
 * XREFs of ?GetAllShownViews@TabTipAdapterPolicy@KeyboardHosting@@QEAA?AV?$vector@IV?$allocator@I@std@@@std@@XZ @ 0x18032AD04
 * Callers:
 *     ?HideAllViews@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180320770 (-HideAllViews@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@UCoreKeyboardPosition.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAAPEAW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAW423456@AEBW423456@@Z @ 0x180167E08 (--$_Emplace_reallocate@AEBW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetAllShownViews(RTL_SRWLOCK *a1, __int64 a2)
{
  RTL_SRWLOCK *v4; // rsi
  __int64 **Ptr; // r14
  __int64 *i; // rbx
  int v7; // ecx
  _BYTE *v8; // rdx
  int v10; // [rsp+28h] [rbp-60h] BYREF
  __m128i v11; // [rsp+2Ch] [rbp-5Ch]
  __int128 v12; // [rsp+3Ch] [rbp-4Ch]
  __int128 v13; // [rsp+4Ch] [rbp-3Ch]

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = a1 + 53;
  AcquireSRWLockShared(a1 + 53);
  Ptr = (__int64 **)a1[46].Ptr;
  for ( i = *Ptr; i != (__int64 *)Ptr; i = (__int64 *)*i )
  {
    v7 = *((_DWORD *)i + 4);
    v10 = v7;
    v11 = *(__m128i *)((char *)i + 20);
    v12 = *(_OWORD *)((char *)i + 36);
    v13 = *(_OWORD *)((char *)i + 52);
    if ( (unsigned __int8)_mm_cvtsi128_si32(v11) )
    {
      v8 = *(_BYTE **)(a2 + 8);
      if ( *(_BYTE **)(a2 + 16) == v8 )
      {
        std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>::_Emplace_reallocate<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU const &>(
          (const void **)a2,
          v8,
          &v10);
      }
      else
      {
        *(_DWORD *)v8 = v7;
        *(_QWORD *)(a2 + 8) += 4LL;
      }
    }
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return a2;
}
