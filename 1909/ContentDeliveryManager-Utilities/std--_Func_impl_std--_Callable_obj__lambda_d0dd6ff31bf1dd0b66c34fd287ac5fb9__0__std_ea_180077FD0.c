/*
 * XREFs of std::_Func_impl_std::_Callable_obj__lambda_d0dd6ff31bf1dd0b66c34fd287ac5fb9__0__std::allocator_std::_Func_class_bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x180077FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResolveTriggerStateFromName@Internal@TargetedContent@Services@Windows@@YA?AW4TargetedContentTriggerState@1234@PEB_W@Z @ 0x180070980 (-ResolveTriggerStateFromName@Internal@TargetedContent@Services@Windows@@YA-AW4TargetedContentTri.c)
 *     ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x1800718BC (-GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@Cr.c)
 *     ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x180072F14 (-EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV-$function.c)
 *     ??2@YAPEAX_K@Z @ 0x1800ADED8 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800AE0C8 (-_Xbad_alloc@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall std::_Func_impl_std::_Callable_obj__lambda_d0dd6ff31bf1dd0b66c34fd287ac5fb9__0__std::allocator_std::_Func_class_bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int128 v3; // rcx
  HSTRING *v5; // r9
  HSTRING *v6; // r9
  const WCHAR *StringRawBuffer; // rax
  __int64 v8; // rdx
  char *v9; // rax
  char *v10; // rax
  volatile signed __int32 *v11; // rdi
  __int128 v13; // [rsp+20h] [rbp-39h] BYREF
  __int128 v14; // [rsp+30h] [rbp-29h]
  __int128 v15; // [rsp+40h] [rbp-19h]
  __int128 v16; // [rsp+50h] [rbp-9h]
  __int64 v17; // [rsp+60h] [rbp+7h]
  __int128 *v18; // [rsp+68h] [rbp+Fh]
  _BYTE *v19; // [rsp+70h] [rbp+17h]
  _BYTE v20[24]; // [rsp+78h] [rbp+1Fh] BYREF
  char *v21; // [rsp+90h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  int v23; // [rsp+C0h] [rbp+67h] BYREF
  HSTRING v24; // [rsp+C8h] [rbp+6Fh] BYREF
  HSTRING string; // [rsp+D8h] [rbp+7Fh] BYREF

  v17 = -2LL;
  *((_QWORD *)&v3 + 1) = a3;
  v13 = 0LL;
  if ( &v13 != (__int128 *)a2 )
  {
    *((_QWORD *)&v13 + 1) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)&v13 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v18 = &v13;
  v24 = 0LL;
  WindowsDeleteString(0LL);
  v24 = 0LL;
  if ( Windows::Services::TargetedContent::Internal::GetStringValue(
         *((Windows::Services::TargetedContent::Internal **)&v3 + 1),
         (struct CreativeFramework::Triggers::PropertySetHelper *)L"StateTransitions",
         (const wchar_t *)&v24,
         v5) )
  {
    string = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
            *((Windows::Services::TargetedContent::Internal **)&v3 + 1),
            (struct CreativeFramework::Triggers::PropertySetHelper *)L"triggerState",
            (const wchar_t *)&string,
            v6) )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x23F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)0x80070490LL);
      JUMPOUT(0x1800781A8LL);
    }
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v23 = Windows::Services::TargetedContent::Internal::ResolveTriggerStateFromName(StringRawBuffer);
    v19 = v20;
    v8 = a1[3];
    *(_QWORD *)&v3 = a1[2];
    *(_QWORD *)&v14 = a1[1];
    *((_QWORD *)&v14 + 1) = &v23;
    v15 = v3;
    *(_QWORD *)&v16 = v8;
    *((_QWORD *)&v16 + 1) = &v13;
    v21 = 0LL;
    v9 = (char *)operator new(0x40uLL);
    if ( !v9 )
      std::_Xbad_alloc();
    *(_QWORD *)v9 = off_1800E4298;
    *(_OWORD *)(v9 + 8) = v14;
    *(_OWORD *)(v9 + 24) = v15;
    *(_OWORD *)(v9 + 40) = v16;
    v21 = v9;
    v10 = (char *)WindowsGetStringRawBuffer(v24, 0LL);
    Windows::Services::TargetedContent::Internal::EnumerateTriggerStateTransitions(v10, (__int64)v20);
    WindowsDeleteString(string);
    string = 0LL;
  }
  WindowsDeleteString(v24);
  v24 = 0LL;
  v11 = (volatile signed __int32 *)*((_QWORD *)&v13 + 1);
  if ( *((_QWORD *)&v13 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( !_InterlockedDecrement(v11 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return 1;
}
