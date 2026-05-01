/*
 * XREFs of ?GetPatternProvider@CFallbackWindow@@UEAAJHPEAPEAUIUnknown@@@Z @ 0x1800FDE20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFallbackWindow::GetPatternProvider(
        __int64 (__fastcall ***this)(char *, GUID *),
        int a2,
        struct IUnknown **a3)
{
  __int64 result; // rax

  result = 0LL;
  *a3 = 0LL;
  if ( a2 == 10000 )
    return (**(this - 11))((char *)this - 88, &GUID_00000000_0000_0000_c000_000000000046);
  return result;
}
