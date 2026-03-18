/*
 * XREFs of ACPICMLidPowerStateCallBack @ 0x1C004D130
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C000CAD0 (ACPICMButtonStartWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C001D498 (WPP_RECORDER_SF_Dqss.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 */

void __fastcall ACPICMLidPowerStateCallBack(volatile signed __int64 *CallbackContext, PVOID Argument1, PVOID Argument2)
{
  char v4; // di
  NTSTATUS v5; // eax
  const char *v6; // rcx
  const char *v7; // rdx
  __int64 v8; // r8
  _BYTE OutputBuffer[28]; // [rsp+50h] [rbp-108h] BYREF
  unsigned int v10; // [rsp+6Ch] [rbp-ECh]

  if ( !(_DWORD)Argument1 )
  {
    v4 = 0;
    v5 = ZwPowerInformation(SystemPowerPolicyCurrent, 0LL, 0, OutputBuffer, 0xE8u);
    if ( v5 >= 0 )
    {
      if ( v10 <= 1 )
        _InterlockedOr64(CallbackContext + 1, 0x1000000000000000uLL);
      else
        _InterlockedAnd64(CallbackContext + 1, 0xEFFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v6 = (const char *)&unk_1C006E28A;
      v7 = (const char *)&unk_1C006E28A;
      if ( CallbackContext )
      {
        v8 = *((_QWORD *)CallbackContext + 1);
        v4 = (char)CallbackContext;
        if ( (v8 & 0x200000000000LL) != 0 )
        {
          v6 = (const char *)*((_QWORD *)CallbackContext + 70);
          if ( (v8 & 0x400000000000LL) != 0 )
            v7 = (const char *)*((_QWORD *)CallbackContext + 71);
        }
      }
      WPP_RECORDER_SF_Dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xAu,
        0x17u,
        (__int64)&WPP_2c3ea2e183a23f0b0659c630e7e4fdba_Traceguids,
        v5,
        v4,
        v6,
        v7);
    }
  }
}
