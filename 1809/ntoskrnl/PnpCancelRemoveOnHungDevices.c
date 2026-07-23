/*
 * XREFs of PnpCancelRemoveOnHungDevices @ 0x1408291EC
 * Callers:
 *     PiProcessQueryAndCancelRemoval @ 0x140841398 (PiProcessQueryAndCancelRemoval.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpNotifyTargetDeviceChange @ 0x14059046C (PnpNotifyTargetDeviceChange.c)
 *     IopAddRelationToList @ 0x1406EDC28 (IopAddRelationToList.c)
 *     PnpCompileDeviceInstancePaths @ 0x1406EF1CC (PnpCompileDeviceInstancePaths.c)
 *     IopEnumerateRelations @ 0x1406EF354 (IopEnumerateRelations.c)
 *     PnpDeleteLockedDeviceNode @ 0x1406EF3D4 (PnpDeleteLockedDeviceNode.c)
 *     IopAllocateRelationList @ 0x1406EFC1C (IopAllocateRelationList.c)
 *     IopFreeRelationList @ 0x1406EFCDC (IopFreeRelationList.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x1406F1394 (PnpNotifyUserModeDeviceRemoval.c)
 */

__int64 __fastcall PnpCancelRemoveOnHungDevices(__int64 a1, unsigned int a2, char a3, unsigned int **a4, __int64 *a5)
{
  int v8; // ebx
  unsigned int **RelationList; // rdi
  __int64 v10; // rcx
  __int64 v11; // r9
  ULONG_PTR v12; // rcx
  _QWORD *v13; // r9
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  PVOID v17; // rsi
  __int64 v19; // [rsp+20h] [rbp-30h]
  __int64 v20; // [rsp+28h] [rbp-28h]
  int v21; // [rsp+30h] [rbp-20h] BYREF
  int v22; // [rsp+34h] [rbp-1Ch]
  PVOID Object; // [rsp+38h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v25; // [rsp+78h] [rbp+28h] BYREF

  P[0] = 0LL;
  if ( (a2 & 0xFFFFFFFB) != 0 )
    __fastfail(5u);
  v8 = PnpCompileDeviceInstancePaths(a2, (__int64)a4, a3, 1, a5);
  if ( v8 >= 0 )
  {
    RelationList = (unsigned int **)IopAllocateRelationList(a2);
    if ( RelationList )
    {
      v22 = 0;
      v21 = 2;
      while ( IopEnumerateRelations(a4, &v21, &Object, &v25, 0LL) )
      {
        if ( Object )
          v10 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
        else
          v10 = 0LL;
        if ( v10 )
        {
          if ( (*(_DWORD *)(v10 + 704) & 2) != 0 )
          {
            v8 = IopAddRelationToList(RelationList, (__int64)Object, v25, 0);
            if ( v8 < 0 )
              goto LABEL_35;
          }
        }
      }
      v22 = 0;
      *((_BYTE *)RelationList + 8) = 1;
      v21 = 1;
      while ( IopEnumerateRelations(RelationList, &v21, &Object, 0LL, 0LL) )
      {
        if ( Object )
          v12 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
        else
          v12 = 0LL;
        if ( *(_DWORD *)(v12 + 300) == 784 )
          PnpDeleteLockedDeviceNode(v12, 1, 0, v11, v11 & v19, v11 & v20);
      }
      v22 &= v11;
      v21 = 1;
      while ( IopEnumerateRelations(RelationList, &v21, &Object, 0LL, 0LL) )
      {
        if ( Object )
          v14 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
        else
          v14 = 0LL;
        v15 = *(_DWORD *)(v14 + 300);
        if ( v15 != 786 && v15 != 770 && v15 != 769 )
          PnpNotifyTargetDeviceChange(&GUID_TARGET_DEVICE_REMOVE_CANCELLED, Object, 0LL, v13);
      }
      v16 = PnpCompileDeviceInstancePaths(a2, (__int64)RelationList, 0, (char)v13, (__int64 *)P);
      v17 = P[0];
      v8 = v16;
      if ( v16 >= 0 )
        v8 = PnpNotifyUserModeDeviceRemoval(
               a1,
               (_WORD *)P[0],
               (__int128 *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED,
               0LL,
               0LL,
               0LL);
      if ( v17 )
        ExFreePoolWithTag(v17, 0x4B706E50u);
LABEL_35:
      IopFreeRelationList(RelationList);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v8;
}
