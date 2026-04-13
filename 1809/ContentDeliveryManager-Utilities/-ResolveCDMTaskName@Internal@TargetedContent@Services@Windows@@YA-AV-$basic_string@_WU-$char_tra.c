/*
 * XREFs of ?ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x18006C6E0
 * Callers:
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006DA80 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 *     ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006DE40 (-RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerI.c)
 *     ?UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006E0FC (-UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTrigger.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180012CA4 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18003148C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800661EC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::ResolveCDMTaskName(_QWORD *a1, __int64 a2)
{
  int v3; // eax
  char *v4; // rdx
  unsigned __int64 v5; // r8
  void *Src; // [rsp+20h] [rbp-50h] BYREF
  __int64 v8; // [rsp+28h] [rbp-48h]
  __int64 v9; // [rsp+30h] [rbp-40h]
  __int64 v10; // [rsp+38h] [rbp-38h]
  void *v11[3]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v12; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v10 = -2LL;
  Src = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v3 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         (__int64)&Src,
         L"ContentDeliveryManager.Background.%s.TriggerManagerTask",
         a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x66,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x18006C7DCLL);
  }
  v4 = (char *)Src;
  Src = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  v12 = 7LL;
  v11[2] = 0LL;
  LOWORD(v11[0]) = 0;
  if ( *(_WORD *)v4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)&v4[2 * v5] );
  }
  else
  {
    v5 = 0LL;
  }
  std::wstring::assign(v11, v4, v5);
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  std::wstring::_Assign_rv(a1, v11);
  if ( v12 >= 8 )
    operator delete(v11[0]);
  return a1;
}
