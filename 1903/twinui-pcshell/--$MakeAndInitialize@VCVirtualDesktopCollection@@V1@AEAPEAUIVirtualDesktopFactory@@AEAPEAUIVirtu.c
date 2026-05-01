/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopCollection@@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Z @ 0x1803E9058
 * Callers:
 *     ?CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_NAEBU_GUID@@PEAPEAX@Z @ 0x1803E9424 (-CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPer.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CVirtualDesktopCollection@@QEAA@XZ @ 0x1803E911C (--0CVirtualDesktopCollection@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x1803E9B84 (-InternalRelease@-$ComPtr@VCVirtualDesktopCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_N@Z @ 0x1803E9D90 (-RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtual.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopCollection,CVirtualDesktopCollection,IVirtualDesktopFactory * &,IVirtualDesktopPersistence * &,bool &>(
        volatile signed __int32 **a1,
        struct IVirtualDesktopFactory **a2,
        struct IVirtualDesktopPersistence **a3,
        bool *a4)
{
  CVirtualDesktopCollection *v8; // rax
  int v9; // edi
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v12; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (CVirtualDesktopCollection *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = (volatile signed __int32 *)CVirtualDesktopCollection::CVirtualDesktopCollection(v8);
    v12 = v10;
    v9 = CVirtualDesktopCollection::RuntimeClassInitialize((CVirtualDesktopCollection *)v10, *a2, *a3, *a4);
    if ( v9 >= 0 )
    {
      if ( v10 )
        _InterlockedIncrement(v10 + 3);
      *a1 = v10;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<CVirtualDesktopCollection>::InternalRelease(&v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
