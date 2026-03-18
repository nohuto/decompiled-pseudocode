/*
 * XREFs of ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C00A575C
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0048030 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0041C3C (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 */

__int64 __fastcall DrvChangeDisplayFallback(
        struct _ERESOURCE *a1,
        __int64 a2,
        __int64 a3,
        struct _MDEV *a4,
        struct _MDEV **a5,
        enum _DXGK_DIAG_SDC_STAGE *a6,
        bool *a7,
        int *a8)
{
  char v9; // bl
  unsigned __int8 v10; // di
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // ebx
  unsigned int v17; // r8d
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  v9 = a3;
  v10 = a2;
  if ( gForceDisconnect )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( v9 )
    gForceDisconnect = 1;
  if ( gOldModeChange )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    WdLogEvent5_WdAssertion(v20);
  }
  gOldModeChange = 1;
  v12 = DrvChangeDisplaySettingsInternal(0LL, 0LL, 0LL, a1, 0, 1, a4, (__int64 *)a5, 0, 1, v10, 1, 0);
  gOldModeChange = 0;
  v16 = v12;
  switch ( v12 )
  {
    case 0:
      goto LABEL_8;
    case 2:
      if ( v10 || *a5 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v14, v13, v15);
        WdLogEvent5_WdAssertion(v22);
      }
LABEL_8:
      v17 = 0;
      *(_DWORD *)a6 = 18;
      *a7 = v16 == 2;
      goto LABEL_9;
    case 3:
      v21 = WdLogNewEntry5_WdAssertion(v14, v13, v15);
      WdLogEvent5_WdAssertion(v21);
      break;
  }
  v17 = -1073741823;
  *(_DWORD *)a6 = 16;
LABEL_9:
  gForceDisconnect = 0;
  if ( a8 )
    *a8 = v16;
  return v17;
}
