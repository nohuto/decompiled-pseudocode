/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_9d5792b3efce27c5fd9c84044f53d058___ @ 0x18006A054
 * Callers:
 *     ?OnMinSizePreferencesUpdated@CFrameApplicationPresentation@@UEAAJPEAUHWND__@@@Z @ 0x18006A010 (-OnMinSizePreferencesUpdated@CFrameApplicationPresentation@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4c487b8ddfbb456201be9b3312a7435d_____lambda_4c487b8ddfbb456201be9b3312a7435d___ @ 0x18006A13C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4c487b8ddfbb4.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_9d5792b3efce27c5fd9c84044f53d058___(
        __int64 a1,
        __int128 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int128 v6; // xmm0
  unsigned int v7; // esi
  __int64 *v8; // rax
  __int64 v9; // rbx
  volatile signed __int32 *v10; // rcx
  int v11; // esi
  int v13; // [rsp+20h] [rbp-38h]
  __int64 v14[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v15; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  volatile signed __int32 *v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF

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
    v18 = a1;
    (*(void (**)(void))(v4 + 8))();
    v5 = *(_QWORD *)a1;
    v14[0] = a1;
    (*(void (__fastcall **)(__int64))(v5 + 8))(a1);
    v6 = *a2;
    v7 = *(_DWORD *)(a1 + 48);
    v14[1] = a1;
    v15 = v6;
    v8 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4c487b8ddfbb456201be9b3312a7435d_____lambda_4c487b8ddfbb456201be9b3312a7435d___(
                      &v17,
                      v14);
    v9 = *v8;
    *v8 = 0LL;
    v10 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v10);
    }
    v11 = SHTaskPoolQueueTask(3LL, 2LL, v7, 0LL, v9, 0LL);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
    if ( v11 >= 0 )
      ++*(_DWORD *)(a1 + 212);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    return (unsigned int)v11;
  }
}
