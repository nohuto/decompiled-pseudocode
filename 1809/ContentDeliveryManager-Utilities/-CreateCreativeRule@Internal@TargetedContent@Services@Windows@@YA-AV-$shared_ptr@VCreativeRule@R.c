/*
 * XREFs of ?CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180062778
 * Callers:
 *     ?RegisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800629A0 (-RegisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerIntern.c)
 *     ?UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180062C70 (-UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInte.c)
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180063218 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x180063EC4 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800661EC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800A9DC8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::CreateCreativeRule(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  WCHAR *StringRawBuffer; // r12
  WCHAR *v9; // r15
  _DWORD *v10; // rax
  _DWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // r8
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+40h]
  HSTRING v16; // [rsp+98h] [rbp+50h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+58h] BYREF
  _DWORD *v18; // [rsp+A8h] [rbp+60h]

  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 96LL))(a2, &string);
  v5 = retaddr;
  if ( v4 < 0 )
  {
LABEL_15:
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0x36,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  if ( WindowsIsStringEmpty(string) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x37,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)0x80070057LL);
    goto LABEL_17;
  }
  v16 = 0LL;
  WindowsDeleteString(0LL);
  v16 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 208LL))(a2, &v16);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x3A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v6);
    JUMPOUT(0x180062990LL);
  }
  if ( WindowsIsStringEmpty(v16) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)0x80070057LL);
    goto LABEL_15;
  }
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(v16, 0LL);
  v9 = (WCHAR *)WindowsGetStringRawBuffer(string, 0LL);
  v10 = operator new(0x50uLL);
  v11 = v10;
  v18 = v10;
  if ( v10 )
  {
    v10[2] = 1;
    v10[3] = 1;
    *(_QWORD *)v10 = &std::_Ref_count_obj<CreativeFramework::RuleSetHandlers::CreativeRule>::`vftable';
    *((_QWORD *)v10 + 5) = 7LL;
    *((_QWORD *)v10 + 4) = 0LL;
    *((_WORD *)v10 + 8) = 0;
    v12 = -1LL;
    if ( *v9 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( v9[v13] );
    }
    std::wstring::assign(v10 + 4, v9);
    *((_QWORD *)v11 + 9) = 7LL;
    *((_QWORD *)v11 + 8) = 0LL;
    *((_WORD *)v11 + 24) = 0;
    if ( *StringRawBuffer )
    {
      do
        ++v12;
      while ( StringRawBuffer[v12] );
    }
    std::wstring::assign(v11 + 12, StringRawBuffer);
  }
  else
  {
    v11 = 0LL;
  }
  a1[1] = v11;
  *a1 = v11 + 4;
  WindowsDeleteString(v16);
  v16 = 0LL;
  WindowsDeleteString(string);
  return a1;
}
