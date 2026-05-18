/*
 * XREFs of sub_1800B3698 @ 0x1800B3698
 * Callers:
 *     sub_18007315C @ 0x18007315C (sub_18007315C.c)
 * Callees:
 *     sub_18002B6D4 @ 0x18002B6D4 (sub_18002B6D4.c)
 *     sub_1800B3F74 @ 0x1800B3F74 (sub_1800B3F74.c)
 *     _Mtx_init_in_situ @ 0x180127422 (_Mtx_init_in_situ.c)
 *     _Cnd_init_in_situ @ 0x18012752C (_Cnd_init_in_situ.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800B3698(__int64 a1, __int64 a2, int a3, int a4)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 32) = a3;
  *(_DWORD *)(a1 + 36) = a4;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 88) = sub_18002B6D4();
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  *(_BYTE *)(a1 + 120) = 0;
  Mtx_init_in_situ((_Mtx_t)(a1 + 128), 2);
  Cnd_init_in_situ((_Cnd_t)(a1 + 208));
  Cnd_init_in_situ((_Cnd_t)(a1 + 280));
  Cnd_init_in_situ((_Cnd_t)(a1 + 352));
  *(_WORD *)(a1 + 424) = 0;
  *(_BYTE *)(a1 + 426) = 0;
  *(_DWORD *)(a1 + 428) = -1;
  *(_WORD *)(a1 + 432) = 256;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_DWORD *)(a1 + 448) = 0;
  if ( *(_DWORD *)(a1 + 36) == 1 )
    sub_1800B3F74(a1);
  return a1;
}
