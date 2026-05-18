/*
 * XREFs of ?dtor$0@?0??_Current_exception@exception_ptr@std@@SA?AV12@XZ@4HA @ 0x180127920
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_110 @ 0x18000D740 (unknown_libname_110.c)
 */

void __fastcall `std::exception_ptr::_Current_exception'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    unknown_libname_110(*(_QWORD **)(a2 + 64));
  }
}
