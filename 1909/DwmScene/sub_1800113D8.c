/*
 * XREFs of sub_1800113D8 @ 0x1800113D8
 * Callers:
 *     sub_18000FFF8 @ 0x18000FFF8 (sub_18000FFF8.c)
 *     sub_180010550 @ 0x180010550 (sub_180010550.c)
 *     sub_180040320 @ 0x180040320 (sub_180040320.c)
 *     sub_180064DAC @ 0x180064DAC (sub_180064DAC.c)
 *     sub_18006B918 @ 0x18006B918 (sub_18006B918.c)
 *     sub_18006C360 @ 0x18006C360 (sub_18006C360.c)
 *     sub_18006DFE8 @ 0x18006DFE8 (sub_18006DFE8.c)
 *     sub_18006E00C @ 0x18006E00C (sub_18006E00C.c)
 *     sub_18006E190 @ 0x18006E190 (sub_18006E190.c)
 *     sub_18006E2C8 @ 0x18006E2C8 (sub_18006E2C8.c)
 *     sub_180071DFC @ 0x180071DFC (sub_180071DFC.c)
 *     sub_180074A0C @ 0x180074A0C (sub_180074A0C.c)
 *     sub_180075020 @ 0x180075020 (sub_180075020.c)
 *     sub_18007A28C @ 0x18007A28C (sub_18007A28C.c)
 *     sub_18007C254 @ 0x18007C254 (sub_18007C254.c)
 *     sub_18007E128 @ 0x18007E128 (sub_18007E128.c)
 *     sub_18007E450 @ 0x18007E450 (sub_18007E450.c)
 *     sub_18007F254 @ 0x18007F254 (sub_18007F254.c)
 *     sub_18008190C @ 0x18008190C (sub_18008190C.c)
 *     sub_180082640 @ 0x180082640 (sub_180082640.c)
 *     sub_18009E070 @ 0x18009E070 (sub_18009E070.c)
 *     sub_18009F6C0 @ 0x18009F6C0 (sub_18009F6C0.c)
 *     sub_18009F9C0 @ 0x18009F9C0 (sub_18009F9C0.c)
 *     sub_1800A3178 @ 0x1800A3178 (sub_1800A3178.c)
 *     sub_1800AF04C @ 0x1800AF04C (sub_1800AF04C.c)
 *     sub_1800B38DC @ 0x1800B38DC (sub_1800B38DC.c)
 *     sub_1800BB294 @ 0x1800BB294 (sub_1800BB294.c)
 *     sub_1800BB46C @ 0x1800BB46C (sub_1800BB46C.c)
 *     sub_1800C33C0 @ 0x1800C33C0 (sub_1800C33C0.c)
 *     sub_1800CC1A0 @ 0x1800CC1A0 (sub_1800CC1A0.c)
 *     sub_1800CE5F8 @ 0x1800CE5F8 (sub_1800CE5F8.c)
 *     sub_1800D0458 @ 0x1800D0458 (sub_1800D0458.c)
 *     sub_1800D1DC0 @ 0x1800D1DC0 (sub_1800D1DC0.c)
 *     sub_1800D28C0 @ 0x1800D28C0 (sub_1800D28C0.c)
 *     sub_1800DB428 @ 0x1800DB428 (sub_1800DB428.c)
 *     sub_1800DBF60 @ 0x1800DBF60 (sub_1800DBF60.c)
 *     sub_1800EB7F0 @ 0x1800EB7F0 (sub_1800EB7F0.c)
 *     sub_1800EC790 @ 0x1800EC790 (sub_1800EC790.c)
 *     sub_1800EF730 @ 0x1800EF730 (sub_1800EF730.c)
 *     sub_1800F0AD8 @ 0x1800F0AD8 (sub_1800F0AD8.c)
 *     sub_1801041DC @ 0x1801041DC (sub_1801041DC.c)
 *     sub_18010A5B8 @ 0x18010A5B8 (sub_18010A5B8.c)
 *     sub_18010BB94 @ 0x18010BB94 (sub_18010BB94.c)
 *     sub_18010BDB0 @ 0x18010BDB0 (sub_18010BDB0.c)
 *     sub_18010C5E8 @ 0x18010C5E8 (sub_18010C5E8.c)
 *     sub_18010DD80 @ 0x18010DD80 (sub_18010DD80.c)
 *     sub_18011223C @ 0x18011223C (sub_18011223C.c)
 *     sub_18011E8C0 @ 0x18011E8C0 (sub_18011E8C0.c)
 *     sub_18012D942 @ 0x18012D942 (sub_18012D942.c)
 *     sub_1801304FF @ 0x1801304FF (sub_1801304FF.c)
 *     sub_180133419 @ 0x180133419 (sub_180133419.c)
 * Callees:
 *     unknown_libname_115 @ 0x1800100F8 (unknown_libname_115.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800113D8(__int64 *a1)
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
        JUMPOUT(0x180011469LL);
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
