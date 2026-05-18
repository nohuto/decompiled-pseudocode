/*
 * XREFs of sub_18001BC88 @ 0x18001BC88
 * Callers:
 *     sub_180016534 @ 0x180016534 (sub_180016534.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001BC88(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = *(_QWORD *)(a1 + 16);
    }
    *(_QWORD *)(a1 + 16) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
