/*
 * XREFs of ??$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEBGAEAPEBGAEAPEBGAEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Details@WRL@Microsoft@@YAJPEAPEAVCDelayedTileActivation@@AEAPEBG11AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x18038F53C
 * Callers:
 *     ?CDelayedTileActivation_CreateInstance@@YAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_GUID@@PEAPEAX@Z @ 0x18038FE1C (-CDelayedTileActivation_CreateInstance@@YAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_G.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1801EB284 (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CDelayedTileActivation@@QEAA@XZ @ 0x18038F730 (--0CDelayedTileActivation@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@QEAAXPEAVCDelayedTileActivation@@@Z @ 0x18038FCC4 (-Attach@-$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@QEAAXPEAVCDelayedTileActivation@@@Z.c)
 *     ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x18039080C (-RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERN.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CDelayedTileActivation,CDelayedTileActivation,unsigned short const * &,unsigned short const * &,unsigned short const * &,IUnknown * &,enum ACTIVATEOPTIONSINTERNAL &>(
        volatile signed __int32 **a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4,
        _QWORD *a5,
        _DWORD *a6)
{
  CDelayedTileActivation *v10; // rax
  int v11; // edi
  CDelayedTileActivation *v12; // rax
  __int64 v13; // r9
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v16; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (CDelayedTileActivation *)operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v12 = CDelayedTileActivation::CDelayedTileActivation(v10);
    v16 = 0LL;
    Microsoft::WRL::ComPtr<CDelayedTileActivation>::Attach(&v16, v12);
    v13 = *a4;
    v14 = v16;
    v11 = CDelayedTileActivation::RuntimeClassInitialize(v16, *a2, *a3, v13, *a5, *a6, -2LL, 0LL);
    if ( v11 >= 0 )
    {
      if ( v14 )
      {
        _InterlockedIncrement(v14 + 11);
        v14 = v16;
      }
      *a1 = v14;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
