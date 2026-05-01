/*
 * XREFs of ??$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEAUIImmersiveApplication@@AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Details@WRL@Microsoft@@YAJPEAPEAVCDelayedTileActivation@@AEAPEAUIImmersiveApplication@@AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x18038F460
 * Callers:
 *     ?CDelayedTileActivation_CreateInstance@@YAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_GUID@@PEAPEAX@Z @ 0x18038FCF8 (-CDelayedTileActivation_CreateInstance@@YAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOP.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1801EB284 (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CDelayedTileActivation@@QEAA@XZ @ 0x18038F730 (--0CDelayedTileActivation@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@QEAAXPEAVCDelayedTileActivation@@@Z @ 0x18038FCC4 (-Attach@-$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@QEAAXPEAVCDelayedTileActivation@@@Z.c)
 *     ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x180390728 (-RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CDelayedTileActivation,CDelayedTileActivation,IImmersiveApplication * &,IUnknown * &,enum ACTIVATEOPTIONSINTERNAL &>(
        volatile signed __int32 **a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4)
{
  CDelayedTileActivation *v8; // rax
  int v9; // edi
  CDelayedTileActivation *v10; // rax
  __int64 v11; // r9
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v14; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (CDelayedTileActivation *)operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = CDelayedTileActivation::CDelayedTileActivation(v8);
    v14 = 0LL;
    Microsoft::WRL::ComPtr<CDelayedTileActivation>::Attach(&v14, v10);
    v11 = *a4;
    v12 = v14;
    v9 = CDelayedTileActivation::RuntimeClassInitialize(v14, *a2, *a3, v11, -2LL, 0LL);
    if ( v9 >= 0 )
    {
      if ( v12 )
      {
        _InterlockedIncrement(v12 + 11);
        v12 = v14;
      }
      *a1 = v12;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
