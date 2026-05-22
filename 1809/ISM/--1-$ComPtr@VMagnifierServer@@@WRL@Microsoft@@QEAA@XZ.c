/*
 * XREFs of ??1?$ComPtr@VMagnifierServer@@@WRL@Microsoft@@QEAA@XZ @ 0x180028D80
 * Callers:
 *     _MagnifierProcessor::MagnifierProcessor_::_1_::dtor$1 @ 0x18013249B (_MagnifierProcessor--MagnifierProcessor_--_1_--dtor$1.c)
 *     _Edges::AddOrUpdate_::_1_::dtor$2 @ 0x1801340B4 (_Edges--AddOrUpdate_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<MagnifierServer>::~ComPtr<MagnifierServer>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (**(__int64 (__fastcall ***)(__int64))(result + 16))(result + 16);
  }
  return result;
}
