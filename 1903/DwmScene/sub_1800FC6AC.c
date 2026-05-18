/*
 * XREFs of sub_1800FC6AC @ 0x1800FC6AC
 * Callers:
 *     sub_1800FC794 @ 0x1800FC794 (sub_1800FC794.c)
 * Callees:
 *     sub_1800FD0E8 @ 0x1800FD0E8 (sub_1800FD0E8.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800FC6AC(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 (__fastcall ***v8)(_QWORD, __int64); // rcx
  __int64 (__fastcall ***v9)(_QWORD, __int64); // rcx

  v6 = *a3;
  *a3 = 0LL;
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 52);
  *(_QWORD *)(a1 + 32) = 0LL;
  v7 = a1 + 40;
  *(_QWORD *)(a1 + 96) = 0LL;
  v8 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 112);
  if ( v8 )
    *(_QWORD *)(v7 + 56) = (**v8)(v8, v7);
  *(_QWORD *)(a1 + 160) = 0LL;
  v9 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 176);
  if ( v9 )
    *(_QWORD *)(a1 + 160) = (**v9)(v9, a1 + 104);
  *(_BYTE *)(a1 + 168) = 0;
  sub_1800FD0E8(a2);
  if ( *a3 )
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a3 + 8LL))(*a3, 1LL);
  return a1;
}
