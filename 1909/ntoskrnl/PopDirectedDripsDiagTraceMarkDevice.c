/*
 * XREFs of PopDirectedDripsDiagTraceMarkDevice @ 0x140304210
 * Callers:
 *     PopDirectedDripsMarkCandidateDevice @ 0x1408A3E0C (PopDirectedDripsMarkCandidateDevice.c)
 * Callees:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void __fastcall PopDirectedDripsDiagTraceMarkDevice(__int64 a1)
{
  REGHANDLE v1; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v3; // [rsp+50h] [rbp-28h]
  int v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+5Ch] [rbp-1Ch]
  __int64 v6; // [rsp+80h] [rbp+8h] BYREF

  v6 = a1;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_MARK_DEVICE) )
    {
      UserData.Reserved = 0;
      v5 = 0;
      UserData.Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
      UserData.Size = 1;
      v3 = &v6;
      v4 = 784;
      EtwWriteEx(v1, &POP_ETW_EVENT_DIRECTED_DRIPS_MARK_DEVICE, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
