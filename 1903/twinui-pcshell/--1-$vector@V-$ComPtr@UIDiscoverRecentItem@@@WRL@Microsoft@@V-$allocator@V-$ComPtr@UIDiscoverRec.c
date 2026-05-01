/*
 * XREFs of ??1?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1801DB384
 * Callers:
 *     _PenWorkspaceDiscoverBroker::GetRecentItems_::_1_::dtor$0 @ 0x1801DC61C (_PenWorkspaceDiscoverBroker--GetRecentItems_--_1_--dtor$0.c)
 *     __lambda_aac2d0092d420201fb1007c618052d9b_::operator()_::_1_::dtor$1 @ 0x180291899 (__lambda_aac2d0092d420201fb1007c618052d9b_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080B08 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>::~vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>(
        __int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rsi

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    if ( v1 != v3 )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v1++);
      while ( v1 != v3 );
      v1 = *(__int64 **)a1;
    }
    std::_Deallocate<16,0>(
      v1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
