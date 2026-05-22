/*
 * XREFs of ??1?$unordered_map@_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@4@@std@@QEAA@XZ @ 0x1800682F4
 * Callers:
 *     _CBaseInputObserverServer_12_::CBaseInputObserverServer_12__::_1_::dtor$1 @ 0x18003CACF (_CBaseInputObserverServer_12_--CBaseInputObserverServer_12__--_1_--dtor$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::unordered_map<unsigned __int64,CBaseInputObserverServer<12>::InputObserverClient,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>>>::~unordered_map<unsigned __int64,CBaseInputObserverServer<12>::InputObserverClient,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>>>(
        _QWORD *a1)
{
  void *v2; // rcx
  _QWORD **v3; // rax
  _QWORD *v4; // rdi
  _QWORD *v5; // rcx
  _QWORD *v6; // rsi
  __int64 v7; // rcx

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
      v7 = v4[3];
      if ( v7 )
      {
        v4[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      }
      std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)0x28);
      v4 = v6;
      v5 = (_QWORD *)a1[1];
    }
    while ( v6 != v5 );
  }
  std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x28);
}
