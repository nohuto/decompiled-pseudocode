/*
 * XREFs of DrvQueryDisplayConfig @ 0x1C00426D0
 * Callers:
 *     NtUserQueryDisplayConfig @ 0x1C00415E0 (NtUserQueryDisplayConfig.c)
 *     RIMGetQDCActivePathsData @ 0x1C0051848 (RIMGetQDCActivePathsData.c)
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C006BD90 (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C00A611C (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D0004 (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C0042CB4 (DrvIsWddmDriverPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvQueryDisplayConfig(unsigned int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rbx
  __int64 v8; // rax
  bool v9; // di
  int v10; // ecx
  _DWORD *v11; // r8
  int v12; // ebx
  __int64 v13; // rax

  v5 = a1;
  v8 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v8 + 24) = v5;
  WdLogEvent5_WdEvent(v8);
  if ( (unsigned int)DrvIsWddmDriverPresent() )
  {
    v9 = (_DWORD)v5 == 4 && (unsigned __int8)((__int64 (*)(void))qword_1C01A1CC0)();
    v10 = 2;
    if ( !v9 )
      v10 = v5;
    v11 = 0LL;
    if ( !v9 )
      v11 = a4;
    v12 = qword_1C01A1A58(v10 & 0xFFFFFFEF, v10 & 0x10, a2, a3, v11);
    if ( v12 >= 0 && v9 )
      *a4 = 4;
  }
  else
  {
    v12 = -1073741637;
  }
  v13 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v13 + 24) = v12;
  WdLogEvent5_WdEvent(v13);
  return (unsigned int)v12;
}
