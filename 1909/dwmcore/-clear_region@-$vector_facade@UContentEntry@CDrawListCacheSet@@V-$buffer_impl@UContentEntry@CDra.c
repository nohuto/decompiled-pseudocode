/*
 * XREFs of ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800651BC
 * Callers:
 *     ?RemoveAssociations@CBaseRenderTarget@@AEAAXXZ @ 0x18004A0E8 (-RemoveAssociations@CBaseRenderTarget@@AEAAXXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800671F0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??1CDrawListCacheSet@@QEAA@XZ @ 0x180078800 (--1CDrawListCacheSet@@QEAA@XZ.c)
 *     ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x1800C0B08 (-Invalidate@CDrawListCacheSet@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x180159B28 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$move@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1801AD1E8 (--$move@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_array_iterator@PEA.c)
 */

int __fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  const char *v4; // rcx
  unsigned __int64 v5; // rax
  const char *v6; // rsi
  __int64 v7; // rdi
  const char *i; // rbx
  CDirtyRegion *v9; // rcx
  __int128 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h]
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]

  v4 = *(const char **)a1;
  v5 = (__int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v4) >> 4;
  if ( a3 > v5 )
    std::_Xoverflow_error(v4);
  v12 = 0LL;
  v6 = &v4[16 * v5];
  v7 = 16 * a3;
  *(_QWORD *)&v11 = v4;
  *((_QWORD *)&v11 + 1) = v5;
  if ( a3 != v5 )
  {
    v12 = 0LL;
    v14 = 0LL;
    v13 = v11;
    LODWORD(v5) = std::move<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>(
                    &v11,
                    &v4[v7],
                    &v4[16 * v5],
                    &v13);
  }
  for ( i = &v6[-v7]; i != v6; i += 16 )
  {
    v9 = (CDirtyRegion *)*((_QWORD *)i + 1);
    if ( v9 )
      LODWORD(v5) = CDirtyRegion::Release(v9);
  }
  *(_QWORD *)(a1 + 8) -= v7;
  return v5;
}
