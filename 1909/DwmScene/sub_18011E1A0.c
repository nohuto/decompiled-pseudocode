/*
 * XREFs of sub_18011E1A0 @ 0x18011E1A0
 * Callers:
 *     sub_1800631B0 @ 0x1800631B0 (sub_1800631B0.c)
 *     sub_180067224 @ 0x180067224 (sub_180067224.c)
 *     sub_18006728C @ 0x18006728C (sub_18006728C.c)
 *     sub_18006C360 @ 0x18006C360 (sub_18006C360.c)
 *     sub_18006C680 @ 0x18006C680 (sub_18006C680.c)
 *     sub_180074A0C @ 0x180074A0C (sub_180074A0C.c)
 *     sub_18007E030 @ 0x18007E030 (sub_18007E030.c)
 *     sub_1800895AC @ 0x1800895AC (sub_1800895AC.c)
 *     sub_1800A7D1C @ 0x1800A7D1C (sub_1800A7D1C.c)
 *     sub_1800D5088 @ 0x1800D5088 (sub_1800D5088.c)
 *     sub_1800D5138 @ 0x1800D5138 (sub_1800D5138.c)
 *     sub_1800D52DC @ 0x1800D52DC (sub_1800D52DC.c)
 *     sub_180109218 @ 0x180109218 (sub_180109218.c)
 *     sub_18010A230 @ 0x18010A230 (sub_18010A230.c)
 * Callees:
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x180127538 (_Mtx_destroy_in_situ.c)
 *     _Cnd_destroy_in_situ @ 0x180127642 (_Cnd_destroy_in_situ.c)
 */

__int64 __fastcall sub_18011E1A0(__int64 *a1)
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
