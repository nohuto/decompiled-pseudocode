/*
 * XREFs of ?HitTest@OneCoreUAPInputHost@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x180008520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall OneCoreUAPInputHost::HitTest(
        OneCoreUAPInputHost *this,
        struct _InputHitTestRequest *a2,
        struct _InputHitTestResult *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _InputHitTestRequest *, struct _InputHitTestResult *))(**((_QWORD **)Win32kInterop::s_pInterop + 6) + 48LL))(
           *((_QWORD *)Win32kInterop::s_pInterop + 6),
           a2,
           a3);
}
