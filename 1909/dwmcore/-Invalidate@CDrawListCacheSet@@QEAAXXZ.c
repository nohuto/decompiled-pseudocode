/*
 * XREFs of ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x1800C0B08
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800671F0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18007BCD4 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x1800C4550 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ?OnChanged@CProjectedShadow@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801F0940 (-OnChanged@CProjectedShadow@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800651BC (-clear_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDra.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CDrawListCacheSet::Invalidate(CDrawListCacheSet *this, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rbx
  unsigned __int64 v6; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_QWORD **)this;
  if ( *(_QWORD *)this == -1LL )
    ModuleFailFastForHRESULT(2147549183LL, retaddr, a3);
  *(_QWORD *)this = -1LL;
  if ( v3 )
  {
    v5 = v3;
    do
    {
      if ( v5[2] )
      {
        v6 = (__int64)(v5[4] - v5[3]) >> 4;
        if ( v6 )
          detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
            (__int64)(v5 + 3),
            a2,
            v6);
      }
      v5 = (_QWORD *)v5[10];
    }
    while ( v5 );
  }
  *(_QWORD *)this = v3;
}
