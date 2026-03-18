/*
 * XREFs of ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1C0213FAC
 * Callers:
 *     ??_GSimpleHapticsController@@QEAAPEAXI@Z @ 0x1C0210F2C (--_GSimpleHapticsController@@QEAAPEAXI@Z.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0211240 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C02117DC (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z @ 0x1C0213DCC (-CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z.c)
 */

__int64 __fastcall SimpleHapticsController::DeInitialize(SimpleHapticsController *this)
{
  unsigned int v2; // eax
  const GUID *v3; // r8
  const GUID *v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v9; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  const char *v11; // [rsp+60h] [rbp-38h]
  __int64 v12; // [rsp+68h] [rbp-30h]
  unsigned int *v13; // [rsp+70h] [rbp-28h]
  __int64 v14; // [rsp+78h] [rbp-20h]

  v9 = 0;
  v2 = SimpleHapticsController::CloseHapticsWriteDevice(this, 1);
  v5 = *((_QWORD *)this + 10);
  v9 = v2;
  if ( v5 )
  {
    Win32FreePool(v5);
    *((_QWORD *)this + 10) = 0LL;
  }
  v6 = *((_QWORD *)this + 8);
  if ( v6 )
  {
    Win32FreePool(v6);
    *((_QWORD *)this + 8) = 0LL;
    *((_WORD *)this + 36) = 0;
  }
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
  {
    Win32FreePool(v7);
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( (unsigned int)dword_1C031C790 > 4 )
  {
    v12 = 38LL;
    v11 = "SimpleHapticsController::DeInitialize";
    v13 = &v9;
    v14 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C790, &unk_1C02E4216, v3, v4, 4u, &pData);
  }
  return v9;
}
