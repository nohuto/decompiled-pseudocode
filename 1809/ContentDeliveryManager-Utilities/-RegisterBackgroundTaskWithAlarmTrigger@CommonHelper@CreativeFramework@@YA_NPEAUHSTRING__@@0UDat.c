/*
 * XREFs of ?RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDateTime@Foundation@Windows@@IIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800A83B8
 * Callers:
 *     ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006DE40 (-RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerI.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000480C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002D504 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A766C (-RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgro.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall CreativeFramework::CommonHelper::RegisterBackgroundTaskWithAlarmTrigger(
        HSTRING a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        __int64 *a8)
{
  HRESULT v11; // eax
  int ActivationFactory; // eax
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rbx
  __int64 *v19; // rax
  char v20; // si
  volatile signed __int32 *v21; // rbx
  __int64 v23; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v24; // [rsp+48h] [rbp-99h] BYREF
  __int128 v25; // [rsp+50h] [rbp-91h]
  int v26; // [rsp+60h] [rbp-81h]
  __int64 v27; // [rsp+68h] [rbp-79h] BYREF
  __int64 v28; // [rsp+70h] [rbp-71h]
  __int64 v29[3]; // [rsp+78h] [rbp-69h] BYREF
  __int128 v30; // [rsp+90h] [rbp-51h] BYREF
  int v31; // [rsp+A0h] [rbp-41h]
  __int64 v32; // [rsp+B0h] [rbp-31h]
  __int64 *v33; // [rsp+B8h] [rbp-29h]
  HSTRING_HEADER hstringHeader; // [rsp+C0h] [rbp-21h] BYREF
  HSTRING string; // [rsp+D8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+37h]

  v32 = -2LL;
  v33 = a8;
  v23 = 0LL;
  string = 0LL;
  v11 = WindowsCreateStringReference(
          L"Windows.ApplicationModel.Background.AlarmTrigger",
          0x30u,
          &hstringHeader,
          &string);
  if ( v11 < 0 )
    goto LABEL_18;
  v23 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_4725971e_c31d_4857_b33b_50779cf665c1, &v23);
  v13 = retaddr;
  if ( ActivationFactory < 0 )
  {
LABEL_19:
    wil::details::in1diag3::Throw_Hr(
      v13,
      (void *)0x108,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory);
LABEL_20:
    wil::details::in1diag3::Throw_Hr(
      v15,
      (void *)0x111,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  v24 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _BYTE, bool, __int64 *))(*(_QWORD *)v23 + 48LL))(
          v23,
          a3,
          0LL,
          2LL,
          0,
          (a7 & 8) != 0,
          &v24);
  v15 = retaddr;
  if ( v14 < 0 )
    goto LABEL_20;
  *(_QWORD *)&v25 = 0LL;
  *((_QWORD *)&v25 + 1) = 0x4805800000000LL;
  v26 = 1100;
  v30 = v25;
  v31 = 1100;
  v16 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v24 + 48LL))(v24, &v30);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x116,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v16);
    JUMPOUT(0x1800A8655LL);
  }
  v28 = 0LL;
  v17 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v24)(
          v24,
          &GUID_84b3a058_6027_4b87_9790_bdf3f757dbd7,
          &v27);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v17);
LABEL_18:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
    goto LABEL_19;
  }
  v18 = v27;
  v28 = v27;
  v19 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
          v29,
          a8);
  v20 = CreativeFramework::CommonHelper::RegisterBackgroundTaskIfNeeded(a1, a2, v18, a6, 0, v19);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v21 = (volatile signed __int32 *)a8[1];
  if ( v21 )
  {
    if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
      if ( !_InterlockedDecrement(v21 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    }
  }
  return v20;
}
