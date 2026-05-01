/*
 * XREFs of ??4?$ComPtr@VIamAccess@@@WRL@Microsoft@@QEAAAEAV012@PEAVIamAccess@@@Z @ 0x180209240
 * Callers:
 *     ?RuntimeClassInitialize@?$PrivilegedOperationsBase@UIPrivilegedHotkeyOperations@@@@QEAAJPEAVIamAccess@@VWeakRef@WRL@Microsoft@@@Z @ 0x18020B3A4 (-RuntimeClassInitialize@-$PrivilegedOperationsBase@UIPrivilegedHotkeyOperations@@@@QEAAJPEAVIamA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800824DC (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801334C8 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjec.c)
 */

volatile int **__fastcall Microsoft::WRL::ComPtr<IamAccess>::operator=(volatile int **a1, volatile int *a2)
{
  volatile int *v2; // rax
  volatile int *v3; // r10
  volatile int *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = a2;
  if ( *a1 != a2 )
  {
    if ( a2 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(
        (__int64)a2,
        a2);
      v2 = *a1;
    }
    v6 = v2;
    *a1 = v3;
    Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v6);
  }
  return a1;
}
