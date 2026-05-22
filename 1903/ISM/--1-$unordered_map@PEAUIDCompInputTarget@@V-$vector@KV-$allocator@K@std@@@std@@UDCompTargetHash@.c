/*
 * XREFs of ??1?$unordered_map@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@UDCompTargetHash@@UDCompTargetEqual@@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@@std@@QEAA@XZ @ 0x1800BAD2C
 * Callers:
 *     _Win32kInterop::DeliverInputToAllTargets_::_1_::dtor$0 @ 0x1800BC323 (_Win32kInterop--DeliverInputToAllTargets_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18002B42C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::unordered_map<IDCompInputTarget *,std::vector<unsigned long>,DCompTargetHash,DCompTargetEqual,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>>::~unordered_map<IDCompInputTarget *,std::vector<unsigned long>,DCompTargetHash,DCompTargetEqual,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>>(
        _QWORD *a1)
{
  void *v2; // rcx
  _QWORD **v3; // rax
  _QWORD *v4; // rsi
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx

  v2 = (void *)a1[3];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)((a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  v3 = (_QWORD **)a1[1];
  v4 = *v3;
  *v3 = v3;
  *(_QWORD *)(a1[1] + 8LL) = a1[1];
  a1[2] = 0LL;
  v5 = (_QWORD *)a1[1];
  if ( v4 != v5 )
  {
    do
    {
      v6 = (_QWORD *)*v4;
      std::vector<Windows::UI::Color>::_Tidy((__int64)(v4 + 3));
      std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)0x30);
      v5 = (_QWORD *)a1[1];
      v4 = v6;
    }
    while ( v6 != v5 );
  }
  std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x30);
}
