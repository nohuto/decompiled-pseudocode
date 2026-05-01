/*
 * XREFs of ?IsValid@ResourceSetClientProxy@@UEBA_NXZ @ 0x180011620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180009BE0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall ResourceSetClientProxy::IsValid(ResourceSetClientProxy *this)
{
  return (*(unsigned __int8 (__fastcall **)(ResourceSetClientProxy *))(*(_QWORD *)this + 72LL))(this) == 0;
}
