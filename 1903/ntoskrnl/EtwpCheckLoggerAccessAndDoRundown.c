/*
 * XREFs of EtwpCheckLoggerAccessAndDoRundown @ 0x1408FB33C
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x140664DC8 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1408FB1E4 (EtwpCheckGuidAccessAndDoRundown.c)
 * Callees:
 *     EtwpStackRundown @ 0x1403343C8 (EtwpStackRundown.c)
 *     EtwpCheckLoggerControlAccess @ 0x1405C3EE0 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x1405C4F00 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C4F48 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpLogKernelTraceRundown @ 0x1408FB6A4 (EtwpLogKernelTraceRundown.c)
 *     EtwpLogPmcCounterRundown @ 0x1408FB780 (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpCheckLoggerAccessAndDoRundown(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  unsigned int *v7; // rax
  unsigned int *v8; // rbx
  int v9; // edi
  int v10; // r9d
  unsigned int v11; // eax

  v7 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 1);
  v8 = v7;
  if ( v7 )
  {
    v9 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v7);
    if ( v9 >= 0 )
    {
      if ( (v8[3] & 0x2000000) != 0 )
      {
        LOBYTE(v10) = a4;
        EtwpLogKernelTraceRundown(a1, a3, 32 * *((unsigned __int8 *)v8 + 834) + a1 + 4260, v10, 0LL, 0);
      }
      v11 = v8[208];
      if ( (v11 & 0x800) != 0 )
      {
        EtwpLogPmcCounterRundown(v8, a3);
        v11 = v8[208];
      }
      if ( (v11 & 0x1000000) != 0 )
        EtwpStackRundown(*((_QWORD *)v8 + 124), a1, a3);
    }
    EtwpReleaseLoggerContext(v8, 1);
  }
  else
  {
    return (unsigned int)-1073741162;
  }
  return (unsigned int)v9;
}
