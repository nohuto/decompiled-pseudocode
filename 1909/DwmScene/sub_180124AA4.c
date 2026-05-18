/*
 * XREFs of sub_180124AA4 @ 0x180124AA4
 * Callers:
 *     sub_180124968 @ 0x180124968 (sub_180124968.c)
 * Callees:
 *     sub_18006DF24 @ 0x18006DF24 (sub_18006DF24.c)
 *     _Mtx_init_in_situ @ 0x180127532 (_Mtx_init_in_situ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180124AA4(__int64 a1)
{
  *(_QWORD *)a1 = &Spectre::Utils::Internal::SimpleCancellationToken::`vftable';
  Mtx_init_in_situ((_Mtx_t)(a1 + 8), 2);
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 96) = sub_18006DF24();
  *(_BYTE *)(a1 + 112) = 0;
  return a1;
}
