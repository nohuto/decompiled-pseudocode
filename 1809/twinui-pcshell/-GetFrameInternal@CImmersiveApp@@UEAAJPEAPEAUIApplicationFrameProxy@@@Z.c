/*
 * XREFs of ?GetFrameInternal@CImmersiveApp@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z @ 0x180064D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::GetFrameInternal(CImmersiveApp *this, struct IApplicationFrameProxy **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IApplicationFrameProxy **))(**((_QWORD **)this + 38) + 136LL))(
           *((_QWORD *)this + 38),
           a2);
}
