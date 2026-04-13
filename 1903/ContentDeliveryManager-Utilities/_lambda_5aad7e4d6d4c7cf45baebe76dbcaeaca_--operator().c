/*
 * XREFs of _lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_::operator() @ 0x18003F6F4
 * Callers:
 *     wistd::__function::__func__lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca__void___cdecl(void)_::operator() @ 0x180043E10 (wistd--__function--__func__lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@U?$CloakedIid@UIPartialTrustSubscriptionFactory@Internal@TargetedContent@ContentManagement@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180041D30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionMana.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CABF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned int __fastcall lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_::operator()(volatile signed __int64 **a1)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *v4; // rdi
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  _DWORD *v7; // rsi
  _DWORD *v8; // rax
  DWORD CurrentThreadId; // eax
  unsigned int result; // eax
  const char *v11; // r9
  int v12; // r14d
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  volatile signed __int64 *v14; // [rsp+70h] [rbp+8h]
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *v15; // [rsp+78h] [rbp+10h] BYREF
  signed __int64 v16; // [rsp+80h] [rbp+18h]
  signed __int64 v17; // [rsp+88h] [rbp+20h]

  v1 = *a1;
  v14 = *a1;
  if ( *a1 )
  {
    v2 = *((_QWORD *)v1 + 8);
    v16 = v2;
    while ( v2 >= 0 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64(v1 + 8, v2 + 1, v2);
      if ( v3 == v2 )
        goto LABEL_6;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v2 + 16));
LABEL_6:
    v1 = v14;
  }
  v4 = (ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *)v1;
  v15 = (ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *)v1;
  if ( v1 )
  {
    v5 = *((_QWORD *)v1 + 8);
    v17 = v5;
    while ( v5 >= 0 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange64(v1 + 8, v5 + 1, v5);
      if ( v6 == v5 )
        goto LABEL_12;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v5 + 16));
LABEL_12:
    v4 = v15;
    v1 = v14;
  }
  v7 = 0LL;
  v8 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v8[3] = 1;
    *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v1 = v14;
      v4 = v15;
    }
    *((_QWORD *)v8 + 2) = 0LL;
    if ( v8 + 4 != (_DWORD *)&v15 )
    {
      *((_QWORD *)v8 + 2) = v1;
      v4 = 0LL;
    }
    *(_QWORD *)v8 = off_1800DCC20;
    v7 = v8;
  }
  CurrentThreadId = GetCurrentThreadId();
  result = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId, 0LL, v7, 0LL);
  try
  {
    v12 = result;
    if ( v7 )
      result = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v4 )
      result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::FtmBase>::Release(v4);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x36,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
        (const char *)(unsigned int)v12);
      JUMPOUT(0x18003F85ALL);
    }
    if ( v1 )
      result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::FtmBase>::Release((ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *)v1);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x38,
             (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
             v11);
  }
  return result;
}
