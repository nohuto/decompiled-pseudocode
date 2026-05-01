/*
 * XREFs of CAppTransitionTargetManager_CreateInstance @ 0x1803AA914
 * Callers:
 *     ?_SwitchToMonitor@CAppTransitionManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1803A7ABC (-_SwitchToMonitor@CAppTransitionManager@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0CAppTransitionTargetManager@@QEAA@XZ @ 0x1803A8C34 (--0CAppTransitionTargetManager@@QEAA@XZ.c)
 */

__int64 __fastcall CAppTransitionTargetManager_CreateInstance(IUnknown *punkSite, __int64 a2, _QWORD *a3)
{
  CAppTransitionTargetManager *v5; // rax
  HRESULT v6; // edi
  CAppTransitionTargetManager *v7; // rbx
  IUnknown *punk; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0LL;
  punk = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  punk = 0LL;
  v5 = (CAppTransitionTargetManager *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v7 = CAppTransitionTargetManager::CAppTransitionTargetManager(v5);
    v6 = (**(__int64 (__fastcall ***)(CAppTransitionTargetManager *, GUID *, IUnknown **))v7)(
           v7,
           &GUID_60f78ac1_5edd_4b6d_9d29_b2300ef43343,
           &punk);
    (*(void (__fastcall **)(CAppTransitionTargetManager *))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v6 >= 0 )
    {
      v6 = IUnknown_SetSite(punk, punkSite);
      if ( v6 >= 0 )
        v6 = ((__int64 (__fastcall *)(IUnknown *, GUID *, _QWORD *))punk->lpVtbl->QueryInterface)(
               punk,
               &GUID_60f78ac1_5edd_4b6d_9d29_b2300ef43343,
               a3);
    }
  }
  else
  {
    v6 = -2147024882;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  return (unsigned int)v6;
}
