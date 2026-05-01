/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_5724401cb3353ab75381b91154028014___ @ 0x18006F2EC
 * Callers:
 *     ?SetSizeConstraintOverridesLogical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z @ 0x18006F2B0 (-SetSizeConstraintOverridesLogical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_61a39d48d2d904a91076d611a129569d_____lambda_61a39d48d2d904a91076d611a129569d___ @ 0x18006F3E4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_61a39d48d2d90.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_5724401cb3353ab75381b91154028014___(
        _DWORD *a1,
        __int128 *a2)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  __int64 v6; // xmm1_8
  __int64 *v7; // rax
  volatile int *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // esi
  int v13; // [rsp+20h] [rbp-48h]
  __int64 v14[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v15; // [rsp+40h] [rbp-28h]
  __int64 v16; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v19; // [rsp+80h] [rbp+18h] BYREF

  if ( a1[14] == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x823,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v13);
    return 2147947423LL;
  }
  else
  {
    v19 = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v4 = *(_QWORD *)a1;
    v14[0] = (__int64)a1;
    (*(void (__fastcall **)(_DWORD *))(v4 + 8))(a1);
    v5 = a1[12];
    v6 = *((_QWORD *)a2 + 2);
    v15 = *a2;
    v14[1] = (__int64)a1;
    v16 = v6;
    v7 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_61a39d48d2d904a91076d611a129569d_____lambda_61a39d48d2d904a91076d611a129569d___(
                      &v18,
                      v14);
    v9 = *v7;
    *v7 = 0LL;
    v10 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        v10,
        v8);
    }
    v11 = SHTaskPoolQueueTask(3LL, 2LL, v5);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
    if ( v11 >= 0 )
      ++a1[53];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    return (unsigned int)v11;
  }
}
