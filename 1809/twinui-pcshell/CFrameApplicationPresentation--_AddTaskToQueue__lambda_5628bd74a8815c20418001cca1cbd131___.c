/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_5628bd74a8815c20418001cca1cbd131___ @ 0x18005A804
 * Callers:
 *     ?SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z @ 0x18005A700 (-SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_5628bd74a8815c20418001cca1cbd131___(
        _DWORD *a1,
        int *a2)
{
  __int64 *v2; // r15
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v7; // rsi
  int v8; // eax
  int v9; // r13d
  char v10; // al
  __int128 v11; // xmm6
  _DWORD *v12; // rax
  _DWORD *v13; // r14
  _DWORD *v14; // rbx
  int v15; // ebx
  __int64 v16; // rcx
  int v18; // [rsp+38h] [rbp-59h]
  unsigned int v19; // [rsp+3Ch] [rbp-55h]
  __int64 v20; // [rsp+40h] [rbp-51h]
  _QWORD v21[2]; // [rsp+48h] [rbp-49h] BYREF
  int v22; // [rsp+58h] [rbp-39h]
  int v23; // [rsp+5Ch] [rbp-35h]
  __int64 v24; // [rsp+60h] [rbp-31h] BYREF
  __int128 v25; // [rsp+68h] [rbp-29h]
  char v26; // [rsp+78h] [rbp-19h]
  char v27; // [rsp+79h] [rbp-18h]
  char v28; // [rsp+80h] [rbp-11h]
  __int64 v29; // [rsp+88h] [rbp-9h]
  __int64 v30; // [rsp+98h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  char v32; // [rsp+F8h] [rbp+67h]
  char v33; // [rsp+108h] [rbp+77h]
  char v34; // [rsp+110h] [rbp+7Fh]

  v2 = (__int64 *)(a2 + 2);
  if ( a1[14] == 2 )
  {
    v15 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75E,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v5 = *(_QWORD *)a1;
    v6 = a1;
    v21[0] = a1;
    (*(void (__fastcall **)(_DWORD *))(v5 + 8))(a1);
    v7 = *v2;
    v8 = a2[1];
    v9 = *a2;
    v21[1] = a1;
    v22 = v9;
    v18 = v8;
    v23 = v8;
    v24 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v10 = *((_BYTE *)a2 + 32);
    v11 = *((_OWORD *)a2 + 1);
    v30 = 0LL;
    v32 = v10;
    v26 = v10;
    v33 = *((_BYTE *)a2 + 33);
    v27 = v33;
    v34 = *((_BYTE *)a2 + 40);
    v28 = v34;
    v20 = *((_QWORD *)a2 + 6);
    v29 = v20;
    v19 = a1[12];
    v25 = v11;
    v12 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = 0LL;
    v14 = v12;
    if ( v12 )
    {
      v12[3] = 1;
      *(_QWORD *)v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *((_QWORD *)v14 + 2) = 0LL;
      if ( v14 + 4 != (_DWORD *)v21 )
      {
        *((_QWORD *)v14 + 2) = a1;
        v6 = 0LL;
      }
      *((_QWORD *)v14 + 3) = a1;
      v14[9] = v18;
      v14[8] = v9;
      *((_QWORD *)v14 + 5) = 0LL;
      if ( v14 + 10 != (_DWORD *)&v24 )
      {
        *((_QWORD *)v14 + 5) = v7;
        v7 = 0LL;
      }
      v13 = v14;
      *((_BYTE *)v14 + 64) = v32;
      *((_BYTE *)v14 + 65) = v33;
      *((_OWORD *)v14 + 3) = v11;
      *((_BYTE *)v14 + 72) = v34;
      *((_QWORD *)v14 + 10) = v20;
      *(_QWORD *)v14 = off_1803C6D60;
    }
    v15 = SHTaskPoolQueueTask(3LL, 2LL, v19, 0LL, v13, 0LL);
    if ( v13 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v15 >= 0 )
      ++a1[53];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
    v16 = *v2;
    if ( *v2 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  return (unsigned int)v15;
}
