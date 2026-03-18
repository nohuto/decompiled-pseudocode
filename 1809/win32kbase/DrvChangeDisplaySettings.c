/*
 * XREFs of DrvChangeDisplaySettings @ 0x1C004C198
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C004B98C (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0015460 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C003F640 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C004BD5C (DrvChangeDisplaySettingsPreValidate.c)
 *     LogDiagCDS @ 0x1C004BF0C (LogDiagCDS.c)
 *     DrvSetDisplayConfig @ 0x1C004C710 (DrvSetDisplayConfig.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C004D498 (--0AUTO_TGO@@IEAA@XZ.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C004D4D8 (--1AUTO_TGO@@MEAA@XZ.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C008ECEC (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall DrvChangeDisplaySettings(
        PCUNICODE_STRING String1,
        __int64 a2,
        struct _devicemodeW *a3,
        void *a4,
        int a5,
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
  struct _devicemodeW *v18; // r12
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // r13d
  int v28; // esi
  struct tagGRAPHICS_DEVICE *v29; // rdi
  int PruneFlag; // eax
  int v31; // r14d
  int v32; // r9d
  int v33; // r8d
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned int v38; // ecx
  __int64 v40; // rax
  unsigned int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  char v46; // [rsp+88h] [rbp-80h] BYREF
  int v47; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v48; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v49; // [rsp+94h] [rbp-74h]
  struct tagGRAPHICS_DEVICE *v50; // [rsp+98h] [rbp-70h] BYREF
  void *v51; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v52[7]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v53; // [rsp+E0h] [rbp-28h]
  __int64 v54; // [rsp+E8h] [rbp-20h]
  _QWORD v55[13]; // [rsp+F0h] [rbp-18h] BYREF
  void *retaddr; // [rsp+160h] [rbp+58h]

  v49 = 0;
  v50 = 0LL;
  v47 = 0;
  v18 = 0LL;
  v53 = MEMORY[0xFFFFF78000000320];
  v19 = v53 * KeQueryTimeIncrement();
  *a9 = 0LL;
  v54 = v19;
  v51 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v51, 2LL);
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v55);
  v55[0] = &AUTO_TGO::`vftable';
  v22 = DrvChangeDisplaySettingsPreValidate(String1, a2, (__int64)a3, a5, a6, &v50, &v47);
  if ( !v22 )
  {
    if ( v47 )
    {
      v46 = 0;
      memset(v52, 0, sizeof(v52));
      v27 = a11;
      v28 = a7;
      v29 = v50;
      if ( a3 )
      {
        if ( (((unsigned __int64)v50 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*((_DWORD *)v50 + 40) & 0x800000) == 0 )
        {
          v42 = WdLogNewEntry5_WdAssertion(v25, v24, v26);
          WdLogEvent5_WdAssertion(v42);
        }
        v52[2] = __PAIR64__(a6, a13);
        v52[0] = (__int64)v29;
        LODWORD(v52[1]) = a11;
        v52[4] = (__int64)a3;
        LODWORD(v52[3]) = a7;
        if ( a10 == -1 )
          PruneFlag = DrvGetPruneFlag(v29);
        else
          PruneFlag = a10 != 0;
        HIDWORD(v52[1]) = PruneFlag;
      }
      v31 = a12;
      v32 = 32;
      v33 = (a7 != 0 ? 143 : 79) | (a12 != 0 ? 0x100 : 0);
      if ( !a3 && a7 )
      {
        v33 |= 0x800u;
        v32 = 34;
      }
      v34 = DrvSetDisplayConfig(
              0,
              0,
              v33,
              v32,
              (__int64)a4,
              a5 != 0,
              0LL,
              (__int64)v52,
              a8,
              (__int64)a9,
              (__int64)&v48,
              0LL,
              (__int64)&v46,
              a14,
              a15);
      v22 = v52[6];
      v18 = (struct _devicemodeW *)v52[5];
      v49 = v34;
      if ( v34 < 0 )
      {
        if ( SLODWORD(v52[6]) >= 0 )
        {
          v45 = WdLogNewEntry5_WdAssertion(v36, v35, v37);
          WdLogEvent5_WdAssertion(v45);
        }
      }
      else
      {
        if ( SLODWORD(v52[6]) < 0 )
        {
          v43 = WdLogNewEntry5_WdAssertion(v36, v35, v37);
          WdLogEvent5_WdAssertion(v43);
        }
        if ( v46 )
        {
          if ( a12 )
          {
            v44 = WdLogNewEntry5_WdAssertion(v36, v35, v37);
            WdLogEvent5_WdAssertion(v44);
          }
          v22 = 2;
        }
      }
      v38 = HIDWORD(v52[6]);
    }
    else
    {
      if ( gOldModeChange )
      {
        v40 = WdLogNewEntry5_WdAssertion(v21, v20, v23);
        WdLogEvent5_WdAssertion(v40);
      }
      v27 = a11;
      v31 = a12;
      v28 = a7;
      v29 = v50;
      gOldModeChange = 1;
      v41 = DrvChangeDisplaySettingsInternal((__int64)v50, a3, 0LL, a4, a6, a7, a8, a9, a10, a11, a12, 0, 0);
      gOldModeChange = 0;
      v38 = 1;
      v48 = 1;
      v22 = v41;
    }
    LogDiagCDS((__int64)String1, a3, (__int64)v29, a5, a6, v28, v27, v31, v54, v22, v49, v38, v48, v18);
    if ( v18 )
      Win32FreePool((__int64)v18);
  }
  AUTO_TGO::~AUTO_TGO((AUTO_TGO *)v55);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v51, 3LL);
  return v22;
}
