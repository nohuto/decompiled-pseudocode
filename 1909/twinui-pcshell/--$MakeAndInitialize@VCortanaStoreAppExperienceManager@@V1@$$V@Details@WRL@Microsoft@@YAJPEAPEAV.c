/*
 * XREFs of ??$MakeAndInitialize@VCortanaStoreAppExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCortanaStoreAppExperienceManager@@@Z @ 0x1801D9624
 * Callers:
 *     ?CreateInstance@CortanaStoreAppExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801DB770 (-CreateInstance@CortanaStoreAppExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180127714 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??0CortanaStoreAppExperienceManager@@QEAA@XZ @ 0x1801DA2C0 (--0CortanaStoreAppExperienceManager@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCortanaStoreAppExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1801DC5DC (-InternalRelease@-$ComPtr@VCortanaStoreAppExperienceManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CortanaStoreAppExperienceManager@@QEAAJXZ @ 0x1801DDD64 (-RuntimeClassInitialize@CortanaStoreAppExperienceManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CortanaStoreAppExperienceManager,CortanaStoreAppExperienceManager,>(
        volatile signed __int64 **a1)
{
  CortanaStoreAppExperienceManager *v2; // rax
  int v3; // edi
  volatile signed __int64 *v4; // rbx
  volatile int *v5; // rdx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  volatile signed __int64 *v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h]

  *a1 = 0LL;
  v2 = (CortanaStoreAppExperienceManager *)operator new(0x190uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = (volatile signed __int64 *)CortanaStoreAppExperienceManager::CortanaStoreAppExperienceManager(v2);
    v9 = v4;
    v10 = 0LL;
    v3 = CortanaStoreAppExperienceManager::RuntimeClassInitialize((CortanaStoreAppExperienceManager *)v4);
    if ( v3 >= 0 )
    {
      if ( v4 )
      {
        v6 = *((_QWORD *)v4 + 20);
        while ( v6 >= 0 )
        {
          if ( (_DWORD)v6 != 0x7FFFFFFF )
          {
            v7 = v6;
            v6 = _InterlockedCompareExchange64(v4 + 20, v6 + 1, v6);
            if ( v7 != v6 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v6 + 16), v5);
      }
LABEL_11:
      *a1 = v4;
      v3 = 0;
    }
    Microsoft::WRL::ComPtr<CortanaStoreAppExperienceManager>::InternalRelease(&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
