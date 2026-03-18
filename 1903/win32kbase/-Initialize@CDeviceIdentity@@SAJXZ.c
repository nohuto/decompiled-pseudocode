/*
 * XREFs of ?Initialize@CDeviceIdentity@@SAJXZ @ 0x1C0060A08
 * Callers:
 *     InitializeInputComponents @ 0x1C0060348 (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 *     ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C00A6380 (-RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4S.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CDeviceIdentity::Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  struct CDeviceIdentity *v4; // rax

  v3 = 0;
  if ( gpDeviceIdentity )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v4 = (struct CDeviceIdentity *)Win32AllocPool(24LL, 0x70446549u);
  if ( v4 )
  {
    *((_QWORD *)v4 + 2) = 1LL;
    *(_QWORD *)v4 = 0LL;
    *((_QWORD *)v4 + 1) = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  gpDeviceIdentity = v4;
  if ( !v4 )
    return (unsigned int)-1073741801;
  InputExtensibilityCallout::RegisterCoreMsgProvider(
    lambda_c7c2ef06b26fee4f968bb3b5cce8fe6f_::_lambda_invoker_cdecl_,
    0LL,
    1LL);
  if ( !gpDeviceIdentity )
    return (unsigned int)-1073741801;
  return v3;
}
