/*
 * XREFs of DrvGetDisplayConfigBufferSizes @ 0x1C0042660
 * Callers:
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C0041880 (NtUserGetDisplayConfigBufferSizes.c)
 *     RIMGetQDCActivePathsData @ 0x1C0051848 (RIMGetQDCActivePathsData.c)
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C006BD90 (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C00A611C (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D0004 (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C0042CB4 (DrvIsWddmDriverPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvGetDisplayConfigBufferSizes(unsigned int a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rax

  v3 = a1;
  v4 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v4 + 24) = v3;
  WdLogEvent5_WdEvent(v4);
  if ( (unsigned int)DrvIsWddmDriverPresent() )
    v5 = ((__int64 (__fastcall *)(_QWORD, __int64))qword_1C01A1A50)((unsigned int)v3, a2);
  else
    v5 = -1073741637;
  v6 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v6 + 24) = v5;
  WdLogEvent5_WdEvent(v6);
  return (unsigned int)v5;
}
