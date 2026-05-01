/*
 * XREFs of ??$MakeAndInitialize@VCortanaStoreAppExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCortanaStoreAppExperienceManager@@@Z @ 0x1801BA6A4
 * Callers:
 *     ?CreateInstance@CortanaStoreAppExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801BC7B0 (-CreateInstance@CortanaStoreAppExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CortanaStoreAppExperienceManager@@QEAA@XZ @ 0x1801BB300 (--0CortanaStoreAppExperienceManager@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCortanaStoreAppExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1801BD60C (-InternalRelease@-$ComPtr@VCortanaStoreAppExperienceManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CortanaStoreAppExperienceManager@@QEAAJXZ @ 0x1801BED94 (-RuntimeClassInitialize@CortanaStoreAppExperienceManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CortanaStoreAppExperienceManager,CortanaStoreAppExperienceManager,>(
        volatile signed __int64 **a1)
{
  CortanaStoreAppExperienceManager *v2; // rax
  int v3; // edi
  volatile signed __int64 *v4; // rbx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  volatile signed __int64 *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h]

  *a1 = 0LL;
  v2 = (CortanaStoreAppExperienceManager *)operator new(0x190uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = (volatile signed __int64 *)CortanaStoreAppExperienceManager::CortanaStoreAppExperienceManager(v2);
    v8 = v4;
    v9 = 0LL;
    v3 = CortanaStoreAppExperienceManager::RuntimeClassInitialize((CortanaStoreAppExperienceManager *)v4);
    if ( v3 >= 0 )
    {
      if ( v4 )
      {
        v5 = *((_QWORD *)v4 + 20);
        while ( v5 >= 0 )
        {
          v6 = v5;
          v5 = _InterlockedCompareExchange64(v4 + 20, v5 + 1, v5);
          if ( v6 == v5 )
            goto LABEL_10;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v5 + 16));
      }
LABEL_10:
      *a1 = v4;
      v3 = 0;
    }
    Microsoft::WRL::ComPtr<CortanaStoreAppExperienceManager>::InternalRelease(&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
