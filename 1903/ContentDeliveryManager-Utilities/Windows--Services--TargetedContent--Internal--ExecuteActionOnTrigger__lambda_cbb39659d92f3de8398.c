/*
 * XREFs of Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_cbb39659d92f3de839865b35544205a6___ @ 0x180068764
 * Callers:
 *     wil::details::lambda_call__lambda_24a5146baa4e894af4084bd69754f4d6___::_lambda_call__lambda_24a5146baa4e894af4084bd69754f4d6___ @ 0x180066AD0 (wil--details--lambda_call__lambda_24a5146baa4e894af4084bd69754f4d6___--_lambda_call__lambda_24a5.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$TriggerRegistrationFailed@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_W@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W00000PEBD@Z @ 0x18006853C (--$TriggerRegistrationFailed@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_W@TriggerManagerRegi.c)
 *     ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x18006E014 (-ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnown.c)
 *     ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006E1BC (-GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsof.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_cbb39659d92f3de839865b35544205a6___(
        __int64 a1,
        __int64 a2)
{
  __int64 (*v3)(void); // rbx
  int v4; // eax
  __int64 (__fastcall *v5)(__int64, HSTRING *); // rbx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 (__fastcall *v8)(__int64, HSTRING *); // rbx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 (__fastcall *v11)(__int64, HSTRING *); // rbx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 (__fastcall *v14)(__int64, HSTRING *); // rbx
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 (__fastcall *v17)(__int64, HSTRING *); // rbx
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  const WCHAR *v22; // r13
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
  PCWSTR StringRawBuffer; // [rsp+68h] [rbp-70h] BYREF
  PCWSTR v37; // [rsp+70h] [rbp-68h] BYREF
  PCWSTR v38; // [rsp+78h] [rbp-60h] BYREF
  PCWSTR v39; // [rsp+80h] [rbp-58h] BYREF
  const WCHAR *v40; // [rsp+88h] [rbp-50h] BYREF
  const WCHAR *v41[9]; // [rsp+90h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  unsigned int v43; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v44; // [rsp+E8h] [rbp+10h]
  HSTRING v45; // [rsp+F0h] [rbp+18h] BYREF
  HSTRING v46; // [rsp+F8h] [rbp+20h] BYREF

  v44 = a2;
  v41[1] = (const WCHAR *)-2LL;
  string = 0LL;
  v3 = *(__int64 (**)(void))(*(_QWORD *)a1 + 48LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  try
  {
    v4 = v3();
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x47,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v4);
    }
    else
    {
      v33 = 0LL;
      v5 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 176LL);
      WindowsDeleteString(0LL);
      v33 = 0LL;
      v6 = v5(a1, &v33);
      v7 = retaddr;
      if ( v6 >= 0 )
      {
        v32 = 0LL;
        v8 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 192LL);
        WindowsDeleteString(0LL);
        v32 = 0LL;
        v9 = v8(a1, &v32);
        v10 = retaddr;
        if ( v9 >= 0 )
        {
          v31 = 0LL;
          v11 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 96LL);
          WindowsDeleteString(0LL);
          v31 = 0LL;
          v12 = v11(a1, &v31);
          v13 = retaddr;
          if ( v12 >= 0 )
          {
            v46 = 0LL;
            v14 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 144LL);
            WindowsDeleteString(0LL);
            v46 = 0LL;
            v15 = v14(a1, &v46);
            v16 = retaddr;
            if ( v15 >= 0 )
            {
              v45 = 0LL;
              v17 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 128LL);
              WindowsDeleteString(0LL);
              v45 = 0LL;
              v18 = v17(a1, &v45);
              v19 = retaddr;
              if ( v18 >= 0 )
              {
                v20 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 80LL))(a1, &v43);
                v21 = retaddr;
                if ( v20 >= 0 )
                {
                  v22 = (const WCHAR *)Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(v43);
                  Windows::Services::TargetedContent::Internal::GetNameForTrigger(&v35, a1);
                  v23 = v45;
                  v24 = v46;
                  v25 = v31;
                  v26 = v32;
                  v27 = v33;
                  v28 = v35;
                  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
                  WindowsGetStringRawBuffer(v23, 0LL);
                  WindowsGetStringRawBuffer(v24, 0LL);
                  v37 = WindowsGetStringRawBuffer(v25, 0LL);
                  v38 = WindowsGetStringRawBuffer(v26, 0LL);
                  v39 = WindowsGetStringRawBuffer(v27, 0LL);
                  v41[0] = WindowsGetStringRawBuffer(v28, 0LL);
                  v40 = v22;
                  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::TriggerRegistrationFailed<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &>(
                    v41,
                    &v40,
                    &v39,
                    &v38,
                    &v37,
                    &StringRawBuffer,
                    (const unsigned __int16 *)(**(_QWORD **)(v44 + 8) + 8LL));
                  WindowsDeleteString(v35);
                  v35 = 0LL;
                  WindowsDeleteString(v45);
                  v45 = 0LL;
                  WindowsDeleteString(v46);
                  v46 = 0LL;
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
                  v21,
                  (void *)0x53,
                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
                  (const char *)(unsigned int)v20);
                JUMPOUT(0x180068B55LL);
              }
LABEL_15:
              wil::details::in1diag3::Throw_Hr(
                v19,
                (void *)0x51,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
                (const char *)(unsigned int)v18);
              goto LABEL_16;
            }
LABEL_14:
            wil::details::in1diag3::Throw_Hr(
              v16,
              (void *)0x4F,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
              (const char *)(unsigned int)v15);
            goto LABEL_15;
          }
LABEL_13:
          wil::details::in1diag3::Throw_Hr(
            v13,
            (void *)0x4D,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
            (const char *)(unsigned int)v12);
          goto LABEL_14;
        }
LABEL_12:
        wil::details::in1diag3::Throw_Hr(
          v10,
          (void *)0x4B,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v9);
        goto LABEL_13;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x49,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v6);
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
