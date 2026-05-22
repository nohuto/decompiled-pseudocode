/*
 * XREFs of ?DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@PEAUIInputTarget@@@Z @ 0x1800BC230
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?InitializeInputMessageWithInputInfo@@YAXPEBUPointerInputInfo@@PEAPEAU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800BCB98 (-InitializeInputMessageWithInputInfo@@YAXPEBUPointerInputInfo@@PEAPEAU_MIT_INPUT_INTEROP_MESSAGE.c)
 *     ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@PEAX@Z @ 0x1800BEC50 (-RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Win32kInterop::DeliverInputToTarget(
        Win32kInterop *this,
        struct InputInfo *a2,
        struct IInputTarget *a3)
{
  unsigned int v6; // edi
  void *v7; // rdx
  int (__fastcall *v8)(struct IInputTarget *, GUID *, __int64 *); // rbx
  int v9; // ebp
  struct _MIT_INPUT_INTEROP_MESSAGE *v10; // rbx
  const struct std::nothrow_t *v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  struct _MIT_INPUT_INTEROP_MESSAGE *v14; // [rsp+68h] [rbp+20h] BYREF

  if ( (*(_DWORD *)a2 & 0x1000) != 0 )
  {
    if ( *((_BYTE *)a2 + 134) )
      Win32kInterop::s_pfnMTCallback((struct InputInfo *)((char *)a2 + 136), 0LL);
    return 0LL;
  }
  if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    if ( a3 )
      return (*(__int64 (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a3 + 24LL))(a3);
    return 0LL;
  }
  v6 = 0;
  v13 = 0LL;
  if ( !a3 )
  {
    v7 = 0LL;
    goto LABEL_15;
  }
  v8 = **(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a3;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v13);
  if ( v8(a3, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v13) >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 64LL))(v13);
    if ( v9 )
    {
      InitializeInputMessageWithInputInfo(a2, &v14);
      v10 = v14;
      if ( *((_DWORD *)a2 + 53) )
      {
        do
          *((_DWORD *)v10 + 60 * v6++ + 60) = v9;
        while ( v6 < *((_DWORD *)a2 + 53) );
      }
      ((void (__fastcall *)(struct _MIT_INPUT_INTEROP_MESSAGE *, _QWORD))Win32kInterop::s_pfnMTCallback)(v10, 0LL);
      operator delete(v10, v11);
      goto LABEL_16;
    }
    v7 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 56LL))(v13);
LABEL_15:
    Win32kInterop::RoutePointerFrame(a2, v7);
LABEL_16:
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v13);
    return 0LL;
  }
  Win32kInterop::RoutePointerFrame(a2, 0LL);
  v12 = (*(__int64 (__fastcall **)(struct IInputTarget *, struct InputInfo *))(*(_QWORD *)a3 + 24LL))(a3, a2);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v13);
  return v12;
}
