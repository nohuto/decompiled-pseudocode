/*
 * XREFs of PopDiagTraceDirectedDripsWorker @ 0x1408AEFC0
 * Callers:
 *     PopDirectedDripsWorkerRoutine @ 0x1408A4E00 (PopDirectedDripsWorkerRoutine.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
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
