/*
 * XREFs of PopDiagTraceDirectedDripsNotifyAppsAndServices @ 0x1408AEDD4
 * Callers:
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408A4610 (PopDirectedDripsNotifyAppsAndServices.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDirectedDripsNotifyAppsAndServices(unsigned __int8 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v5; // rbx
  int v7; // [rsp+38h] [rbp-9h] BYREF
  int v8; // [rsp+40h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  int *v10; // [rsp+58h] [rbp+17h]
  int v11; // [rsp+60h] [rbp+1Fh]
  int v12; // [rsp+64h] [rbp+23h]
  int *v13; // [rsp+68h] [rbp+27h]
  int v14; // [rsp+70h] [rbp+2Fh]
  int v15; // [rsp+74h] [rbp+33h]
  __int64 *v16; // [rsp+78h] [rbp+37h]
  int v17; // [rsp+80h] [rbp+3Fh]
  int v18; // [rsp+84h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  __int64 v20; // [rsp+B8h] [rbp+77h] BYREF

  v3 = &retaddr;
  v20 = a3;
  v8 = 0;
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_APPS_SERVICES);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v7 = a1;
      UserData.Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
      v10 = &v7;
      v13 = &v8;
      v16 = &v20;
      UserData.Size = 1;
      v11 = 4;
      v14 = 4;
      v17 = 8;
      LOBYTE(v3) = EtwWrite(v5, &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_APPS_SERVICES, 0LL, 4u, &UserData);
    }
  }
  return (char)v3;
}
