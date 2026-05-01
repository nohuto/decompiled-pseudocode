/*
 * XREFs of ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVCortanaSharedExperienceManager@@P85@EAAJI_K_J@Z@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVCortanaSharedExperienceManager@@$$QEAP87@EAAJI_K_J@Z@Z @ 0x18017C6F0
 * Callers:
 *     ?_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180180E2C (-_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$RuntimeClassInitialize@VCortanaSharedExperienceManager@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVCortanaSharedExperienceManager@@P84@EAAJI_K_J@Z@Z @ 0x18017C8E8 (--$RuntimeClassInitialize@VCortanaSharedExperienceManager@@@IImmersiveWindowMessageNotificationH.c)
 *     ??0IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAA@XZ @ 0x18017CF88 (--0IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ @ 0x18017E6B8 (-InternalRelease@-$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler,Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler,CortanaSharedExperienceManager *,long (CortanaSharedExperienceManager::*)(unsigned int,unsigned __int64,__int64)>(
        __int64 *a1,
        __int64 *a2,
        __int128 *a3)
{
  Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler *v6; // rax
  int v7; // edi
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // rbx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF
  Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler *v17; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v6 = (Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler *)operator new(
                                                                                 0xA0uLL,
                                                                                 (const struct std::nothrow_t *)&std::nothrow);
  v17 = v6;
  if ( v6 )
  {
    v8 = Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::IImmersiveWindowMessageNotificationHandler(v6);
    v9 = *a3;
    v10 = *a2;
    v16 = v8;
    v15 = v9;
    v11 = v8;
    v7 = Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::RuntimeClassInitialize<CortanaSharedExperienceManager>(
           v8,
           v10,
           &v15);
    if ( v7 >= 0 )
    {
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 32);
        while ( v12 >= 0 )
        {
          v13 = v12;
          v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 32), v12 + 1, v12);
          if ( v13 == v12 )
            goto LABEL_10;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v12 + 16));
      }
LABEL_10:
      *a1 = v11;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<AppViewIconLoader>::InternalRelease(&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
