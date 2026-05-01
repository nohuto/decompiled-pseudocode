/*
 * XREFs of ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x18006EDDC
 * Callers:
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000C540 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800232B0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?LaunchCompleted@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x18006EDC0 (-LaunchCompleted@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18014D540 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18015ADB0 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 * Callees:
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x180017534 (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800411FC (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005BF90 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvider.c)
 *     ??$?0PEBGPEBG@LaunchCompleted@SingleViewExperienceTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAPEBG1@Z @ 0x18006EEBC (--$-0PEBGPEBG@LaunchCompleted@SingleViewExperienceTelemetry@@AEAA@U-$integral_constant@D$0A@@wis.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18006F0AC (--1-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSingleViewShellExperience::LaunchCompleted(HSTRING *this)
{
  __int64 v2; // rdx
  PCWSTR StringRawBuffer; // [rsp+20h] [rbp-178h] BYREF
  _QWORD v4[3]; // [rsp+28h] [rbp-170h] BYREF
  _QWORD v5[40]; // [rsp+40h] [rbp-158h] BYREF

  v4[1] = -2LL;
  StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
  v4[0] = WindowsGetStringRawBuffer(this[1], 0LL);
  ((void (__fastcall *)(_QWORD *, __int64, _QWORD *, PCWSTR *))SingleViewExperienceTelemetry::LaunchCompleted::LaunchCompleted)(
    v5,
    v2,
    v4,
    &StringRawBuffer);
  CSingleViewShellExperience::UnboostPriority((__int64)this, 0);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v5);
  v5[0] = &SingleViewExperienceTelemetry::LaunchCompleted::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v5);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v5);
}
