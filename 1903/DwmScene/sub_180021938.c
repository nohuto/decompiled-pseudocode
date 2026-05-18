/*
 * XREFs of sub_180021938 @ 0x180021938
 * Callers:
 *     sub_180023720 @ 0x180023720 (sub_180023720.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180021938(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v7; // rcx

  v2 = *a2;
  v4 = *(_QWORD *)(a1 + 144);
  if ( v4 != *a2 )
  {
    if ( v2 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 8LL))(*a2);
      v4 = *(_QWORD *)(a1 + 144);
    }
    *(_QWORD *)(a1 + 144) = v2;
    if ( v4 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v7 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return result;
}
