/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_7464ecf0133c584dcba4bc781e3eeb3c___ @ 0x18006FD48
 * Callers:
 *     ?SetMinimumSize@CFrameApplicationPresentation@@UEAAJPEBUtagSIZE@@@Z @ 0x18006FD30 (-SetMinimumSize@CFrameApplicationPresentation@@UEAAJPEBUtagSIZE@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7118b362d38d6b4d32ad205a277424b1_____lambda_7118b362d38d6b4d32ad205a277424b1___ @ 0x18006FE2C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7118b362d38d6.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_7464ecf0133c584dcba4bc781e3eeb3c___(
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
  int v13; // [rsp+20h] [rbp-38h]
  __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  if ( *(_DWORD *)(a1 + 56) == 2 )
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
    v4 = *(_QWORD *)a1;
    v17 = a1;
    (*(void (**)(void))(v4 + 8))();
    v5 = *(_QWORD *)a1;
    v14[0] = a1;
    (*(void (__fastcall **)(__int64))(v5 + 8))(a1);
    v6 = *(_DWORD *)(a1 + 48);
    v14[1] = a1;
    v14[2] = a2;
    v7 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7118b362d38d6b4d32ad205a277424b1_____lambda_7118b362d38d6b4d32ad205a277424b1___(
                      &v16,
                      v14);
    v9 = *v7;
    *v7 = 0LL;
    v10 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        v10,
        v8);
    }
    v11 = SHTaskPoolQueueTask(3LL, 2LL, v6);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
    if ( v11 >= 0 )
      ++*(_DWORD *)(a1 + 212);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    return (unsigned int)v11;
  }
}
