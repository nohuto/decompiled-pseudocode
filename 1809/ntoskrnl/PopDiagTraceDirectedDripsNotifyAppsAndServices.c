/*
 * XREFs of PopDiagTraceDirectedDripsNotifyAppsAndServices @ 0x14087328C
 * Callers:
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14086921C (PopDirectedDripsNotifyAppsAndServices.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDirectedDripsNotifyAppsAndServices(unsigned __int8 a1, int a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v5; // rbx
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
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_APPS_SERVICES);
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
      LOBYTE(v3) = EtwWrite(v5, &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_APPS_SERVICES, 0LL, 4u, &UserData);
    }
  }
  return (char)v3;
}
