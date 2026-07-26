/*
 * XREFs of ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1C00B79D0
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C000D050 (ndisFDoOidRequestInternal.c)
 *     ndisMReenumerateFailedAdapterInternal @ 0x1C00690CC (ndisMReenumerateFailedAdapterInternal.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00B8F1C (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00C2B20 (ndisDeliverNetPnPEventSynchronously.c)
 *     ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00EF360 (-ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C0009B54 (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 */

void __fastcall ndisArmWatchdog(
        struct _NDIS_REFCOUNT_BLOCK *a1,
        void *a2,
        _NDIS_REFCOUNT_STACK_ENTRY a3,
        void *a4,
        _NDIS_REFCOUNT_STACK_ENTRY a5,
        unsigned __int64 a6)
{
  unsigned __int8 *v9; // rdx
  struct _NDIS_REFCOUNT_BLOCK *v10; // rdi
  int v11; // ecx
  void *v12; // rcx
  char v13; // al
  unsigned int v14; // eax
  __int64 v15; // rbx
  ULONG v16; // eax
  unsigned int v17; // eax
  int v18; // ecx
  ULONG SecondsRemaining; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 != (struct _NDIS_REFCOUNT_BLOCK *)-1LL )
  {
    v10 = ndisRefCountHandleFromRefCountBlock(a1);
    v10[2].RefWithStack[0].Block.Dereferences[4] = (_NDIS_REFCOUNT_STACK_ENTRY)846677070;
    if ( v9 )
    {
      v11 = *v9;
      if ( v11 == 5 )
      {
        v12 = (void *)*((_QWORD *)v9 + 4);
        goto LABEL_5;
      }
      v18 = v11 - 17;
      if ( !v18 )
      {
        v12 = a2;
LABEL_5:
        if ( v12 )
        {
          if ( (*((_DWORD *)v12 + 30) & 0x100) == 0
            && PoQueryWatchdogTime(*((PDEVICE_OBJECT *)v12 + 483), &SecondsRemaining) )
          {
            v16 = SecondsRemaining;
            if ( SecondsRemaining < 3 )
              v16 = 3;
            v17 = 1000 * v16 - 3000;
            if ( v17 < 0xBB8 )
              v17 = 3000;
            if ( v17 < *(_DWORD *)&a5 )
              a5 = (_NDIS_REFCOUNT_STACK_ENTRY)v17;
            v13 = 1;
          }
          else
          {
            v13 = 0;
          }
          *(_BYTE *)&v10[3].RefWithStack[0].Block.References[4] = v13;
        }
        goto LABEL_10;
      }
      if ( v18 == 1 )
      {
        v12 = (void *)*((_QWORD *)v9 + 2);
        goto LABEL_5;
      }
    }
LABEL_10:
    *(_QWORD *)&v10[3].Flags = a2;
    *((_QWORD *)v10[2].RefWithStack + 7) = &ndisGlobalTriageBlock;
    v10[2].RefWithStack[0].Block.Dereferences[5] = a5;
    v10[3].TaggedRefCounts.Tags = (_NDIS_REFCOUNT_TAGGED_ENTRY *)MEMORY[0xFFFFF78000000008];
    *(_QWORD *)v10[3].RefWithStack[0].Block.References = KeGetCurrentThread();
    *(_QWORD *)&v10[3].RefWithStack[0].Block.References[2] = a6;
    v14 = g_ndisWatchdogSequenceNumber;
    *(_QWORD *)v10[3].RefWithStack[0].Block.Dereferences = a4;
    g_ndisWatchdogSequenceNumber = v14 + 1;
    v10[2].RefWithStack[0].Block.References[1] = (_NDIS_REFCOUNT_STACK_ENTRY)(v14 + 1);
    v15 = -10000LL * *(_DWORD *)&v10[2].RefWithStack[0].Block.Dereferences[5];
    v10[2].RefWithStack[0].Block.Dereferences[2] = a3;
    v10[2].TaggedRefCounts.RefMask[0] = 1;
    KeClearEvent((PRKEVENT)&v10[2].RefWithStack[0].Block.References[2]);
    KeSetTimerEx((PKTIMER)((char *)v10->RefWithStack + 56), (LARGE_INTEGER)v15, 0, (PKDPC)v10);
  }
}
