/*
 * XREFs of sub_1800DE74C @ 0x1800DE74C
 * Callers:
 *     sub_1800DCBD0 @ 0x1800DCBD0 (sub_1800DCBD0.c)
 * Callees:
 *     sub_1800DE5E8 @ 0x1800DE5E8 (sub_1800DE5E8.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DE74C(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 result; // rax
  __int128 v9; // [rsp+40h] [rbp-18h] BYREF

  v2 = *(_QWORD **)(a1 + 40);
  v4 = *(_QWORD **)(a1 + 48);
  while ( v2 != v4 )
  {
    v6 = v2[1];
    v9 = 0LL;
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      v6 = v2[1];
    }
    v7 = *v2;
    *((_QWORD *)&v9 + 1) = v6;
    *(_QWORD *)&v9 = v7;
    sub_1800DE5E8((_QWORD *)a1, &v9);
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)*v2 + 8LL))(
               *v2,
               a2,
               *(unsigned int *)(a1 + 8),
               *(unsigned int *)(a1 + 12),
               *(_DWORD *)(a1 + 20),
               *(_DWORD *)(a1 + 28));
    v2 += 2;
  }
  return result;
}
