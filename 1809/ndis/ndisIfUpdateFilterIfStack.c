/*
 * XREFs of ndisIfUpdateFilterIfStack @ 0x1C002297C
 * Callers:
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C0022BD0 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ndisFilterAttachCleanUp @ 0x1C005C06C (ndisFilterAttachCleanUp.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010C4C8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C0022AB8 (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     ndisIfFindInterface @ 0x1C0022DB4 (ndisIfFindInterface.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall ndisIfUpdateFilterIfStack(__int64 a1)
{
  unsigned int v1; // esi
  __int64 Interface; // rbx
  PVOID *v4; // rcx
  unsigned int v5; // edx
  unsigned int v6; // r8d
  PVOID *v7; // rbx
  wchar_t v8[8]; // [rsp+30h] [rbp-468h] BYREF
  _OWORD v9[68]; // [rsp+40h] [rbp-458h] BYREF

  v1 = *(_DWORD *)(a1 + 4088);
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_q(195LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1);
  KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
  Interface = ndisIfFindInterface(v1);
  v9[0] = *(_OWORD *)(Interface + 580);
  if ( *(_DWORD *)(Interface + 1300) )
  {
LABEL_4:
    v4 = (PVOID *)ndisIfStackEntryList;
    v5 = 0;
    if ( ndisIfStackEntryList != &ndisIfStackEntryList )
    {
      v6 = *(_DWORD *)(Interface + 1300);
      while ( v5 < v6 )
      {
        v7 = v4;
        v4 = (PVOID *)*v4;
        if ( *((_DWORD *)v7 + 5) == v1 )
        {
          Interface = (__int64)v7[3];
          ++v5;
          if ( Interface )
          {
            if ( (*(_DWORD *)(Interface + 1336) & 2) != 0 )
            {
              *(_DWORD *)v8 = 0;
              ndisNsiChangeInterfaceInfo(
                (struct _NDIS_IF_BLOCK *)Interface,
                (struct _NDIS_NSI_INTERFACE_INFORMATION_RW *)v9,
                0x10u,
                0,
                v8);
              v1 = *(_DWORD *)(Interface + 4);
              if ( *(_DWORD *)(Interface + 1300) )
                goto LABEL_4;
              break;
            }
          }
        }
        if ( v4 == &ndisIfStackEntryList )
          break;
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_q(196LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1);
}
