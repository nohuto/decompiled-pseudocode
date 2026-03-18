/*
 * XREFs of ?IsLockValid@CInputSink@@UEBA_NXZ @ 0x1C0089610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputSink::IsLockValid(__int64 (__fastcall ***this)(char *))
{
  return (**(this - 1))((char *)this - 8);
}
