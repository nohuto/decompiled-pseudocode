/*
 * XREFs of ndisSetMiniportHandlers @ 0x1C010E9D0
 * Callers:
 *     NdisMSetAttributesEx @ 0x1C010E770 (NdisMSetAttributesEx.c)
 * Callees:
 *     ndisSetupNdis6OpenHandlers @ 0x1C001B388 (ndisSetupNdis6OpenHandlers.c)
 *     ndisSetupLwfMiniportHandlers @ 0x1C001B3F8 (ndisSetupLwfMiniportHandlers.c)
 *     ndisMIsPowerSynchronizedDatapathRequired @ 0x1C001DCB4 (ndisMIsPowerSynchronizedDatapathRequired.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall ndisSetMiniportHandlers(__int64 a1)
{
  bool v2; // cf
  __int64 v3; // rcx
  void (__fastcall *v4)(__int64, struct _NET_BUFFER_LIST *, unsigned int); // rax
  bool v5; // zf
  __int64 i; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  void (__fastcall *v9)(__int64, struct _NDIS_PACKET *); // rax
  void (__stdcall *v10)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS); // rcx
  __int64 v11; // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xA0u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
  v2 = *(_BYTE *)(a1 + 32) < 6u;
  *(_QWORD *)(a1 + 2456) = ndisMTopReceiveNetBufferLists;
  *(_QWORD *)(a1 + 2328) = a1;
  *(_QWORD *)(a1 + 2336) = 32LL;
  *(_QWORD *)(a1 + 2344) = a1;
  if ( v2 )
  {
    v5 = *(_DWORD *)(a1 + 2256) == 1;
    v7 = *(_QWORD *)(a1 + 3792);
    v8 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 2176) = *(_QWORD *)(v7 + 224);
    *(_QWORD *)(a1 + 2184) = v8;
    if ( v5 || *(_QWORD *)(a1 + 2064) )
    {
      v8 = a1;
      v9 = ndisSynchReturnPacketsForTranslation;
    }
    else
    {
      v9 = *(void (__fastcall **)(__int64, struct _NDIS_PACKET *))(v7 + 224);
    }
    *(_QWORD *)(a1 + 2192) = v9;
    *(_QWORD *)(a1 + 2200) = v8;
    if ( (*(_DWORD *)(a1 + 120) & 0x40000) == 0
      || (v10 = *(void (__stdcall **)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))(*(_QWORD *)(a1 + 3792) + 296LL)) == 0LL )
    {
      v10 = ndisFakeMiniportCancelSendPackets;
    }
    *(_QWORD *)(a1 + 2440) = v10;
    *(_QWORD *)(a1 + 2320) = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 2480) = ndisMSendNetBufferListsToPackets;
    v11 = *(_QWORD *)(a1 + 4112);
    *(_QWORD *)(a1 + 2392) = v11;
    *(_QWORD *)(a1 + 2368) = v11;
    *(_QWORD *)(a1 + 2384) = a1;
    *(_QWORD *)(a1 + 2400) = a1;
    *(_QWORD *)(a1 + 2472) = ndisReturnNetBufferListsToPackets;
    *(_QWORD *)(a1 + 2360) = a1;
    *(_QWORD *)(a1 + 2376) = a1;
  }
  else
  {
    *(_QWORD *)(a1 + 2200) = a1;
    *(_QWORD *)(a1 + 2192) = ndisSynchReturnPacketsForTranslation;
    *(_QWORD *)(a1 + 2320) = a1;
    *(_QWORD *)(a1 + 2440) = ndisMCancelSendNetBufferListsOnMiniport;
    *(_QWORD *)(a1 + 2480) = ndisMSendNBLToMiniport;
    *(_QWORD *)(a1 + 2392) = *(_QWORD *)(a1 + 4112);
    *(_QWORD *)(a1 + 2384) = a1;
    *(_QWORD *)(a1 + 2400) = a1;
    if ( ndisMIsPowerSynchronizedDatapathRequired((_DWORD *)a1) )
    {
      v4 = ndisReturnNblWithPowerQueue;
    }
    else
    {
      v3 = *(_QWORD *)(a1 + 24);
      v4 = *(void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, unsigned int))(*(_QWORD *)(a1 + 3792) + 192LL);
    }
    *(_QWORD *)(a1 + 2472) = v4;
    *(_QWORD *)(a1 + 2360) = v3;
    v5 = (*(_DWORD *)(a1 + 120) & 0x20000) == 0;
    *(_QWORD *)(a1 + 2368) = *(_QWORD *)(a1 + 4112);
    *(_QWORD *)(a1 + 2376) = a1;
    if ( !v5 )
      *(_QWORD *)(a1 + 2248) = *(_QWORD *)(a1 + 24);
  }
  ndisSetupLwfMiniportHandlers(a1);
  for ( i = *(_QWORD *)(a1 + 56); i; i = *(_QWORD *)(i + 392) )
    ndisSetupNdis6OpenHandlers(i, *(_QWORD *)(i + 24), a1);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xA1u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
}
