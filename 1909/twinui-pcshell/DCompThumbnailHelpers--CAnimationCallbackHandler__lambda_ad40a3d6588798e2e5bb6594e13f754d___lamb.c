/*
 * XREFs of DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ad40a3d6588798e2e5bb6594e13f754d___lambda_8282e43d19605b8bda0fa017156e9de9___::OnStoryboardStatusChanged @ 0x1803F2180
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIStoryboardExtraData@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStoryboardExtraData@@@WRL@Microsoft@@@Details@12@@Z @ 0x180390C38 (--$As@UIStoryboardExtraData@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     ?GhostDividerShown@JointResizeTelemetry@@SAXXZ @ 0x1803F1E68 (-GhostDividerShown@JointResizeTelemetry@@SAXXZ.c)
 */

__int64 __fastcall DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ad40a3d6588798e2e5bb6594e13f754d___lambda_8282e43d19605b8bda0fa017156e9de9___::OnStoryboardStatusChanged(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  void (*v7)(void); // rax
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11[2]; // [rsp+28h] [rbp-10h] BYREF

  if ( a3 != 1 )
  {
    if ( a3 == 5 )
    {
      JointResizeTelemetry::GhostDividerShown();
      v6 = *(_QWORD *)(a1 + 24);
      if ( !v6 )
        return 0LL;
      v7 = *(void (**)(void))(*(_QWORD *)v6 + 48LL);
    }
    else
    {
      if ( ((a3 - 2) & 0xFFFFFFFD) != 0 )
        return 0LL;
      v8 = *(_QWORD *)(a1 + 24);
      if ( !v8 )
        return 0LL;
      v7 = *(void (**)(void))(*(_QWORD *)v8 + 56LL);
    }
    v7();
    return 0LL;
  }
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  if ( (*(int (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)a2 + 136LL))(a2, &v10, 0LL) >= 0 )
  {
    v11[0] = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IStoryboardExtraData>(&v10, v11) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11[0] + 40LL))(v11[0]);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
  }
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  return 0LL;
}
