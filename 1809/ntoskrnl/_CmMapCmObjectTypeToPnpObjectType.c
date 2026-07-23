/*
 * XREFs of _CmMapCmObjectTypeToPnpObjectType @ 0x14059A89C
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14059A080 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetCachedCmProperty @ 0x14059A67C (PiDmObjectGetCachedCmProperty.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x14059A7C0 (PiDmObjectUpdateCachedCmProperty.c)
 *     _CmRaisePropertyChangeEvent @ 0x1406E401C (_CmRaisePropertyChangeEvent.c)
 *     _CmRaiseCreateEvent @ 0x1406FE840 (_CmRaiseCreateEvent.c)
 *     PiDmGetCmObjectListFromCache @ 0x140701DE0 (PiDmGetCmObjectListFromCache.c)
 *     _CmRaiseDeleteEvent @ 0x1408FC154 (_CmRaiseDeleteEvent.c)
 *     _PnpCmMatchCallbackRoutine @ 0x140901150 (_PnpCmMatchCallbackRoutine.c)
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
