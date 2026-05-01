/*
 * XREFs of ?SetHolographicActivationForTokenView@ViewManagerBridge@@UEAAJI_N@Z @ 0x180289FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIShellView@Server@Navigation@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIShellView@Server@Navigation@@@WRL@Microsoft@@@Details@12@@Z @ 0x18026625C (--$As@UIShellView@Server@Navigation@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewManagerBridge::SetHolographicActivationForTokenView(ViewManagerBridge *this, int a2, char a3)
{
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  int v10; // r14d
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, _QWORD, _QWORD); // rdi
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v19; // [rsp+20h] [rbp-30h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-28h] BYREF
  __int64 v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  int v24; // [rsp+90h] [rbp+40h] BYREF
  int v25; // [rsp+A8h] [rbp+58h] BYREF

  v22[1] = -2LL;
  v6 = 0LL;
  v21 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 15) + 48LL))(*((_QWORD *)this + 15), &v24);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 391LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_23;
  }
  v10 = 0;
  if ( v24 <= 0 )
    goto LABEL_22;
  do
  {
    v20 = 0LL;
    v11 = *((_QWORD *)this + 15);
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 56LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
    v13 = v12(v11, (unsigned int)v10, &v20);
    v8 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18C,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v13);
      goto LABEL_21;
    }
    v19 = 0LL;
    v14 = Microsoft::WRL::ComPtr<IUnknown>::As<Navigation::Server::IShellView>(&v20, &v19);
    v8 = v14;
    if ( v14 < 0 )
    {
      v17 = 398LL;
      goto LABEL_19;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 152LL))(v19, &v25);
    v8 = v14;
    if ( v14 < 0 )
    {
      v17 = 401LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
LABEL_21:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
      goto LABEL_23;
    }
    if ( v25 == a2 )
    {
      v15 = v19;
      if ( v6 != v19 )
      {
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
        v22[0] = v6;
        v6 = v15;
        v21 = v15;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v22);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
    ++v10;
  }
  while ( v10 < v24 );
  if ( v6 )
  {
    LOBYTE(v16) = a3;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 832LL))(v6, v16);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 412LL;
      goto LABEL_3;
    }
  }
LABEL_22:
  v8 = 0;
LABEL_23:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  return v8;
}
