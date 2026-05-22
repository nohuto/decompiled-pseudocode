/*
 * XREFs of ?UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ @ 0x1800B9ABC
 * Callers:
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800B9370 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CheckOverlap@ManipulationInjector@@AEAA_NI@Z @ 0x1800B9B30 (-CheckOverlap@ManipulationInjector@@AEAA_NI@Z.c)
 *     ?AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x1800BA494 (-AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 */

void __fastcall ManipulationInjector::UpdatePanOverlapState(struct tagPOINT *this)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( this->y == 2 && LOBYTE(this[1].y) )
  {
    if ( ManipulationInjector::CheckOverlap((ManipulationInjector *)this, this[6].x - 1) )
    {
      ManipulationInjector::AddContact((ManipulationInjector *)this, this[10], 0, this[89].x);
      this[5].x = 1;
    }
    else
    {
      if ( (this[5].x & 0xFFFFFFFD) != 0 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x32C,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          v2);
        JUMPOUT(0x1800B9B27LL);
      }
      this[5].x = 0;
    }
  }
}
