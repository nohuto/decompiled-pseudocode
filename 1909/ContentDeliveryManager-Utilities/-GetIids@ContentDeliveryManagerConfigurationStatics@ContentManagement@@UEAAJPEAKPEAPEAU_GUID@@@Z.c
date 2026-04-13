/*
 * XREFs of ?GetIids@ContentDeliveryManagerConfigurationStatics@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18001FB90
 * Callers:
 *     ?GetIids@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIContentDeliveryManagerConfiguration@ContentManagement@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180023D90 (-GetIids@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIContentDeliveryManagerConfi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContentDeliveryManagerConfigurationStatics::GetIids(
        ContentManagement::ContentDeliveryManagerConfigurationStatics *this,
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
    v6[1] = GUID_b327e68c_b800_42f5_b32c_2ceb8ba5921d;
    *a2 = 2;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
