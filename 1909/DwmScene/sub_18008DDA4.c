/*
 * XREFs of sub_18008DDA4 @ 0x18008DDA4
 * Callers:
 *     sub_180088668 @ 0x180088668 (sub_180088668.c)
 *     sub_18008D42C @ 0x18008D42C (sub_18008D42C.c)
 *     sub_18008DB28 @ 0x18008DB28 (sub_18008DB28.c)
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18008DDA4(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v3; // rdi
  volatile signed __int32 *v6; // rcx
  _QWORD *result; // rax

  v3 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8) = a3[1];
  --*(_QWORD *)(a1 + 8);
  v6 = (volatile signed __int32 *)a3[4];
  if ( v6 && _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  j_j__o_free(a3);
  result = a2;
  *a2 = v3;
  return result;
}
