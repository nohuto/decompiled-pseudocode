/*
 * XREFs of ?ndisNsiEnumerateAllIfRcvAddresses@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0064470
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C0039EE8 (ndisIfFindInterfaceByNetLuid.c)
 *     ?ndisNsiEnumerateAllIfRcvAddressesInOneInterface@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00645BC (-ndisNsiEnumerateAllIfRcvAddressesInOneInterface@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NM_REQUEST_ENUMERA.c)
 */

__int64 __fastcall ndisNsiEnumerateAllIfRcvAddresses(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // al
  _LIST_ENTRY **v4; // rcx
  KIRQL v5; // si
  struct _NDIS_IF_BLOCK *InterfaceByNetLuid; // rax
  int v7; // r8d
  int v8; // eax
  int v9; // edx

  v2 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      91,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1);
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v4 = (_LIST_ENTRY **)*((_QWORD *)a1 + 2);
  v5 = v3;
  if ( v4 && ((*((_DWORD *)a1 + 6) - 8) & 0xFFFFFFDF) != 0 || *((_QWORD *)a1 + 7) && *((_DWORD *)a1 + 16) < 6u )
  {
    v2 = -1073741306;
  }
  else if ( v4 )
  {
    InterfaceByNetLuid = (struct _NDIS_IF_BLOCK *)ndisIfFindInterfaceByNetLuid(*v4);
    if ( InterfaceByNetLuid )
    {
      if ( v7 )
      {
        v8 = ndisNsiEnumerateAllIfRcvAddressesInOneInterface(InterfaceByNetLuid, a1);
      }
      else
      {
        *((_DWORD *)a1 + 22) = InterfaceByNetLuid->ifRcvAddressCount;
        v8 = InterfaceByNetLuid->ifRcvAddressCount != 0 ? 0x105 : 0;
      }
      v2 = v8;
    }
    else
    {
      v2 = -1073741772;
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      22,
      92,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      v2);
  }
  return v2;
}
