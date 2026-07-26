/*
 * XREFs of ?ndisIfUpdateInterfaceFromPersistentStore@@YAJAEBUNdisNetworkInterfacePersistedState@@@Z @ 0x1C0039D7C
 * Callers:
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@@W4NdisIfBlockSource@@@Z @ 0x1C0039BE0 (-ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0113F9C (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_IL @ 0x1C0039E5C (WPP_RECORDER_SF_IL.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C0039EE8 (ndisIfFindInterfaceByNetLuid.c)
 *     WPP_RECORDER_SF_I @ 0x1C0039F1C (WPP_RECORDER_SF_I.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceFromPersistentStore(
        const struct NdisNetworkInterfacePersistedState *a1,
        int a2,
        int a3)
{
  unsigned int v4; // edi
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 InterfaceByNetLuid; // rcx
  KIRQL v8; // r8
  char v9; // al
  int v10; // edx
  int v11; // r8d

  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 168);
  LOBYTE(v5) = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(*((_QWORD *)a1 + 3), v6, v5);
  if ( InterfaceByNetLuid )
  {
    v9 = *((_BYTE *)a1 + 134);
    if ( v9 )
    {
      *(_BYTE *)(InterfaceByNetLuid + 556) = *((_BYTE *)a1 + 135);
      *(_DWORD *)(InterfaceByNetLuid + 528) = *((_DWORD *)a1 + 34);
      *(_DWORD *)(InterfaceByNetLuid + 536) = *((_DWORD *)a1 + 35);
      *(_DWORD *)(InterfaceByNetLuid + 532) = *((_DWORD *)a1 + 36);
      v9 = *((_BYTE *)a1 + 134);
    }
    *(_BYTE *)(InterfaceByNetLuid + 1482) = v9;
  }
  else
  {
    v4 = -1073741072;
  }
  KeReleaseSpinLock(&ndisIfListLock, v8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_IL(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, 169);
  return v4;
}
