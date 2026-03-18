/*
 * XREFs of DrvQueryDisplayConfig @ 0x1C00500E0
 * Callers:
 *     NtUserQueryDisplayConfig @ 0x1C004DAD0 (NtUserQueryDisplayConfig.c)
 *     RIMGetQDCActivePathsData @ 0x1C0065EDC (RIMGetQDCActivePathsData.c)
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C009ED90 (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C010B454 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C012A664 (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C00502CC (DrvIsWddmDriverPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvQueryDisplayConfig(__int64 a1, unsigned int *a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  bool v12; // di
  _DWORD *v13; // rcx
  int v14; // ebx
  __int64 v15; // rax
  _DWORD *v17; // rcx

  v5 = (unsigned int)a1;
  v8 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v8 + 24) = v5;
  WdLogEvent5_WdEvent(v8);
  if ( (unsigned int)DrvIsWddmDriverPresent() )
  {
    v12 = 0;
    if ( (v5 & 7) == 4 )
    {
      v12 = (unsigned __int8)((__int64 (*)(void))qword_1C0215228)() != 0;
      if ( gRemoteSessionUseWddm )
      {
        v17 = DispBroker::DispBrokerClient::s_pSessionBroker;
        if ( *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8) )
          v17 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
        if ( *v17 == 3 )
          v12 = 1;
      }
      if ( v12 )
        LODWORD(v5) = v5 & 0xEFFFFFF8 | 0x10000002;
    }
    v13 = 0LL;
    if ( !v12 )
      v13 = a4;
    v14 = qword_1C02150E8((unsigned int)v5 & 0xFFFFFFEF, v5 & 0x10, a2, a3, v13);
    if ( v14 >= 0 && v12 && a4 )
    {
      v9 = *a2;
      if ( (unsigned int)v9 > 1 )
      {
        v10 = 1LL;
        do
        {
          v11 = 200LL * (unsigned int)v10;
          if ( *(_DWORD *)(a3 + 116) != *(_DWORD *)(v11 + a3 + 116) )
            break;
          if ( *(_DWORD *)(a3 + 120) != *(_DWORD *)(v11 + a3 + 120) )
            break;
          v10 = (unsigned int)(v10 + 1);
        }
        while ( (unsigned int)v10 < (unsigned int)v9 );
        *a4 = (unsigned int)v10 < (unsigned int)v9 ? 4 : 2;
      }
      else
      {
        *a4 = 1;
      }
    }
  }
  else
  {
    v14 = -1073741637;
  }
  v15 = WdLogNewEntry5_WdEvent(v10, v9, v11);
  *(_QWORD *)(v15 + 24) = v14;
  WdLogEvent5_WdEvent(v15);
  return (unsigned int)v14;
}
