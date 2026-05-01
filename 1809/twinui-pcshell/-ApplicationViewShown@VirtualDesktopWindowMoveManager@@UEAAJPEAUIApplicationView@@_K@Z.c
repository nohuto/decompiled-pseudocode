/*
 * XREFs of ?ApplicationViewShown@VirtualDesktopWindowMoveManager@@UEAAJPEAUIApplicationView@@_K@Z @ 0x18006F5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardCompareHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardMergeHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@@@QEAAJ_K@Z @ 0x180395C4C (-RemoveAt@-$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V-$CTPolicyCo.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopWindowMoveManager::ApplicationViewShown(
        VirtualDesktopWindowMoveManager *this,
        struct IApplicationView *a2,
        unsigned __int64 a3)
{
  __int64 v6; // rbx
  int v7; // ebx
  int v9; // eax
  _QWORD **v10; // r8
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // r14
  int v14; // eax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // [rsp+28h] [rbp-39h] BYREF
  __int64 v22; // [rsp+30h] [rbp-31h] BYREF
  _QWORD v23[6]; // [rsp+38h] [rbp-29h] BYREF
  __int128 v24; // [rsp+68h] [rbp+7h] BYREF
  __int128 v25; // [rsp+78h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v23[1] = -2LL;
  if ( !*((_QWORD *)this + 8) )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
      (const char *)0x8007139FLL);
    return (unsigned int)v7;
  }
  v6 = *((_QWORD *)this + 12);
  if ( v6 )
  {
    v13 = 32 * v6;
    do
    {
      if ( *(_QWORD *)(v13 + *((_QWORD *)this + 11) - 8) + 500LL < a3 )
      {
        v14 = CTSimpleArray<VirtualDesktopWindowMoveManager::PendingMove,4294967294,CTPolicyCoTaskMem<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardCompareHelper<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardMergeHelper<VirtualDesktopWindowMoveManager::PendingMove>>::RemoveAt(
                (char *)this + 88,
                v6 - 1);
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x81,
            (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
            (const char *)(unsigned int)v14,
            v21);
      }
      v13 -= 32LL;
      --v6;
    }
    while ( v6 );
  }
  v22 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
         a2,
         &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
         &v22);
  if ( v7 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v22 + 24LL))(v22, v23);
    v7 = v9;
    if ( v9 < 0 )
    {
      v15 = 95LL;
      goto LABEL_26;
    }
    v10 = (_QWORD **)((char *)this + 88);
    v11 = 0LL;
    if ( !*((_QWORD *)this + 12) )
    {
LABEL_8:
      v7 = -2147319765;
      goto LABEL_4;
    }
    v12 = *v10;
    while ( *v12 != v23[0] )
    {
      ++v11;
      v12 += 4;
      if ( v11 >= *((_QWORD *)this + 12) )
        goto LABEL_8;
    }
    v16 = *v10;
    v24 = *(_OWORD *)&(*v10)[4 * v11];
    v25 = *(_OWORD *)&v16[4 * v11 + 2];
    CTSimpleArray<VirtualDesktopWindowMoveManager::PendingMove,4294967294,CTPolicyCoTaskMem<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardCompareHelper<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardMergeHelper<VirtualDesktopWindowMoveManager::PendingMove>>::RemoveAt(
      (char *)this + 88,
      v11);
    v17 = *((_QWORD *)&v24 + 1) - 0x4CF966F2C2DDEA68LL;
    if ( *((_QWORD *)&v24 + 1) == 0x4CF966F2C2DDEA68LL )
      v17 = v25 + 0x534404FF02E49B7ELL;
    if ( !v17 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 6) + 128LL))(
             *((_QWORD *)this + 6),
             a2);
      v7 = v9;
      if ( v9 >= 0 )
        goto LABEL_4;
      v15 = 110LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_4;
    }
    v21 = 0LL;
    v18 = *((_QWORD *)this + 7);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    v19 = (*(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v18 + 88LL))(v18, (char *)&v24 + 8, &v21);
    v7 = v19;
    if ( v19 >= 0 )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**((_QWORD **)this + 6) + 112LL))(
              *((_QWORD *)this + 6),
              a2,
              v21);
      v7 = v19;
      if ( v19 >= 0 )
      {
LABEL_32:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
        goto LABEL_4;
      }
      v20 = 116LL;
    }
    else
    {
      v20 = 115LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
      (const char *)(unsigned int)v19);
    goto LABEL_32;
  }
LABEL_4:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  return (unsigned int)v7;
}
