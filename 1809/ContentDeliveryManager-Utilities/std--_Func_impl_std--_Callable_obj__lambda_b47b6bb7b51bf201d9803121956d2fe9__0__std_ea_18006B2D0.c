/*
 * XREFs of std::_Func_impl_std::_Callable_obj__lambda_b47b6bb7b51bf201d9803121956d2fe9__0__std::allocator_std::_Func_class_void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal_____ptr64_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal_____ptr64_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x18006B2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002D504 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_110eb44a907dca3d37f57f1aaae9d13b___ @ 0x180068AB4 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_110eb44a907dca3d37f.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800A9FE0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Func_impl_std::_Callable_obj__lambda_b47b6bb7b51bf201d9803121956d2fe9__0__std::allocator_std::_Func_class_void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal_____ptr64_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal_____ptr64_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call(
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
  char *v15; // rcx
  _QWORD *v16; // rdx
  int v17; // [rsp+28h] [rbp-49h] BYREF
  int v18; // [rsp+30h] [rbp-41h] BYREF
  __int64 v19; // [rsp+38h] [rbp-39h] BYREF
  __int128 v20; // [rsp+40h] [rbp-31h] BYREF
  __int64 v21; // [rsp+50h] [rbp-21h]
  __int64 v22; // [rsp+58h] [rbp-19h]
  _QWORD *v23; // [rsp+60h] [rbp-11h]
  __int128 v24; // [rsp+68h] [rbp-9h] BYREF
  __int64 v25; // [rsp+78h] [rbp+7h]
  _QWORD v26[3]; // [rsp+88h] [rbp+17h] BYREF
  _QWORD *v27; // [rsp+A0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v22 = -2LL;
  v5 = *a4;
  v18 = *a4;
  v6 = *a3;
  v17 = *a3;
  v7 = *a2;
  v8 = &unk_1801832D0;
  while ( *v8 != v6 || v8[1] != v5 )
  {
    v8 += 10;
    if ( v8 == (_DWORD *)&unk_180183370 )
    {
      v26[0] = &std::_Func_impl<std::_Callable_fun<void (*const)(Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>),0>,std::allocator<std::_Func_class<void,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,void,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
      v26[1] = Windows::Services::TargetedContent::Internal::NoopTriggerTransition;
      v27 = v26;
      goto LABEL_6;
    }
  }
  v27 = 0LL;
  v15 = (char *)*((_QWORD *)v8 + 4);
  if ( v15 )
  {
    if ( v15 == (char *)(v8 + 2) )
      v16 = v26;
    else
      v16 = 0LL;
    v27 = (_QWORD *)(**(__int64 (__fastcall ***)(char *, _QWORD *))v15)(v15, v16);
  }
  else
  {
    v27 = 0LL;
  }
LABEL_6:
  v9 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         &v20,
         *(__int64 **)(a1 + 8));
  v10 = v9;
  v23 = v9;
  v19 = v7;
  if ( !v27 )
LABEL_22:
    std::_Xbad_function_call();
  (*(void (__fastcall **)(_QWORD *, __int64 *, _QWORD *))(*v27 + 16LL))(v27, &v19, v9);
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
  *(_QWORD *)&v20 = &v17;
  *((_QWORD *)&v20 + 1) = &v18;
  v21 = v12;
  v24 = v20;
  v25 = v12;
  result = Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_110eb44a907dca3d37f57f1aaae9d13b___(
             v7,
             (unsigned int **)&v24);
  if ( (int)result < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1A2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)result);
    goto LABEL_22;
  }
  if ( v27 )
  {
    v14 = v26;
    LOBYTE(v14) = v27 != v26;
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v27 + 32LL))(v27, v14);
  }
  return result;
}
