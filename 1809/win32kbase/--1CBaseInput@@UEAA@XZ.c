/*
 * XREFs of ??1CBaseInput@@UEAA@XZ @ 0x1C00076AC
 * Callers:
 *     ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C0007550 (--_GCHidInput@@UEAAPEAXI@Z.c)
 *     ??_GCKeyboardSensor@@UEAAPEAXI@Z @ 0x1C00075C0 (--_GCKeyboardSensor@@UEAAPEAXI@Z.c)
 *     ??_ECMouseSensor@@UEAAPEAXI@Z @ 0x1C0007600 (--_ECMouseSensor@@UEAAPEAXI@Z.c)
 *     ??_GCBaseInput@@UEAAPEAXI@Z @ 0x1C01496F0 (--_GCBaseInput@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CRIMBase@@UEAA@XZ @ 0x1C00076F8 (--1CRIMBase@@UEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CBaseInput::~CBaseInput(CBaseInput *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 138) == 0LL;
  *(_QWORD *)this = &CBaseInput::`vftable';
  if ( !v1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *((_QWORD *)this + 136) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  CRIMBase::~CRIMBase(this);
}
