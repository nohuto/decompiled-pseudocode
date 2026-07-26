/*
 * XREFs of ?ndisWnfPdcCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C007D0D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     McTemplateK0x @ 0x1C0066314 (McTemplateK0x.c)
 *     McTemplateK0 @ 0x1C007D52C (McTemplateK0.c)
 *     ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B5B88 (-ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00BB8C4 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 */

__int64 __fastcall ndisWnfPdcCallback(
        struct _EX_WNF_SUBSCRIPTION *a1,
        const struct _WNF_STATE_NAME *a2,
        __int64 a3,
        int a4)
{
  unsigned __int8 v4; // bl
  int v5; // eax
  int v6; // edx
  __int64 v7; // rax
  KIRQL v8; // al
  struct _NDIS_MINIPORT_BLOCK *v9; // rbx
  KIRQL v10; // di
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // r8
  int v14; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+38h] [rbp-30h] BYREF
  __int64 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+48h] [rbp-20h]
  int v18; // [rsp+50h] [rbp-18h]

  v15 = a4;
  v14 = 20;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v4 = 0;
  v5 = ExQueryWnfStateData(a1, &v15, &v16, &v14);
  if ( v5 >= 0 )
  {
    v7 = v16 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
    if ( v16 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
      v7 = v17 - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
    if ( !v7 )
    {
      v4 = 1;
      ndisLastCsScenarioInstanceId = v18;
    }
    if ( ndisConnectedStandby != v4 )
    {
      ndisConnectedStandby = v4;
      if ( v4 )
      {
        ndisLastCsEntryTime = MEMORY[0xFFFFF78000000008];
        if ( (byte_1C00E8043 & 4) != 0 )
          McTemplateK0();
      }
      else if ( (byte_1C00E8043 & 4) != 0 )
      {
        McTemplateK0x(
          MEMORY[0xFFFFF78000000008] - ndisLastCsEntryTime,
          &ExitingConnectedStandby,
          &GUID_00000000_0000_0000_0000_000000000000,
          (MEMORY[0xFFFFF78000000008] - ndisLastCsEntryTime) / 0x989680);
      }
      v8 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
      v9 = ndisMiniportList;
      v10 = v8;
      while ( v9 )
      {
        if ( v9->AoAc && (unsigned __int8)ndisReferenceMiniport((__int64)v9) )
        {
          KeReleaseSpinLock(&ndisMiniportListLock, v10);
          ndisNicAutoPowerSaverControlIdleTimer(v9);
          if ( v9->AoAc )
            ndisCsStateChange(v9, v11, v12);
          v10 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
          ndisDereferenceMiniport((__int64)v9, 7u);
        }
        v9 = v9->NextGlobalMiniport;
      }
      KeReleaseSpinLock(&ndisMiniportListLock, v10);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      13,
      98,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      v5);
  }
  return 0LL;
}
