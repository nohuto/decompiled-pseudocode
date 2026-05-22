/*
 * XREFs of ?Release@?$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@UEAAKXZ @ 0x1800D6A00
 * Callers:
 *     ?Release@?$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@WEI@EAAKXZ @ 0x180039260 (-Release@-$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::Release(
        __int64 a1)
{
  return SharedObjectBase::ReleasePublicReference((SharedObjectBase *)(a1 - 16));
}
