/*
 * XREFs of ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C7978
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0001230 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisMTimerDpcX @ 0x1C00026B0 (ndisMTimerDpcX.c)
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisIfDereferenceMiniport @ 0x1C0002A30 (ndisIfDereferenceMiniport.c)
 *     NdisDereferenceWithTag @ 0x1C0002EB0 (NdisDereferenceWithTag.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C0003030 (ndisFOidRequestCompleteInternal.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0003210 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C0004090 (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisQueueOidRequest @ 0x1C0004470 (ndisQueueOidRequest.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0004CE0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C0006780 (ndisDereferenceMiniportForNsi.c)
 *     ndisOidRequestComplete @ 0x1C00076F0 (ndisOidRequestComplete.c)
 *     ndisDeviceControlHandler @ 0x1C0008BE0 (ndisDeviceControlHandler.c)
 *     ndisQueuedCheckForHang @ 0x1C0009E80 (ndisQueuedCheckForHang.c)
 *     ndisCreateHandler @ 0x1C000FBB0 (ndisCreateHandler.c)
 *     ndisWmiQuerySingleInstance @ 0x1C0018CD0 (ndisWmiQuerySingleInstance.c)
 *     ?ndisMTimerObjectDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C001E7F0 (-ndisMTimerObjectDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndisQueuedMiniportDpcWorkItem@@YAXPEAX@Z @ 0x1C001EC30 (-ndisQueuedMiniportDpcWorkItem@@YAXPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisCaptureStackTrace @ 0x1C00C7DC0 (ndisCaptureStackTrace.c)
 *     ndisReleaseStackTrace @ 0x1C00C7FC4 (ndisReleaseStackTrace.c)
 */

void __fastcall ndisReferenceWithTagStackTrace(
        struct _NDIS_REFCOUNT_WITH_STACK *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  int *v5; // rsi
  char v6; // bp
  int v8; // r8d
  __int64 v9; // rcx
  unsigned int v10; // edi
  struct _NDIS_REFCOUNT_WITH_STACK *Next; // r10
  unsigned __int64 v12; // r8
  char *v13; // r11
  __int64 v14; // rdx
  int *v15; // r14
  int v16; // ecx
  int v17; // r9d
  _NDIS_REFCOUNT_STACK_BLOCK *PoolWithTag; // rax
  _NDIS_REFCOUNT_STACK_BLOCK *v19; // r14

  v4 = *((unsigned int *)a1 + 14);
  v5 = 0LL;
  v6 = a2;
  if ( (_BYTE)a2 )
  {
    a2 = 65534LL;
    if ( (*((_DWORD *)a1 + 14) & 0xFFFE) == 0x7FFE )
    {
      v8 = v4 | 1;
LABEL_4:
      *((_DWORD *)a1 + 14) = v8;
      return;
    }
    v9 = (unsigned int)v4 ^ ((unsigned int)v4 ^ ((_DWORD)v4 + 2)) & 0xFFFE;
  }
  else
  {
    if ( (*((_DWORD *)a1 + 14) & 0xFFFE0000) == 0x7FFE0000 )
    {
      v8 = v4 | 0x10000;
      goto LABEL_4;
    }
    v9 = (unsigned int)(v4 + 0x20000);
  }
  *((_DWORD *)a1 + 14) = v9;
  v10 = ndisCaptureStackTrace(v9, a2, v4, a4);
  Next = a1;
  if ( a1 )
  {
    v12 = (-(__int64)(v6 != 0) & 0xFFFFFFFFFFFFFFE8uLL) + 32;
    while ( 2 )
    {
      v13 = (char *)Next + v12;
      v14 = 0LL;
      v15 = (int *)((char *)Next + v12);
      do
      {
        v16 = *v15;
        v17 = *v15 & 0x3FFFFFF;
        if ( v17 == v10 && (v16 & 0xFC000000) < 0xFC000000 )
        {
          *(_DWORD *)&v13[4 * v14] = v17 | (v16 + 0x4000000) & 0xFC000000;
          goto LABEL_23;
        }
        if ( !v5 && !v17 )
          v5 = (int *)&v13[4 * v14];
        v14 = (unsigned int)(v14 + 1);
        ++v15;
      }
      while ( (unsigned int)v14 < 6 );
      Next = (struct _NDIS_REFCOUNT_WITH_STACK *)Next->Block.Next;
      if ( Next )
        continue;
      break;
    }
    if ( v5 )
      goto LABEL_25;
  }
  PoolWithTag = (_NDIS_REFCOUNT_STACK_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7872444Eu);
  v19 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, sizeof(_NDIS_REFCOUNT_STACK_BLOCK));
    v19->Next = a1->Block.Next;
    a1->Block.Next = v19;
    v5 = (int *)((char *)v19->Dereferences + (-(__int64)(v6 != 0) & 0xFFFFFFFFFFFFFFE8uLL));
LABEL_25:
    *v5 = v10 & 0x3FFFFFF | 0x4000000;
    return;
  }
  *((_DWORD *)a1 + 14) |= v6 != 0 ? 1 : 0x10000;
LABEL_23:
  ndisReleaseStackTrace(v10);
}
