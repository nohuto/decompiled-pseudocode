/*
 * XREFs of ??0CTopLevelWindow@@IEAA@XZ @ 0x180021B3C
 * Callers:
 *     ?Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180022580 (-Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18002A800 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x18001EF80 (--0CVisual@@IEAA@XZ.c)
 */

CTopLevelWindow *__fastcall CTopLevelWindow::CTopLevelWindow(CTopLevelWindow *this)
{
  __int64 v1; // rcx
  __int128 v2; // xmm0
  CTopLevelWindow *result; // rax

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CTopLevelWindow::`vftable';
  *(_QWORD *)(v1 + 244) = 0LL;
  *(_QWORD *)(v1 + 256) = 0LL;
  *(_QWORD *)(v1 + 264) = 0LL;
  *(_QWORD *)(v1 + 272) = 0LL;
  *(_QWORD *)(v1 + 280) = 0LL;
  *(_QWORD *)(v1 + 288) = 0LL;
  *(_QWORD *)(v1 + 472) = 0LL;
  *(_QWORD *)(v1 + 512) = 0LL;
  *(_QWORD *)(v1 + 520) = 0LL;
  *(_QWORD *)(v1 + 528) = 0LL;
  *(_QWORD *)(v1 + 536) = 0LL;
  *(_QWORD *)(v1 + 544) = 0LL;
  *(_QWORD *)(v1 + 552) = 0LL;
  *(_QWORD *)(v1 + 560) = 0LL;
  *(_QWORD *)(v1 + 568) = 0LL;
  *(_QWORD *)(v1 + 576) = 0LL;
  *(_DWORD *)(v1 + 584) = 0;
  *(_QWORD *)(v1 + 588) = 0LL;
  *(_QWORD *)(v1 + 596) = 0LL;
  *(_QWORD *)(v1 + 604) = 0LL;
  *(_QWORD *)(v1 + 612) = 0LL;
  *(_QWORD *)(v1 + 620) = 0LL;
  *(_QWORD *)(v1 + 628) = 0LL;
  *(_QWORD *)(v1 + 636) = 0LL;
  *(_QWORD *)(v1 + 644) = 0LL;
  *(_QWORD *)(v1 + 652) = 0LL;
  *(_QWORD *)(v1 + 660) = 0LL;
  *(_QWORD *)(v1 + 672) = 0LL;
  *(_DWORD *)(v1 + 680) = -1;
  *(_QWORD *)(v1 + 720) = 0LL;
  *(_QWORD *)(v1 + 728) = 0LL;
  *(_QWORD *)(v1 + 736) = 0LL;
  *(_QWORD *)(v1 + 744) = 0LL;
  *(_QWORD *)(v1 + 752) = 0LL;
  *(_QWORD *)(v1 + 760) = 0LL;
  *(_QWORD *)(v1 + 768) = 0LL;
  *(_QWORD *)(v1 + 776) = 0LL;
  *(_QWORD *)(v1 + 784) = 0LL;
  *(_QWORD *)(v1 + 792) = 0LL;
  *(_QWORD *)(v1 + 800) = 0LL;
  *(_QWORD *)(v1 + 808) = 0LL;
  *(_BYTE *)(v1 + 240) |= 6u;
  *(_BYTE *)(v1 + 241) &= ~2u;
  *(_DWORD *)(v1 + 588) = -1;
  *(_DWORD *)(v1 + 592) = -1;
  *(_DWORD *)(v1 + 596) = -1;
  *(_DWORD *)(v1 + 600) = -1;
  v2 = *(_OWORD *)(v1 + 588);
  *(_DWORD *)(v1 + 696) = -1082130432;
  *(_DWORD *)(v1 + 684) = -1082130432;
  *(_DWORD *)(v1 + 688) = -1082130432;
  *(_DWORD *)(v1 + 692) = -1082130432;
  *(_DWORD *)(v1 + 712) = -1082130432;
  *(_DWORD *)(v1 + 700) = -1082130432;
  *(_DWORD *)(v1 + 704) = -1082130432;
  *(_DWORD *)(v1 + 708) = -1082130432;
  result = (CTopLevelWindow *)v1;
  *(_OWORD *)(v1 + 620) = v2;
  *(_WORD *)(v1 + 824) = 0;
  *(_OWORD *)(v1 + 604) = v2;
  *(_OWORD *)(v1 + 636) = v2;
  return result;
}
