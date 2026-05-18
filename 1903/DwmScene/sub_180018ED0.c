/*
 * XREFs of sub_180018ED0 @ 0x180018ED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180018ED0(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 3);
  if ( !v1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 40LL))(a1, 1LL);
    if ( qword_180268C80 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180268C80 + 16LL))(qword_180268C80);
  }
  return v1;
}
