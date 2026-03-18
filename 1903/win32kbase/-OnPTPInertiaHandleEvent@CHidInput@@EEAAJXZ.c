/*
 * XREFs of ?OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ @ 0x1C017EC30
 * Callers:
 *     <none>
 * Callees:
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x1C017A7D0 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 */

__int64 __fastcall CHidInput::OnPTPInertiaHandleEvent(CHidInput *this)
{
  CPTPProcessor::EndInertiaForContainer(*((_QWORD *)this + 162), *((_QWORD *)this + 163));
  return 0LL;
}
