/*
 * XREFs of ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVCortanaSharedExperienceManager@@P85@EAAJI_K_J@Z@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVCortanaSharedExperienceManager@@$$QEAP87@EAAJI_K_J@Z@Z @ 0x1801505B8
 * Callers:
 *     ?_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180154EA0 (-_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??$RuntimeClassInitialize@VCortanaSharedExperienceManager@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVCortanaSharedExperienceManager@@P84@EAAJI_K_J@Z@Z @ 0x1801507AC (--$RuntimeClassInitialize@VCortanaSharedExperienceManager@@@IImmersiveWindowMessageNotificationH.c)
 *     ??0IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAA@XZ @ 0x180150E34 (--0IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ @ 0x1801528C8 (-InternalRelease@-$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler,Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler,CortanaSharedExperienceManager *,long (CortanaSharedExperienceManager::*)(unsigned int,unsigned __int64,__int64)>(
        __int64 *a1,
        _QWORD *a2,
        __int128 *a3)
{
  Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler *v6; // rax
  int v7; // edi
  __int64 v8; // rbx
  volatile int *v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h]

  *a1 = 0LL;
  v6 = (Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler *)operator new(
                                                                                 0x98uLL,
                                                                                 (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::IImmersiveWindowMessageNotificationHandler(v6);
    v14 = v8;
    v15 = 0LL;
    v13 = *a3;
    v7 = Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::RuntimeClassInitialize<CortanaSharedExperienceManager>(
           v8,
           *a2,
           &v13);
    if ( v7 >= 0 )
    {
      if ( v8 )
      {
        v10 = *(_QWORD *)(v8 + 32);
        while ( v10 >= 0 )
        {
          if ( (_DWORD)v10 != 0x7FFFFFFF )
          {
            v11 = v10;
            v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 32), v10 + 1, v10);
            if ( v11 != v10 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
          (Microsoft::WRL::Details *)(2 * v10 + 16),
          v9);
      }
LABEL_11:
      *a1 = v8;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<AppViewIconLoader>::InternalRelease(&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
