/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_4af9e279c0557e674118e7fededcb641___1_long_::Invoke @ 0x180131220
 * Callers:
 *     <none>
 * Callees:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x180010FF0 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180110CDC (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_4af9e279c0557e674118e7fededcb641___1_long_::Invoke(
        __int64 a1)
{
  int v1; // eax
  HWND v2; // r8
  HWND v3; // rdx
  signed int v4; // eax
  unsigned int v5; // ebx
  _DWORD v7[4]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]

  v1 = *(_DWORD *)(a1 + 40);
  v7[2] = 0;
  v8 = 0LL;
  v2 = *(HWND *)(a1 + 32);
  v3 = *(HWND *)(a1 + 24);
  v7[0] = v1;
  v7[1] = *(_DWORD *)(a1 + 44);
  v4 = CAppViewManager::_ShowViewAsyncWorker(
         *(CAppViewManager **)(a1 + 16),
         v3,
         v2,
         (const struct CAppViewManager::ShowViewAsyncOptions *)v7,
         0LL,
         *(struct IAsyncCallback **)(a1 + 48),
         0LL);
  v5 = v4;
  if ( v4 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v4);
  return v5;
}
