/*
 * XREFs of ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C00A8760
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     isRootPartition @ 0x1C0031CA8 (isRootPartition.c)
 *     isInputVirtualizationEnabled @ 0x1C0031CC8 (isInputVirtualizationEnabled.c)
 *     ??0CKeyboardProcessor@@IEAA@XZ @ 0x1C005DD98 (--0CKeyboardProcessor@@IEAA@XZ.c)
 *     ?ivRegisterChildNotification@CBaseInput@@IEAAJK@Z @ 0x1C018CB5C (-ivRegisterChildNotification@CBaseInput@@IEAAJK@Z.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C018D3B0 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CKeyboardSensor::PostInitialize(struct RawInputManagerObject **this, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  CKeyboardProcessor *v5; // rax
  CKeyboardProcessor *v6; // rax

  v3 = 0;
  if ( this[152] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  this[152] = 0LL;
  v5 = (CKeyboardProcessor *)Win32AllocPool(24LL, 0x70724D50u);
  if ( v5 )
    v6 = CKeyboardProcessor::CKeyboardProcessor(v5);
  else
    v6 = 0LL;
  if ( v6 )
  {
    this[152] = v6;
    if ( isInputVirtualizationEnabled() )
    {
      if ( isRootPartition() )
        return (unsigned int)CBaseInput::ivRegisterChildNotification((CBaseInput *)this, 1u);
      else
        return (unsigned int)CBaseInput::ivChildLoop((CBaseInput *)this, 1u, this[2]);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
