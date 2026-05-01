/*
 * XREFs of ??$CreateRefCountedObj@UMarshalledData@VirtualDesktopAnimationSyncNotificationInstance@@@@YA?AV?$ComPtr@V?$CRefCountedObject@UMarshalledData@VirtualDesktopAnimationSyncNotificationInstance@@@@@WRL@Microsoft@@XZ @ 0x18038B118
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktopAnimationSyncNotificationInstance@@QEAAJPEAUIVirtualDesktop@@0PEAUIObjectArray@@K@Z @ 0x18038B900 (-RuntimeClassInitialize@VirtualDesktopAnimationSyncNotificationInstance@@QEAAJPEAUIVirtualDeskto.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 */

__int64 *__fastcall CreateRefCountedObj<VirtualDesktopAnimationSyncNotificationInstance::MarshalledData>(__int64 *a1)
{
  char *v2; // rax
  _QWORD *v3; // rdi

  v2 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2 + 8, 0, 0x28uLL);
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3[3] = 0LL;
    v3[4] = 0LL;
    *((_BYTE *)v3 + 40) = 0;
    *((_DWORD *)v3 + 12) = 0;
    *v3 = &CRefCountedObject<VirtualDesktopAnimationSyncNotificationInstance::MarshalledData>::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = (__int64)v3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  return a1;
}
