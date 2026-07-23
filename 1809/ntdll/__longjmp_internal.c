/*
 * XREFs of __longjmp_internal @ 0x1800A6CA0
 * Callers:
 *     longjmp @ 0x180093B80 (longjmp.c)
 * Callees:
 *     RtlUnwindEx @ 0x180005BF0 (RtlUnwindEx.c)
 */

__int64 __fastcall _longjmp_internal(unsigned __int64 a1, __int64 a2)
{
  _EXCEPTION_RECORD *HistoryTable; // r10
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-508h] BYREF

  if ( !a2 )
    a2 = 1LL;
  HistoryTable = 0LL;
  if ( *(_QWORD *)a1 )
  {
    while ( 1 )
    {
      ExceptionRecord.ExceptionCode = -2147483610;
      ExceptionRecord.ExceptionFlags = (unsigned int)HistoryTable;
      ExceptionRecord.ExceptionRecord = HistoryTable;
      ExceptionRecord.ExceptionAddress = HistoryTable;
      ExceptionRecord.NumberParameters = (_DWORD)HistoryTable + 1;
      ExceptionRecord.ExceptionInformation[0] = a1;
      RtlUnwindEx(
        *(PVOID *)a1,
        *(PVOID *)(a1 + 80),
        &ExceptionRecord,
        (PVOID)a2,
        (PCONTEXT)&ExceptionRecord.ExceptionInformation[2],
        (PUNWIND_HISTORY_TABLE)HistoryTable);
    }
  }
  _mm_lfence();
  _mm_setcsr(*(_DWORD *)(a1 + 88));
  __asm { fnclex }
  return (*(__int64 (**)(void))(a1 + 80))();
}
