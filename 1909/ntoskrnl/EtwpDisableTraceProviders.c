/*
 * XREFs of EtwpDisableTraceProviders @ 0x14069301C
 * Callers:
 *     EtwpStopLoggerInstance @ 0x1406ACBBC (EtwpStopLoggerInstance.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     PsEnumProcesses @ 0x140638AD8 (PsEnumProcesses.c)
 *     EtwpGetNextGuidEntry @ 0x140693100 (EtwpGetNextGuidEntry.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140693238 (EtwpClearSessionAndUnreferenceEntry.c)
 */

LONG __fastcall EtwpDisableTraceProviders(__int64 a1, unsigned int a2)
{
  _WORD *v4; // rbx
  __int64 i; // rax
  __int64 v6; // rsi
  __int64 j; // rdx
  __int64 NextGuidEntry; // rax
  __int64 v9; // r8
  __int64 v10; // rsi
  unsigned int k; // edi
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 == EtwpHostSiloState )
    v4 = (_WORD *)0xFFFFF78000000380LL;
  else
    v4 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1104LL) + 550LL);
  for ( i = EtwpGetNextGuidEntry(a1, 0LL, 0LL); ; i = EtwpGetNextGuidEntry(a1, v6, 0LL) )
  {
    v6 = i;
    if ( !i )
      break;
    EtwpClearSessionAndUnreferenceEntry(a2, i, 0LL);
  }
  for ( j = 0LL; ; j = v10 )
  {
    NextGuidEntry = EtwpGetNextGuidEntry(a1, j, 2LL);
    v10 = NextGuidEntry;
    if ( !NextGuidEntry )
      break;
    LOBYTE(v9) = 2;
    EtwpClearSessionAndUnreferenceEntry(a2, NextGuidEntry, v9);
  }
  KeWaitForSingleObject(&EtwpGlobalMutex, Executive, 0, 0, 0LL);
  for ( k = 0; k < 9; ++k )
  {
    if ( *(_BYTE *)v4 == (_BYTE)a2 )
    {
      if ( k <= 1 )
      {
        v13 = k;
        PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))EtwpUpdateProcessTracingCallback, (__int64)&v13);
      }
      *v4 = 0;
    }
    ++v4;
  }
  return KeReleaseMutex(&EtwpGlobalMutex, 0);
}
