/*
 * XREFs of ?IsLockValid@CInputSink@@UEBA_NXZ @ 0x1C008D8F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputSink::IsLockValid(__int64 (__fastcall ***this)(char *))
{
  return (**(this - 1))((char *)this - 8);
}
