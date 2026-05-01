/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_0f869028d2211307d6500fcb06deb8db___ @ 0x1802D0910
 * Callers:
 *     ?NotifyWorkspaceRect@AccessibilityExperienceManager@@UEAAXXZ @ 0x1802D21D0 (-NotifyWorkspaceRect@AccessibilityExperienceManager@@UEAAXXZ.c)
 *     ?WorkAreaChanged@AccessibilityExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x1802D3310 (-WorkAreaChanged@AccessibilityExperienceManager@@UEAAJKPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180053B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedDesktopOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DEB10 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedDeskto.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800DF744 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18017F8F4 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5434314b002c6243594991c8a2ae105e_____lambda_5434314b002c6243594991c8a2ae105e___ @ 0x1802D067C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5434314b002c6.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_0f869028d2211307d6500fcb06deb8db___(
        __int64 a1,
        volatile int *a2)
{
  volatile int *v2; // r10
  __int64 v3; // r11
  __int64 *v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // edi
  volatile int *v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a1;
  v2 = a2;
  v3 = a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(
      a1,
      a2);
  v10 = v2;
  v11 = v3;
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedDesktopOperations,Microsoft::WRL::FtmBase>::AddRef(v3);
  v4 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5434314b002c6243594991c8a2ae105e_____lambda_5434314b002c6243594991c8a2ae105e___(
         &v12,
         &v10);
  v6 = *v4;
  *v4 = 0LL;
  v7 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v7,
      v5);
  }
  v8 = SHTaskPoolQueueTask(3LL, 0LL, 0LL, 0LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v11);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v13);
  return v8;
}
