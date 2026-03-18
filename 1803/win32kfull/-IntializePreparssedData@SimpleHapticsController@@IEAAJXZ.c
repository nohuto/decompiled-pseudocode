/*
 * XREFs of ?IntializePreparssedData@SimpleHapticsController@@IEAAJXZ @ 0x1C0214C6C
 * Callers:
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C02143C8 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C02150F4 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 */

__int64 __fastcall SimpleHapticsController::IntializePreparssedData(SimpleHapticsController *this)
{
  int v2; // eax
  const GUID *v3; // r8
  const GUID *v4; // r9
  unsigned int v5; // ebx
  void *v6; // rax
  int v7; // eax
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v11; // [rsp+40h] [rbp-19h] BYREF
  unsigned int v12[6]; // [rsp+48h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp+7h] BYREF
  const char *v14; // [rsp+80h] [rbp+27h]
  int v15; // [rsp+88h] [rbp+2Fh]
  int v16; // [rsp+8Ch] [rbp+33h]
  int *v17; // [rsp+90h] [rbp+37h]
  int v18; // [rsp+98h] [rbp+3Fh]
  int v19; // [rsp+9Ch] [rbp+43h]

  v2 = SimpleHapticsController::SendDeviceIOControl(this, 0xB01A8u, 0LL, 0, v12, 0xCu, 0LL);
  v5 = v2;
  if ( v2 >= 0 )
  {
    v6 = (void *)Win32AllocPoolNonPaged(v12[0], 1147695957LL);
    *((_QWORD *)this + 2) = v6;
    if ( v6 )
    {
      v7 = SimpleHapticsController::SendDeviceIOControl(this, 0xB0193u, 0LL, 0, v6, v12[0], 0LL);
      v5 = v7;
      if ( v7 < 0 )
      {
        if ( (unsigned int)dword_1C031C790 > 2 )
        {
          v16 = 0;
          v19 = 0;
          v11 = v7;
          v17 = &v11;
          v18 = 4;
          v14 = "Function failed.";
          v15 = 17;
          TlgWrite((TraceLoggingHProvider)&dword_1C031C790, &unk_1C02E4170, v8, v9, 4u, &pData);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::IntializePreparssedData",
          "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          502,
          v5,
          "Function failed.");
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    if ( (unsigned int)dword_1C031C790 > 2 )
    {
      v16 = 0;
      v19 = 0;
      v11 = v2;
      v17 = &v11;
      v18 = 4;
      v14 = "Function failed.";
      v15 = 17;
      TlgWrite((TraceLoggingHProvider)&dword_1C031C790, &unk_1C02E4170, v3, v4, 4u, &pData);
    }
    DbgPrintEx(
      0x4Du,
      0,
      "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
      "SimpleHapticsController::IntializePreparssedData",
      "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
      488,
      v5,
      "Function failed.");
  }
  return v5;
}
