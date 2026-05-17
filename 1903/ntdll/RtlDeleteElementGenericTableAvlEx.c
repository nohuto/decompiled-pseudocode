/*
 * XREFs of RtlDeleteElementGenericTableAvlEx @ 0x1800641F0
 * Callers:
 *     RtlDeleteElementGenericTableAvl @ 0x180063F20 (RtlDeleteElementGenericTableAvl.c)
 * Callees:
 *     sub_18006424C @ 0x18006424C (sub_18006424C.c)
 *     sub_1800644F8 @ 0x1800644F8 (sub_1800644F8.c)
 */

__int64 __fastcall RtlDeleteElementGenericTableAvlEx(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64); // rax

  if ( a2 == *(_QWORD *)(a1 + 56) )
    *(_QWORD *)(a1 + 56) = sub_1800644F8(a2);
  ++*(_DWORD *)(a1 + 64);
  sub_18006424C(a1);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 88);
  --*(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  return v4(a1, a2);
}
