/*
 * XREFs of ndisCsResiliencyCallback @ 0x1C004FE50
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ?ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0077AC8 (-ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

__int64 __fastcall ndisCsResiliencyCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v4; // rax
  KIRQL v5; // al
  struct _NDIS_MINIPORT_BLOCK *v6; // rbx
  KIRQL v7; // di
  unsigned __int8 v8; // dl

  v4 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 )
    v4 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data4;
  if ( !v4 && ValueLength == 4 && Value && ndisCsResiliency != (*Value != 0) )
  {
    ndisCsResiliency = *Value != 0;
    v5 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    v6 = ndisMiniportList;
    v7 = v5;
    while ( v6 )
    {
      if ( v6->AoAc && ndisReferenceMiniport((__int64)v6) )
      {
        KeReleaseSpinLock(&ndisMiniportListLock, v7);
        if ( v6->AoAc )
          ndisCsResiliencyChange(v6, v8);
        v7 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
        ndisDereferenceMiniport((__int64)v6, 0x67u);
      }
      v6 = v6->NextGlobalMiniport;
    }
    KeReleaseSpinLock(&ndisMiniportListLock, v7);
  }
  return 0LL;
}
