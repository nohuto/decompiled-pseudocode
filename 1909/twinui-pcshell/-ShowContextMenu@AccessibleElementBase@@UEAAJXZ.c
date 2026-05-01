/*
 * XREFs of ?ShowContextMenu@AccessibleElementBase@@UEAAJXZ @ 0x180395D30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_36f90b150dc01683a198557705191dd2___ @ 0x180394624 (Windows--Internal--ComTaskPool--QueueTask__lambda_36f90b150dc01683a198557705191dd2___.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180395DE8 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AccessibleElementBase::ShowContextMenu(AccessibleElementBase *this)
{
  int Element; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v7; // [rsp+38h] [rbp+10h] BYREF
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  Element = AccessibleElementBase::_GetElement(this, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v7);
  if ( Element >= 0 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v7 + 264LL))(v7) )
    {
      Element = -2147220988;
      v3 = 163LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
        (const char *)(unsigned int)Element);
      goto LABEL_7;
    }
    v8 = v7;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
    Element = Windows::Internal::ComTaskPool::QueueTask__lambda_36f90b150dc01683a198557705191dd2___(v4, &v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
    if ( Element < 0 )
    {
      v3 = 168LL;
      goto LABEL_6;
    }
  }
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  return (unsigned int)Element;
}
