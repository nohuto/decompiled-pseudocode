/*
 * XREFs of ?IsLockValid@CCompositionSurface@@MEBA_NXZ @ 0x1C0017850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::IsLockValid(__int64 (__fastcall ***this)(char *))
{
  return (**(this - 1))((char *)this - 8);
}
