/*
 * XREFs of sub_1800676B8 @ 0x1800676B8
 * Callers:
 *     sub_180066498 @ 0x180066498 (sub_180066498.c)
 *     sub_180069760 @ 0x180069760 (sub_180069760.c)
 *     sub_180069788 @ 0x180069788 (sub_180069788.c)
 *     sub_1800697E8 @ 0x1800697E8 (sub_1800697E8.c)
 *     sub_180069B40 @ 0x180069B40 (sub_180069B40.c)
 *     sub_180069BD8 @ 0x180069BD8 (sub_180069BD8.c)
 *     sub_180069E74 @ 0x180069E74 (sub_180069E74.c)
 *     sub_180069FA8 @ 0x180069FA8 (sub_180069FA8.c)
 *     sub_18007E338 @ 0x18007E338 (sub_18007E338.c)
 *     sub_18007E838 @ 0x18007E838 (sub_18007E838.c)
 *     sub_18007EDD0 @ 0x18007EDD0 (sub_18007EDD0.c)
 *     sub_1800A5CCC @ 0x1800A5CCC (sub_1800A5CCC.c)
 *     sub_1800A5E70 @ 0x1800A5E70 (sub_1800A5E70.c)
 *     sub_1800A620C @ 0x1800A620C (sub_1800A620C.c)
 *     sub_1800BC470 @ 0x1800BC470 (sub_1800BC470.c)
 *     sub_1800CB048 @ 0x1800CB048 (sub_1800CB048.c)
 *     sub_1800D1158 @ 0x1800D1158 (sub_1800D1158.c)
 *     sub_1800D1700 @ 0x1800D1700 (sub_1800D1700.c)
 *     sub_1800D20C4 @ 0x1800D20C4 (sub_1800D20C4.c)
 *     sub_1800D3D98 @ 0x1800D3D98 (sub_1800D3D98.c)
 *     sub_1800D48B8 @ 0x1800D48B8 (sub_1800D48B8.c)
 *     sub_1800D9558 @ 0x1800D9558 (sub_1800D9558.c)
 *     sub_1800DA028 @ 0x1800DA028 (sub_1800DA028.c)
 *     sub_1800DA108 @ 0x1800DA108 (sub_1800DA108.c)
 *     sub_1800DA2DC @ 0x1800DA2DC (sub_1800DA2DC.c)
 *     sub_1800F39E8 @ 0x1800F39E8 (sub_1800F39E8.c)
 *     sub_1800F3BAC @ 0x1800F3BAC (sub_1800F3BAC.c)
 *     sub_1800F3C14 @ 0x1800F3C14 (sub_1800F3C14.c)
 *     sub_18010A464 @ 0x18010A464 (sub_18010A464.c)
 *     sub_18010D6EC @ 0x18010D6EC (sub_18010D6EC.c)
 *     sub_18010DD10 @ 0x18010DD10 (sub_18010DD10.c)
 *     sub_180111CE8 @ 0x180111CE8 (sub_180111CE8.c)
 *     sub_180111D28 @ 0x180111D28 (sub_180111D28.c)
 * Callees:
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 *__fastcall sub_1800676B8(__int64 *a1, char a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx

  v4 = a1[3];
  if ( v4 >= 0x10 )
  {
    v5 = *a1;
    v6 = v4 + 1;
    if ( v6 >= 0x1000 )
    {
      v7 = *(_QWORD *)(v5 - 8);
      v8 = v6 + 39;
      v9 = v5 - v7;
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v8);
        JUMPOUT(0x18006772FLL);
      }
      v5 = v7;
    }
    j_j__o_free(v5);
  }
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
