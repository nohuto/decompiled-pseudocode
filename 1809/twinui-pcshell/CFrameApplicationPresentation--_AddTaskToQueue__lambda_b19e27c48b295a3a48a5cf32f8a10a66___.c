/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_b19e27c48b295a3a48a5cf32f8a10a66___ @ 0x1800684B8
 * Callers:
 *     ?SetMinimumSize@CFrameApplicationPresentation@@UEAAJPEBUtagSIZE@@@Z @ 0x1800684A0 (-SetMinimumSize@CFrameApplicationPresentation@@UEAAJPEBUtagSIZE@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180053B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ccb0cf548cc3fece8ee6b509d46c06e0_____lambda_ccb0cf548cc3fece8ee6b509d46c06e0___ @ 0x18006859C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ccb0cf548cc3f.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_b19e27c48b295a3a48a5cf32f8a10a66___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned int v6; // esi
  __int64 *v7; // rax
  volatile int *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // esi
  __int64 v13[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  if ( *(_DWORD *)(a1 + 56) == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75E,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  else
  {
    v4 = *(_QWORD *)a1;
    v16 = a1;
    (*(void (**)(void))(v4 + 8))();
    v5 = *(_QWORD *)a1;
    v13[0] = a1;
    (*(void (__fastcall **)(__int64))(v5 + 8))(a1);
    v6 = *(_DWORD *)(a1 + 48);
    v13[1] = a1;
    v13[2] = a2;
    v7 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ccb0cf548cc3fece8ee6b509d46c06e0_____lambda_ccb0cf548cc3fece8ee6b509d46c06e0___(
                      &v15,
                      v13);
    v9 = *v7;
    *v7 = 0LL;
    v10 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        v10,
        v8);
    }
    v11 = SHTaskPoolQueueTask(3LL, 2LL, v6, 0LL, v9, 0LL);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    if ( v11 >= 0 )
      ++*(_DWORD *)(a1 + 212);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    return (unsigned int)v11;
  }
}
