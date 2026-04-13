/*
 * XREFs of ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006F910
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002E35C (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x18006E13C (-ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_tra.c)
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006E5B4 (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskConditionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006F43C (-GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA-AW4TaskConditionF.c)
 *     ?GetTaskOptionsFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskOptionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006F4F8 (-GetTaskOptionsFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA-AW4TaskOptionFlags@.c)
 *     ?GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA?AU_FILETIME@@PEB_W_N@Z @ 0x1800A961C (-GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA-AU_FILETIME@@PEB_W_N@Z.c)
 *     ?RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDateTime@Foundation@Windows@@IIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800AC43C (-RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDat.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Services::TargetedContent::Internal::RegisterTimerTrigger(__int64 a1, __int64 *a2)
{
  __int64 (__fastcall *v4)(__int64, HSTRING *); // rbx
  int v5; // eax
  CreativeFramework::CommonHelper::StringUtils *StringRawBuffer; // rax
  const wchar_t *v7; // rdx
  bool v8; // r8
  unsigned __int64 FileTimeFromString; // rax
  unsigned __int64 v10; // rbx
  void **v11; // rdx
  HSTRING_HEADER *v12; // rsi
  const WCHAR *v13; // rcx
  HSTRING_HEADER *v14; // rdi
  int v15; // r9d
  const char *v16; // r9
  volatile signed __int32 *v17; // rdi
  volatile signed __int32 *v19; // rdi
  HSTRING string; // [rsp+50h] [rbp-E8h] BYREF
  unsigned int v21; // [rsp+58h] [rbp-E0h]
  const WCHAR *v22; // [rsp+60h] [rbp-D8h] BYREF
  __int64 *v23; // [rsp+68h] [rbp-D0h]
  __int64 v24; // [rsp+70h] [rbp-C8h]
  __int64 v25; // [rsp+78h] [rbp-C0h] BYREF
  void *v26[3]; // [rsp+88h] [rbp-B0h] BYREF
  unsigned __int64 v27; // [rsp+A0h] [rbp-98h]
  void *v28[3]; // [rsp+A8h] [rbp-90h] BYREF
  unsigned __int64 v29; // [rsp+C0h] [rbp-78h]
  HSTRING_HEADER v30; // [rsp+C8h] [rbp-70h] BYREF
  HSTRING_HEADER v31; // [rsp+E8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  v24 = -2LL;
  v23 = a2;
  string = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 64LL);
  WindowsDeleteString(0LL);
  try
  {
    string = 0LL;
    v5 = v4(a1, &string);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1DD,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v5);
      JUMPOUT(0x18006FBC3LL);
    }
    StringRawBuffer = (CreativeFramework::CommonHelper::StringUtils *)WindowsGetStringRawBuffer(string, 0LL);
    FileTimeFromString = (unsigned __int64)CreativeFramework::CommonHelper::StringUtils::GetFileTimeFromString(
                                             StringRawBuffer,
                                             v7,
                                             v8);
    v10 = (unsigned int)FileTimeFromString + (HIDWORD(FileTimeFromString) << 32);
    Windows::Services::TargetedContent::Internal::GetTaskOptionsFlagsForTrigger(a1);
    Windows::Services::TargetedContent::Internal::GetTaskConditionFlagsForTrigger(a1);
    Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger((HSTRING)v28, a1);
    v11 = v28;
    if ( v29 >= 8 )
      v11 = (void **)v28[0];
    Windows::Services::TargetedContent::Internal::ResolveCDMTaskName(v26, (__int64)v11);
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, (const WCHAR **)&off_1800EEC60);
    v13 = (const WCHAR *)v26;
    if ( v27 >= 8 )
      v13 = (const WCHAR *)v26[0];
    v22 = v13;
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, &v22);
    std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
      &v25,
      a2);
    CreativeFramework::CommonHelper::RegisterBackgroundTaskWithAlarmTrigger(
      v14[1].Reserved.Reserved1,
      v12[1].Reserved.Reserved1,
      v10,
      v15);
    if ( v27 >= 8 )
      operator delete(v26[0]);
    v27 = 7LL;
    v26[2] = 0LL;
    LOWORD(v26[0]) = 0;
    if ( v29 >= 8 )
      operator delete(v28[0]);
    v29 = 7LL;
    v28[2] = 0LL;
    LOWORD(v28[0]) = 0;
    WindowsDeleteString(string);
  }
  catch ( ... )
  {
    v21 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x1E9,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
            v16);
    v19 = (volatile signed __int32 *)v23[1];
    if ( v19 && _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
    return v21;
  }
  string = 0LL;
  v17 = (volatile signed __int32 *)a2[1];
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  return 0LL;
}
