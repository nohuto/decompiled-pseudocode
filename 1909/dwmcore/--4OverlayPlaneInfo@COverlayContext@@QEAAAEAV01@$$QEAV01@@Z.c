/*
 * XREFs of ??4OverlayPlaneInfo@COverlayContext@@QEAAAEAV01@$$QEAV01@@Z @ 0x180182070
 * Callers:
 *     ??$_Swap_ranges_unchecked@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@@std@@YA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@V12@0@Z @ 0x1800E5578 (--$_Swap_ranges_unchecked@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@@std.c)
 *     ??$move@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180181590 (--$move@V-$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked_array_iterator@P.c)
 *     ??$move_backward@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x1801817DC (--$move_backward@V-$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked_array_i.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180182030 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall COverlayContext::OverlayPlaneInfo::operator=(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  v7 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v6;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  v9 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v8;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 56);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 72);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 88);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 104);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 120);
  *(_OWORD *)(a1 + 136) = *(_OWORD *)(a2 + 136);
  *(_OWORD *)(a1 + 152) = *(_OWORD *)(a2 + 152);
  std::shared_ptr<CRegion>::operator=((_QWORD *)(a1 + 168), (__int64 *)(a2 + 168));
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
