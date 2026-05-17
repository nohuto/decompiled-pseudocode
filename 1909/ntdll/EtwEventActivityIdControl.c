/*
 * XREFs of EtwEventActivityIdControl @ 0x1800663E0
 * Callers:
 *     EtwEventWriteStartScenario @ 0x18008BD40 (EtwEventWriteStartScenario.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180053C30 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180053CB0 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x1800A0620 (NtTraceControl.c)
 */

__int64 __fastcall EtwEventActivityIdControl(int a1, _GUID *a2)
{
  NTSTATUS v2; // r8d
  int v3; // ecx
  ULONG v4; // ebx
  int v6; // ecx
  int v7; // ecx
  _GUID *p_ActivityId; // r9
  int v9; // ecx
  _GUID ActivityId; // xmm1
  ULONG v11; // eax
  char v12; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
  {
    v3 = a1 - 1;
    if ( v3 )
    {
      v6 = v3 - 1;
      if ( !v6 )
      {
        NtCurrentTeb()->ActivityId = *a2;
        return 0;
      }
      v7 = v6 - 1;
      if ( v7 )
      {
        v9 = v7 - 1;
        if ( !v9 )
        {
          ActivityId = NtCurrentTeb()->ActivityId;
          NtCurrentTeb()->ActivityId = *a2;
          *a2 = ActivityId;
          return 0;
        }
        if ( v9 != 1 )
        {
          v2 = -1073741811;
          goto LABEL_18;
        }
        *a2 = NtCurrentTeb()->ActivityId;
        p_ActivityId = &NtCurrentTeb()->ActivityId;
      }
      else
      {
        p_ActivityId = a2;
      }
      v2 = NtTraceControl(12LL, 0LL, 0LL, p_ActivityId, 16, &v12);
    }
    else
    {
      *a2 = NtCurrentTeb()->ActivityId;
    }
    if ( !v2 )
      return 0;
LABEL_18:
    v11 = RtlNtStatusToDosError(v2);
    v4 = v11;
    if ( v11 )
      RtlSetLastWin32Error(v11);
    return v4;
  }
  return 87LL;
}
