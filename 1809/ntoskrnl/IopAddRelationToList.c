/*
 * XREFs of IopAddRelationToList @ 0x1406EDC28
 * Callers:
 *     PnpProcessRelation @ 0x1406ED92C (PnpProcessRelation.c)
 *     PnpInvalidateRelationsInList @ 0x1406EEF50 (PnpInvalidateRelationsInList.c)
 *     PnpCancelRemoveOnHungDevices @ 0x1408291EC (PnpCancelRemoveOnHungDevices.c)
 *     IopMergeRelationLists @ 0x14083BDC8 (IopMergeRelationLists.c)
 * Callees:
 *     PipIsDeviceInDeviceObjectList @ 0x1406EDD04 (PipIsDeviceInDeviceObjectList.c)
 *     PipDeviceObjectListAdd @ 0x1406EDD74 (PipDeviceObjectListAdd.c)
 */

__int64 __fastcall IopAddRelationToList(_BYTE *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // r11d
  __int64 result; // rax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
  else
    v6 = 0LL;
  if ( !v6 )
    return 3221225486LL;
  if ( (unsigned __int8)PipIsDeviceInDeviceObjectList(*(_QWORD *)a1, a2, &v12) )
  {
    v10 = v12;
    v11 = *(_DWORD *)(v12 + 8);
    if ( (int)v8 > v11 )
      v11 = v8;
    *(_DWORD *)(v12 + 8) = v11;
    if ( a4 == 1 )
    {
      ++*(_DWORD *)(*(_QWORD *)a1 + 8LL);
      *(_DWORD *)(v10 + 16) |= 1u;
    }
    return 3221225525LL;
  }
  else
  {
    result = PipDeviceObjectListAdd(a1, v7, v8, a4);
    if ( (int)result >= 0 )
      a1[8] = 0;
  }
  return result;
}
