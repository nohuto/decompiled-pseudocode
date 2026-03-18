/*
 * XREFs of DrvQueryDisplayConfig @ 0x1C004A570
 * Callers:
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C0049F04 (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     NtUserQueryDisplayConfig @ 0x1C004A2B0 (NtUserQueryDisplayConfig.c)
 *     RIMGetQDCActivePathsData @ 0x1C004A680 (RIMGetQDCActivePathsData.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C00E36BC (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0101D60 (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C00144B4 (DrvIsWddmDriverPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvQueryDisplayConfig(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  bool v12; // di
  int v13; // ecx
  _DWORD *v14; // r8
  int v15; // ebx
  __int64 v16; // rax

  v5 = (unsigned int)a1;
  v8 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v8 + 24) = v5;
  WdLogEvent5_WdEvent(v8);
  if ( (unsigned int)DrvIsWddmDriverPresent() )
  {
    v12 = (_DWORD)v5 == 4 && (unsigned __int8)((__int64 (*)(void))qword_1C01CDB60)();
    v13 = 2;
    if ( !v12 )
      v13 = v5;
    v14 = 0LL;
    if ( !v12 )
      v14 = a4;
    v15 = qword_1C01CD8F8(v13 & 0xFFFFFFEF, v13 & 0x10, a2, a3, v14);
    if ( v15 >= 0 && v12 )
      *a4 = 4;
  }
  else
  {
    v15 = -1073741637;
  }
  v16 = WdLogNewEntry5_WdEvent(v10, v9, v11);
  *(_QWORD *)(v16 + 24) = v15;
  WdLogEvent5_WdEvent(v16);
  return (unsigned int)v15;
}
