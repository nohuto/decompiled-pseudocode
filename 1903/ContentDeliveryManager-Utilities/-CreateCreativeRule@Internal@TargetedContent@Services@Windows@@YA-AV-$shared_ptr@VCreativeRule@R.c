/*
 * XREFs of ?CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180063FA8
 * Callers:
 *     ?RegisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800641D0 (-RegisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerIntern.c)
 *     ?UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800644A0 (-UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInte.c)
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180064A50 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x180065714 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180067CBC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800ADD48 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::CreateCreativeRule(_QWORD *a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, HSTRING *); // rbx
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 (__fastcall *v7)(__int64, HSTRING *); // rbx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  WCHAR *StringRawBuffer; // r12
  WCHAR *v11; // r15
  _DWORD *v12; // rax
  _DWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // r8
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+40h]
  HSTRING v18; // [rsp+98h] [rbp+50h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+58h] BYREF
  _DWORD *v20; // [rsp+A8h] [rbp+60h]

  string = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 96LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v5 = v4(a2, &string);
  v6 = retaddr;
  if ( v5 < 0 )
  {
LABEL_15:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x36,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v5);
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
  v18 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 208LL);
  WindowsDeleteString(0LL);
  v18 = 0LL;
  v8 = v7(a2, &v18);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x3A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v8);
    JUMPOUT(0x1800641C6LL);
  }
  if ( WindowsIsStringEmpty(v18) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)0x80070057LL);
    goto LABEL_15;
  }
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(v18, 0LL);
  v11 = (WCHAR *)WindowsGetStringRawBuffer(string, 0LL);
  v12 = operator new(0x50uLL);
  v13 = v12;
  v20 = v12;
  if ( v12 )
  {
    v12[2] = 1;
    v12[3] = 1;
    *(_QWORD *)v12 = &std::_Ref_count_obj<CreativeFramework::RuleSetHandlers::CreativeRule>::`vftable';
    *((_QWORD *)v12 + 5) = 7LL;
    *((_QWORD *)v12 + 4) = 0LL;
    *((_WORD *)v12 + 8) = 0;
    v14 = -1LL;
    if ( *v11 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v11[v15] );
    }
    std::wstring::assign(v12 + 4, v11);
    *((_QWORD *)v13 + 9) = 7LL;
    *((_QWORD *)v13 + 8) = 0LL;
    *((_WORD *)v13 + 24) = 0;
    if ( *StringRawBuffer )
    {
      do
        ++v14;
      while ( StringRawBuffer[v14] );
    }
    std::wstring::assign(v13 + 12, StringRawBuffer);
  }
  else
  {
    v13 = 0LL;
  }
  a1[1] = v13;
  *a1 = v13 + 4;
  WindowsDeleteString(v18);
  v18 = 0LL;
  WindowsDeleteString(string);
  return a1;
}
