/*
 * XREFs of ?UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18021BD00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18018D074 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180190528 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Shutdown@ConnectedStandbyHelper@@QEAAXXZ @ 0x18023BC40 (-Shutdown@ConnectedStandbyHelper@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::UnsubscribeFromServices(ViewEventDispatcher *this, struct IServiceProvider *a2)
{
  ConnectedStandbyHelper *v4; // rcx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned int v8; // edi
  std::_Ref_count_base *v10[2]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  __int64 v12; // [rsp+60h] [rbp+10h] BYREF

  wil::details::SetEvent(*(wil::details **)(*((_QWORD *)this + 49) + 136LL), a2);
  v4 = (ConnectedStandbyHelper *)*((_QWORD *)this + 52);
  if ( v4 )
  {
    ConnectedStandbyHelper::Shutdown(v4);
    *(_OWORD *)v10 = 0LL;
    std::shared_ptr<KBViewInfo>::operator=((_QWORD *)this + 52, (__int64 *)v10);
    if ( v10[1] )
      std::_Ref_count_base::_Decref(v10[1]);
  }
  if ( *((_DWORD *)this + 41) )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &IID_IImmersiveSessionIdleDetector,
           &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
           &v12);
    if ( v5 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 40LL))(v12, *((unsigned int *)this + 41));
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          967LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v6);
      *((_DWORD *)this + 41) = 0;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        965LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v5);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  if ( *((_DWORD *)this + 40) )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &SID_ImmersiveShellHookService,
           &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
           &v12);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3CF,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      return v8;
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 32LL))(v12, *((unsigned int *)this + 40));
    *((_DWORD *)this + 40) = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 46);
  return 0LL;
}
