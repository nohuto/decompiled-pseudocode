/*
 * XREFs of ?ndisReferenceMiniportByGuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C007CE60
 * Callers:
 *     ?ndisHandleBindNotification@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C0115A34 (-ndisHandleBindNotification@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C0115E70 (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisReferenceMiniportByGuid(const struct _GUID *a1, enum _NDIS_MP_REFTAG a2)
{
  KIRQL v3; // al
  struct _NDIS_M_DRIVER_BLOCK *v4; // rdi
  KIRQL v5; // bp
  __int64 i; // rbx
  __int64 v7; // rcx
  __int64 v8; // rsi

  v3 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v4 = ndisMiniDriverList;
  v5 = v3;
LABEL_9:
  if ( v4 )
  {
    KeAcquireSpinLockAtDpcLevel(&v4->Ref.SpinLock);
    for ( i = (__int64)v4->MiniportQueue; ; i = *(_QWORD *)(i + 8) )
    {
      if ( !i )
      {
        KeReleaseSpinLockFromDpcLevel(&v4->Ref.SpinLock);
        v4 = v4->NextDriver;
        goto LABEL_9;
      }
      v7 = *(_QWORD *)(i + 4008) - *(_QWORD *)&a1->Data1;
      if ( !v7 )
        v7 = *(_QWORD *)(i + 4016) - *(_QWORD *)a1->Data4;
      if ( !v7 )
        break;
    }
    v8 = i & -(__int64)((unsigned __int8)ndisReferenceMiniport(i) != 0);
    KeReleaseSpinLockFromDpcLevel(&v4->Ref.SpinLock);
  }
  else
  {
    v8 = 0LL;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v5);
  return (struct _NDIS_MINIPORT_BLOCK *)v8;
}
