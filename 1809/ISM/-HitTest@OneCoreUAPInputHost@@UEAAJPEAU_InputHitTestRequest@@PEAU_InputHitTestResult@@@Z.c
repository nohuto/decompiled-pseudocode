/*
 * XREFs of ?HitTest@OneCoreUAPInputHost@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x180004AD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OneCoreUAPInputHost::HitTest(
        OneCoreUAPInputHost *this,
        struct _InputHitTestRequest *a2,
        struct _InputHitTestResult *a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)Win32kInterop::s_pInterop + 6) + 48LL))(*((_QWORD *)Win32kInterop::s_pInterop + 6));
  if ( (int)result >= 0
    && *((_QWORD *)a3 + 2)
    && ((1LL << gdwDeviceFamily) & 0x1C000) != 0
    && (*((_BYTE *)a2 + 92) & 1) == 0 )
  {
    *((_DWORD *)a3 + 34) |= 1u;
  }
  return result;
}
