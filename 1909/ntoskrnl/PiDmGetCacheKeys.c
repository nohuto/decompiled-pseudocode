/*
 * XREFs of PiDmGetCacheKeys @ 0x1405BF360
 * Callers:
 *     PiDmObjectRelease @ 0x1405BF214 (PiDmObjectRelease.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1405BF250 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1405BF410 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406E0354 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmObjectCreate @ 0x1406FBAA8 (PiDmObjectCreate.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406FC0A8 (PiDmObjectProcessPropertyChange.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x1407259D4 (PiDmListUpdateAggregationCountWorker.c)
 * Callees:
 *     <none>
 */

DEVPROPKEY **__fastcall PiDmGetCacheKeys(int a1, DEVPROPKEY ***a2, _DWORD *a3)
{
  int v3; // ecx
  DEVPROPKEY **result; // rax
  int v5; // ecx

  v3 = a1 - 1;
  if ( v3 )
  {
    v5 = v3 - 2;
    if ( v5 )
    {
      if ( v5 == 2 )
      {
        *a3 = 3;
        result = &PiDmCachedDeviceContainerKeys;
      }
      else
      {
        result = 0LL;
        *a3 = 0;
      }
    }
    else
    {
      *a3 = 1;
      result = &PiDmCachedDeviceInterfaceKeys;
    }
  }
  else
  {
    *a3 = 10;
    result = &PiDmCachedDeviceKeys;
  }
  *a2 = result;
  return result;
}
