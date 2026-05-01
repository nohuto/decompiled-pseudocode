/*
 * XREFs of ??$MakeAndInitialize@VRetailDemoExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVRetailDemoExperienceManager@@@Z @ 0x1801B4208
 * Callers:
 *     ?CreateInstance@RetailDemoExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801B4C50 (-CreateInstance@RetailDemoExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIAcrylicPolicyManager@@UIImmersiveWindowMessageNotification@@UIBatterySaverStateChangedHandler@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180108E60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180108E60.c)
 *     ??0RetailDemoExperienceManager@@QEAA@XZ @ 0x1801B46E0 (--0RetailDemoExperienceManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@RetailDemoExperienceManager@@QEAAJXZ @ 0x1801B5EEC (-RuntimeClassInitialize@RetailDemoExperienceManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<RetailDemoExperienceManager,RetailDemoExperienceManager,>(
        volatile signed __int64 **a1)
{
  RetailDemoExperienceManager *v2; // rax
  int v3; // edi
  volatile signed __int64 *v4; // rbx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt

  *a1 = 0LL;
  v2 = (RetailDemoExperienceManager *)operator new(0x1F8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = (volatile signed __int64 *)RetailDemoExperienceManager::RetailDemoExperienceManager(v2);
    v3 = RetailDemoExperienceManager::RuntimeClassInitialize((RetailDemoExperienceManager *)v4);
    if ( v3 >= 0 )
    {
      if ( v4 )
      {
        v5 = *((_QWORD *)v4 + 23);
        while ( v5 >= 0 )
        {
          v6 = v5;
          v5 = _InterlockedCompareExchange64(v4 + 23, v5 + 1, v5);
          if ( v6 == v5 )
            goto LABEL_10;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v5 + 16));
      }
LABEL_10:
      *a1 = v4;
      v3 = 0;
    }
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,Microsoft::WRL::FtmBase>::Release((__int64)v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
