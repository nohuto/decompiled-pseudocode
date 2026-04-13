/*
 * XREFs of ?GetIids@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18001F3E0
 * Callers:
 *     ?GetIids@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubscriptionStatics@TargetedContent@ContentManagement@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180023550 (-GetIids@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubscription.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::SubscriptionStaticsImpl::GetIids(
        ContentManagement::TargetedContent::SubscriptionStaticsImpl *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x20uLL);
  if ( v6 )
  {
    *v6 = GUID_00000035_0000_0000_c000_000000000046;
    v6[1] = GUID_6cfef37d_8a37_4c33_a163_2b33a7ba0584;
    *a2 = 2;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
