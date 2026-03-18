/*
 * XREFs of ListTableEnd @ 0x1C0058870
 * Callers:
 *     ListTableIteratorNext @ 0x1C005876C (ListTableIteratorNext.c)
 *     RIMCmActiveContactsEnd @ 0x1C0058818 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C0106840 (RIMCmActiveContactsNext.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ListTableEnd(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax

  if ( !*(_QWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v4 = *(unsigned int *)(a2 + 8);
  if ( !(_DWORD)v4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    v4 = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2 + 16 * v4;
  result = a1;
  *(_QWORD *)a1 = a2;
  return result;
}
