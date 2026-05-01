/*
 * XREFs of ?_AddDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x180383F68
 * Callers:
 *     ?AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z @ 0x180383330 (-AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z.c)
 *     ?AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180383420 (-AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F6B54 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopCollection::_AddDesktop(CVirtualDesktopCollection *this, struct IVirtualDesktop *a2)
{
  void *v4; // r8
  int v5; // ebx
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IVirtualDesktop *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
  v5 = 0;
  v6 = *((_QWORD *)this + 7);
  if ( v6 != *((_QWORD *)this + 9)
    || (v5 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (__int64)this + 48,
               v6 + 1,
               v4),
        v5 >= 0) )
  {
    v7 = (__int64 *)(*((_QWORD *)this + 6) + 8 * (*((_QWORD *)this + 7))++);
    if ( v7 )
    {
      *v7 = 0LL;
      if ( v7 != (__int64 *)&v11 )
      {
        *v7 = (__int64)a2;
        v11 = 0LL;
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  if ( v5 >= 0 )
  {
    v9 = *((_QWORD *)this + 4);
    if ( v9 )
      (*(void (__fastcall **)(__int64, CVirtualDesktopCollection *))(*(_QWORD *)v9 + 24LL))(v9, this);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
}
