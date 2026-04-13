/*
 * XREFs of _anonymous_namespace_::PlacementHealth::HandleEvent_9_ @ 0x180036C4C
 * Callers:
 *     ContentManagement::ExecuteHandlerByEventPolicy__lambda_c7a3d71a2342ccc4636948ba7f796bf6___ @ 0x1800357D4 (ContentManagement--ExecuteHandlerByEventPolicy__lambda_c7a3d71a2342ccc4636948ba7f796bf6___.c)
 * Callees:
 *     ?ReadPlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x180026D40 (-ReadPlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?WritePlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x180026DDC (-WritePlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     _anonymous_namespace_::StartsWith @ 0x1800285D0 (_anonymous_namespace_--StartsWith.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x1800328FC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ??$HandleEvent@$08$$V@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXXZ @ 0x180037904 (--$HandleEvent@$08$$V@-$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXXZ.c)
 *     ??$HandleEvent@$08$$V@?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXXZ @ 0x180037A14 (--$HandleEvent@$08$$V@-$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXXZ.c)
 *     ??$HandleEvent@$08$$V@?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXXZ @ 0x180037B24 (--$HandleEvent@$08$$V@-$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXXZ.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x1800394F4 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall anonymous_namespace_::PlacementHealth::HandleEvent_9_(char *Src)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rdi
  CreativeFramework::Health::details::BaseScenarioEvents *v4; // rbx
  volatile signed __int32 *v5; // rbx
  struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp-50h] BYREF
  CreativeFramework::Health::details::BaseScenarioEvents *v7; // [rsp+38h] [rbp-48h] BYREF
  volatile signed __int32 *v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  void *v10[3]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v11; // [rsp+68h] [rbp-18h]

  v9 = -2LL;
  if ( CompareStringOrdinal((LPCWCH)Src, -1, L"LockScreen", -1, 1) == 2 )
  {
    CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<9,>();
  }
  else if ( CompareStringOrdinal((LPCWCH)Src, -1, L"LockScreenOverlay", -1, 1) == 2 )
  {
    CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<9,>();
  }
  else if ( CompareStringOrdinal((LPCWCH)Src, -1, L"StartMenu", -1, 1) == 2 )
  {
    CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<9,>();
  }
  else if ( anonymous_namespace_::StartsWith(Src) )
  {
    v11 = 7LL;
    v10[2] = 0LL;
    LOWORD(v10[0]) = 0;
    if ( *(_WORD *)Src )
    {
      v2 = -1LL;
      do
        ++v2;
      while ( *(_WORD *)&Src[2 * v2] );
    }
    else
    {
      v2 = 0LL;
    }
    std::wstring::assign(v10, Src, v2);
    CreativeFramework::Health::details::GenericOffersHealthTracker<11,1>::GetOrCreateBaseEventForPlacementId(&v7, v10);
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v3 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
    v4 = v7;
    if ( !*((_BYTE *)v7 + 252) )
      CreativeFramework::Health::details::BaseScenarioEvents::ReadPlacementReportedInfo(v7);
    if ( v3 != *((_QWORD *)v4 + 14) )
    {
      *((_QWORD *)v4 + 14) = v3;
      *((_BYTE *)v4 + 251) = 1;
      CreativeFramework::Health::details::BaseScenarioEvents::WritePlacementReportedInfo(v4);
    }
    if ( v8 )
    {
      if ( !_InterlockedDecrement(v8 + 2) )
      {
        v5 = v8;
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( !_InterlockedDecrement(v5 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    if ( v11 >= 8 )
      operator delete(v10[0]);
  }
}
