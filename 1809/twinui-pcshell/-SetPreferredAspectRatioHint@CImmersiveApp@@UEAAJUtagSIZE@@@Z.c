/*
 * XREFs of ?SetPreferredAspectRatioHint@CImmersiveApp@@UEAAJUtagSIZE@@@Z @ 0x18007C7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::SetPreferredAspectRatioHint(CImmersiveApp *this, struct tagSIZE a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct tagSIZE))(**((_QWORD **)this + 38) + 288LL))(
           *((_QWORD *)this + 38),
           a2);
}
