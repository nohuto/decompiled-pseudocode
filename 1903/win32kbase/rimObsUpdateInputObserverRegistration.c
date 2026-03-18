/*
 * XREFs of rimObsUpdateInputObserverRegistration @ 0x1C015A6BC
 * Callers:
 *     NtRIMUpdateInputObserverRegistration @ 0x1C0137260 (NtRIMUpdateInputObserverRegistration.c)
 *     RIMUpdateInputObserverRegistration @ 0x1C013A9B0 (RIMUpdateInputObserverRegistration.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1C0147C5C (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsCheckForRegistrationConflicts @ 0x1C0159A74 (rimObsCheckForRegistrationConflicts.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsUpdateInputObserverRegistration(
        char *Handle,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        KPROCESSOR_MODE PreviousMode)
{
  unsigned int v7; // r13d
  int v9; // edi
  _DWORD *v10; // rbx
  char *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // r14d
  int v16; // r9d
  __int64 v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-38h]
  PVOID Object; // [rsp+28h] [rbp-30h] BYREF

  Object = 0LL;
  v7 = a2;
  v9 = RawInputManagerInputObserverObjectResolveHandle(Handle, a2, PreviousMode, &Object);
  if ( v9 >= 0 )
  {
    v10 = Object;
    v11 = (char *)Object + 176;
    RIMLockExclusive((__int64)Object + 176);
    v15 = v10[28];
    v19 = v10[27];
    LODWORD(Object) = v10[29];
    if ( a4 < 0x30 )
      v9 = -1073741789;
    if ( v9 < 0 )
      goto LABEL_10;
    if ( !v15 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
    v16 = (int)Object;
    v17 = v7 >> 1;
    v10[27] = 3;
    LOBYTE(v17) = (v7 & 2) != 0;
    v10[28] = 0;
    v9 = rimObsCheckForRegistrationConflicts(v17, v19, v15, v16);
    if ( v9 < 0 )
    {
LABEL_10:
      ObCloseHandle(Handle, PreviousMode);
    }
    else
    {
      v10[27] = v19;
      v10[28] = v15;
      v10[30] = v7;
      if ( a3 )
      {
        *((_QWORD *)v10 + 12) = a3;
        v10[26] = a4;
      }
    }
    *((_QWORD *)v11 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v10);
  }
  return (unsigned int)v9;
}
