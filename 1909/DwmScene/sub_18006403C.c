/*
 * XREFs of sub_18006403C @ 0x18006403C
 * Callers:
 *     sub_180020888 @ 0x180020888 (sub_180020888.c)
 *     sub_180020964 @ 0x180020964 (sub_180020964.c)
 *     sub_180038EB0 @ 0x180038EB0 (sub_180038EB0.c)
 *     sub_18003E26C @ 0x18003E26C (sub_18003E26C.c)
 *     sub_180064190 @ 0x180064190 (sub_180064190.c)
 *     sub_180064220 @ 0x180064220 (sub_180064220.c)
 *     sub_180064250 @ 0x180064250 (sub_180064250.c)
 *     sub_180064948 @ 0x180064948 (sub_180064948.c)
 *     sub_180064A1C @ 0x180064A1C (sub_180064A1C.c)
 *     sub_18006A22C @ 0x18006A22C (sub_18006A22C.c)
 *     sub_18008F9C8 @ 0x18008F9C8 (sub_18008F9C8.c)
 *     sub_180095394 @ 0x180095394 (sub_180095394.c)
 *     sub_18009D5D4 @ 0x18009D5D4 (sub_18009D5D4.c)
 *     sub_18009D6BC @ 0x18009D6BC (sub_18009D6BC.c)
 *     sub_18009F094 @ 0x18009F094 (sub_18009F094.c)
 *     sub_18009F14C @ 0x18009F14C (sub_18009F14C.c)
 *     sub_1800A2C14 @ 0x1800A2C14 (sub_1800A2C14.c)
 *     sub_1800CBB64 @ 0x1800CBB64 (sub_1800CBB64.c)
 *     sub_1800CDC60 @ 0x1800CDC60 (sub_1800CDC60.c)
 *     sub_1800CDCA4 @ 0x1800CDCA4 (sub_1800CDCA4.c)
 *     sub_1800CEA90 @ 0x1800CEA90 (sub_1800CEA90.c)
 *     sub_1800CFCA4 @ 0x1800CFCA4 (sub_1800CFCA4.c)
 *     sub_1800CFDD0 @ 0x1800CFDD0 (sub_1800CFDD0.c)
 *     sub_1800D1734 @ 0x1800D1734 (sub_1800D1734.c)
 *     sub_1800D1780 @ 0x1800D1780 (sub_1800D1780.c)
 *     sub_1800D23A8 @ 0x1800D23A8 (sub_1800D23A8.c)
 *     sub_1800D3054 @ 0x1800D3054 (sub_1800D3054.c)
 *     sub_1800D30E8 @ 0x1800D30E8 (sub_1800D30E8.c)
 *     sub_18012CBC9 @ 0x18012CBC9 (sub_18012CBC9.c)
 * Callees:
 *     sub_1800D0D70 @ 0x1800D0D70 (sub_1800D0D70.c)
 *     sub_1800D0D88 @ 0x1800D0D88 (sub_1800D0D88.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
__int64 (__fastcall **__fastcall sub_18006403C(__int64 a1))()
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
  v2 = sub_1800D0D88(a1);
  sub_1800D0D70(v2, *(unsigned int *)(a1 + 48), 0LL, -1LL);
  _InterlockedExchangeAdd(&dword_18026B000[*(int *)(a1 + 44)], 0xFFFFFFFF);
  v3 = -*(_QWORD *)(a1 + 64);
  v4 = sub_1800D0D88(dword_18026B000);
  sub_1800D0D70(v4, *(unsigned int *)(a1 + 56), 2LL, v3);
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
    result = &off_1801DE0D0;
    *(_QWORD *)a1 = &off_1801DE0D0;
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
  return (__int64 (__fastcall **)())sub_180064110();
}
