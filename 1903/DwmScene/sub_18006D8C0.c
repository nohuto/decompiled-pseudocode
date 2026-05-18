/*
 * XREFs of sub_18006D8C0 @ 0x18006D8C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180016B24 @ 0x180016B24 (sub_180016B24.c)
 *     sub_1800635DC @ 0x1800635DC (sub_1800635DC.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_18006B944 @ 0x18006B944 (sub_18006B944.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18006D8C0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rdi
  _QWORD *v6; // rdx
  __int64 *v8; // [rsp+28h] [rbp-20h] BYREF
  int v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h]

  v4 = a1 + 8;
  v10 = a1 + 8;
  sub_1800635DC(a1 + 8);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
  sub_18006B944((__int64 **)(a1 + 24), (__int64)&v8, &v9);
  v5 = v8;
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v6 = (_QWORD *)v5[6];
  if ( (_QWORD *)v5[7] == v6 )
  {
    sub_180016B24(v5 + 5, v6, a2);
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
  return sub_180063668(v4);
}
