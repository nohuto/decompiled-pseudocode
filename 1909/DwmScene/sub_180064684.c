/*
 * XREFs of sub_180064684 @ 0x180064684
 * Callers:
 *     sub_18003A0C0 @ 0x18003A0C0 (sub_18003A0C0.c)
 *     sub_18003AF44 @ 0x18003AF44 (sub_18003AF44.c)
 *     sub_180064BFC @ 0x180064BFC (sub_180064BFC.c)
 *     sub_180064DAC @ 0x180064DAC (sub_180064DAC.c)
 *     sub_18006CA18 @ 0x18006CA18 (sub_18006CA18.c)
 *     sub_18007636C @ 0x18007636C (sub_18007636C.c)
 *     sub_18007643C @ 0x18007643C (sub_18007643C.c)
 *     sub_180094CE0 @ 0x180094CE0 (sub_180094CE0.c)
 *     sub_180094DB8 @ 0x180094DB8 (sub_180094DB8.c)
 *     sub_180094E90 @ 0x180094E90 (sub_180094E90.c)
 *     sub_180095E9C @ 0x180095E9C (sub_180095E9C.c)
 *     sub_180096A58 @ 0x180096A58 (sub_180096A58.c)
 *     sub_180096FA0 @ 0x180096FA0 (sub_180096FA0.c)
 *     sub_1800970AC @ 0x1800970AC (sub_1800970AC.c)
 *     sub_180097678 @ 0x180097678 (sub_180097678.c)
 *     sub_18009DF38 @ 0x18009DF38 (sub_18009DF38.c)
 *     sub_18009E070 @ 0x18009E070 (sub_18009E070.c)
 *     sub_18009F6C0 @ 0x18009F6C0 (sub_18009F6C0.c)
 *     sub_1800CC1A0 @ 0x1800CC1A0 (sub_1800CC1A0.c)
 *     sub_1800CDB88 @ 0x1800CDB88 (sub_1800CDB88.c)
 *     sub_1800D0458 @ 0x1800D0458 (sub_1800D0458.c)
 *     sub_1800D07C8 @ 0x1800D07C8 (sub_1800D07C8.c)
 *     sub_1800D08D8 @ 0x1800D08D8 (sub_1800D08D8.c)
 *     sub_1800D0968 @ 0x1800D0968 (sub_1800D0968.c)
 *     sub_1800F75B8 @ 0x1800F75B8 (sub_1800F75B8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180064684(__int64 a1, int a2, char a3)
{
  unsigned int v3; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 40);
  if ( a3 )
    result = a2 | v3;
  else
    result = ~a2 & v3;
  *(_DWORD *)(a1 + 40) = result;
  return result;
}
