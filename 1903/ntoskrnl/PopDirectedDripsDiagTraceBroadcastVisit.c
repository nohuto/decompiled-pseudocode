/*
 * XREFs of PopDirectedDripsDiagTraceBroadcastVisit @ 0x1408B8654
 * Callers:
 *     PopDirectedDripsVisitDevice @ 0x1408B9734 (PopDirectedDripsVisitDevice.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x1408B7D0C (PopDirectedDripsDiagCreateDeviceDiagnostic.c)
 */

char __fastcall PopDirectedDripsDiagTraceBroadcastVisit(__int64 a1, int a2, int a3)
{
  char *DeviceDiagnostic; // rbx
  REGHANDLE v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // rax
  int v8; // r8d
  int v10; // [rsp+30h] [rbp-49h] BYREF
  BOOL v11; // [rsp+38h] [rbp-41h] BYREF
  unsigned int v12; // [rsp+3Ch] [rbp-3Dh] BYREF
  int v13; // [rsp+40h] [rbp-39h] BYREF
  __int64 v14; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  BOOL *v16; // [rsp+60h] [rbp-19h]
  int v17; // [rsp+68h] [rbp-11h]
  int v18; // [rsp+6Ch] [rbp-Dh]
  __int64 *v19; // [rsp+70h] [rbp-9h]
  int v20; // [rsp+78h] [rbp-1h]
  int v21; // [rsp+7Ch] [rbp+3h]
  unsigned int *v22; // [rsp+80h] [rbp+7h]
  int v23; // [rsp+88h] [rbp+Fh]
  int v24; // [rsp+8Ch] [rbp+13h]
  __int64 v25; // [rsp+90h] [rbp+17h]
  int v26; // [rsp+98h] [rbp+1Fh]
  int v27; // [rsp+9Ch] [rbp+23h]
  int *v28; // [rsp+A0h] [rbp+27h]
  int v29; // [rsp+A8h] [rbp+2Fh]
  int v30; // [rsp+ACh] [rbp+33h]

  v14 = a1;
  v10 = a2;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
  DeviceDiagnostic = *(char **)(v14 + 776);
  if ( DeviceDiagnostic )
    *((_DWORD *)DeviceDiagnostic + 30) = v10;
  else
    DeviceDiagnostic = PopDirectedDripsDiagCreateDeviceDiagnostic(v14, v10);
  if ( DeviceDiagnostic )
  {
    v11 = 0;
    v11 = (*((_DWORD *)DeviceDiagnostic + 31) & 0x20000) != 0;
    if ( PopDiagHandleRegistered )
    {
      v5 = PopDiagHandle;
      if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_DEVICE_VISIT) )
      {
        v6 = *(unsigned __int16 *)(v14 + 40);
        UserData.Reserved = 0;
        v18 = 0;
        v21 = 0;
        v24 = 0;
        v12 = v6 >> 1;
        UserData.Ptr = (ULONGLONG)&v10;
        v16 = &v11;
        v19 = &v14;
        v22 = &v12;
        UserData.Size = 4;
        v17 = 4;
        v23 = 4;
        v20 = 8;
        v7 = *(_QWORD *)(v14 + 48);
        v8 = *(unsigned __int16 *)(v14 + 40);
        v27 = 0;
        v30 = 0;
        v25 = v7;
        v28 = &v13;
        v26 = v8;
        v29 = 4;
        v13 = a3;
        EtwWrite(v5, &POP_ETW_EVENT_DIRECTED_DRIPS_DEVICE_VISIT, 0LL, 6u, &UserData);
      }
    }
    *((_DWORD *)DeviceDiagnostic + 31) |= 0x40000u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
  return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
}
