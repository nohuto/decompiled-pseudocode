/*
 * XREFs of ?Read@CBaseInput@@QEAAJXZ @ 0x1C006D700
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C009D3C8 (UserActivateMITInputProcessing.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C0178BB0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     RIMReadInput @ 0x1C006AFC0 (RIMReadInput.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C006DB2C (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::Read(CBaseInput *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 DispatcherHandleByName; // rdi
  __int64 v5; // r8

  DispatcherHandleByName = CRIMBase::GetDispatcherHandleByName(this, 1LL);
  if ( !DispatcherHandleByName )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v5);
  return RIMReadInput(
           *((_QWORD *)this + 1),
           (__int64)this + 64,
           *((_DWORD *)this + 14),
           DispatcherHandleByName,
           0,
           (__int64)this + 48,
           (__int64)this + 24,
           (__int64)this + 32);
}
