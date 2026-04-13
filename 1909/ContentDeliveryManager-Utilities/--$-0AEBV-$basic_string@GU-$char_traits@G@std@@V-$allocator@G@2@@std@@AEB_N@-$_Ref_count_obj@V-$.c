/*
 * XREFs of ??$?0AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEB_N@?$_Ref_count_obj@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEB_N@Z @ 0x18003CC20
 * Callers:
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x18003A544 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$02$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x18003C508 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$02$00@details@Health@CreativeF.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001B98 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180032230 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x1800337E0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CB2A9 (memset_0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::_Ref_count_obj<CreativeFramework::Health::details::BaseEventsWithEvaluation<1>>::_Ref_count_obj<CreativeFramework::Health::details::BaseEventsWithEvaluation<1>>(
        __int64 a1,
        void **a2,
        char *a3)
{
  __int64 v5; // r15
  char v6; // bl
  _QWORD *v7; // r14
  unsigned __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v12; // [rsp+30h] [rbp-258h]
  wchar_t Buffer[264]; // [rsp+40h] [rbp-248h] BYREF

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
  v5 = a1 + 16;
  v12 = a1 + 16;
  v6 = *a3;
  *(_QWORD *)(a1 + 16) = &CreativeFramework::Health::details::BaseScenarioEvents::`vftable';
  memset_0((void *)(a1 + 32), 0, 0x58uLL);
  memset_0((void *)(v5 + 112), 0, 0x20uLL);
  memset_0((void *)(v5 + 152), 0, 0x20uLL);
  v7 = (_QWORD *)(v5 + 184);
  *(_QWORD *)(v5 + 208) = 7LL;
  v8 = 0LL;
  *(_QWORD *)(v5 + 200) = 0LL;
  *(_WORD *)(v5 + 184) = 0;
  v9 = -1LL;
  std::wstring::assign((void **)(v5 + 184), a2, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(v5 + 240) = 7LL;
  *(_QWORD *)(v5 + 232) = 0LL;
  *(_WORD *)(v5 + 216) = 0;
  *(_BYTE *)(v5 + 248) = v6;
  *(_DWORD *)(v5 + 249) = 0;
  *(_WORD *)(v5 + 253) = 0;
  *(_BYTE *)(v5 + 8) = 4;
  *(_BYTE *)(v5 + 104) = 4;
  *(_BYTE *)(v5 + 144) = 4;
  if ( *(_QWORD *)(v5 + 208) >= 8uLL )
    v7 = (_QWORD *)*v7;
  StringCchPrintfW(
    Buffer,
    260LL,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Health\\Placement-%s",
    v7,
    -2LL,
    a1,
    v12);
  if ( Buffer[0] )
  {
    do
      ++v9;
    while ( Buffer[v9] );
    v8 = v9;
  }
  std::wstring::assign((_QWORD *)(v5 + 216), (char *)Buffer, v8);
  *(_QWORD *)v5 = &CreativeFramework::Health::details::BaseEventsWithEvaluation<1>::`vftable';
  return a1;
}
