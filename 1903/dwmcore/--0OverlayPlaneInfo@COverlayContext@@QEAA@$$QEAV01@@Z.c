/*
 * XREFs of ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x18018319C
 * Callers:
 *     ?PushCandidates@COverlayContext@@AEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800E4320 (-PushCandidates@COverlayContext@@AEAAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@.c)
 *     ??$move@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@V?$back_insert_iterator_unchecked@V?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@detail@@@std@@YA?AV?$back_insert_iterator_unchecked@V?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@detail@@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@0@0V12@@Z @ 0x1800E467C (--$move@V-$move_iterator@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@V-$.c)
 *     ??$_Swap_ranges_unchecked@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@@std@@YA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@V12@0@Z @ 0x1800E46C8 (--$_Swap_ranges_unchecked@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@@std.c)
 *     ??$swap_helper@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x1800E4780 (--$swap_helper@$0BA@@-$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@Q.c)
 *     ??$assign@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@0@Z @ 0x180182718 (--$assign@V-$move_iterator@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X.c)
 *     ??$emplace@VOverlayPlaneInfo@COverlayContext@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@VOverlayPlaneInfo@COverlayContext@@@Z @ 0x1801828B4 (--$emplace@VOverlayPlaneInfo@COverlayContext@@@-$vector_facade@VOverlayPlaneInfo@COverlayContext.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x1801830C8 (--$uninitialized_copy@V-$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked_ar.c)
 *     ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x1801881F4 (-reserve_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v2 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a1 + 8) = v2;
  v3 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a1 + 16) = v3;
  v4 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 56);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 72);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 88);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 104);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 120);
  *(_OWORD *)(a1 + 136) = *(_OWORD *)(a2 + 136);
  *(_OWORD *)(a1 + 152) = *(_OWORD *)(a2 + 152);
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 168);
  *(_QWORD *)(a1 + 176) = *(_QWORD *)(a2 + 176);
  *(_QWORD *)(a2 + 168) = 0LL;
  *(_QWORD *)(a2 + 176) = 0LL;
  *(_BYTE *)(a1 + 184) = *(_BYTE *)(a2 + 184);
  *(_BYTE *)(a1 + 185) = *(_BYTE *)(a2 + 185);
  *(_BYTE *)(a1 + 186) = *(_BYTE *)(a2 + 186);
  *(_BYTE *)(a1 + 187) = *(_BYTE *)(a2 + 187);
  *(_BYTE *)(a1 + 188) = *(_BYTE *)(a2 + 188);
  *(_BYTE *)(a1 + 189) = *(_BYTE *)(a2 + 189);
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a2 + 192);
  *(_BYTE *)(a1 + 200) = *(_BYTE *)(a2 + 200);
  *(_DWORD *)(a1 + 204) = *(_DWORD *)(a2 + 204);
  *(_BYTE *)(a1 + 208) = *(_BYTE *)(a2 + 208);
  *(_BYTE *)(a1 + 209) = *(_BYTE *)(a2 + 209);
  *(_DWORD *)(a1 + 212) = *(_DWORD *)(a2 + 212);
  *(_DWORD *)(a1 + 216) = *(_DWORD *)(a2 + 216);
  *(_DWORD *)(a1 + 220) = *(_DWORD *)(a2 + 220);
  *(_BYTE *)(a1 + 224) = *(_BYTE *)(a2 + 224);
  *(_BYTE *)(a1 + 225) = *(_BYTE *)(a2 + 225);
  *(_DWORD *)(a1 + 228) = *(_DWORD *)(a2 + 228);
  *(_DWORD *)(a1 + 232) = *(_DWORD *)(a2 + 232);
  *(_BYTE *)(a1 + 236) = *(_BYTE *)(a2 + 236);
  *(_DWORD *)(a1 + 240) = *(_DWORD *)(a2 + 240);
  *(_DWORD *)(a1 + 244) = *(_DWORD *)(a2 + 244);
  *(_BYTE *)(a1 + 248) = *(_BYTE *)(a2 + 248);
  return a1;
}
