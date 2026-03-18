/*
 * XREFs of ?CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z @ 0x1C023D67C
 * Callers:
 *     ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1C023D87C (-DeInitialize@SimpleHapticsController@@QEAAJXZ.c)
 *     ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C023D9A0 (-HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z.c)
 *     ?OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ @ 0x1C023E824 (-OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall SimpleHapticsController::CloseHapticsWriteDevice(SimpleHapticsController *this, int a2)
{
  unsigned int v2; // edi
  void *v4; // rcx
  void *v5; // rcx
  NTSTATUS v6; // eax
  NTSTATUS v7; // edi
  NTSTATUS v8; // eax
  void *v9; // rcx
  NTSTATUS v11; // [rsp+40h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-9h] BYREF
  const char *v14; // [rsp+80h] [rbp+17h]
  int v15; // [rsp+88h] [rbp+1Fh]
  int v16; // [rsp+8Ch] [rbp+23h]
  NTSTATUS *v17; // [rsp+90h] [rbp+27h]
  int v18; // [rsp+98h] [rbp+2Fh]
  int v19; // [rsp+9Ch] [rbp+33h]

  v2 = 0;
  if ( a2 )
  {
    v4 = (void *)*((_QWORD *)this + 4);
    if ( v4 )
    {
      IoUnregisterPlugPlayNotification(v4);
      *((_QWORD *)this + 4) = 0LL;
    }
  }
  v5 = (void *)*((_QWORD *)this + 3);
  if ( v5 )
  {
    v6 = ZwCancelIoFile(v5, &IoStatusBlock);
    v7 = v6;
    if ( v6 < 0 )
    {
      if ( (unsigned int)dword_1C030C3C8 > 2 )
      {
        v16 = 0;
        v19 = 0;
        v11 = v6;
        v17 = &v11;
        v14 = "Function failed.";
        v15 = 17;
        v18 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C030C3C8, &unk_1C02D6B03, 0LL, 0LL, 4u, &pData);
      }
      DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::CloseHapticsWriteDevice",
        "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        744,
        v7,
        "Function failed.");
    }
    v8 = ZwClose(*((HANDLE *)this + 3));
    v2 = v8;
    if ( v8 < 0 )
    {
      if ( (unsigned int)dword_1C030C3C8 > 2 )
      {
        v16 = 0;
        v19 = 0;
        v11 = v8;
        v17 = &v11;
        v14 = "Function failed.";
        v15 = 17;
        v18 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C030C3C8, &unk_1C02D6B03, 0LL, 0LL, 4u, &pData);
      }
      DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::CloseHapticsWriteDevice",
        "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        745,
        v2,
        "Function failed.");
    }
    *((_QWORD *)this + 3) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 7);
  if ( v9 )
  {
    ObfDereferenceObject(v9);
    *((_QWORD *)this + 7) = 0LL;
  }
  return v2;
}
