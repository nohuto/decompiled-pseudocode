/*
 * XREFs of ?ndisStartNsiClient@@YAJXZ @ 0x1C0036D9C
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0035FB0 (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 ndisStartNsiClient(void)
{
  int v0; // edx
  int v1; // edx
  int v2; // ebx
  _QWORD v4[10]; // [rsp+30h] [rbp-50h] BYREF

  memset((char *)v4 + 4, 0, 0x44uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v0,
      22,
      22,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids);
  }
  LODWORD(v4[0]) = 0;
  v4[1] = &NPI_MS_NDIS_MODULEID;
  LOBYTE(v4[4]) = 1;
  v4[3] = &ndisNsiClientParameterChangeHandler;
  LODWORD(v4[2]) = 7;
  v4[5] = 7LL;
  v4[8] = &ndisNsiClientCompartmentChangeNotificationHandle;
  v2 = NsiRegisterChangeNotificationEx(v4);
  if ( v2 >= 0 )
  {
    LODWORD(v4[2]) = 6;
    v4[5] = 6LL;
    v4[8] = &ndisNsiClientNetworkChangeNotificationHandle;
    v2 = NsiRegisterChangeNotificationEx(v4);
    if ( v2 >= 0 )
    {
      LODWORD(v4[2]) = 1;
      v4[8] = &ndisNsiClientInterfaceEnumChangeNotificationHandle;
      v4[5] = 1LL;
      v2 = NsiRegisterChangeNotificationEx(v4);
      if ( v2 >= 0 )
      {
        LODWORD(v4[2]) = 0;
        v4[5] = 0LL;
        v4[8] = &ndisNsiClientInterfaceChangeNotificationHandle;
        v2 = NsiRegisterChangeNotificationEx(v4);
        if ( v2 >= 0 )
        {
          LODWORD(v4[2]) = 17;
          v4[5] = 17LL;
          v4[8] = &ndisNsiClientTimestampChangeNotificationHandle;
          v2 = NsiRegisterChangeNotificationEx(v4);
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v1) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v1,
      22,
      23,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      v2);
  }
  return (unsigned int)v2;
}
