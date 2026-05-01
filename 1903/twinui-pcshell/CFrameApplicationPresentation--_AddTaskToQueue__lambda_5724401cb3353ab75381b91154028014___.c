/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_5724401cb3353ab75381b91154028014___ @ 0x18006A9DC
 * Callers:
 *     ?SetSizeConstraintOverridesLogical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z @ 0x18006A9A0 (-SetSizeConstraintOverridesLogical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_61a39d48d2d904a91076d611a129569d_____lambda_61a39d48d2d904a91076d611a129569d___ @ 0x18006AAD4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_61a39d48d2d90.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_5724401cb3353ab75381b91154028014___(
        _DWORD *a1,
        __int128 *a2)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  __int64 v6; // xmm1_8
  __int64 *v7; // rax
  __int64 v8; // rbx
  volatile signed __int32 *v9; // rcx
  int v10; // esi
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14; // [rsp+40h] [rbp-28h]
  __int64 v15; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  volatile signed __int32 *v17; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v18; // [rsp+80h] [rbp+18h] BYREF

  if ( a1[14] == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x823,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v12);
    return 2147947423LL;
  }
  else
  {
    v18 = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v4 = *(_QWORD *)a1;
    v13[0] = (__int64)a1;
    (*(void (__fastcall **)(_DWORD *))(v4 + 8))(a1);
    v5 = a1[12];
    v6 = *((_QWORD *)a2 + 2);
    v14 = *a2;
    v13[1] = (__int64)a1;
    v15 = v6;
    v7 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_61a39d48d2d904a91076d611a129569d_____lambda_61a39d48d2d904a91076d611a129569d___(
                      &v17,
                      v13);
    v8 = *v7;
    *v7 = 0LL;
    v9 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v9);
    }
    v10 = SHTaskPoolQueueTask(3LL, 2LL, v5, 0LL, v8, 0LL);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    if ( v10 >= 0 )
      ++a1[53];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    return (unsigned int)v10;
  }
}
