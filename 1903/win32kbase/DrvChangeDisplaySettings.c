/*
 * XREFs of DrvChangeDisplaySettings @ 0x1C004BEDC
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C004B9BC (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004537C (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00493E4 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     LogDiagCDS @ 0x1C004C1C4 (LogDiagCDS.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C004C4E0 (DrvChangeDisplaySettingsPreValidate.c)
 *     DrvSetDisplayConfig @ 0x1C00504D0 (DrvSetDisplayConfig.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C0051BAC (--0AUTO_TGO@@IEAA@XZ.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C0051BEC (--1AUTO_TGO@@MEAA@XZ.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C00A18FC (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall DrvChangeDisplaySettings(
        PCUNICODE_STRING String1,
        __int64 a2,
        struct _devicemodeW *a3,
        struct _ERESOURCE *a4,
        unsigned int a5,
        int a6,
        int a7,
        struct _MDEV *a8,
        __int64 *a9,
        unsigned int a10,
        int a11,
        int a12,
        unsigned int a13,
        __int64 a14,
        __int64 a15)
{
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // ebx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r13d
  int v27; // esi
  struct tagGRAPHICS_DEVICE *v28; // rdi
  int PruneFlag; // eax
  int v30; // r14d
  int v31; // r9d
  int v32; // r8d
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // ecx
  __int64 v39; // rax
  unsigned int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  _BYTE v45[4]; // [rsp+88h] [rbp-80h] BYREF
  int v46; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v47; // [rsp+90h] [rbp-78h] BYREF
  int v48; // [rsp+94h] [rbp-74h]
  struct tagGRAPHICS_DEVICE *v49; // [rsp+98h] [rbp-70h] BYREF
  void *v50; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v51[7]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v52; // [rsp+E0h] [rbp-28h]
  __int64 v53; // [rsp+E8h] [rbp-20h]
  _QWORD v54[13]; // [rsp+F0h] [rbp-18h] BYREF
  void *retaddr; // [rsp+160h] [rbp+58h]

  v48 = 0;
  v49 = 0LL;
  v46 = 0;
  v17 = 0LL;
  v52 = MEMORY[0xFFFFF78000000320];
  v18 = v52 * KeQueryTimeIncrement();
  *a9 = 0LL;
  v53 = v18;
  v50 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v50, 2LL);
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v54);
  v54[0] = off_1C01CCE50;
  v21 = DrvChangeDisplaySettingsPreValidate(String1, a6, (__int64)&v49, (__int64)&v46);
  if ( !v21 )
  {
    if ( v46 )
    {
      v45[0] = 0;
      memset(v51, 0, sizeof(v51));
      v26 = a11;
      v27 = a7;
      v28 = v49;
      if ( a3 )
      {
        if ( (((unsigned __int64)v49 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*((_DWORD *)v49 + 40) & 0x800000) == 0 )
        {
          v41 = WdLogNewEntry5_WdAssertion(v24, v23, v25);
          WdLogEvent5_WdAssertion(v41);
        }
        v51[2] = __PAIR64__(a6, a13);
        v51[0] = v28;
        LODWORD(v51[1]) = a11;
        v51[4] = a3;
        LODWORD(v51[3]) = a7;
        if ( a10 == -1 )
          PruneFlag = DrvGetPruneFlag(v28);
        else
          PruneFlag = a10 != 0;
        HIDWORD(v51[1]) = PruneFlag;
      }
      v30 = a12;
      v31 = 32;
      v32 = (a7 != 0 ? 143 : 79) | (a12 != 0 ? 0x100 : 0);
      if ( !a3 && a7 )
      {
        v32 |= 0x800u;
        v31 = 34;
      }
      v33 = DrvSetDisplayConfig(
              0,
              0,
              v32,
              v31,
              (__int64)a4,
              a5 != 0,
              0LL,
              (__int64)v51,
              a8,
              (__int64)a9,
              (__int64)&v47,
              0LL,
              (__int64)v45,
              a14,
              a15);
      v21 = v51[6];
      v17 = v51[5];
      v48 = v33;
      if ( v33 < 0 )
      {
        if ( SLODWORD(v51[6]) >= 0 )
        {
          v44 = WdLogNewEntry5_WdAssertion(v35, v34, v36);
          WdLogEvent5_WdAssertion(v44);
        }
      }
      else
      {
        if ( SLODWORD(v51[6]) < 0 )
        {
          v42 = WdLogNewEntry5_WdAssertion(v35, v34, v36);
          WdLogEvent5_WdAssertion(v42);
        }
        if ( v45[0] )
        {
          if ( a12 )
          {
            v43 = WdLogNewEntry5_WdAssertion(v35, v34, v36);
            WdLogEvent5_WdAssertion(v43);
          }
          v21 = 2;
        }
      }
      v37 = HIDWORD(v51[6]);
    }
    else
    {
      if ( gOldModeChange )
      {
        v39 = WdLogNewEntry5_WdAssertion(v20, v19, v22);
        WdLogEvent5_WdAssertion(v39);
      }
      v30 = a12;
      v26 = a11;
      v27 = a7;
      v28 = v49;
      gOldModeChange = 1;
      v40 = DrvChangeDisplaySettingsInternal((__int64)v49, a3, 0LL, a4, a6, a7, a8, a9, a10, a11, a12, 0, 0);
      gOldModeChange = 0;
      v37 = 1;
      v47 = 1;
      v21 = v40;
    }
    LogDiagCDS(String1, a3, v28, a5, a6, v27, v26, v30, v53, v21, v48, v37, v47, v17);
    if ( v17 )
      Win32FreePool(v17);
  }
  AUTO_TGO::~AUTO_TGO((AUTO_TGO *)v54);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v50, 3LL);
  return v21;
}
