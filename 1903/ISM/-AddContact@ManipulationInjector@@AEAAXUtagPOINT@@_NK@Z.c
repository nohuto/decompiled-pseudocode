/*
 * XREFs of ?AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x1800E749C
 * Callers:
 *     ?AddZoomContacts@ManipulationInjector@@AEAAXK@Z @ 0x1800E7564 (-AddZoomContacts@ManipulationInjector@@AEAAXK@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800E87E8 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800E8918 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1800E90A8 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 *     ?UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ @ 0x1800E9540 (-UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DeskToDigiPt@ManipulationInjector@@AEAA?AUtagPOINT@@U2@@Z @ 0x1800E7A10 (-DeskToDigiPt@ManipulationInjector@@AEAA-AUtagPOINT@@U2@@Z.c)
 */

void __fastcall ManipulationInjector::AddContact(struct tagPOINT *this, struct tagPOINT a2, char a3, const char *a4)
{
  char v4; // r11
  struct tagPOINT *v5; // r10
  struct tagPOINT *v6; // rax
  LONG y; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = a3;
  v5 = this;
  if ( this[6].x >= 4u )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1076LL,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      a4);
    __debugbreak();
  }
  this[19 * (unsigned int)this[6].x + 18] = a2;
  if ( this->x == 2 )
  {
    v6 = (struct tagPOINT *)ManipulationInjector::DeskToDigiPt((ManipulationInjector *)this, (struct tagPOINT)&v9);
    v5[19 * (unsigned int)v5[6].x + 19] = *v6;
  }
  v5[19 * (unsigned int)v5[6].x + 14].y = v5[5].y++;
  y = v5[5].y;
  if ( y == 4 )
    y = 0;
  v5[5].y = y;
  v5[19 * (unsigned int)v5[6].x + 15].y = v4 != 0 ? 131074 : 65542;
  *(&v5[89].x + (unsigned int)v5[6].x++) = (int)a4;
}
