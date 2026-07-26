/*
 * XREFs of ndisStartNsiClient @ 0x1C001E888
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C001E9DC (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 */

__int64 ndisStartNsiClient()
{
  int v0; // ebx
  _QWORD v2[10]; // [rsp+20h] [rbp-50h] BYREF

  LODWORD(v2[0]) = 0;
  memset(&v2[1], 0, 0x40uLL);
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_(22LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids);
  LODWORD(v2[0]) = 0;
  v2[1] = &NPI_MS_NDIS_MODULEID;
  LOBYTE(v2[4]) = 1;
  v2[3] = &ndisNsiClientParameterChangeHandler;
  LODWORD(v2[2]) = 7;
  v2[5] = 7LL;
  v2[8] = &ndisNsiClientCompartmentChangeNotificationHandle;
  v0 = NsiRegisterChangeNotificationEx(v2);
  if ( v0 >= 0 )
  {
    LODWORD(v2[2]) = 6;
    v2[5] = 6LL;
    v2[8] = &ndisNsiClientNetworkChangeNotificationHandle;
    v0 = NsiRegisterChangeNotificationEx(v2);
    if ( v0 >= 0 )
    {
      LODWORD(v2[2]) = 1;
      v2[8] = &ndisNsiClientInterfaceEnumChangeNotificationHandle;
      v2[5] = 1LL;
      v0 = NsiRegisterChangeNotificationEx(v2);
      if ( v0 >= 0 )
      {
        LODWORD(v2[2]) = 0;
        v2[5] = 0LL;
        v2[8] = &ndisNsiClientInterfaceChangeNotificationHandle;
        v0 = NsiRegisterChangeNotificationEx(v2);
        if ( v0 >= 0 )
        {
          LODWORD(v2[2]) = 17;
          v2[5] = 17LL;
          v2[8] = &ndisNsiClientTimestampChangeNotificationHandle;
          v0 = NsiRegisterChangeNotificationEx(v2);
        }
      }
    }
  }
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_D(23LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, (unsigned int)v0);
  return (unsigned int)v0;
}
