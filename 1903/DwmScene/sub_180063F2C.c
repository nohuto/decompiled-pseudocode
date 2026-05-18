/*
 * XREFs of sub_180063F2C @ 0x180063F2C
 * Callers:
 *     sub_180020778 @ 0x180020778 (sub_180020778.c)
 *     sub_180020854 @ 0x180020854 (sub_180020854.c)
 *     sub_180038DA0 @ 0x180038DA0 (sub_180038DA0.c)
 *     sub_18003E15C @ 0x18003E15C (sub_18003E15C.c)
 *     sub_180064080 @ 0x180064080 (sub_180064080.c)
 *     sub_180064110 @ 0x180064110 (sub_180064110.c)
 *     sub_180064140 @ 0x180064140 (sub_180064140.c)
 *     sub_180064838 @ 0x180064838 (sub_180064838.c)
 *     sub_18006490C @ 0x18006490C (sub_18006490C.c)
 *     sub_18006A11C @ 0x18006A11C (sub_18006A11C.c)
 *     sub_18008F8B8 @ 0x18008F8B8 (sub_18008F8B8.c)
 *     sub_180095284 @ 0x180095284 (sub_180095284.c)
 *     sub_18009D4C4 @ 0x18009D4C4 (sub_18009D4C4.c)
 *     sub_18009D5AC @ 0x18009D5AC (sub_18009D5AC.c)
 *     sub_18009EF84 @ 0x18009EF84 (sub_18009EF84.c)
 *     sub_18009F03C @ 0x18009F03C (sub_18009F03C.c)
 *     sub_1800A2B04 @ 0x1800A2B04 (sub_1800A2B04.c)
 *     sub_1800CBA54 @ 0x1800CBA54 (sub_1800CBA54.c)
 *     sub_1800CDB50 @ 0x1800CDB50 (sub_1800CDB50.c)
 *     sub_1800CDB94 @ 0x1800CDB94 (sub_1800CDB94.c)
 *     sub_1800CE980 @ 0x1800CE980 (sub_1800CE980.c)
 *     sub_1800CFB94 @ 0x1800CFB94 (sub_1800CFB94.c)
 *     sub_1800CFCC0 @ 0x1800CFCC0 (sub_1800CFCC0.c)
 *     sub_1800D1624 @ 0x1800D1624 (sub_1800D1624.c)
 *     sub_1800D1670 @ 0x1800D1670 (sub_1800D1670.c)
 *     sub_1800D2298 @ 0x1800D2298 (sub_1800D2298.c)
 *     sub_1800D2F44 @ 0x1800D2F44 (sub_1800D2F44.c)
 *     sub_1800D2FD8 @ 0x1800D2FD8 (sub_1800D2FD8.c)
 *     sub_18012CAB9 @ 0x18012CAB9 (sub_18012CAB9.c)
 * Callees:
 *     sub_1800D0C60 @ 0x1800D0C60 (sub_1800D0C60.c)
 *     sub_1800D0C78 @ 0x1800D0C78 (sub_1800D0C78.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
__int64 (__fastcall **__fastcall sub_180063F2C(__int64 a1))()
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 (__fastcall **result)(); // rax

  *(_QWORD *)a1 = &Spectre::Engine::RendererResource::`vftable';
  v2 = sub_1800D0C78(a1);
  sub_1800D0C60(v2, *(unsigned int *)(a1 + 48), 0LL, -1LL);
  _InterlockedExchangeAdd(&dword_18026A000[*(int *)(a1 + 44)], 0xFFFFFFFF);
  v3 = -*(_QWORD *)(a1 + 64);
  v4 = sub_1800D0C78(dword_18026A000);
  sub_1800D0C60(v4, *(unsigned int *)(a1 + 56), 2LL, v3);
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 < 0x10 )
    goto LABEL_6;
  v6 = v5 + 1;
  v7 = *(_QWORD *)(a1 + 8);
  if ( v6 < 0x1000 )
  {
LABEL_5:
    j_j__o_free(v7);
LABEL_6:
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 15LL;
    *(_BYTE *)(a1 + 8) = 0;
    result = &off_1801DD0D0;
    *(_QWORD *)a1 = &off_1801DD0D0;
    return result;
  }
  v8 = v6 + 39;
  v9 = *(_QWORD *)(v7 - 8);
  v10 = v7 - v9;
  if ( (unsigned __int64)(v10 - 8) <= 0x1F )
  {
    v7 = v9;
    goto LABEL_5;
  }
  o__invalid_parameter_noinfo_noreturn(v10, v8);
  return (__int64 (__fastcall **)())sub_180064000();
}
