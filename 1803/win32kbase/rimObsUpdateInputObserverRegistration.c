/*
 * XREFs of rimObsUpdateInputObserverRegistration @ 0x1C01059F8
 * Callers:
 *     NtRIMUpdateInputObserverRegistration @ 0x1C00DFCC0 (NtRIMUpdateInputObserverRegistration.c)
 *     RIMUpdateInputObserverRegistration @ 0x1C00E5E20 (RIMUpdateInputObserverRegistration.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1C00F2038 (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsCheckForRegistrationConflicts @ 0x1C0104ECC (rimObsCheckForRegistrationConflicts.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  int v14; // r14d
  int v15; // r9d
  __int64 v16; // rcx
  unsigned int v18; // [rsp+20h] [rbp-38h]
  PVOID Object; // [rsp+28h] [rbp-30h] BYREF

  Object = 0LL;
  v7 = a2;
  v9 = RawInputManagerInputObserverObjectResolveHandle(Handle, a2, PreviousMode, &Object);
  if ( v9 >= 0 )
  {
    v10 = Object;
    v11 = (char *)Object + 168;
    RIMLockExclusive((__int64)Object + 168);
    v14 = v10[26];
    v18 = v10[25];
    LODWORD(Object) = v10[27];
    if ( a4 < 0x30 )
      v9 = -1073741789;
    if ( v9 < 0 )
      goto LABEL_10;
    if ( !v14 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
    v15 = (int)Object;
    v16 = v7 >> 1;
    v10[25] = 3;
    LOBYTE(v16) = (v7 & 2) != 0;
    v10[26] = 0;
    v9 = rimObsCheckForRegistrationConflicts(v16, v18, v14, v15);
    if ( v9 < 0 )
    {
LABEL_10:
      ObCloseHandle(Handle, PreviousMode);
    }
    else
    {
      v10[25] = v18;
      v10[26] = v14;
      v10[28] = v7;
      if ( a3 )
      {
        *((_QWORD *)v10 + 11) = a3;
        v10[24] = a4;
      }
    }
    *((_QWORD *)v11 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v10);
  }
  return (unsigned int)v9;
}
