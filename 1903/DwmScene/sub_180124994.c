/*
 * XREFs of sub_180124994 @ 0x180124994
 * Callers:
 *     sub_180124858 @ 0x180124858 (sub_180124858.c)
 * Callees:
 *     sub_18006DE14 @ 0x18006DE14 (sub_18006DE14.c)
 *     _Mtx_init_in_situ @ 0x180127422 (_Mtx_init_in_situ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180124994(__int64 a1)
{
  *(_QWORD *)a1 = &Spectre::Utils::Internal::SimpleCancellationToken::`vftable';
  Mtx_init_in_situ((_Mtx_t)(a1 + 8), 2);
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 96) = sub_18006DE14();
  *(_BYTE *)(a1 + 112) = 0;
  return a1;
}
