/*
 * XREFs of _XamlAllUpViewHost::GetFrameForMonitor_::_1_::dtor$0 @ 0x1802E8987
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18011E570 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall XamlAllUpViewHost::GetFrameForMonitor_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 96) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 96) &= ~1u;
    Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 120));
  }
}
