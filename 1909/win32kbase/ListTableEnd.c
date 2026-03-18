/*
 * XREFs of ListTableEnd @ 0x1C015B44C
 * Callers:
 *     RIMCmActiveContactsEnd @ 0x1C0159498 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C01594EC (RIMCmActiveContactsNext.c)
 *     ListTableIteratorNext @ 0x1C015B4A4 (ListTableIteratorNext.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ListTableEnd(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !*(_QWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !*(_DWORD *)(a2 + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 8);
  return a1;
}
