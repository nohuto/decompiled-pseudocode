/*
 * XREFs of PnpCancelRemoveOnHungDevices @ 0x140861BE8
 * Callers:
 *     PiProcessQueryAndCancelRemoval @ 0x14087B28C (PiProcessQueryAndCancelRemoval.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpNotifyTargetDeviceChange @ 0x140698EEC (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x140730D6C (PnpNotifyUserModeDeviceRemoval.c)
 *     IopAddRelationToList @ 0x1407316B4 (IopAddRelationToList.c)
 *     PnpCompileDeviceInstancePaths @ 0x14073234C (PnpCompileDeviceInstancePaths.c)
 *     IopEnumerateRelations @ 0x1407324D4 (IopEnumerateRelations.c)
 *     PnpDeleteLockedDeviceNode @ 0x140732554 (PnpDeleteLockedDeviceNode.c)
 *     IopAllocateRelationList @ 0x14073334C (IopAllocateRelationList.c)
 *     IopFreeRelationList @ 0x14073340C (IopFreeRelationList.c)
 */

__int64 __fastcall PnpCancelRemoveOnHungDevices(__int64 a1, unsigned int a2, char a3, unsigned int **a4, __int64 *a5)
{
  int v8; // ebx
  unsigned int **RelationList; // rdi
  __int64 v10; // rcx
  ULONG_PTR v11; // rcx
  __int64 v12; // rcx
  int v13; // r8d
  char v14; // r9
  int v15; // eax
  PVOID v16; // rsi
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  PVOID Object; // [rsp+38h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+88h] [rbp+38h] BYREF

  P[0] = 0LL;
  if ( (a2 & 0xFFFFFFFB) != 0 )
    __fastfail(5u);
  v8 = PnpCompileDeviceInstancePaths(a2, (__int64)a4, a3, 1, a5);
  if ( v8 >= 0 )
  {
    RelationList = (unsigned int **)IopAllocateRelationList(a2);
    if ( RelationList )
    {
      v18 = 2LL;
      while ( IopEnumerateRelations(a4, (int *)&v18, &Object, &v21, 0LL) )
      {
        if ( Object )
          v10 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
        else
          v10 = 0LL;
        if ( v10 )
        {
          if ( (*(_DWORD *)(v10 + 704) & 2) != 0 )
          {
            v8 = IopAddRelationToList(RelationList, (__int64)Object, v21, 0);
            if ( v8 < 0 )
              goto LABEL_33;
          }
        }
      }
      *((_BYTE *)RelationList + 8) = 1;
      v18 = 1LL;
      while ( IopEnumerateRelations(RelationList, (int *)&v18, &Object, 0LL, 0LL) )
      {
        if ( Object )
          v11 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
        else
          v11 = 0LL;
        if ( *(_DWORD *)(v11 + 300) == 784 )
          PnpDeleteLockedDeviceNode(v11, 1, 0, 0, 0LL, 0LL);
      }
      v18 = 1LL;
      while ( IopEnumerateRelations(RelationList, (int *)&v18, &Object, 0LL, 0LL) )
      {
        if ( Object )
          v12 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
        else
          v12 = 0LL;
        v13 = *(_DWORD *)(v12 + 300);
        if ( ((v13 - 769) & 0xFFFFFFEE) != 0 || v13 == 785 )
          PnpNotifyTargetDeviceChange(&GUID_TARGET_DEVICE_REMOVE_CANCELLED, Object, 0LL, 0LL);
      }
      v15 = PnpCompileDeviceInstancePaths(a2, (__int64)RelationList, 0, v14, (__int64 *)P);
      v16 = P[0];
      v8 = v15;
      if ( v15 >= 0 )
        v8 = PnpNotifyUserModeDeviceRemoval(
               a1,
               (_WORD *)P[0],
               (__int128 *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED,
               0LL,
               0LL,
               0LL);
      if ( v16 )
        ExFreePoolWithTag(v16, 0x4B706E50u);
LABEL_33:
      IopFreeRelationList(RelationList);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v8;
}
