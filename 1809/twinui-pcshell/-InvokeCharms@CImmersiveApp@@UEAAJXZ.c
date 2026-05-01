/*
 * XREFs of ?InvokeCharms@CImmersiveApp@@UEAAJXZ @ 0x18011D710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::InvokeCharms(CImmersiveApp *this)
{
  __int64 result; // rax

  result = 1LL;
  if ( *((_BYTE *)this + 639) )
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 41) + 216LL))(*((_QWORD *)this + 41));
  return result;
}
