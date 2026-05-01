/*
 * XREFs of ?WaitForPendingOperations@CFrameApplicationPresentation@@UEAAJXZ @ 0x180019A80
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c_____lambda_d2d428d678afc9667605d89a88a71b6c___ @ 0x180019980 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c_.c)
 *     ?Wait@COperationWaiter@@QEAAJXZ @ 0x180019C5C (-Wait@COperationWaiter@@QEAAJXZ.c)
 *     ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter@@@Z @ 0x18001ACF4 (--$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005FB10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800801DC (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::WaitForPendingOperations(CFrameApplicationPresentation *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  RTL_SRWLOCK *v4; // rbx
  __int64 *CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c_____lambda_d2d428d678afc9667605d89a88a71b6c; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // edi
  int v10; // eax
  __int64 v12; // rdx
  _QWORD v13[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  COperationWaiter *v15; // [rsp+58h] [rbp+28h] BYREF
  __int64 v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 v17; // [rsp+68h] [rbp+38h] BYREF

  v13[1] = -2LL;
  v15 = 0LL;
  v2 = Microsoft::WRL::Details::MakeAndInitialize<COperationWaiter,COperationWaiter,>(&v15);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x253,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v2,
      v13[0]);
LABEL_23:
    Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v15);
    return v3;
  }
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v13[0] = v15;
  if ( v15 )
    _InterlockedIncrement((volatile signed __int32 *)v15 + 9);
  CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c_____lambda_d2d428d678afc9667605d89a88a71b6c = Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c_____lambda_d2d428d678afc9667605d89a88a71b6c___(&v17, v13);
  v7 = *CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c_____lambda_d2d428d678afc9667605d89a88a71b6c;
  v16 = *CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c_____lambda_d2d428d678afc9667605d89a88a71b6c;
  *CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c_____lambda_d2d428d678afc9667605d89a88a71b6c = 0LL;
  v8 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release(
      v8,
      v6);
  }
  if ( v13[0] )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release();
  if ( !v7 )
  {
    v9 = -2147024882;
    v12 = 617LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v9,
      v13[0]);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    v3 = v9;
    goto LABEL_23;
  }
  v9 = (*(__int64 (__fastcall **)(CFrameApplicationPresentation *, __int64))(*(_QWORD *)this + 232LL))(this, v7);
  if ( v9 < 0 )
  {
    v12 = 620LL;
    goto LABEL_20;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  v10 = COperationWaiter::Wait(v15);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x270,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v10,
      v13[0]);
  if ( v15 )
  {
    v15 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release();
  }
  return 0LL;
}
