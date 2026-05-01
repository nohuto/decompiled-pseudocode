/*
 * XREFs of __tailMerge_api_ms_win_appmodel_state_l1_2_0_dll @ 0x1000CFA2
 * Callers:
 *     __imp_load__CloseState@4 @ 0x1000CF98 (__imp_load__CloseState@4.c)
 *     __imp_load__GetSystemAppDataKey@16 @ 0x1000CFB3 (__imp_load__GetSystemAppDataKey@16.c)
 *     __imp_load__OpenStateExplicitForUserSid@8 @ 0x1000CFBD (__imp_load__OpenStateExplicitForUserSid@8.c)
 * Callees:
 *     ___delayLoadHelper2@8 @ 0x10007551 (___delayLoadHelper2@8.c)
 */

int __usercall _tailMerge_api_ms_win_appmodel_state_l1_2_0_dll@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int (__fastcall *Helper2)(int, int); // eax

  Helper2 = (int (__fastcall *)(int, int))__delayLoadHelper2(
                                            (int)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_appmodel_state_l1_2_0_dll,
                                            a1);
  return Helper2(a3, a2);
}
