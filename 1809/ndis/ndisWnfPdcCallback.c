/*
 * XREFs of ndisWnfPdcCallback @ 0x1C0051300
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     McTemplateK0x @ 0x1C00412E0 (McTemplateK0x.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     McTemplateK0 @ 0x1C004F398 (McTemplateK0.c)
 *     ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0072530 (-ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0077B80 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 */

__int64 __fastcall ndisWnfPdcCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int8 v4; // bl
  int v5; // eax
  __int64 v6; // rax
  KIRQL v7; // al
  struct _NDIS_MINIPORT_BLOCK *v8; // rbx
  KIRQL v9; // di
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // r8
  int v13; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+28h] [rbp-30h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+38h] [rbp-20h]
  int v17; // [rsp+40h] [rbp-18h]

  v14 = a4;
  v13 = 20;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0;
  v4 = 0;
  v5 = ((__int64 (__fastcall *)(__int64, int *, __int64 *, int *))ExQueryWnfStateData)(a1, &v14, &v15, &v13);
  if ( v5 >= 0 )
  {
    v6 = v15 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
    if ( v15 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
      v6 = v16 - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
    if ( !v6 )
    {
      v4 = 1;
      ndisLastCsScenarioInstanceId = v17;
    }
    if ( ndisConnectedStandby != v4 )
    {
      ndisConnectedStandby = v4;
      if ( v4 )
      {
        ndisLastCsEntryTime = MEMORY[0xFFFFF78000000008];
        if ( (byte_1C00A2083 & 4) != 0 )
          McTemplateK0();
      }
      else if ( (byte_1C00A2083 & 4) != 0 )
      {
        McTemplateK0x(
          MEMORY[0xFFFFF78000000008] - ndisLastCsEntryTime,
          &ExitingConnectedStandby,
          &GUID_00000000_0000_0000_0000_000000000000,
          (MEMORY[0xFFFFF78000000008] - ndisLastCsEntryTime) / 0x989680);
      }
      v7 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
      v8 = ndisMiniportList;
      v9 = v7;
      while ( v8 )
      {
        if ( v8->AoAc && ndisReferenceMiniport((__int64)v8) )
        {
          KeReleaseSpinLock(&ndisMiniportListLock, v9);
          ndisNicAutoPowerSaverControlIdleTimer(v8);
          if ( v8->AoAc )
            ndisCsStateChange(v8, v10, v11);
          v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
          ndisDereferenceMiniport((__int64)v8, 7u);
        }
        v8 = v8->NextGlobalMiniport;
      }
      KeReleaseSpinLock(&ndisMiniportListLock, v9);
    }
  }
  else if ( (unsigned __int8)byte_1C00A025C >= 2u )
  {
    WPP_SF_D(0x64u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, v5);
  }
  return 0LL;
}
