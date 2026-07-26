/*
 * XREFs of ndisIfUpdateFilterIfStack @ 0x1C0029E34
 * Callers:
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C002A168 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ndisFilterAttachCleanUp @ 0x1C008F67C (ndisFilterAttachCleanUp.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C0029FE0 (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     ndisIfFindInterface @ 0x1C002A39C (ndisIfFindInterface.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

void __fastcall ndisIfUpdateFilterIfStack(__int64 a1)
{
  unsigned int v1; // esi
  char v2; // di
  int v3; // edx
  __int64 Interface; // rbx
  PVOID *v5; // rcx
  unsigned int v6; // edx
  unsigned int v7; // r8d
  PVOID *v8; // rbx
  int v9; // edx
  unsigned int v10[4]; // [rsp+30h] [rbp-478h] BYREF
  _OWORD v11[68]; // [rsp+40h] [rbp-468h] BYREF

  v1 = *(_DWORD *)(a1 + 4056);
  v2 = a1;
  memset(&v11[1], 0, 0x430uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      22,
      196,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      v2);
  }
  KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
  Interface = ndisIfFindInterface(v1);
  v11[0] = *(_OWORD *)(Interface + 580);
  if ( *(_DWORD *)(Interface + 1300) )
  {
LABEL_4:
    v5 = (PVOID *)ndisIfStackEntryList;
    v6 = 0;
    if ( ndisIfStackEntryList != &ndisIfStackEntryList )
    {
      v7 = *(_DWORD *)(Interface + 1300);
      while ( v6 < v7 )
      {
        v8 = v5;
        v5 = (PVOID *)*v5;
        if ( *((_DWORD *)v8 + 5) == v1 )
        {
          Interface = (__int64)v8[3];
          ++v6;
          if ( Interface )
          {
            if ( (*(_DWORD *)(Interface + 1336) & 2) != 0 )
            {
              v10[0] = 0;
              ndisNsiChangeInterfaceInfo(
                (struct _NDIS_IF_BLOCK *)Interface,
                (struct _NDIS_NSI_INTERFACE_INFORMATION_RW *)v11,
                0x10u,
                0,
                v10);
              v1 = *(_DWORD *)(Interface + 4);
              if ( *(_DWORD *)(Interface + 1300) )
                goto LABEL_4;
              break;
            }
          }
        }
        if ( v5 == &ndisIfStackEntryList )
          break;
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      22,
      197,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      v2);
  }
}
