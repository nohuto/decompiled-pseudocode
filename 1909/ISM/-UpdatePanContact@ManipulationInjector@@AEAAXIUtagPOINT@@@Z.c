/*
 * XREFs of ?UpdatePanContact@ManipulationInjector@@AEAAXIUtagPOINT@@@Z @ 0x1800E92B0
 * Callers:
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800E86E8 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall ManipulationInjector::UpdatePanContact(
        ManipulationInjector *this,
        unsigned int a2,
        struct tagPOINT a3,
        const char *a4)
{
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 152LL * a2;
  if ( ((*(_DWORD *)((char *)this + v4 + 124) - 65542) & 0xFFFEFFFF) != 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1285LL,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      a4);
    __debugbreak();
  }
  *(_DWORD *)((char *)this + v4 + 124) = 131078;
  *(_DWORD *)((char *)this + v4 + 144) += a3.x;
  *(_DWORD *)((char *)this + v4 + 148) += a3.y;
}
