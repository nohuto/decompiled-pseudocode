/*
 * XREFs of ?v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ @ 0x180081310
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A5E0 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A9D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18002AA2C (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004EFF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewB.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??0CGlobals@ApplicationViewManagement@@QEAA@XZ @ 0x18012B410 (--0CGlobals@ApplicationViewManagement@@QEAA@XZ.c)
 *     ??1CGlobals@ApplicationViewManagement@@UEAA@XZ @ 0x18012B8F4 (--1CGlobals@ApplicationViewManagement@@UEAA@XZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewElementBase@@UIObservableObjectArrayChanged@@UIVirtualDesktopContainerElement@@UIScrollableElement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18012C510 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMul_ea_18012C510.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_9024690539981ae791e8a4389c3f5331__&___ptr64_ @ 0x1801300B4 (Windows--Internal--ComTaskPool--QueueTask__lambda_9024690539981ae791e8a4389c3f5331__-___ptr64_.c)
 */

__int64 __fastcall CWin32ApplicationView::v_RefreshEnterpriseIdIfNeeded(CWin32ApplicationView *this)
{
  signed __int64 v2; // rax
  int v3; // r10d
  signed __int64 v4; // rtt
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  volatile int *v10; // rdx
  int v11; // edi
  _BYTE v13[64]; // [rsp+20h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v15; // [rsp+80h] [rbp+20h]
  __int64 v16; // [rsp+88h] [rbp+28h] BYREF
  CWin32ApplicationView *v17; // [rsp+90h] [rbp+30h] BYREF

  if ( !*((_BYTE *)this + 56) )
    return 0LL;
  v2 = *((_QWORD *)this + 26);
  v3 = 0x7FFFFFFF;
  while ( v2 >= 0 )
  {
    if ( (_DWORD)v2 != 0x7FFFFFFF )
    {
      v4 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 26, v2 + 1, v2);
      if ( v4 != v2 )
        continue;
    }
    goto LABEL_8;
  }
  Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v2 + 16));
LABEL_8:
  v5 = *((_QWORD *)this + 26);
  v17 = this;
  while ( v5 >= 0 )
  {
    if ( (_DWORD)v5 != v3 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 26, v5 + 1, v5);
      if ( v6 != v5 )
        continue;
    }
    goto LABEL_14;
  }
  Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v5 + 16));
LABEL_14:
  memset_0(v13, 0, 0x38uLL);
  ApplicationViewManagement::CGlobals::CGlobals((ApplicationViewManagement::CGlobals *)v13);
  v15 = 0LL;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v16);
  if ( v16 )
  {
    v7 = *(_QWORD *)(v16 + 48);
    if ( v7 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewElementBase,IObservableObjectArrayChanged,IVirtualDesktopContainerElement,IScrollableElement>::AddRef(*(_QWORD *)(v16 + 48));
      v15 = v7;
    }
  }
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v16);
  v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_9024690539981ae791e8a4389c3f5331______ptr64_(
          v9,
          v8,
          *(unsigned int *)(v15 + 280),
          &v17);
  if ( v15 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(
      v15,
      v10);
  ApplicationViewManagement::CGlobals::~CGlobals((ApplicationViewManagement::CGlobals *)v13);
  if ( v11 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18D,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v11);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::Release((__int64)this);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::Release((__int64)this);
  return (unsigned int)v11;
}
