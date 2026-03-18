/*
 * XREFs of PopDiagTraceDirectedDripsNotifyDevices @ 0x1408AEEC4
 * Callers:
 *     PopDirectedDripsResumeDevices @ 0x1408A4B74 (PopDirectedDripsResumeDevices.c)
 *     PopDirectedDripsSuspendDevices @ 0x1408A4C58 (PopDirectedDripsSuspendDevices.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     IoDiagTraceDirectedDripsCandidateDevices @ 0x140877FDC (IoDiagTraceDirectedDripsCandidateDevices.c)
 */

char __fastcall PopDiagTraceDirectedDripsNotifyDevices(unsigned __int8 a1, int a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v5; // rdi
  int v7; // [rsp+38h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  int *v9; // [rsp+58h] [rbp+17h]
  int v10; // [rsp+60h] [rbp+1Fh]
  int v11; // [rsp+64h] [rbp+23h]
  int *v12; // [rsp+68h] [rbp+27h]
  int v13; // [rsp+70h] [rbp+2Fh]
  int v14; // [rsp+74h] [rbp+33h]
  __int64 *v15; // [rsp+78h] [rbp+37h]
  int v16; // [rsp+80h] [rbp+3Fh]
  int v17; // [rsp+84h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  int v19; // [rsp+B0h] [rbp+6Fh] BYREF
  __int64 v20; // [rsp+B8h] [rbp+77h] BYREF

  v3 = &retaddr;
  v20 = a3;
  v19 = a2;
  if ( a2 >= 0 && a1 )
    LOBYTE(v3) = (unsigned __int8)IoDiagTraceDirectedDripsCandidateDevices();
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_DEVICES);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v7 = a1;
      UserData.Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
      v9 = &v7;
      v12 = &v19;
      v15 = &v20;
      UserData.Size = 1;
      v10 = 4;
      v13 = 4;
      v16 = 8;
      LOBYTE(v3) = EtwWrite(v5, &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_DEVICES, 0LL, 4u, &UserData);
    }
  }
  return (char)v3;
}
