/*
 * XREFs of ??_ESubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAPEAXI@Z @ 0x1800445C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Freenode@?$_List_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@PEAX@2@@Z @ 0x18004310C (-_Freenode@-$_List_buy@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@U?$IIterable@PEAVAppInstallInfoRecord@ContentManagement@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180043604 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAVAppInstal.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *__fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::`vector deleting destructor'(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *this,
        char a2)
{
  void *v4; // rcx
  _QWORD **v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx
  void (__fastcall ***v9)(_QWORD, __int64); // rcx

  v4 = (void *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    operator delete(v4);
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
  }
  v5 = (_QWORD **)*((_QWORD *)this + 11);
  v6 = *v5;
  *v5 = v5;
  *(_QWORD *)(*((_QWORD *)this + 11) + 8LL) = *((_QWORD *)this + 11);
  *((_QWORD *)this + 12) = 0LL;
  v7 = (_QWORD *)*((_QWORD *)this + 11);
  if ( v6 != v7 )
  {
    do
    {
      v8 = (_QWORD *)*v6;
      std::_List_buy<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>::_Freenode(
        (__int64)v7,
        (__int64)v6);
      v7 = (_QWORD *)*((_QWORD *)this + 11);
      v6 = v8;
    }
    while ( v8 != v7 );
  }
  operator delete(v7);
  v9 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 9);
  if ( v9 )
    (**v9)(v9, 1LL);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
