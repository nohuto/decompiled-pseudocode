/*
 * XREFs of ?ndisIfUpdateInterfaceFromPersistentStore@@YAJAEBUNdisNetworkInterfacePersistedState@@@Z @ 0x1C0024140
 * Callers:
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@@W4NdisIfBlockSource@@@Z @ 0x1C0023FDC (-ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C00E262C (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ndisIfFindInterfaceByNetLuid @ 0x1C00241D4 (ndisIfFindInterfaceByNetLuid.c)
 *     WPP_SF_I @ 0x1C0041920 (WPP_SF_I.c)
 *     WPP_SF_IL @ 0x1C0041954 (WPP_SF_IL.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceFromPersistentStore(
        const struct NdisNetworkInterfacePersistedState *a1,
        __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 InterfaceByNetLuid; // rcx
  KIRQL v7; // r8
  char v8; // al
  __int64 v9; // rdx

  v3 = 0;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_I(167LL, a2, *((_QWORD *)a1 + 3));
  LOBYTE(v4) = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(*((_QWORD *)a1 + 3), v5, v4);
  if ( InterfaceByNetLuid )
  {
    v8 = *((_BYTE *)a1 + 134);
    if ( v8 )
    {
      *(_BYTE *)(InterfaceByNetLuid + 556) = *((_BYTE *)a1 + 135);
      *(_DWORD *)(InterfaceByNetLuid + 528) = *((_DWORD *)a1 + 34);
      *(_DWORD *)(InterfaceByNetLuid + 536) = *((_DWORD *)a1 + 35);
      *(_DWORD *)(InterfaceByNetLuid + 532) = *((_DWORD *)a1 + 36);
      v8 = *((_BYTE *)a1 + 134);
    }
    *(_BYTE *)(InterfaceByNetLuid + 1490) = v8;
  }
  else
  {
    v3 = -1073741072;
  }
  KeReleaseSpinLock(&ndisIfListLock, v7);
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_IL(168LL, v9, *((_QWORD *)a1 + 3), v3);
  return v3;
}
