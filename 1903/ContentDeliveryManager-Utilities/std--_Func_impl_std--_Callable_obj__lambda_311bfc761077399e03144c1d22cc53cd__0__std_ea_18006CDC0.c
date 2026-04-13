/*
 * XREFs of std::_Func_impl_std::_Callable_obj__lambda_311bfc761077399e03144c1d22cc53cd__0__std::allocator_std::_Func_class_void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal___enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal___enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x18006CDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002DF1C (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_9989ec116c7a722ef409e952aab4eb08___ @ 0x18006A5D4 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_9989ec116c7a722ef40.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800ADF60 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Func_impl_std::_Callable_obj__lambda_311bfc761077399e03144c1d22cc53cd__0__std::allocator_std::_Func_class_void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal___enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal___enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call(
        __int64 a1,
        __int64 *a2,
        int *a3,
        int *a4)
{
  int v5; // r10d
  int v6; // r9d
  __int64 v7; // rsi
  _DWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rax
  __int64 result; // rax
  _QWORD *v14; // rdx
  char *v15; // rax
  char *v16; // rcx
  _QWORD *v17; // rdx
  int v18; // [rsp+28h] [rbp-49h] BYREF
  int v19; // [rsp+30h] [rbp-41h] BYREF
  __int64 v20; // [rsp+38h] [rbp-39h] BYREF
  __int128 v21; // [rsp+40h] [rbp-31h] BYREF
  __int64 v22; // [rsp+50h] [rbp-21h]
  __int64 v23; // [rsp+58h] [rbp-19h]
  _QWORD *v24; // [rsp+60h] [rbp-11h]
  __int128 v25; // [rsp+68h] [rbp-9h] BYREF
  __int64 v26; // [rsp+78h] [rbp+7h]
  _QWORD v27[3]; // [rsp+88h] [rbp+17h] BYREF
  _QWORD *v28; // [rsp+A0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v23 = -2LL;
  v5 = *a4;
  v19 = *a4;
  v6 = *a3;
  v18 = *a3;
  v7 = *a2;
  v8 = &unk_18018D340;
  while ( *v8 != v6 || v8[1] != v5 )
  {
    v8 += 10;
    if ( v8 == (_DWORD *)&unk_18018D3E0 )
    {
      v27[0] = &std::_Func_impl<std::_Callable_fun<void (*const)(Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>),0>,std::allocator<std::_Func_class<void,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,void,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
      v27[1] = Windows::Services::TargetedContent::Internal::NoopTriggerTransition;
      v28 = v27;
      goto LABEL_6;
    }
  }
  v15 = (char *)(v8 + 2);
  v28 = 0LL;
  v16 = (char *)*((_QWORD *)v15 + 3);
  if ( v16 )
  {
    if ( v16 == v15 )
      v17 = v27;
    else
      v17 = 0LL;
    v28 = (_QWORD *)(**(__int64 (__fastcall ***)(char *, _QWORD *))v16)(v16, v17);
  }
  else
  {
    v28 = 0LL;
  }
LABEL_6:
  v9 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         &v21,
         *(__int64 **)(a1 + 8));
  v10 = v9;
  v24 = v9;
  v20 = v7;
  if ( !v28 )
LABEL_22:
    std::_Xbad_function_call();
  (*(void (__fastcall **)(_QWORD *, __int64 *, _QWORD *))(*v28 + 16LL))(v28, &v20, v9);
  v11 = (volatile signed __int32 *)v10[1];
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v12 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)&v21 = &v18;
  *((_QWORD *)&v21 + 1) = &v19;
  v22 = v12;
  v25 = v21;
  v26 = v12;
  result = Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_9989ec116c7a722ef409e952aab4eb08___(
             v7,
             (unsigned int **)&v25);
  if ( (int)result < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1A2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)result);
    goto LABEL_22;
  }
  if ( v28 )
  {
    v14 = v27;
    LOBYTE(v14) = v28 != v27;
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v28 + 32LL))(v28, v14);
  }
  return result;
}
