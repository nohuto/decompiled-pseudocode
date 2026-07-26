/*
 * XREFs of ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0072050
 * Callers:
 *     ndisQueuedCheckForHang @ 0x1C0008570 (ndisQueuedCheckForHang.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0009F20 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisIfDereferenceMiniport @ 0x1C000A8E0 (ndisIfDereferenceMiniport.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C000A9D0 (ndisDereferenceMiniportForNsi.c)
 *     NdisDereferenceWithTag @ 0x1C000AB90 (NdisDereferenceWithTag.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C000AE50 (ndisFOidRequestCompleteInternal.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000B1B0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C000BF50 (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisQueueOidRequest @ 0x1C000C300 (ndisQueueOidRequest.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000CB20 (ndisReferenceTopMiniportByNameForNsi.c)
 *     NdisReferenceWithTag @ 0x1C000CF50 (NdisReferenceWithTag.c)
 *     ndisOidRequestComplete @ 0x1C000D320 (ndisOidRequestComplete.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000E670 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisMTimerDpcX @ 0x1C000F540 (ndisMTimerDpcX.c)
 *     ndisCreateHandler @ 0x1C000F8B0 (ndisCreateHandler.c)
 *     ndisMTimerObjectDpc @ 0x1C0011B90 (ndisMTimerObjectDpc.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0011FC0 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisDoOidRequests @ 0x1C0020D80 (ndisDoOidRequests.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 *     ndisCaptureStackTrace @ 0x1C0071B98 (ndisCaptureStackTrace.c)
 *     ndisReleaseStackTrace @ 0x1C0071DA0 (ndisReleaseStackTrace.c)
 */

void __fastcall ndisReferenceWithTagStackTrace(struct _NDIS_REFCOUNT_WITH_STACK *a1, char a2)
{
  int v2; // r8d
  int *v3; // rsi
  int v6; // r8d
  int v7; // ecx
  unsigned int v8; // edi
  struct _NDIS_REFCOUNT_WITH_STACK *Next; // r10
  unsigned __int64 v10; // r8
  char *v11; // r11
  __int64 v12; // rdx
  int *v13; // r14
  int v14; // ecx
  int v15; // r9d
  _NDIS_REFCOUNT_STACK_BLOCK *PoolWithTag; // rax
  _NDIS_REFCOUNT_STACK_BLOCK *v17; // r14

  v2 = *((_DWORD *)a1 + 14);
  v3 = 0LL;
  if ( a2 )
  {
    if ( (v2 & 0xFFFE) == 0x7FFE )
    {
      v6 = v2 | 1;
LABEL_4:
      *((_DWORD *)a1 + 14) = v6;
      return;
    }
    v7 = v2 ^ (v2 ^ (v2 + 2)) & 0xFFFE;
  }
  else
  {
    if ( (v2 & 0xFFFE0000) == 0x7FFE0000 )
    {
      v6 = v2 | 0x10000;
      goto LABEL_4;
    }
    v7 = v2 + 0x20000;
  }
  *((_DWORD *)a1 + 14) = v7;
  v8 = ndisCaptureStackTrace();
  Next = a1;
  if ( a1 )
  {
    v10 = (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFE8uLL) + 32;
    while ( 2 )
    {
      v11 = (char *)Next + v10;
      v12 = 0LL;
      v13 = (int *)((char *)Next + v10);
      do
      {
        v14 = *v13;
        v15 = *v13 & 0x3FFFFFF;
        if ( v15 == v8 && (v14 & 0xFC000000) < 0xFC000000 )
        {
          *(_DWORD *)&v11[4 * v12] = v15 | (v14 + 0x4000000) & 0xFC000000;
          goto LABEL_23;
        }
        if ( !v3 && !v15 )
          v3 = (int *)&v11[4 * v12];
        v12 = (unsigned int)(v12 + 1);
        ++v13;
      }
      while ( (unsigned int)v12 < 6 );
      Next = (struct _NDIS_REFCOUNT_WITH_STACK *)Next->Block.Next;
      if ( Next )
        continue;
      break;
    }
    if ( v3 )
      goto LABEL_25;
  }
  PoolWithTag = (_NDIS_REFCOUNT_STACK_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7872444Eu);
  v17 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, sizeof(_NDIS_REFCOUNT_STACK_BLOCK));
    v17->Next = a1->Block.Next;
    a1->Block.Next = v17;
    v3 = (int *)((char *)v17->Dereferences + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFE8uLL));
LABEL_25:
    *v3 = v8 & 0x3FFFFFF | 0x4000000;
    return;
  }
  *((_DWORD *)a1 + 14) |= a2 != 0 ? 1 : 0x10000;
LABEL_23:
  ndisReleaseStackTrace(v8);
}
