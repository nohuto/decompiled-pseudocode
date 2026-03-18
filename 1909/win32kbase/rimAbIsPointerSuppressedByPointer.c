/*
 * XREFs of rimAbIsPointerSuppressedByPointer @ 0x1C0138DA4
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C0138B9C (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 * Callees:
 *     rimAbIsPointInPenDeadzone @ 0x1C013897C (rimAbIsPointInPenDeadzone.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByPointer(__int128 *a1, unsigned int *a2, unsigned int *a3, int a4)
{
  unsigned int v8; // esi
  __int64 v9; // rcx
  unsigned int v10; // eax
  bool v11; // zf
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int128 v19; // [rsp+20h] [rbp-18h] BYREF

  if ( (a2[3] & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (a3[3] & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v8 = 0;
  if ( !gDeviceArbitrationType )
    return 0LL;
  v9 = *a2;
  v10 = *a3;
  if ( (_DWORD)v9 == *a3 )
    return 0LL;
  if ( (_DWORD)v9 == 5 )
  {
    if ( v10 == 5 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, a2, a3);
    v11 = a4 == 0;
    goto LABEL_11;
  }
  if ( v10 == 5 )
    return 0LL;
  if ( (_DWORD)v9 != 3 && (_DWORD)v9 != 2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, a2, a3);
    v10 = *a3;
  }
  v13 = v10;
  if ( v10 != 3 && v10 != 2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, a2, a3);
    v13 = *a3;
  }
  if ( *a2 == (_DWORD)v13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, a2, a3);
  v14 = (unsigned int)(gDeviceArbitrationType - 1);
  if ( gDeviceArbitrationType != 1 )
  {
    v14 = (unsigned int)(gDeviceArbitrationType - 2);
    if ( gDeviceArbitrationType != 2 )
    {
      if ( gDeviceArbitrationType == 3 )
      {
        if ( *a2 == 2 )
        {
          if ( *a3 != 3 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, a2, a3);
LABEL_33:
          v15 = *((_QWORD *)a3 + 5);
          v16 = *((_QWORD *)a2 + 5);
          v19 = *a1;
          return rimAbIsPointInPenDeadzone(&v19, v16, v15);
        }
        if ( *a2 == 3 )
          return 0LL;
      }
      goto LABEL_45;
    }
    if ( *a2 != 2 )
    {
      if ( *a2 != 3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, a2, a3);
      if ( *a3 != 2 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, a2, a3);
      if ( (a2[3] & 4) == 0 )
      {
        v17 = *((_QWORD *)a2 + 5);
        v18 = *((_QWORD *)a3 + 5);
        v19 = *a1;
        v11 = (unsigned int)rimAbIsPointInPenDeadzone(&v19, v18, v17) == 0;
LABEL_11:
        LOBYTE(v8) = v11;
        return v8;
      }
      return 0LL;
    }
    if ( *a3 != 3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, a2, a3);
    if ( (a3[3] & 4) == 0 )
      goto LABEL_33;
    return 1LL;
  }
  if ( *a2 == 2 )
  {
    if ( *a3 != 3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, a2, a3);
    return 1LL;
  }
  if ( *a2 != 3 )
LABEL_45:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, a2, a3);
  return 0LL;
}
