/*
 * XREFs of ?SetHolographicActivationForTokenView@ViewManagerBridge@@UEAAJI_N@Z @ 0x180234B10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIShellView@Server@Navigation@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIShellView@Server@Navigation@@@WRL@Microsoft@@@Details@12@@Z @ 0x18020EA6C (--$As@UIShellView@Server@Navigation@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewManagerBridge::SetHolographicActivationForTokenView(ViewManagerBridge *this, int a2, char a3)
{
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  int v10; // esi
  __int64 v11; // rdi
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v18; // [rsp+20h] [rbp-30h] BYREF
  __int64 v19; // [rsp+28h] [rbp-28h] BYREF
  __int64 v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v23; // [rsp+80h] [rbp+30h] BYREF
  int v24; // [rsp+98h] [rbp+48h] BYREF

  v21[1] = -2LL;
  v6 = 0LL;
  v20 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 15) + 48LL))(*((_QWORD *)this + 15), &v23);
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
  if ( v23 <= 0 )
    goto LABEL_22;
  do
  {
    v19 = 0LL;
    v11 = *((_QWORD *)this + 15);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 56LL))(v11, (unsigned int)v10, &v19);
    v8 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18C,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_21;
    }
    v18 = 0LL;
    v13 = Microsoft::WRL::ComPtr<IUnknown>::As<Navigation::Server::IShellView>(&v19, &v18);
    v8 = v13;
    if ( v13 < 0 )
    {
      v16 = 398LL;
      goto LABEL_19;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 152LL))(v18, &v24);
    v8 = v13;
    if ( v13 < 0 )
    {
      v16 = 401LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
LABEL_21:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
      goto LABEL_23;
    }
    if ( v24 == a2 )
    {
      v14 = v18;
      if ( v6 != v18 )
      {
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
        v21[0] = v6;
        v6 = v14;
        v20 = v14;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
    ++v10;
  }
  while ( v10 < v23 );
  if ( v6 )
  {
    LOBYTE(v15) = a3;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 832LL))(v6, v15);
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
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  return v8;
}
