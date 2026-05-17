/*
 * XREFs of EtwEventWriteEndScenario @ 0x180068760
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventWrite @ 0x18004DC20 (EtwEventWrite.c)
 *     EtwpGetKmRegHandle @ 0x180068844 (EtwpGetKmRegHandle.c)
 *     EtwEventEnabled @ 0x180068890 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A3A50 (NtTraceControl.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall EtwEventWriteEndScenario(__int64 a1, _OWORD *a2, int a3, __int64 a4)
{
  __int64 result; // rax
  _GUID ActivityId; // xmm1
  int v10; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v11[6]; // [rsp+38h] [rbp-50h] BYREF

  v10 = 0;
  if ( !a2 )
    return 87LL;
  if ( !(unsigned __int8)EtwEventEnabled() )
    return 6LL;
  memset(v11, 0, sizeof(v11));
  result = EtwpGetKmRegHandle(a1, v11);
  if ( !(_DWORD)result )
  {
    *(_OWORD *)&v11[1] = *a2;
    ActivityId = NtCurrentTeb()->ActivityId;
    LODWORD(v11[5]) = 11;
    *(_GUID *)&v11[3] = ActivityId;
    NtTraceControl(13LL, v11, 48LL, 0LL, 0, &v10);
    return EtwEventWrite(a1, (int)a2, a3, a4);
  }
  return result;
}
