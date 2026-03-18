/*
 * XREFs of ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C00A6380
 * Callers:
 *     ?Initialize@CCursorClip@@SAJXZ @ 0x1C005FEEC (-Initialize@CCursorClip@@SAJXZ.c)
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x1C00607BC (-Initialize@CInputConfig@@SAJXZ.c)
 *     ?Initialize@CDeviceIdentity@@SAJXZ @ 0x1C0060A08 (-Initialize@CDeviceIdentity@@SAJXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall InputExtensibilityCallout::RegisterCoreMsgProvider(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  InputExtensibilityCallout *v6; // rdi
  int v8; // ebp
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  _BOOL8 v12; // rcx
  __int128 v13; // [rsp+20h] [rbp-28h]

  v6 = gpInputExtensibilityCallout;
  v8 = a3;
  v9 = 5LL * (int)a2;
  if ( *((_QWORD *)gpInputExtensibilityCallout + 5 * (int)a2 + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  RIMLockExclusive((__int64)v6 + 8);
  *((_DWORD *)v6 + 2 * v9 + 10) = v8;
  v12 = a4 != 0;
  if ( v12 != (a6 != 0) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v10, v11);
  LODWORD(v13) = a4;
  *((_QWORD *)&v13 + 1) = a6;
  *(_OWORD *)((char *)v6 + 8 * v9 + 48) = v13;
  *((_QWORD *)v6 + v9 + 8) = a5;
  *((_QWORD *)v6 + 2) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v6 + 8, 0LL);
  KeLeaveCriticalRegion();
}
