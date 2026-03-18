/*
 * XREFs of ?OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ @ 0x1C017CA40
 * Callers:
 *     <none>
 * Callees:
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x1C01785E0 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 */

__int64 __fastcall CHidInput::OnPTPInertiaHandleEvent(CHidInput *this)
{
  CPTPProcessor::EndInertiaForContainer(*((_QWORD *)this + 162), *((_QWORD *)this + 163));
  return 0LL;
}
