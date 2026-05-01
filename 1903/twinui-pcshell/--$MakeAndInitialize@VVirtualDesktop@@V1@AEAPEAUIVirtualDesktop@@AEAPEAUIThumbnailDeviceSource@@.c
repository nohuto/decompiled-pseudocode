/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktop@@V1@AEAPEAUIVirtualDesktop@@AEAPEAUIThumbnailDeviceSource@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktop@@AEAPEAUIVirtualDesktop@@AEAPEAUIThumbnailDeviceSource@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x18033A7F0
 * Callers:
 *     ?VirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x18033B5B0 (-VirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtual.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktop@@QEAA@XZ @ 0x18033AA58 (--0VirtualDesktop@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ @ 0x18033B300 (-InternalRelease@-$ComPtr@VVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18033B440 (-RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PE.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktop,VirtualDesktop,IVirtualDesktop * &,IThumbnailDeviceSource * &,IVirtualDesktopManagerInternal * &,IVirtualDesktopNotificationService * &>(
        volatile signed __int64 **a1,
        struct IVirtualDesktop **a2,
        struct IThumbnailDeviceSource **a3,
        struct IVirtualDesktopManagerInternal **a4,
        struct IVirtualDesktopNotificationService **a5)
{
  VirtualDesktop *v9; // rax
  int v10; // edi
  volatile signed __int64 *v11; // rbx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  volatile signed __int64 *v15; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (VirtualDesktop *)operator new(0x118uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = (volatile signed __int64 *)VirtualDesktop::VirtualDesktop(v9);
    v15 = v11;
    v10 = VirtualDesktop::RuntimeClassInitialize((VirtualDesktop *)v11, *a2, *a3, *a4, *a5);
    if ( v10 >= 0 )
    {
      if ( v11 )
      {
        v12 = *((_QWORD *)v11 + 9);
        while ( v12 >= 0 )
        {
          v13 = v12;
          v12 = _InterlockedCompareExchange64(v11 + 9, v12 + 1, v12);
          if ( v13 == v12 )
            goto LABEL_10;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v12 + 16));
      }
LABEL_10:
      *a1 = v11;
      v10 = 0;
    }
    Microsoft::WRL::ComPtr<VirtualDesktop>::InternalRelease(&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
