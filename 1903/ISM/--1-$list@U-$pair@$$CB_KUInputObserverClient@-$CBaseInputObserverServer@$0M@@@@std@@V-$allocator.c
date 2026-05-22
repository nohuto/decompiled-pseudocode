/*
 * XREFs of ??1?$list@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@2@@std@@QEAA@XZ @ 0x180068230
 * Callers:
 *     _CBaseInputObserverServer_12_::CBaseInputObserverServer_12__::_1_::dtor$14 @ 0x18003CAE8 (_CBaseInputObserverServer_12_--CBaseInputObserverServer_12__--_1_--dtor$14.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>>::~list<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>>(
        __int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rsi
  __int64 v5; // rcx

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
      v5 = v2[3];
      if ( v5 )
      {
        v2[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      }
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x28);
      v2 = v4;
      v3 = *(_QWORD **)a1;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x28);
}
