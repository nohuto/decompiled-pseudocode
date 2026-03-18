/*
 * XREFs of ListTableEnd @ 0x1C0130B8C
 * Callers:
 *     RIMCmActiveContactsEnd @ 0x1C012E6A8 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C012E6FC (RIMCmActiveContactsNext.c)
 *     ListTableIteratorNext @ 0x1C0130BDC (ListTableIteratorNext.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ListTableEnd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 result; // rax

  if ( !*(_QWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = *(unsigned int *)(a2 + 8);
  if ( !(_DWORD)v5 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v5 = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(a1 + 8) = v5;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2 + 16 * v5;
  result = a1;
  *(_QWORD *)a1 = a2;
  return result;
}
