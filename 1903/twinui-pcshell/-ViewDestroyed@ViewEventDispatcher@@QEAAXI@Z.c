/*
 * XREFs of ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x180271ED8
 * Callers:
 *     ?OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x180288380 (-OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     std::_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___::_Delete_this @ 0x18016A280 (std--_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___--_Dele.c)
 *     ??$As@UIViewWrapperInternal@@@?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802662AC (--$As@UIViewWrapperInternal@@@-$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@.c)
 *     ??$FindEx@VPendingDataFinderByViewInstanceId@ViewEventDispatcher@@@?$CTSimpleFixedArray@UPendingViewData@ViewEventDispatcher@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEBAJAEBVPendingDataFinderByViewInstanceId@ViewEventDispatcher@@AEBUPendingViewData@2@PEA_K_K@Z @ 0x1802663BC (--$FindEx@VPendingDataFinderByViewInstanceId@ViewEventDispatcher@@@-$CTSimpleFixedArray@UPending.c)
 *     ??$FindEx@VViewWrapperFinderByViewInstanceId@@@?$CTSimpleFixedArray@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVViewWrapperFinderByViewInstanceId@@AEBV?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1802663F4 (--$FindEx@VViewWrapperFinderByViewInstanceId@@@-$CTSimpleFixedArray@V-$ComPtr@UIViewWrapperInter.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x18026DF8C (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x180273EE0 (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x18027577C (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Wi.c)
 *     ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x180275D88 (-_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall ViewEventDispatcher::ViewDestroyed(ViewEventDispatcher *this, int a2)
{
  RTL_SRWLOCK *v4; // rsi
  __int64 v5; // r8
  bool v6; // bl
  __int64 v7; // r8
  unsigned __int64 v8; // rbx
  int v9; // eax
  int MatchingViewEventRegistration; // eax
  bool v11; // bl
  unsigned __int64 v12; // rcx
  int v13; // [rsp+30h] [rbp-B8h] BYREF
  struct IUnknown *v14; // [rsp+38h] [rbp-B0h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v17[3]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v18[3]; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v19[8]; // [rsp+80h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v18[2] = -2LL;
  v14 = 0LL;
  v16 = 0LL;
  v4 = (RTL_SRWLOCK *)((char *)this + 280);
  AcquireSRWLockExclusive((PSRWLOCK)this + 35);
  v17[1] = (__int64)v4;
  v17[0] = 0LL;
  v13 = a2;
  try
  {
    v6 = (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IViewWrapperInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IViewWrapperInternal>>>::FindEx<ViewWrapperFinderByViewInstanceId>(
                (_QWORD *)this + 44,
                &v13,
                v5,
                &v15) >= 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
    if ( v6 )
    {
      v8 = v15;
      v9 = Microsoft::WRL::ComPtr<IViewWrapperInternal>::As<IViewWrapperInternal>(
             (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 44) + 8 * v15),
             (__int64 *)&v14);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          651LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v9);
      ViewEventDispatcher::_RemoveValidView(this, v8);
      if ( (unsigned int)SHIsSameObject(v14, *((struct IUnknown **)this + 38)) )
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 38);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(this, v14, &v16);
      if ( MatchingViewEventRegistration >= 0 )
        goto LABEL_11;
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        660LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)MatchingViewEventRegistration);
    }
    v18[1] = 0LL;
    v17[2] = 0LL;
    v18[0] = 0LL;
    v13 = a2;
    v11 = (int)CTSimpleFixedArray<ViewEventDispatcher::PendingViewData,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>>::FindEx<ViewEventDispatcher::PendingDataFinderByViewInstanceId>(
                 (__int64)this + 416,
                 &v13,
                 v7,
                 &v15) >= 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v18);
    if ( v11 )
      CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
        (_QWORD *)this + 52,
        v15);
LABEL_11:
    v19[0] = off_18044AA58;
    v19[7] = v19;
    std::_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___::_Delete_this(v19, 0);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( v16 )
    {
      v12 = *(_QWORD *)(v16 + 32);
      v15 = v12;
      if ( v12 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 8LL))(v12);
      ViewEventDispatcher::_RaiseViewEvent(this, v14, 4LL, &v15);
      ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl[33].AddRef)(v14);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  }
  catch ( ... )
  {
  }
}
