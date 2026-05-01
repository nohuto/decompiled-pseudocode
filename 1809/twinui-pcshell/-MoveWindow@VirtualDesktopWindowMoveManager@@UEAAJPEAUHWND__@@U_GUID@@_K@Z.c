/*
 * XREFs of ?MoveWindow@VirtualDesktopWindowMoveManager@@UEAAJPEAUHWND__@@U_GUID@@_K@Z @ 0x180395960
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K0@Z @ 0x1800F6C30 (-_EnsureCapacity@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisib.c)
 *     ?TrimPendingMoves@VirtualDesktopWindowMoveManager@@AEAAX_K@Z @ 0x180395D2C (-TrimPendingMoves@VirtualDesktopWindowMoveManager@@AEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopWindowMoveManager::MoveWindow(
        VirtualDesktopWindowMoveManager *this,
        __int64 a2,
        struct _GUID *a3,
        unsigned __int64 a4)
{
  unsigned int v8; // ebx
  void *v9; // r8
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __m256i *v15; // rcx
  __int64 v16; // rbx
  int v17; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // [rsp+20h] [rbp-40h] BYREF
  int v23; // [rsp+28h] [rbp-38h] BYREF
  __int64 v24; // [rsp+30h] [rbp-30h] BYREF
  __m256i v25; // [rsp+38h] [rbp-28h]
  __int64 v26; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v26 = -2LL;
  if ( *((_QWORD *)this + 8) )
  {
    VirtualDesktopWindowMoveManager::TrimPendingMoves(this, a4);
    v24 = 0LL;
    v10 = *(_QWORD *)&a3->Data1 - 0x4CF966F2C2DDEA68LL;
    if ( *(_QWORD *)&a3->Data1 == 0x4CF966F2C2DDEA68LL )
      v10 = *(_QWORD *)a3->Data4 + 0x534404FF02E49B7ELL;
    if ( v10 )
    {
      v11 = *((_QWORD *)this + 7);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      v12 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, __int64 *))(*(_QWORD *)v11 + 88LL))(v11, a3, &v24);
      v8 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3D,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
          (const char *)(unsigned int)v12);
LABEL_19:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
        return v8;
      }
    }
    v25.m256i_i64[0] = a2;
    *(struct _GUID *)&v25.m256i_u64[1] = *a3;
    v25.m256i_i64[3] = a4;
    v13 = 0;
    v14 = *((_QWORD *)this + 12);
    if ( v14 != *((_QWORD *)this + 14)
      || (v13 = CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::_EnsureCapacity(
                  (__int64)this + 88,
                  v14 + 1,
                  v9),
          v13 >= 0) )
    {
      v15 = (__m256i *)(*((_QWORD *)this + 11) + 32 * (*((_QWORD *)this + 12))++);
      if ( v15 )
        *v15 = v25;
    }
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        66LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
        (const char *)(unsigned int)v13);
    v22 = 0LL;
    v23 = 0;
    v16 = *((_QWORD *)this + 8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    if ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v16 + 48LL))(v16, a2, &v22) < 0 )
      goto LABEL_17;
    v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 216LL))(v22, &v23);
    if ( v17 >= 0 )
    {
      if ( v23 )
      {
        v19 = *(_QWORD *)&a3->Data1 - 0x4CF966F2C2DDEA68LL;
        if ( *(_QWORD *)&a3->Data1 == 0x4CF966F2C2DDEA68LL )
          v19 = *(_QWORD *)a3->Data4 + 0x534404FF02E49B7ELL;
        if ( v19 )
        {
          v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 6) + 216LL))(
                  *((_QWORD *)this + 6),
                  v22,
                  v24);
          v8 = v20;
          if ( v20 >= 0 )
            goto LABEL_17;
          v21 = 79LL;
        }
        else
        {
          v20 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 96LL))(
                  *((_QWORD *)this + 10),
                  v22);
          v8 = v20;
          if ( v20 >= 0 )
            goto LABEL_17;
          v21 = 75LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
          (const char *)(unsigned int)v20);
        goto LABEL_18;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        71LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
        (const char *)(unsigned int)v17);
    }
LABEL_17:
    v8 = 0;
LABEL_18:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    goto LABEL_19;
  }
  v8 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x33,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
    (const char *)0x8007139FLL);
  return v8;
}
