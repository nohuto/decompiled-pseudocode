/*
 * XREFs of Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_9989ec116c7a722ef409e952aab4eb08___ @ 0x18006A834
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_311bfc761077399e03144c1d22cc53cd__0__std::allocator_std::_Func_class_void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal___enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal___enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x18006D020 (std--_Func_impl_std--_Callable_obj__lambda_311bfc761077399e03144c1d22cc53cd__0__std_ea_18006D020.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$TriggerStateTransition@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WPEB_WPEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W000$$QEAPEB_W1PEBD@Z @ 0x18006A60C (--$TriggerStateTransition@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WPEB_WPEB_W@ContentDeliveryManagerTelem.c)
 *     ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x18006E244 (-ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnown.c)
 *     ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006E3EC (-GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsof.c)
 *     ?ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentTriggerState@1234@@Z @ 0x18007092C (-ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContent.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_9989ec116c7a722ef409e952aab4eb08___(
        __int64 a1,
        unsigned int **a2)
{
  __int64 (*v4)(void); // rbx
  int v5; // eax
  __int64 (__fastcall *v6)(__int64, HSTRING *); // rbx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 (__fastcall *v9)(__int64, HSTRING *); // rbx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 (__fastcall *v12)(__int64, HSTRING *); // rbx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 (__fastcall *v15)(__int64, HSTRING *); // rbx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 (__fastcall *v18)(__int64, HSTRING *); // rbx
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  HSTRING v23; // rbx
  HSTRING v24; // rdi
  HSTRING v25; // rsi
  HSTRING v26; // r14
  HSTRING v27; // r15
  HSTRING v28; // r12
  const char *v29; // r9
  __int64 result; // rax
  HSTRING v31; // [rsp+40h] [rbp-98h] BYREF
  HSTRING v32; // [rsp+48h] [rbp-90h] BYREF
  HSTRING v33; // [rsp+50h] [rbp-88h] BYREF
  HSTRING string; // [rsp+58h] [rbp-80h]
  HSTRING v35; // [rsp+60h] [rbp-78h] BYREF
  const WCHAR *v36; // [rsp+68h] [rbp-70h] BYREF
  const WCHAR *v37; // [rsp+70h] [rbp-68h] BYREF
  PCWSTR StringRawBuffer; // [rsp+78h] [rbp-60h] BYREF
  PCWSTR v39; // [rsp+80h] [rbp-58h] BYREF
  const WCHAR *v40; // [rsp+88h] [rbp-50h] BYREF
  const WCHAR *v41[9]; // [rsp+90h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  unsigned int v43; // [rsp+E0h] [rbp+8h] BYREF
  HSTRING v44; // [rsp+F0h] [rbp+18h] BYREF
  HSTRING v45; // [rsp+F8h] [rbp+20h] BYREF

  v41[1] = (const WCHAR *)-2LL;
  string = 0LL;
  v4 = *(__int64 (**)(void))(*(_QWORD *)a1 + 48LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  try
  {
    v5 = v4();
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x47,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v5);
    }
    else
    {
      v33 = 0LL;
      v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 176LL);
      WindowsDeleteString(0LL);
      v33 = 0LL;
      v7 = v6(a1, &v33);
      v8 = retaddr;
      if ( v7 >= 0 )
      {
        v32 = 0LL;
        v9 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 192LL);
        WindowsDeleteString(0LL);
        v32 = 0LL;
        v10 = v9(a1, &v32);
        v11 = retaddr;
        if ( v10 >= 0 )
        {
          v31 = 0LL;
          v12 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 96LL);
          WindowsDeleteString(0LL);
          v31 = 0LL;
          v13 = v12(a1, &v31);
          v14 = retaddr;
          if ( v13 >= 0 )
          {
            v45 = 0LL;
            v15 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 144LL);
            WindowsDeleteString(0LL);
            v45 = 0LL;
            v16 = v15(a1, &v45);
            v17 = retaddr;
            if ( v16 >= 0 )
            {
              v44 = 0LL;
              v18 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 128LL);
              WindowsDeleteString(0LL);
              v44 = 0LL;
              v19 = v18(a1, &v44);
              v20 = retaddr;
              if ( v19 >= 0 )
              {
                v21 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 80LL))(a1, &v43);
                v22 = retaddr;
                if ( v21 >= 0 )
                {
                  v36 = (const WCHAR *)Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(v43);
                  Windows::Services::TargetedContent::Internal::GetNameForTrigger(&v35, a1);
                  v23 = v44;
                  v24 = v45;
                  v25 = v31;
                  v26 = v32;
                  v27 = v33;
                  v28 = v35;
                  WindowsGetStringRawBuffer(string, 0LL);
                  WindowsGetStringRawBuffer(v23, 0LL);
                  WindowsGetStringRawBuffer(v24, 0LL);
                  WindowsGetStringRawBuffer(v25, 0LL);
                  StringRawBuffer = WindowsGetStringRawBuffer(v26, 0LL);
                  v39 = WindowsGetStringRawBuffer(v27, 0LL);
                  v41[0] = WindowsGetStringRawBuffer(v28, 0LL);
                  v40 = v36;
                  v36 = (const WCHAR *)Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(*a2[1]);
                  v37 = (const WCHAR *)Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(**a2);
                  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerStateTransition<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const *,wchar_t const *>(
                    v41,
                    &v40,
                    &v39,
                    &StringRawBuffer,
                    &v37,
                    &v36,
                    (const unsigned __int16 *)(*(_QWORD *)a2[2] + 8LL));
                  WindowsDeleteString(v35);
                  v35 = 0LL;
                  WindowsDeleteString(v44);
                  v44 = 0LL;
                  WindowsDeleteString(v45);
                  v45 = 0LL;
                  WindowsDeleteString(v31);
                  v31 = 0LL;
                  WindowsDeleteString(v32);
                  v32 = 0LL;
                  WindowsDeleteString(v33);
                  v33 = 0LL;
                  WindowsDeleteString(string);
                  return 0LL;
                }
LABEL_16:
                wil::details::in1diag3::Throw_Hr(
                  v22,
                  (void *)0x53,
                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
                  (const char *)(unsigned int)v21);
                JUMPOUT(0x18006AC3BLL);
              }
LABEL_15:
              wil::details::in1diag3::Throw_Hr(
                v20,
                (void *)0x51,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
                (const char *)(unsigned int)v19);
              goto LABEL_16;
            }
LABEL_14:
            wil::details::in1diag3::Throw_Hr(
              v17,
              (void *)0x4F,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
              (const char *)(unsigned int)v16);
            goto LABEL_15;
          }
LABEL_13:
          wil::details::in1diag3::Throw_Hr(
            v14,
            (void *)0x4D,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
            (const char *)(unsigned int)v13);
          goto LABEL_14;
        }
LABEL_12:
        wil::details::in1diag3::Throw_Hr(
          v11,
          (void *)0x4B,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v10);
        goto LABEL_13;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x49,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_12;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x62,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
                           v29);
  }
  return result;
}
