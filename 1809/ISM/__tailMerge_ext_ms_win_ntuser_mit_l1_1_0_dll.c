/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll @ 0x18012C8AC
 * Callers:
 *     __imp_load_MITRegisterManipulationThread @ 0x18012C8A0 (__imp_load_MITRegisterManipulationThread.c)
 *     __imp_load_MITSetManipulationInputTarget @ 0x18012C92B (__imp_load_MITSetManipulationInputTarget.c)
 *     __imp_load_MITStopAndEndInertia @ 0x18012C93D (__imp_load_MITStopAndEndInertia.c)
 *     __imp_load_MITCoreMsgKOpenConnectionTo @ 0x18012D1A0 (__imp_load_MITCoreMsgKOpenConnectionTo.c)
 *     __imp_load_MITEnableMouseIntercept @ 0x18012D1B2 (__imp_load_MITEnableMouseIntercept.c)
 *     __imp_load_MITDisableMouseIntercept @ 0x18012D1C4 (__imp_load_MITDisableMouseIntercept.c)
 *     __imp_load_MITUpdateInputGlobals @ 0x18012D1D6 (__imp_load_MITUpdateInputGlobals.c)
 *     __imp_load_MITSetInputCallbacks @ 0x18012D1E8 (__imp_load_MITSetInputCallbacks.c)
 *     __imp_load_MITSetInputDelegationMode @ 0x18012D1FA (__imp_load_MITSetInputDelegationMode.c)
 *     __imp_load_MITSetForegroundRoutingInfo @ 0x18012D20C (__imp_load_MITSetForegroundRoutingInfo.c)
 *     __imp_load_MITSetLastInputRecipient @ 0x18012D589 (__imp_load_MITSetLastInputRecipient.c)
 *     __imp_load_MITSynthesizeMouseInput @ 0x18012D59B (__imp_load_MITSynthesizeMouseInput.c)
 *     __imp_load_MITSynthesizeTouchInput @ 0x18012D5AD (__imp_load_MITSynthesizeTouchInput.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18009F810 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_mit_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
