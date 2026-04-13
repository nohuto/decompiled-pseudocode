/*
 * XREFs of ?GetFeatureIdAndReportingIdForTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@AEAIAEAG@Z @ 0x18006FBC8
 * Callers:
 *     ?SubscribeToFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006FEF0 (-SubscribeToFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedCon.c)
 *     ?UnsubscribeFromFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180070070 (-UnsubscribeFromFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargete.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180067CBC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?stoi@std@@YAHAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@PEA_KH@Z @ 0x18006DE3C (-stoi@std@@YAHAEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@1@PEA_KH@Z.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Services::TargetedContent::Internal::GetFeatureIdAndReportingIdForTrigger(
        Windows::Services::TargetedContent::Internal *this,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *a2,
        unsigned int *a3,
        unsigned __int16 *a4)
{
  __int64 (*v7)(void); // rbx
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  char *StringRawBuffer; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r8
  wchar_t *v14; // rdx
  char *v15; // rax
  wchar_t *v16; // rdx
  const char *v17; // r9
  __int64 result; // rax
  HSTRING v19; // [rsp+20h] [rbp-68h] BYREF
  HSTRING string; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+30h] [rbp-58h]
  wchar_t String[4]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v23; // [rsp+48h] [rbp-40h]
  unsigned __int64 v24; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v21 = -2LL;
  string = 0LL;
  v7 = *(__int64 (**)(void))(*(_QWORD *)this + 64LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  try
  {
    v8 = v7();
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x212,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v8);
    }
    else
    {
      v7 = (__int64 (*)(void))retaddr;
      if ( !WindowsIsStringEmpty(string) )
      {
        v19 = 0LL;
        v7 = *(__int64 (**)(void))(*(_QWORD *)this + 96LL);
        WindowsDeleteString(0LL);
        v19 = 0LL;
        v9 = ((__int64 (__fastcall *)(Windows::Services::TargetedContent::Internal *, HSTRING *))v7)(this, &v19);
        v10 = retaddr;
        if ( v9 >= 0 )
        {
          v7 = (__int64 (*)(void))retaddr;
          if ( !WindowsIsStringEmpty(v19) )
          {
            StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
            v24 = 7LL;
            v23 = 0LL;
            String[0] = 0;
            v12 = -1LL;
            if ( *(_WORD *)StringRawBuffer )
            {
              v13 = -1LL;
              do
                ++v13;
              while ( *(_WORD *)&StringRawBuffer[2 * v13] );
            }
            else
            {
              v13 = 0LL;
            }
            std::wstring::assign(String, StringRawBuffer, v13);
            *(_DWORD *)a2 = std::stoi(String, v14);
            if ( v24 >= 8 )
              operator delete(*(void **)String);
            v15 = (char *)WindowsGetStringRawBuffer(v19, 0LL);
            v24 = 7LL;
            v23 = 0LL;
            String[0] = 0;
            if ( *(_WORD *)v15 )
            {
              do
                ++v12;
              while ( *(_WORD *)&v15[2 * v12] );
            }
            else
            {
              v12 = 0LL;
            }
            std::wstring::assign(String, v15, v12);
            *(_WORD *)a3 = std::stoi(String, v16);
            if ( v24 >= 8 )
              operator delete(*(void **)String);
            WindowsDeleteString(v19);
            v19 = 0LL;
            WindowsDeleteString(string);
            return 0LL;
          }
LABEL_21:
          wil::details::in1diag3::Throw_Hr(
            (wil::details::in1diag3 *)v7,
            (void *)0x216,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
            (const char *)0x80070057LL);
          JUMPOUT(0x18006FE0BLL);
        }
LABEL_20:
        wil::details::in1diag3::Throw_Hr(
          v10,
          (void *)0x215,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
          (const char *)(unsigned int)v9);
        goto LABEL_21;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      (wil::details::in1diag3 *)v7,
      (void *)0x213,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)0x80070057LL);
    goto LABEL_20;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x21B,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
                           v17);
  }
  return result;
}
