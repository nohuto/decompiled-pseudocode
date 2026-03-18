/*
 * XREFs of IopRemoveRelationFromList @ 0x140875184
 * Callers:
 *     PnpProcessRelation @ 0x1407313CC (PnpProcessRelation.c)
 *     PipRemoveDevicesInRelationList @ 0x140733AD4 (PipRemoveDevicesInRelationList.c)
 * Callees:
 *     PipDeviceObjectListRemove @ 0x14072F814 (PipDeviceObjectListRemove.c)
 *     PipDeviceObjectListIndexOf @ 0x1407317B0 (PipDeviceObjectListIndexOf.c)
 */

__int64 __fastcall IopRemoveRelationFromList(__int64 *a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int **v3; // r11
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = PipDeviceObjectListIndexOf(*a1, a2, *(_DWORD *)*a1, &v5);
  if ( v2 == -1 )
    return 3221225486LL;
  else
    return PipDeviceObjectListRemove(*v3, v2);
}
