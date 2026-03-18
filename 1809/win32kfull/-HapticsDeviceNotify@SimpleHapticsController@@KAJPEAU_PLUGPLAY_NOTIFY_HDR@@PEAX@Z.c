/*
 * XREFs of ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C023D9A0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z @ 0x1C023D67C (-CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z.c)
 *     ?OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ @ 0x1C023E824 (-OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ.c)
 */

__int64 __fastcall SimpleHapticsController::HapticsDeviceNotify(
        char *NotificationStructure,
        SimpleHapticsController *Context)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  int v5; // eax
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  _DWORD v11[4]; // [rsp+40h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp+7h] BYREF
  const char *v13; // [rsp+70h] [rbp+27h]
  int v14; // [rsp+78h] [rbp+2Fh]
  int v15; // [rsp+7Ch] [rbp+33h]
  _DWORD *v16; // [rsp+80h] [rbp+37h]
  int v17; // [rsp+88h] [rbp+3Fh]
  int v18; // [rsp+8Ch] [rbp+43h]

  v2 = 0;
  v3 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( v3 )
  {
    v6 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
    if ( !v6 )
      v6 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
    if ( v6 )
    {
      v8 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
      if ( !v8 )
        v8 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
      if ( !v8 )
      {
        if ( (unsigned int)dword_1C030C3C8 > 4 )
        {
          v15 = 0;
          v13 = "SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_REMOVE_COMPLETE";
          v14 = 83;
          TlgWrite((TraceLoggingHProvider)&dword_1C030C3C8, &unk_1C02D6B3A, 0LL, 0LL, 3u, &pData);
        }
        v9 = SimpleHapticsController::CloseHapticsWriteDevice(Context, 1);
        v2 = v9;
        if ( v9 < 0 )
        {
          if ( (unsigned int)dword_1C030C3C8 > 2 )
          {
            v15 = 0;
            v18 = 0;
            v11[0] = v9;
            v16 = v11;
            v13 = "Function failed.";
            v14 = 17;
            v17 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C030C3C8, &unk_1C02D6B03, 0LL, 0LL, 4u, &pData);
          }
          DbgPrintEx(
            0x4Du,
            0,
            "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
            "SimpleHapticsController::HapticsDeviceNotify",
            "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
            802,
            v2,
            "Function failed.");
        }
      }
    }
    else
    {
      if ( (unsigned int)dword_1C030C3C8 > 4 )
      {
        v15 = 0;
        v13 = "SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_REMOVE_CANCELLED";
        v14 = 84;
        TlgWrite((TraceLoggingHProvider)&dword_1C030C3C8, &unk_1C02D6B3A, 0LL, 0LL, 3u, &pData);
      }
      v7 = SimpleHapticsController::OpenHapticsDevice(Context);
      v2 = v7;
      if ( v7 < 0 )
      {
        if ( (unsigned int)dword_1C030C3C8 > 2 )
        {
          v15 = 0;
          v18 = 0;
          v11[0] = v7;
          v16 = v11;
          v13 = "Function failed.";
          v14 = 17;
          v17 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C030C3C8, &unk_1C02D6B03, 0LL, 0LL, 4u, &pData);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::HapticsDeviceNotify",
          "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          796,
          v2,
          "Function failed.");
      }
    }
  }
  else
  {
    if ( (unsigned int)dword_1C030C3C8 > 4 )
    {
      v15 = 0;
      v13 = "SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_QUERY_REMOVE";
      v14 = 80;
      TlgWrite((TraceLoggingHProvider)&dword_1C030C3C8, &unk_1C02D6B3A, 0LL, 0LL, 3u, &pData);
    }
    v5 = SimpleHapticsController::CloseHapticsWriteDevice(Context, 0);
    v2 = v5;
    if ( v5 < 0 )
    {
      if ( (unsigned int)dword_1C030C3C8 > 2 )
      {
        v15 = 0;
        v18 = 0;
        v11[0] = v5;
        v16 = v11;
        v13 = "Function failed.";
        v14 = 17;
        v17 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C030C3C8, &unk_1C02D6B03, 0LL, 0LL, 4u, &pData);
      }
      DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::HapticsDeviceNotify",
        "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        791,
        v2,
        "Function failed.");
    }
  }
  return v2;
}
