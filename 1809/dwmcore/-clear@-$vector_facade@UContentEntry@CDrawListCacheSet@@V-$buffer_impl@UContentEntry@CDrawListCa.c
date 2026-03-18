/*
 * XREFs of ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180067248
 * Callers:
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180021C60 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A100 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??1CDrawListCacheSet@@QEAA@XZ @ 0x18004DD58 (--1CDrawListCacheSet@@QEAA@XZ.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x1800A5428 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?RemoveAssociations@CBaseRenderTarget@@AEAAXXZ @ 0x1800DAED8 (-RemoveAssociations@CBaseRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EEF64 (-clear_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDra.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( (__int64)(a1[1] - *a1) >> 4 )
    return detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region();
  return result;
}
