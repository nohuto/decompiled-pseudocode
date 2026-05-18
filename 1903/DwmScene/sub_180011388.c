/*
 * XREFs of sub_180011388 @ 0x180011388
 * Callers:
 *     sub_18000FFA8 @ 0x18000FFA8 (sub_18000FFA8.c)
 *     sub_180010500 @ 0x180010500 (sub_180010500.c)
 *     sub_180040210 @ 0x180040210 (sub_180040210.c)
 *     sub_180064C9C @ 0x180064C9C (sub_180064C9C.c)
 *     sub_18006B808 @ 0x18006B808 (sub_18006B808.c)
 *     sub_18006C250 @ 0x18006C250 (sub_18006C250.c)
 *     sub_18006DED8 @ 0x18006DED8 (sub_18006DED8.c)
 *     sub_18006DEFC @ 0x18006DEFC (sub_18006DEFC.c)
 *     sub_18006E080 @ 0x18006E080 (sub_18006E080.c)
 *     sub_18006E1B8 @ 0x18006E1B8 (sub_18006E1B8.c)
 *     sub_180071CEC @ 0x180071CEC (sub_180071CEC.c)
 *     sub_1800748FC @ 0x1800748FC (sub_1800748FC.c)
 *     sub_180074F10 @ 0x180074F10 (sub_180074F10.c)
 *     sub_18007A17C @ 0x18007A17C (sub_18007A17C.c)
 *     sub_18007C144 @ 0x18007C144 (sub_18007C144.c)
 *     sub_18007E018 @ 0x18007E018 (sub_18007E018.c)
 *     sub_18007E340 @ 0x18007E340 (sub_18007E340.c)
 *     sub_18007F144 @ 0x18007F144 (sub_18007F144.c)
 *     sub_1800817FC @ 0x1800817FC (sub_1800817FC.c)
 *     sub_180082530 @ 0x180082530 (sub_180082530.c)
 *     sub_18009DF60 @ 0x18009DF60 (sub_18009DF60.c)
 *     sub_18009F5B0 @ 0x18009F5B0 (sub_18009F5B0.c)
 *     sub_18009F8B0 @ 0x18009F8B0 (sub_18009F8B0.c)
 *     sub_1800A3068 @ 0x1800A3068 (sub_1800A3068.c)
 *     sub_1800AEF3C @ 0x1800AEF3C (sub_1800AEF3C.c)
 *     sub_1800B37CC @ 0x1800B37CC (sub_1800B37CC.c)
 *     sub_1800BB184 @ 0x1800BB184 (sub_1800BB184.c)
 *     sub_1800BB35C @ 0x1800BB35C (sub_1800BB35C.c)
 *     sub_1800C32B0 @ 0x1800C32B0 (sub_1800C32B0.c)
 *     sub_1800CC090 @ 0x1800CC090 (sub_1800CC090.c)
 *     sub_1800CE4E8 @ 0x1800CE4E8 (sub_1800CE4E8.c)
 *     sub_1800D0348 @ 0x1800D0348 (sub_1800D0348.c)
 *     sub_1800D1CB0 @ 0x1800D1CB0 (sub_1800D1CB0.c)
 *     sub_1800D27B0 @ 0x1800D27B0 (sub_1800D27B0.c)
 *     sub_1800DB318 @ 0x1800DB318 (sub_1800DB318.c)
 *     sub_1800DBE50 @ 0x1800DBE50 (sub_1800DBE50.c)
 *     sub_1800EB6E0 @ 0x1800EB6E0 (sub_1800EB6E0.c)
 *     sub_1800EC680 @ 0x1800EC680 (sub_1800EC680.c)
 *     sub_1800EF620 @ 0x1800EF620 (sub_1800EF620.c)
 *     sub_1800F09C8 @ 0x1800F09C8 (sub_1800F09C8.c)
 *     sub_1801040CC @ 0x1801040CC (sub_1801040CC.c)
 *     sub_18010A4A8 @ 0x18010A4A8 (sub_18010A4A8.c)
 *     sub_18010BA84 @ 0x18010BA84 (sub_18010BA84.c)
 *     sub_18010BCA0 @ 0x18010BCA0 (sub_18010BCA0.c)
 *     sub_18010C4D8 @ 0x18010C4D8 (sub_18010C4D8.c)
 *     sub_18010DC70 @ 0x18010DC70 (sub_18010DC70.c)
 *     sub_18011212C @ 0x18011212C (sub_18011212C.c)
 *     sub_18011E7B0 @ 0x18011E7B0 (sub_18011E7B0.c)
 *     sub_18012D832 @ 0x18012D832 (sub_18012D832.c)
 *     sub_1801303EF @ 0x1801303EF (sub_1801303EF.c)
 *     sub_180133309 @ 0x180133309 (sub_180133309.c)
 * Callees:
 *     unknown_libname_115 @ 0x1800100A8 (unknown_libname_115.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_180011388(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v1 != v3 )
    {
      do
      {
        unknown_libname_115(v1, 0);
        v1 += 16LL;
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    v4 = (a1[2] - v1) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v4 >= 0x1000 )
    {
      v5 = *(_QWORD *)(v1 - 8);
      v6 = v4 + 39;
      if ( (unsigned __int64)(v1 - v5 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v5, v6);
        JUMPOUT(0x180011419LL);
      }
      v1 = *(_QWORD *)(v1 - 8);
    }
    result = j_j__o_free(v1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
