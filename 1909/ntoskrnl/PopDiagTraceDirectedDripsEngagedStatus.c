/*
 * XREFs of PopDiagTraceDirectedDripsEngagedStatus @ 0x1408AE57C
 * Callers:
 *     PopDirectedDripsEngagePs4 @ 0x1408A390C (PopDirectedDripsEngagePs4.c)
 *     PopDisengageDirectedDrips @ 0x1408A46C4 (PopDisengageDirectedDrips.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceDirectedDripsEngagedStatus(unsigned __int8 a1)
{
  REGHANDLE v2; // rbx
  int v3; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  int *v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+50h] [rbp-18h]
  int v7; // [rsp+54h] [rbp-14h]

  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_ENGAGED) )
    {
      UserData.Reserved = 0;
      v7 = 0;
      v3 = a1;
      UserData.Size = 1;
      UserData.Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
      v5 = &v3;
      v6 = 4;
      EtwWrite(v2, &POP_ETW_EVENT_DIRECTED_DRIPS_ENGAGED, 0LL, 2u, &UserData);
    }
  }
}
