/*
 * XREFs of PopDirectedDripsDiagTraceBroadcastVisit @ 0x1402E77D4
 * Callers:
 *     PopDirectedDripsVisitDevice @ 0x14087D6A0 (PopDirectedDripsVisitDevice.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x14087C9EC (PopDirectedDripsDiagCreateDeviceDiagnostic.c)
 */

__int64 __fastcall PopDirectedDripsDiagTraceBroadcastVisit(__int64 a1, int a2)
{
  __int64 v2; // rbx
  REGHANDLE v3; // rdi
  unsigned int v4; // eax
  __int64 v5; // rax
  int v6; // r8d
  BOOL v8; // [rsp+48h] [rbp-19h] BYREF
  unsigned int v9; // [rsp+4Ch] [rbp-15h] BYREF
  __int64 v10; // [rsp+50h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-9h] BYREF
  BOOL *v12; // [rsp+68h] [rbp+7h]
  int v13; // [rsp+70h] [rbp+Fh]
  int v14; // [rsp+74h] [rbp+13h]
  __int64 *v15; // [rsp+78h] [rbp+17h]
  int v16; // [rsp+80h] [rbp+1Fh]
  int v17; // [rsp+84h] [rbp+23h]
  unsigned int *v18; // [rsp+88h] [rbp+27h]
  int v19; // [rsp+90h] [rbp+2Fh]
  int v20; // [rsp+94h] [rbp+33h]
  __int64 v21; // [rsp+98h] [rbp+37h]
  int v22; // [rsp+A0h] [rbp+3Fh]
  int v23; // [rsp+A4h] [rbp+43h]
  int v24; // [rsp+D0h] [rbp+6Fh] BYREF

  v24 = a2;
  v10 = a1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
  v2 = *(_QWORD *)(v10 + 776);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 104) = v24;
    v8 = 0;
    v8 = (*(_DWORD *)(v2 + 108) & 0x20000) != 0;
    if ( PopDiagHandleRegistered )
    {
      v3 = PopDiagHandle;
      if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_DEVICE_VISIT) )
      {
        v4 = *(unsigned __int16 *)(v10 + 40);
        UserData.Reserved = 0;
        v14 = 0;
        v17 = 0;
        v20 = 0;
        v9 = v4 >> 1;
        UserData.Ptr = (ULONGLONG)&v24;
        v12 = &v8;
        v15 = &v10;
        v18 = &v9;
        UserData.Size = 4;
        v13 = 4;
        v19 = 4;
        v16 = 8;
        v5 = *(_QWORD *)(v10 + 48);
        v6 = *(unsigned __int16 *)(v10 + 40);
        v23 = 0;
        v21 = v5;
        v22 = v6;
        EtwWriteEx(v3, &POP_ETW_EVENT_DIRECTED_DRIPS_DEVICE_VISIT, 0LL, 0, 0LL, 0LL, 5u, &UserData);
      }
    }
    *(_DWORD *)(v2 + 108) |= 0x40000u;
  }
  else
  {
    PopDirectedDripsDiagCreateDeviceDiagnostic(v10);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
  return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
}
