/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_21b79cea9a56d6bbfbb4614e776bd7a3___ @ 0x18001709C
 * Callers:
 *     ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180013DE0 (-RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAU.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d83b735c081dd2fe41a4ef73e2aa52d1_____lambda_d83b735c081dd2fe41a4ef73e2aa52d1___ @ 0x1800171B8 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d83b735c081dd.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_21b79cea9a56d6bbfbb4614e776bd7a3___(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // r14
  __int64 v8; // rcx
  unsigned int v9; // esi
  __int64 *v10; // rax
  __int64 v11; // rbx
  int v12; // esi
  int v14; // [rsp+20h] [rbp-40h]
  _QWORD v15[3]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h] BYREF
  char v17; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v19; // [rsp+80h] [rbp+20h] BYREF
  __int64 *v20; // [rsp+90h] [rbp+30h] BYREF

  if ( *((_DWORD *)a1 + 14) == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x823,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2 + 1);
    return 2147947423LL;
  }
  else
  {
    v4 = *a1;
    v20 = a1;
    (*(void (**)(void))(v4 + 8))();
    v5 = *a1;
    v15[0] = a1;
    (*(void (__fastcall **)(__int64 *))(v5 + 8))(a1);
    v6 = *a2;
    v7 = a2 + 1;
    v8 = a2[1];
    v15[1] = a1;
    v15[2] = v6;
    v16 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = *((_DWORD *)a1 + 12);
    v17 = *((_BYTE *)a2 + 16);
    v10 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d83b735c081dd2fe41a4ef73e2aa52d1_____lambda_d83b735c081dd2fe41a4ef73e2aa52d1___(
                       &v19,
                       v15);
    v11 = *v10;
    *v10 = 0LL;
    if ( v19 )
    {
      v19 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
    }
    v12 = SHTaskPoolQueueTask(3LL, 2LL, v9, 0LL, v11, 0LL);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
    if ( v12 >= 0 )
      ++*((_DWORD *)a1 + 53);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v7);
    return (unsigned int)v12;
  }
}
