/*
 * XREFs of ?_FindPlaceModeVisual@CAppTransitionManager@@AEBAJPEAPEAUITemporaryAppVisual@@@Z @ 0x180387AA0
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180386560 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppTransitionManager::_FindPlaceModeVisual(
        CAppTransitionManager *this,
        struct ITemporaryAppVisual **a2)
{
  __int64 v3; // rcx
  int v4; // edi
  unsigned int i; // esi
  __int64 v6; // rbx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  struct ITemporaryAppVisual **v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  v3 = *((_QWORD *)this + 26);
  v4 = -2147467259;
  if ( v3 )
  {
    if ( (*(int (__fastcall **)(__int64, struct ITemporaryAppVisual ***))(*(_QWORD *)v3 + 24LL))(v3, &v9) >= 0 )
    {
      for ( i = 0; i < (unsigned int)v9; ++i )
      {
        if ( v4 >= 0 )
          break;
        v6 = *((_QWORD *)this + 26);
        v8 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
        if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v6 + 32LL))(
               v6,
               i,
               &GUID_114ed843_c914_443d_9588_6ffb643e73d0,
               &v8) >= 0
          && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8) == 8 )
        {
          v4 = 0;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
      }
    }
  }
  return (unsigned int)v4;
}
