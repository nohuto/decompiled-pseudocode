/*
 * XREFs of sub_18011E090 @ 0x18011E090
 * Callers:
 *     sub_1800630A0 @ 0x1800630A0 (sub_1800630A0.c)
 *     sub_180067114 @ 0x180067114 (sub_180067114.c)
 *     sub_18006717C @ 0x18006717C (sub_18006717C.c)
 *     sub_18006C250 @ 0x18006C250 (sub_18006C250.c)
 *     sub_18006C570 @ 0x18006C570 (sub_18006C570.c)
 *     sub_1800748FC @ 0x1800748FC (sub_1800748FC.c)
 *     sub_18007DF20 @ 0x18007DF20 (sub_18007DF20.c)
 *     sub_18008949C @ 0x18008949C (sub_18008949C.c)
 *     sub_1800A7C0C @ 0x1800A7C0C (sub_1800A7C0C.c)
 *     sub_1800D4F78 @ 0x1800D4F78 (sub_1800D4F78.c)
 *     sub_1800D5028 @ 0x1800D5028 (sub_1800D5028.c)
 *     sub_1800D51CC @ 0x1800D51CC (sub_1800D51CC.c)
 *     sub_180109108 @ 0x180109108 (sub_180109108.c)
 *     sub_18010A120 @ 0x18010A120 (sub_18010A120.c)
 * Callees:
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x180127428 (_Mtx_destroy_in_situ.c)
 *     _Cnd_destroy_in_situ @ 0x180127532 (_Cnd_destroy_in_situ.c)
 */

__int64 __fastcall sub_18011E090(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    Cnd_destroy_in_situ((_Cnd_t)(v1 + 152));
    Cnd_destroy_in_situ((_Cnd_t)(v1 + 80));
    Mtx_destroy_in_situ((_Mtx_t)v1);
    return j__o_free(v1);
  }
  return result;
}
