/*
 * XREFs of _Windows::Services::TargetedContent::Internal::CreateTriggerRegistrationFromSetting_::_1_::catch$10 @ 0x1800D0E71
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035FC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Services::TargetedContent::Internal::CreateTriggerRegistrationFromSetting_::_1_::catch_10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 200) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 184),
                            (void *)0x1A8,
                            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                            a4);
  return &loc_180073BA4;
}
