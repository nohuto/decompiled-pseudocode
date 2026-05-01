/*
 * XREFs of ?HandleFlashDetection@TabletModePositioner@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x180347C2C
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180344260 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_df999f07d52093701c0c38e9d5359aaf___ @ 0x1803434EC (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_df999f07d52093701c0c38e9d5359aaf___.c)
 */

__int64 __fastcall TabletModePositioner::HandleFlashDetection(
        TabletModePositioner *this,
        struct IAppLayoutOperation *a2)
{
  __int64 *v2; // r15
  struct IAppLayoutOperation **v5; // r14
  int v6; // eax
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  __int64 v12; // [rsp+50h] [rbp+30h] BYREF
  struct IAppLayoutOperation *v13; // [rsp+58h] [rbp+38h] BYREF

  v2 = (__int64 *)((char *)this + 288);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 36);
  v5 = (struct IAppLayoutOperation **)((char *)this + 280);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 35);
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  v6 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a2 + 120LL))(a2, &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9DE,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_14;
  }
  if ( !v12 )
  {
LABEL_13:
    v7 = 0;
    goto LABEL_14;
  }
  v13 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
  v13 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
  v7 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_df999f07d52093701c0c38e9d5359aaf___(
         v9,
         v8,
         (__int64)v2,
         &v13);
  if ( v13 )
    (*(void (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v7 >= 0 )
  {
    if ( *v5 != a2 )
    {
      v13 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
      v13 = *v5;
      *v5 = a2;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    }
    if ( this )
      (*(void (__fastcall **)(TabletModePositioner *))(*(_QWORD *)this + 16LL))(this);
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9E5,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v7);
  if ( this )
    (*(void (__fastcall **)(TabletModePositioner *))(*(_QWORD *)this + 16LL))(this);
LABEL_14:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return (unsigned int)v7;
}
