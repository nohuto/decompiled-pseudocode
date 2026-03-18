/*
 * XREFs of xxxRegisterForDeviceClassNotifications @ 0x1C0007948
 * Callers:
 *     RawInputThread @ 0x1C001CA60 (RawInputThread.c)
 * Callees:
 *     RegisterCDROMNotify @ 0x1C0112FD0 (RegisterCDROMNotify.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRegisterForDeviceClassNotifications(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  unsigned int i; // ebx
  CBaseInput **v6; // rcx

  v4 = -1073741811;
  for ( i = 1; i <= 2; ++i )
  {
    if ( !gpWin32kDriverObject )
      continue;
    if ( gdwInAtomicOperation )
    {
      a1 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation, a3, a4);
    if ( i != 2 )
    {
      if ( i != 1 )
        goto LABEL_8;
      v4 = CBaseInput::InitializeSensor(gpKeyboardSensor);
      if ( v4 < 0 )
        goto LABEL_8;
      v6 = (CBaseInput **)gpKeyboardSensor;
      goto LABEL_7;
    }
    v4 = CBaseInput::InitializeSensor(gpHidInput);
    if ( v4 >= 0 )
    {
      v6 = (CBaseInput **)gpHidInput;
LABEL_7:
      v4 = CBaseInput::Read(*v6);
    }
LABEL_8:
    EnterCrit(0LL, 1LL);
  }
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation, a3, a4);
  if ( !gbFirstConnectionDone && gpWin32kDriverObject )
  {
    if ( !gProtocolType )
      RegisterCDROMNotify();
    gbFirstConnectionDone = 1;
  }
  EnterCrit(0LL, 1LL);
  return (unsigned int)v4;
}
