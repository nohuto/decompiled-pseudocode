/*
 * XREFs of sub_180074488 @ 0x180074488
 * Callers:
 *     sub_18006E7DC @ 0x18006E7DC (sub_18006E7DC.c)
 *     sub_180072744 @ 0x180072744 (sub_180072744.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180074488(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rcx

  *(_QWORD *)a1 = a2;
  v4 = *a2;
  v5 = *(__int64 *)((char *)a2 + *(int *)(v4 + 4) + 72);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v4 = *a2;
  }
  if ( std::ios_base::good((std::ios_base *)((char *)a2 + *(int *)(v4 + 4))) )
  {
    v6 = *(__int64 **)((char *)a2 + *(int *)(*a2 + 4) + 80);
    if ( v6 )
    {
      if ( v6 != a2 )
        std::wostream::flush(v6);
    }
  }
  *(_BYTE *)(a1 + 8) = std::ios_base::good((std::ios_base *)((char *)a2 + *(int *)(*a2 + 4)));
  return a1;
}
