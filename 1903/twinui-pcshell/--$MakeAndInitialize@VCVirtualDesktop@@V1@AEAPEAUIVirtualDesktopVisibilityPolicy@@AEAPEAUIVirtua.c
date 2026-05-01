/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktop@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktop@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1803FEB94
 * Callers:
 *     ?CVirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1803FEF18 (-CVirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CVirtualDesktop@@QEAA@XZ @ 0x1803FED20 (--0CVirtualDesktop@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@QEAAXPEAVCVirtualDesktop@@@Z @ 0x1803FEDF0 (-Attach@-$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@QEAAXPEAVCVirtualDesktop@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ @ 0x1803FF028 (-InternalRelease@-$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CVirtualDesktop@@QEAAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x1803FF04C (-RuntimeClassInitialize@CVirtualDesktop@@QEAAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualD.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktop,CVirtualDesktop,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopLock * &>(
        CVirtualDesktop **a1,
        struct IVirtualDesktopVisibilityPolicy **a2,
        struct IVirtualDesktopLock **a3)
{
  CVirtualDesktop *v6; // rax
  int v7; // edi
  CVirtualDesktop *v8; // rax
  struct IVirtualDesktopLock *v9; // r8
  CVirtualDesktop *v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  CVirtualDesktop *v14; // [rsp+30h] [rbp+8h] BYREF
  CVirtualDesktop *v15; // [rsp+48h] [rbp+20h]

  *a1 = 0LL;
  v6 = (CVirtualDesktop *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v6;
  if ( v6 )
  {
    v8 = CVirtualDesktop::CVirtualDesktop(v6);
    v14 = 0LL;
    Microsoft::WRL::ComPtr<CVirtualDesktop>::Attach(&v14, v8);
    v9 = *a3;
    v10 = v14;
    v7 = CVirtualDesktop::RuntimeClassInitialize(v14, *a2, v9);
    if ( v7 >= 0 )
    {
      if ( v10 )
      {
        v11 = *((_QWORD *)v10 + 8);
        while ( v11 >= 0 )
        {
          v12 = v11;
          v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 8, v11 + 1, v11);
          if ( v12 == v11 )
            goto LABEL_10;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 16));
LABEL_10:
        v10 = v14;
      }
      *a1 = v10;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<CVirtualDesktop>::InternalRelease(&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
