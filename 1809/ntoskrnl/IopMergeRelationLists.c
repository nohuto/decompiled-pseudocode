/*
 * XREFs of IopMergeRelationLists @ 0x14083BDC8
 * Callers:
 *     PnpProcessRelation @ 0x1406ED92C (PnpProcessRelation.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1406EEB4C (PnpQueuePendingSurpriseRemoval.c)
 * Callees:
 *     IopAddRelationToList @ 0x1406EDC28 (IopAddRelationToList.c)
 *     PipDeviceObjectListIndexOf @ 0x1406EDD24 (PipDeviceObjectListIndexOf.c)
 */

__int64 __fastcall IopMergeRelationLists(int **a1, __int64 a2, char a3)
{
  _DWORD *v3; // r11
  unsigned int v4; // ebx
  unsigned int v8; // ebp
  int v9; // r14d
  __int64 v10; // r11
  char v11; // r12
  unsigned int v12; // r9d
  int v13; // eax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_DWORD **)a2;
  v4 = 0;
  v8 = 0;
  v9 = **a1;
  if ( **(_DWORD **)a2 )
  {
    while ( 1 )
    {
      if ( (int)PipDeviceObjectListIndexOf((__int64)*a1, *(_QWORD *)&v3[6 * v8 + 4], v9, &v15) < 0 )
      {
        v11 = 0;
        v12 = *(_BYTE *)(v10 + 24LL * v8 + 32) & 1;
      }
      else
      {
        v11 = 1;
        v12 = a3 && (*(_DWORD *)(v10 + 24LL * v8 + 32) & 1) != 0;
      }
      v13 = IopAddRelationToList(a1, *(_QWORD *)(v10 + 24LL * v8 + 16), *(unsigned int *)(v10 + 24LL * v8 + 24), v12);
      if ( v11 && v13 == -1073741771 )
        v13 = 0;
      if ( v13 < 0 )
        return (unsigned int)v13;
      v3 = *(_DWORD **)a2;
      if ( ++v8 >= **(_DWORD **)a2 )
      {
        v9 = **a1;
        goto LABEL_14;
      }
    }
  }
  else
  {
LABEL_14:
    if ( !v9 )
      *((_BYTE *)a1 + 8) = *(_BYTE *)(a2 + 8);
  }
  return v4;
}
