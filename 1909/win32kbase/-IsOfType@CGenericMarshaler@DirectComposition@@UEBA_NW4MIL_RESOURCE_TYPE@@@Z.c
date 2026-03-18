/*
 * XREFs of ?IsOfType@CGenericMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01A39D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DirectComposition::CGenericMarshaler::IsOfType(__int64 a1, int a2)
{
  return (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1) == a2;
}
