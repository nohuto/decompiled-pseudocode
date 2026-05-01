/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_7464ecf0133c584dcba4bc781e3eeb3c___ @ 0x18006B3E8
 * Callers:
 *     ?SetMinimumSize@CFrameApplicationPresentation@@UEAAJPEBUtagSIZE@@@Z @ 0x18006B3D0 (-SetMinimumSize@CFrameApplicationPresentation@@UEAAJPEBUtagSIZE@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7118b362d38d6b4d32ad205a277424b1_____lambda_7118b362d38d6b4d32ad205a277424b1___ @ 0x18006B4CC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7118b362d38d6.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_7464ecf0133c584dcba4bc781e3eeb3c___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned int v6; // esi
  __int64 *v7; // rax
  __int64 v8; // rbx
  volatile signed __int32 *v9; // rcx
  int v10; // esi
  int v12; // [rsp+20h] [rbp-38h]
  __int64 v13[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  volatile signed __int32 *v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  if ( *(_DWORD *)(a1 + 56) == 2 )
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
    v4 = *(_QWORD *)a1;
    v16 = a1;
    (*(void (**)(void))(v4 + 8))();
    v5 = *(_QWORD *)a1;
    v13[0] = a1;
    (*(void (__fastcall **)(__int64))(v5 + 8))(a1);
    v6 = *(_DWORD *)(a1 + 48);
    v13[1] = a1;
    v13[2] = a2;
    v7 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7118b362d38d6b4d32ad205a277424b1_____lambda_7118b362d38d6b4d32ad205a277424b1___(
                      &v15,
                      v13);
    v8 = *v7;
    *v7 = 0LL;
    v9 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v9);
    }
    v10 = SHTaskPoolQueueTask(3LL, 2LL, v6, 0LL, v8, 0LL);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    if ( v10 >= 0 )
      ++*(_DWORD *)(a1 + 212);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    return (unsigned int)v10;
  }
}
