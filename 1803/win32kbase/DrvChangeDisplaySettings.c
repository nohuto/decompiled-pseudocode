/*
 * XREFs of DrvChangeDisplaySettings @ 0x1C004BCC8
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C004C440 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0042578 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvGetDeviceFromName @ 0x1C0045200 (DrvGetDeviceFromName.c)
 *     _DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM @ 0x1C004A7AC (_DrvChangeDisplaySettings_--_2_--_AUTO_KM--__AUTO_KM.c)
 *     _DrvChangeDisplaySettings_::_2_::_AUTO_KM::_AUTO_KM @ 0x1C004A7F0 (_DrvChangeDisplaySettings_--_2_--_AUTO_KM--_AUTO_KM.c)
 *     DrvSetDisplayConfig @ 0x1C004A830 (DrvSetDisplayConfig.c)
 *     ?LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKHH_KJJW4_DXGK_DIAG_CDS_STAGE@@I1@Z @ 0x1C004B7FC (-LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKH.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C004C3A0 (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004EAA8 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C006D0CC (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C006D5B0 (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall DrvChangeDisplaySettings(
        UNICODE_STRING *a1,
        __int64 a2,
        struct _devicemodeW *a3,
        void *a4,
        int a5,
        int a6,
        int a7,
        struct _MDEV *a8,
        struct _MDEV **a9,
        int a10,
        int a11,
        int a12,
        unsigned int a13,
        _BYTE *a14,
        __int64 a15)
{
  __int64 v16; // rsi
  bool v18; // r13
  struct _devicemodeW *v19; // r14
  unsigned __int64 v20; // rdx
  __int64 Buffer; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // r12d
  wchar_t *DeviceFromName; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int PruneFlag; // eax
  __int64 v31; // r8
  unsigned int v32; // r9d
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // esi
  USHORT v38; // bx
  UNICODE_STRING *v39; // rax
  const void *v40; // rdx
  char *v41; // rcx
  WORD v42; // bx
  WORD dmDriverExtra; // si
  __int64 v44; // rdx
  void *v45; // rcx
  __int64 v46; // r8
  ULONG64 v47; // rdx
  __int64 v48; // rax
  unsigned int v49; // ebx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // [rsp+38h] [rbp-130h]
  char v60[8]; // [rsp+80h] [rbp-E8h] BYREF
  void *v61; // [rsp+88h] [rbp-E0h] BYREF
  unsigned int v62; // [rsp+90h] [rbp-D8h] BYREF
  signed int v63; // [rsp+94h] [rbp-D4h]
  WORD dmSize; // [rsp+98h] [rbp-D0h]
  WORD v65; // [rsp+9Ch] [rbp-CCh]
  _BYTE v66[48]; // [rsp+A0h] [rbp-C8h] BYREF
  UNICODE_STRING *v67; // [rsp+D0h] [rbp-98h]
  void *v68; // [rsp+D8h] [rbp-90h]
  __int64 v69; // [rsp+E0h] [rbp-88h]
  struct _devicemodeW *v70; // [rsp+E8h] [rbp-80h]
  __int64 v71; // [rsp+F0h] [rbp-78h]
  _QWORD v72[7]; // [rsp+F8h] [rbp-70h] BYREF
  void *Src[2]; // [rsp+130h] [rbp-38h]
  void *retaddr; // [rsp+168h] [rbp+0h]

  v16 = a2;
  v63 = 0;
  v18 = 0;
  v19 = 0LL;
  v70 = 0LL;
  v69 = MEMORY[0xFFFFF78000000320];
  v71 = v69 * KeQueryTimeIncrement();
  *a9 = 0LL;
  v61 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v61, 2LL);
  DrvChangeDisplaySettings_::_2_::_AUTO_KM::_AUTO_KM((AUTO_TGO *)v66);
  v24 = 1;
  if ( !a5 )
    goto LABEL_11;
  if ( a5 == 1 )
  {
    if ( a6 && a3 && (unsigned int)DrvIsPermanentSettingChangesDisabled() )
    {
      v48 = WdLogNewEntry5_WdTrace();
      WdLogEvent5_WdTrace(v48);
      v49 = -3;
LABEL_68:
      DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v66);
      AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v61, 3LL);
      return v49;
    }
    if ( (unsigned int)DrvIsTemporarySettingChangeDisabled() )
    {
      v50 = WdLogNewEntry5_WdTrace();
      WdLogEvent5_WdTrace(v50);
LABEL_66:
      v49 = -1;
      goto LABEL_68;
    }
  }
  if ( a1 )
  {
    *(UNICODE_STRING *)Src = *a1;
    v38 = (USHORT)Src[0];
    v39 = (UNICODE_STRING *)PALLOCMEM2((unsigned int)LOWORD(Src[0]) + 18, 0x73726447u, 0);
    v67 = v39;
    if ( !v39 )
    {
      v52 = ((__int64 (*)(void))WdLogNewEntry5_WdLowResource)();
      *(_QWORD *)(v52 + 24) = a1;
      *(_QWORD *)(v52 + 32) = v38;
      WdLogEvent5_WdLowResource(v52);
      DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v66);
      AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v61, 3LL);
      return 0xFFFFFFFFLL;
    }
    v39->Buffer = &v39[1].Length;
    v67->Length = v38;
    v67->MaximumLength = v38 + 2;
    if ( v38 )
    {
      v40 = Src[1];
      v41 = (char *)Src[1] + v38;
      if ( (unsigned __int64)v41 > MmUserProbeAddress || v41 < Src[1] )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v67->Buffer, v40, v38);
    }
    v20 = (unsigned __int64)v38 >> 1;
    Buffer = (__int64)v67->Buffer;
    *(_WORD *)(Buffer + 2 * v20) = 0;
    a1 = v67;
  }
  else
  {
    a1 = 0LL;
  }
  if ( !a3 )
  {
    a3 = 0LL;
    goto LABEL_11;
  }
  if ( ((unsigned __int8)a3 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  dmSize = a3->dmSize;
  v42 = dmSize;
  dmDriverExtra = a3->dmDriverExtra;
  v65 = dmDriverExtra;
  if ( dmSize < 0xBCu )
  {
    DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v66);
    AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v61, 3LL);
    return 4294967294LL;
  }
  if ( dmSize > 0xDCu )
  {
    v49 = -2;
    goto LABEL_68;
  }
  v45 = PALLOCMEM2((unsigned int)dmDriverExtra + 220, 0x73726447u, 1);
  v68 = v45;
  if ( !v45 )
  {
    v51 = WdLogNewEntry5_WdLowResource(0LL, v44, v46, 0LL);
    *(_QWORD *)(v51 + 24) = a3;
    *(_QWORD *)(v51 + 32) = dmDriverExtra;
    WdLogEvent5_WdLowResource(v51);
    goto LABEL_66;
  }
  if ( dmDriverExtra + v42 )
  {
    v47 = (ULONG64)a3->dmDeviceName + dmDriverExtra + (unsigned int)v42;
    if ( v47 > MmUserProbeAddress || v47 < (unsigned __int64)a3 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      v45 = v68;
    }
  }
  memmove(v45, a3, v42);
  memmove((char *)v68 + 220, (char *)a3 + v42, dmDriverExtra);
  Buffer = 220LL;
  *((_WORD *)v68 + 34) = 220;
  *((_WORD *)v68 + 35) = dmDriverExtra;
  a3 = (struct _devicemodeW *)v68;
  v16 = a2;
  v19 = v70;
LABEL_11:
  if ( a1 )
  {
    DeviceFromName = DrvGetDeviceFromName(a1, 0);
    if ( DeviceFromName )
      goto LABEL_13;
    v53 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v53 + 24) = 0LL;
LABEL_72:
    WdLogEvent5_WdTrace(v53);
    DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v66);
    AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v61, 3LL);
    return 4294967291LL;
  }
  if ( a3 )
  {
    if ( v16 )
      DeviceFromName = *(wchar_t **)(v16 + 2568);
    else
      DeviceFromName = 0LL;
    if ( !DeviceFromName )
    {
      v53 = WdLogNewEntry5_WdTrace();
      *(_QWORD *)(v53 + 24) = 1LL;
      goto LABEL_72;
    }
  }
  else
  {
    DeviceFromName = 0LL;
  }
LABEL_13:
  if ( !gProtocolType )
  {
    if ( DeviceFromName )
    {
      v18 = (*((_DWORD *)DeviceFromName + 40) & 0x800000) != 0;
    }
    else
    {
      for ( Buffer = (__int64)gpGraphicsDeviceList; Buffer; Buffer = *(_QWORD *)(Buffer + 128) )
      {
        if ( (*(_DWORD *)(Buffer + 160) & 0x800000) != 0 )
        {
          v18 = 1;
          break;
        }
      }
    }
  }
  if ( a5 && DeviceFromName && !*((_QWORD *)DeviceFromName + 17) && (*((_DWORD *)DeviceFromName + 40) & 0x6000008) == 0 )
  {
    v53 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v53 + 24) = 2LL;
    goto LABEL_72;
  }
  if ( v18 )
  {
    v60[0] = 0;
    memset(v72, 0, sizeof(v72));
    if ( a3 )
    {
      if ( ((unsigned __int64)(DeviceFromName + 2) & 0xFFFFFFFFFFFFFFFBuLL) == 0
        || (*((_DWORD *)DeviceFromName + 40) & 0x800000) == 0 )
      {
        v55 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
        WdLogEvent5_WdAssertion(v55);
      }
      v72[0] = DeviceFromName;
      LODWORD(v72[1]) = a11;
      v72[2] = __PAIR64__(a6, a13);
      v72[4] = a3;
      LODWORD(v72[3]) = a7;
      if ( a10 == -1 )
        PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)DeviceFromName);
      else
        PruneFlag = a10 != 0;
      HIDWORD(v72[1]) = PruneFlag;
    }
    v31 = (a7 != 0 ? 128 : 64) | (a12 != 0 ? 271 : 15);
    v32 = 32;
    if ( !a3 && a7 )
    {
      LODWORD(v31) = v31 | 0x800;
      v32 = 34;
    }
    v63 = DrvSetDisplayConfig(0, 0LL, v31, v32, a4, a5 != 0, 0LL, (__int64)v72, a8, a9, &v62, 0LL, v60, a14, a15);
    v36 = v72[6];
    v24 = HIDWORD(v72[6]);
    v19 = (struct _devicemodeW *)v72[5];
    if ( v63 < 0 )
    {
      if ( SLODWORD(v72[6]) >= 0 )
      {
        v58 = WdLogNewEntry5_WdAssertion(0LL, v33, v34, v35);
        WdLogEvent5_WdAssertion(v58);
      }
    }
    else
    {
      if ( SLODWORD(v72[6]) < 0 )
      {
        v56 = WdLogNewEntry5_WdAssertion(0LL, v33, v34, v35);
        WdLogEvent5_WdAssertion(v56);
      }
      if ( v60[0] )
      {
        if ( a12 )
        {
          v57 = WdLogNewEntry5_WdAssertion(0LL, v33, v34, v35);
          WdLogEvent5_WdAssertion(v57);
        }
        v36 = 2;
      }
    }
  }
  else
  {
    if ( gOldModeChange )
    {
      v54 = WdLogNewEntry5_WdAssertion(Buffer, v20, v22, v23);
      WdLogEvent5_WdAssertion(v54);
    }
    gOldModeChange = 1;
    v59 = (__int64)a9;
    v36 = DrvChangeDisplaySettingsInternal(DeviceFromName, a3, 0LL, a4, a6, a7, a8);
    gOldModeChange = 0;
    v62 = 1;
  }
  LogDiagCDS((__int64)a1, a3, (__int64)DeviceFromName, v35, a5, a6, a7, v59, a11, a12, v71, v36, v63, v24, v62, v19);
  if ( v19 )
    Win32FreePool((__int64)v19);
  DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v66);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v61, 3LL);
  return v36;
}
