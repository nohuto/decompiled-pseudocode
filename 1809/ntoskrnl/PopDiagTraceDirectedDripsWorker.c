/*
 * XREFs of PopDiagTraceDirectedDripsWorker @ 0x140873474
 * Callers:
 *     PopDirectedDripsWorkerRoutine @ 0x140869A50 (PopDirectedDripsWorkerRoutine.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceDirectedDripsWorker(__int64 a1)
{
  REGHANDLE v1; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v3; // [rsp+40h] [rbp-28h]
  int v4; // [rsp+48h] [rbp-20h]
  int v5; // [rsp+4Ch] [rbp-1Ch]
  __int64 v6; // [rsp+70h] [rbp+8h] BYREF

  v6 = a1;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_WORKER) )
    {
      UserData.Reserved = 0;
      v5 = 0;
      UserData.Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
      UserData.Size = 1;
      v3 = &v6;
      v4 = 8;
      EtwWrite(v1, &POP_ETW_EVENT_DIRECTED_DRIPS_WORKER, 0LL, 2u, &UserData);
    }
  }
}
