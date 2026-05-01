/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_5724401cb3353ab75381b91154028014___ @ 0x18006791C
 * Callers:
 *     ?SetSizeConstraintOverridesLogical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z @ 0x1800678E0 (-SetSizeConstraintOverridesLogical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180053B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_61a39d48d2d904a91076d611a129569d_____lambda_61a39d48d2d904a91076d611a129569d___ @ 0x180067A04 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_61a39d48d2d90.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_5724401cb3353ab75381b91154028014___(
        __int64 a1,
        __int128 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned int v6; // esi
  __int64 v7; // xmm1_8
  __int64 *v8; // rax
  volatile int *v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // esi
  __int64 v14[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h]
  __int64 v16; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v18; // [rsp+80h] [rbp+20h] BYREF
  __int64 v19; // [rsp+90h] [rbp+30h] BYREF

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
    v19 = a1;
    (*(void (**)(void))(v4 + 8))();
    v5 = *(_QWORD *)a1;
    v14[0] = a1;
    (*(void (__fastcall **)(__int64))(v5 + 8))(a1);
    v6 = *(_DWORD *)(a1 + 48);
    v7 = *((_QWORD *)a2 + 2);
    v15 = *a2;
    v14[1] = a1;
    v16 = v7;
    v8 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_61a39d48d2d904a91076d611a129569d_____lambda_61a39d48d2d904a91076d611a129569d___(
                      &v18,
                      v14);
    v10 = *v8;
    *v8 = 0LL;
    v11 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        v11,
        v9);
    }
    v12 = SHTaskPoolQueueTask(3LL, 2LL, v6, 0LL, v10, 0LL);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
    if ( v12 >= 0 )
      ++*(_DWORD *)(a1 + 212);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    return (unsigned int)v12;
  }
}
