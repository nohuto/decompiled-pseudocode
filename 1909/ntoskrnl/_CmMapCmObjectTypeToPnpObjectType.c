/*
 * XREFs of _CmMapCmObjectTypeToPnpObjectType @ 0x1405BE758
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405BDF50 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetCachedCmProperty @ 0x1405BE51C (PiDmObjectGetCachedCmProperty.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x1405BE668 (PiDmObjectUpdateCachedCmProperty.c)
 *     _CmRaisePropertyChangeEvent @ 0x140705D24 (_CmRaisePropertyChangeEvent.c)
 *     _CmRaiseCreateEvent @ 0x14071B5D4 (_CmRaiseCreateEvent.c)
 *     PiDmGetCmObjectListFromCache @ 0x14071E0AC (PiDmGetCmObjectListFromCache.c)
 *     _CmRaiseDeleteEvent @ 0x1409385B8 (_CmRaiseDeleteEvent.c)
 *     _PnpCmMatchCallbackRoutine @ 0x14093DCF0 (_PnpCmMatchCallbackRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmMapCmObjectTypeToPnpObjectType(int a1)
{
  int v1; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 1LL;
  v3 = v1 - 1;
  if ( !v3 )
    return 2LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 3LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 4LL;
  v6 = v5 - 1;
  if ( !v6 )
    return 5LL;
  if ( v6 == 1 )
    return 6LL;
  return 0LL;
}
