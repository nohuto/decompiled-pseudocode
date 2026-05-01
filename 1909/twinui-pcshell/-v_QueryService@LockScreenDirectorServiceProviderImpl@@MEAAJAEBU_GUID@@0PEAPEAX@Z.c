/*
 * XREFs of ?v_QueryService@LockScreenDirectorServiceProviderImpl@@MEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1801F9780
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x1801F7414 (-EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z.c)
 */

__int64 __fastcall LockScreenDirectorServiceProviderImpl::v_QueryService(
        HANDLE *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v6; // rax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ILockScreenDirector *v13; // [rsp+48h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_ILockScreenDirector.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_ILockScreenDirector.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_ILockScreenDirector.Data4;
  if ( !v6 )
  {
    v13 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    v9 = LockScreenDirectorServiceProviderImpl::EnsureChildServices(this - 6, &v13);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v9 = (**(__int64 (__fastcall ***)(struct ILockScreenDirector *, const struct _GUID *, void **))v13)(v13, a3, a4);
      v8 = v9;
      if ( v9 >= 0 )
      {
        v8 = 0;
        goto LABEL_11;
      }
      v10 = 93LL;
    }
    else
    {
      v10 = 92LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)v9);
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    return v8;
  }
  v8 = -2147467263;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x58,
    (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
    (const char *)0x80004001LL);
  return v8;
}
