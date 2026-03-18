/*
 * XREFs of ?IntializePreparssedData@SimpleHapticsController@@IEAAJXZ @ 0x1C02573B4
 * Callers:
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0256A70 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C0257888 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 */

__int64 __fastcall SimpleHapticsController::IntializePreparssedData(SimpleHapticsController *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  void *v4; // rax
  int v5; // eax
  int v7; // [rsp+40h] [rbp-19h] BYREF
  unsigned int v8[2]; // [rsp+48h] [rbp-11h] BYREF
  int v9; // [rsp+50h] [rbp-9h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp+7h] BYREF
  const char *v11; // [rsp+80h] [rbp+27h]
  int v12; // [rsp+88h] [rbp+2Fh]
  int v13; // [rsp+8Ch] [rbp+33h]
  int *v14; // [rsp+90h] [rbp+37h]
  int v15; // [rsp+98h] [rbp+3Fh]
  int v16; // [rsp+9Ch] [rbp+43h]

  *(_QWORD *)v8 = 0LL;
  v9 = 0;
  v2 = SimpleHapticsController::SendDeviceIOControl(this, 0xB01A8u, 0LL, 0, v8, 0xCu, 0LL);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = (void *)Win32AllocPoolNonPaged(v8[0], 1147695957LL);
    *((_QWORD *)this + 2) = v4;
    if ( v4 )
    {
      v5 = SimpleHapticsController::SendDeviceIOControl(this, 0xB0193u, 0LL, 0, v4, v8[0], 0LL);
      v3 = v5;
      if ( v5 < 0 )
      {
        if ( (unsigned int)dword_1C03212D0 > 2 )
        {
          v13 = 0;
          v16 = 0;
          v7 = v5;
          v14 = &v7;
          v15 = 4;
          v11 = "Function failed.";
          v12 = 17;
          TlgWrite((TraceLoggingHProvider)&dword_1C03212D0, &unk_1C02E97DE, 0LL, 0LL, 4u, &pData);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::IntializePreparssedData",
          "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          524,
          v3,
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
    if ( (unsigned int)dword_1C03212D0 > 2 )
    {
      v13 = 0;
      v16 = 0;
      v7 = v2;
      v14 = &v7;
      v15 = 4;
      v11 = "Function failed.";
      v12 = 17;
      TlgWrite((TraceLoggingHProvider)&dword_1C03212D0, &unk_1C02E97DE, 0LL, 0LL, 4u, &pData);
    }
    DbgPrintEx(
      0x4Du,
      0,
      "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
      "SimpleHapticsController::IntializePreparssedData",
      "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
      510,
      v3,
      "Function failed.");
  }
  return v3;
}
