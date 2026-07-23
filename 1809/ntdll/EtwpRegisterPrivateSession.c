/*
 * XREFs of EtwpRegisterPrivateSession @ 0x18010F744
 * Callers:
 *     EtwpStartUmLogger @ 0x18004FFC8 (EtwpStartUmLogger.c)
 * Callees:
 *     NtTraceControl @ 0x1800A3A70 (NtTraceControl.c)
 */

NTSTATUS __fastcall EtwpRegisterPrivateSession(__int16 a1, _QWORD *a2, _WORD *a3)
{
  NTSTATUS result; // eax
  unsigned int v6; // [rsp+30h] [rbp-18h] BYREF
  __int16 v7; // [rsp+34h] [rbp-14h]
  __int16 v8; // [rsp+50h] [rbp+8h] BYREF
  ULONG v9; // [rsp+68h] [rbp+20h] BYREF

  v8 = a1;
  result = NtTraceControl(EtwRegisterPrivateSession, &v8, 2u, &v6, 8u, &v9);
  if ( !result )
  {
    *a2 = v6;
    *a3 = v7;
  }
  return result;
}
