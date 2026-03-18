/*
 * XREFs of CheckPointerDeviceConfiguration @ 0x1C01287C0
 * Callers:
 *     RawInputThread @ 0x1C00D2920 (RawInputThread.c)
 * Callees:
 *     AccessPTPEnabledStatus @ 0x1C0128920 (AccessPTPEnabledStatus.c)
 *     _GetPrecisionTouchPadThresholds @ 0x1C0128AB0 (_GetPrecisionTouchPadThresholds.c)
 *     IsLegacyTouchPad @ 0x1C01BBCDC (IsLegacyTouchPad.c)
 *     _TelemPTPConfigUpdateEx @ 0x1C01BBF68 (_TelemPTPConfigUpdateEx.c)
 *     ReadTiltCalibrationData @ 0x1C01BED54 (ReadTiltCalibrationData.c)
 *     GetHidTelemetryData @ 0x1C01D9D38 (GetHidTelemetryData.c)
 */

// write access to const memory has been detected, the output may be wrong!
void CheckPointerDeviceConfiguration()
{
  __int64 v0; // r14
  __int64 v1; // r15
  int v2; // esi
  char v3; // r13
  unsigned int v4; // r12d
  CInpPushLock *Lock; // rbx
  struct DEVICEINFO *DeviceList; // rax
  __int64 v7; // rdx
  struct DEVICEINFO *v8; // rdi
  __int128 v9; // xmm6
  char v10; // r8
  __int128 v11; // xmm7
  char v12; // cl
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18[2]; // [rsp+50h] [rbp-30h] BYREF
  char v19; // [rsp+C0h] [rbp+40h]
  int v20; // [rsp+C8h] [rbp+48h] BYREF

  v0 = 0LL;
  v19 = 0;
  v1 = 0LL;
  v17[1] = 0LL;
  v2 = 1;
  v18[1] = 0LL;
  v20 = 1;
  v3 = 0;
  v4 = 0;
  _GetPrecisionTouchPadConfiguration(0LL);
  GetPrecisionTouchPadThresholds();
  AccessPTPEnabledStatus(0LL, 1LL, &v20);
  gPTPEnabled = v20;
  CPTPProcessor::EnvironmentChanged();
  Lock = CBaseInput::TmpGetLock(gpHidInput);
  CInpPushLock::LockShared(Lock);
  DeviceList = CBaseInput::TmpGetDeviceList(gpHidInput);
  v7 = 0LL;
  v8 = DeviceList;
  if ( DeviceList )
  {
    v9 = *(_OWORD *)v17;
    v10 = 3;
    v11 = *(_OWORD *)v18;
    while ( 1 )
    {
      v12 = *((_BYTE *)v8 + 48);
      if ( v12 == v10 && (*((_DWORD *)v8 + 46) & 0x1000) != 0 && gPTPEnabled == (_DWORD)v7 )
        break;
      if ( (*((_DWORD *)v8 + 50) & 0x80u) == 0 )
      {
        if ( !v12 )
        {
          if ( *((_WORD *)v8 + 372) == (_WORD)v7 )
          {
            v3 = 1;
          }
          else if ( (unsigned int)IsLegacyTouchPad(v8) && !v1 )
          {
            v1 = (__int64)v8;
          }
        }
        goto LABEL_8;
      }
      v14 = *((_QWORD *)v8 + 60);
      if ( *(_QWORD *)(v14 + 336) != v7 )
      {
        *(_OWORD *)v18 = *((_OWORD *)v8 + 13);
        ReadTiltCalibrationData(v14, v18);
        GetHidTelemetryData(v8);
        goto LABEL_19;
      }
      GetHidTelemetryData(v8);
      v7 = 0LL;
      if ( v0 || (v15 = *((_QWORD *)v8 + 60), *(_DWORD *)(v15 + 24) != 7) )
      {
        v10 = 3;
        if ( (unsigned int)(*(_DWORD *)(*((_QWORD *)v8 + 60) + 24LL) - 1) <= 3 )
        {
          v13 = 1;
          v19 = 1;
          goto LABEL_9;
        }
      }
      else
      {
        v16 = *(_DWORD *)(v15 + 896);
        v10 = 3;
        switch ( v16 )
        {
          case 1:
            v4 = 1;
            break;
          case 2:
            v4 = 2;
            break;
          case 3:
            v4 = 3;
            break;
        }
        v9 = *(_OWORD *)(v15 + 124);
        v0 = (__int64)v8;
        v11 = *(_OWORD *)(v15 + 140);
      }
LABEL_8:
      v13 = v19;
LABEL_9:
      v8 = (struct DEVICEINFO *)*((_QWORD *)v8 + 7);
      if ( !v8 )
      {
        if ( v0 )
        {
          v2 = v7;
        }
        else
        {
          if ( !v1 )
            goto LABEL_12;
          v0 = v1;
        }
        *(_OWORD *)v18 = v11;
        *(_OWORD *)v17 = v9;
        TelemPTPConfigUpdateEx(v4, v2, v3, v13, (__int64)v17, (__int64)v18, v0);
        goto LABEL_12;
      }
    }
    RIMRevokeConfigurationChange(v8, 87LL);
LABEL_19:
    v7 = 0LL;
    v10 = 3;
    goto LABEL_8;
  }
LABEL_12:
  CInpPushLock::UnLockShared(Lock);
}
