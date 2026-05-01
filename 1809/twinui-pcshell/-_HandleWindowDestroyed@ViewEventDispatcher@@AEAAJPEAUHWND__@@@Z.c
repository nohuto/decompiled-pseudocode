/*
 * XREFs of ?_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x18021F8C4
 * Callers:
 *     ?OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z @ 0x180216320 (-OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002D934 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIViewWrapperInternal@@@?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18020EAF4 (--$As@UIViewWrapperInternal@@@-$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@.c)
 *     ??$FindEx@VViewWrapperFinderByWindow@@@?$CTSimpleFixedArray@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVViewWrapperFinderByWindow@@AEBV?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18020ECA8 (--$FindEx@VViewWrapperFinderByWindow@@@-$CTSimpleFixedArray@V-$ComPtr@UIViewWrapperInternal@@@WR.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x180217BF4 (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::_HandleWindowDestroyed(RTL_SRWLOCK *this, HWND a2)
{
  __int64 v5; // r8
  bool v6; // bl
  int v7; // eax
  unsigned int v8; // ebx
  unsigned __int64 v9; // rdx
  HWND *v10; // rax
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v12[6]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v14; // [rsp+80h] [rbp+18h] BYREF
  HWND v15; // [rsp+88h] [rbp+20h] BYREF

  v12[1] = -2LL;
  if ( CApplicationManagerUtility::IsValidWindow((CApplicationManagerUtility *)a2, a2) )
    return 0LL;
  v14 = 0LL;
  AcquireSRWLockExclusive(this + 37);
  v12[2] = this + 37;
  v11 = 0LL;
  v15 = a2;
  v6 = (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IViewWrapperInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IViewWrapperInternal>>>::FindEx<ViewWrapperFinderByWindow>(
              &this[46].Ptr,
              &v15,
              v5,
              v12) >= 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  if ( !v6 )
  {
    v9 = 0LL;
    if ( this[55].Ptr )
    {
      v10 = (HWND *)((char *)this[54].Ptr + 16);
      while ( *v10 != a2 )
      {
        ++v9;
        v10 += 3;
        if ( (PVOID)v9 >= this[55].Ptr )
          goto LABEL_13;
      }
      CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
        &this[54].Ptr,
        v9);
    }
    goto LABEL_13;
  }
  v7 = Microsoft::WRL::ComPtr<IViewWrapperInternal>::As<IViewWrapperInternal>((_QWORD *)this[46].Ptr + v12[0], &v14);
  v8 = v7;
  if ( v7 >= 0 )
  {
LABEL_13:
    if ( this != (RTL_SRWLOCK *)-296LL )
      ReleaseSRWLockExclusive(this + 37);
    if ( v14 )
      (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v14 + 760LL))(v14, a2);
    v8 = 0;
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x96E,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)v7);
  if ( this != (RTL_SRWLOCK *)-296LL )
    ReleaseSRWLockExclusive(this + 37);
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return v8;
}
