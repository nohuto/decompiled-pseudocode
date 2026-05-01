/*
 * XREFs of ?SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1800331F0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e97912004d4e96f3bec37740b2aa1798___ @ 0x1800332FC (Windows--Internal--ComTaskPool--QueueTask__lambda_e97912004d4e96f3bec37740b2aa1798___.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SynchronizeWindowTitleAndButtons(
        CFrameApplicationPresentation *this,
        struct IImmersiveApplication *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // esi
  struct IImmersiveApplication *v9; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v10[3]; // [rsp+30h] [rbp-20h] BYREF
  struct IImmersiveApplication *v11; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  CFrameApplicationPresentation *v13; // [rsp+60h] [rbp+10h] BYREF

  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 8LL))(a2);
  v9 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( *((_DWORD *)this + 14) == 2 )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75E,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      (int)this);
  }
  else
  {
    v13 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
    v4 = *(_QWORD *)this;
    v10[0] = this;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(v4 + 8))(this);
    v10[1] = this;
    v10[2] = this;
    v11 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_e97912004d4e96f3bec37740b2aa1798___(
           v6,
           v5,
           *((unsigned int *)this + 12),
           v10,
           this,
           v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
    if ( v7 >= 0 )
      ++*((_DWORD *)this + 53);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 16LL))(a2);
  return (unsigned int)v7;
}
