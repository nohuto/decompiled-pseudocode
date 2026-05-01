/*
 * XREFs of ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x18004FCEC
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x18004F0E0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x18004F5A8 (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ?SetCloak@CClassicWindowManager@@UEAAJPEAUHWND__@@HW4_SET_CLOAK_OPTIONS@@@Z @ 0x18004F650 (-SetCloak@CClassicWindowManager@@UEAAJPEAUHWND__@@HW4_SET_CLOAK_OPTIONS@@@Z.c)
 *     ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z @ 0x18004FA64 (-_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?IsActiveApp@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x180103D40 (-IsActiveApp@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     ??$FindEx@VCClassicWindowFinderByHWND@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByHWND@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800501D0 (--$FindEx@VCClassicWindowFinderByHWND@@@-$CTSimpleFixedArray@V-$ComPtr@UIClassicWindow@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::_FindClassicWindow(
        CClassicWindowManager *this,
        HWND a2,
        struct IClassicWindow **a3,
        unsigned __int64 *a4)
{
  _QWORD *v6; // r14
  int v7; // ebp
  unsigned __int64 v9; // rsi
  __int64 v10; // [rsp+70h] [rbp+8h] BYREF
  HWND v11; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v12; // [rsp+80h] [rbp+18h] BYREF

  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = *((_QWORD *)this + 25);
  v11 = a2;
  v10 = 0LL;
  v6 = (_QWORD *)((char *)this + 192);
  v7 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByHWND>(
         (int)this + 192,
         (unsigned int)&v11,
         (unsigned int)&v10,
         (unsigned int)&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  if ( v7 >= 0 )
  {
    v9 = v12;
    if ( a3 )
      v7 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct IClassicWindow **))(*v6 + 8 * v12))(
             *(_QWORD *)(*v6 + 8 * v12),
             &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
             a3);
    if ( a4 )
      *a4 = v9;
  }
  return (unsigned int)v7;
}
