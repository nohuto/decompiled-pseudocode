/*
 * XREFs of ??1?$list@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800BA9C0
 * Callers:
 *     _Win32kInterop::DeliverInputToAllTargets_::_1_::dtor$13 @ 0x1800BC1B3 (_Win32kInterop--DeliverInputToAllTargets_--_1_--dtor$13.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18002B0AC (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::list<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>::~list<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>(
        __int64 a1)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = *(_QWORD **)a1;
  if ( v2 != v3 )
  {
    do
    {
      v4 = (_QWORD *)*v2;
      std::vector<Windows::UI::Color>::_Tidy((__int64)(v2 + 3));
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x30);
      v3 = *(_QWORD **)a1;
      v2 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x30);
}
