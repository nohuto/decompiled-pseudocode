/*
 * XREFs of ?GetTitleBar@CApplicationFrameWrapper@@UEAAJPEAPEAUIApplicationFrameTitleBar@@@Z @ 0x18005FAB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationFrameWrapper::GetTitleBar(
        CApplicationFrameWrapper *this,
        struct IApplicationFrameTitleBar **a2)
{
  struct IApplicationFrameTitleBar *v4; // rcx
  __int64 result; // rax

  v4 = (struct IApplicationFrameTitleBar *)*((_QWORD *)this + 16);
  if ( v4 )
  {
    (*(void (__fastcall **)(struct IApplicationFrameTitleBar *))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = (struct IApplicationFrameTitleBar *)*((_QWORD *)this + 16);
  }
  result = 0LL;
  *a2 = v4;
  return result;
}
