/*
 * XREFs of sub_18006D9D0 @ 0x18006D9D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180016B94 @ 0x180016B94 (sub_180016B94.c)
 *     sub_1800636EC @ 0x1800636EC (sub_1800636EC.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_18006BA54 @ 0x18006BA54 (sub_18006BA54.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18006D9D0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rdi
  _QWORD *v6; // rdx
  __int64 *v8; // [rsp+28h] [rbp-20h] BYREF
  int v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h]

  v4 = a1 + 8;
  v10 = a1 + 8;
  sub_1800636EC(a1 + 8);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
  sub_18006BA54((__int64 **)(a1 + 24), (__int64)&v8, &v9);
  v5 = v8;
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v6 = (_QWORD *)v5[6];
  if ( (_QWORD *)v5[7] == v6 )
  {
    sub_180016B94(v5 + 5, v6, a2);
  }
  else
  {
    *v6 = 0LL;
    v6[1] = 0LL;
    *v6 = *a2;
    v6[1] = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    v5[6] += 16LL;
  }
  return sub_180063778(v4);
}
