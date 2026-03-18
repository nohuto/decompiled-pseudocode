/*
 * XREFs of CheckPointerDeviceConfiguration @ 0x1C0077BFC
 * Callers:
 *     RawInputThread @ 0x1C0077DE0 (RawInputThread.c)
 * Callees:
 *     ReadTiltCalibrationData @ 0x1C01D289C (ReadTiltCalibrationData.c)
 *     GetHidTelemetryData @ 0x1C01EF4A8 (GetHidTelemetryData.c)
 *     IsLegacyTouchPad @ 0x1C020F3BC (IsLegacyTouchPad.c)
 *     _TelemPTPConfigUpdateEx @ 0x1C020F544 (_TelemPTPConfigUpdateEx.c)
 */

// write access to const memory has been detected, the output may be wrong!
void CheckPointerDeviceConfiguration()
{
  __int64 v0; // r14
  __int64 v1; // r15
  int v2; // esi
  char v3; // r13
  unsigned int v4; // r12d
  CInpPushLock *v5; // rbx
  struct DEVICEINFO *DeviceList; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  struct DEVICEINFO *v9; // rdi
  __int128 v10; // xmm6
  __int128 v11; // xmm7
  char v12; // al
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17[2]; // [rsp+50h] [rbp-30h] BYREF
  char v18; // [rsp+C0h] [rbp+40h]
  CInpPushLock *Lock; // [rsp+C8h] [rbp+48h] BYREF

  v0 = 0LL;
  v18 = 0;
  v1 = 0LL;
  v16[0] = 0LL;
  v2 = 1;
  v17[0] = 0LL;
  LODWORD(Lock) = 1;
  v3 = 0;
  v4 = 0;
  v16[1] = 0LL;
  v17[1] = 0LL;
  _GetPrecisionTouchPadConfiguration(0LL);
  AccessPTPEnabledStatus(0LL, 1LL, &Lock);
  gPTPEnabled = (_DWORD)Lock;
  CPTPProcessor::EnvironmentChanged();
  Lock = CBaseInput::TmpGetLock(gpHidInput);
  v5 = Lock;
  CInpPushLock::LockShared(Lock);
  DeviceList = CBaseInput::TmpGetDeviceList(gpHidInput);
  v8 = 0LL;
  v9 = DeviceList;
  if ( DeviceList )
  {
    v10 = *(_OWORD *)v16;
    v11 = *(_OWORD *)v17;
    while ( 1 )
    {
      if ( *((_BYTE *)v9 + 48) == 3 && (*((_DWORD *)v9 + 46) & 0x1000) != 0 )
      {
        v13 = IsPrecisionTouchPadEnabled(v7, v8);
        v8 = 0LL;
        if ( !v13 )
          break;
      }
      if ( (*((_DWORD *)v9 + 50) & 0x80u) == 0 )
      {
        if ( *((_BYTE *)v9 + 48) == (_BYTE)v8 )
        {
          if ( *((_WORD *)v9 + 444) == (_WORD)v8 )
          {
            v3 = 1;
          }
          else if ( (unsigned int)IsLegacyTouchPad(v9) && !v1 )
          {
            v1 = (__int64)v9;
          }
        }
        goto LABEL_6;
      }
      v14 = *((_QWORD *)v9 + 60);
      if ( *(_QWORD *)(v14 + 344) != v8 )
      {
        *(_OWORD *)v17 = *((_OWORD *)v9 + 13);
        ReadTiltCalibrationData(v14, v17);
        GetHidTelemetryData(v9);
        goto LABEL_19;
      }
      GetHidTelemetryData(v9);
      v8 = 0LL;
      if ( v0 || (v7 = *((_QWORD *)v9 + 60), *(_DWORD *)(v7 + 24) != 7) )
      {
        v7 = (unsigned int)(*(_DWORD *)(*((_QWORD *)v9 + 60) + 24LL) - 1);
        if ( (unsigned int)v7 <= 3 )
        {
          v12 = 1;
          v18 = 1;
          goto LABEL_7;
        }
      }
      else
      {
        v15 = *(_DWORD *)(v7 + 904);
        switch ( v15 )
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
        v10 = *(_OWORD *)(v7 + 124);
        v0 = (__int64)v9;
        v11 = *(_OWORD *)(v7 + 140);
      }
LABEL_6:
      v12 = v18;
LABEL_7:
      v9 = (struct DEVICEINFO *)*((_QWORD *)v9 + 7);
      if ( !v9 )
      {
        v5 = Lock;
        if ( v0 )
        {
          v2 = v8;
        }
        else
        {
          if ( !v1 )
            goto LABEL_10;
          v0 = v1;
        }
        *(_OWORD *)v17 = v11;
        *(_OWORD *)v16 = v10;
        TelemPTPConfigUpdateEx(v4, v2, v3, v12, (__int64)v16, (__int64)v17, v0);
        goto LABEL_10;
      }
    }
    RIMRevokeConfigurationChange(v9, 87LL);
LABEL_19:
    v8 = 0LL;
    goto LABEL_6;
  }
LABEL_10:
  CInpPushLock::UnLockShared(v5);
}
