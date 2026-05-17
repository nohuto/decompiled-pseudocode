/*
 * XREFs of EtwpAddProviderTrackingInfo @ 0x180051B90
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x1800514D0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFinalizeLogFileHeader @ 0x18005A560 (EtwpFinalizeLogFileHeader.c)
 * Callees:
 *     EtwpAddBinaryInfoEvents @ 0x18010F9A0 (EtwpAddBinaryInfoEvents.c)
 *     EtwpAddDebugInfoEvents @ 0x18010FAFC (EtwpAddDebugInfoEvents.c)
 */

_QWORD *__fastcall EtwpAddProviderTrackingInfo(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rcx
  _QWORD *result; // rax

  v3 = (_QWORD *)(a1 + 480);
  v5 = *(_QWORD **)(a1 + 480);
  if ( v5 != v3 || (result = (_QWORD *)(a1 + 464), (_QWORD *)*result != result) )
  {
    if ( *(_DWORD *)(a2 + 48) < a3 && *(_DWORD *)(a2 + 48) >= 0x180u )
    {
      result = (_QWORD *)(a1 + 464);
      if ( (_QWORD *)*result != result )
      {
        result = (_QWORD *)EtwpAddDebugInfoEvents(a1);
        v5 = (_QWORD *)*v3;
      }
      if ( v5 != v3 )
        return (_QWORD *)EtwpAddBinaryInfoEvents(a1, a2, a3);
    }
  }
  return result;
}
