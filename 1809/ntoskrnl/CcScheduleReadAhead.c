/*
 * XREFs of CcScheduleReadAhead @ 0x140269F50
 * Callers:
 *     <none>
 * Callees:
 *     CcScheduleReadAheadEx @ 0x14008DEF0 (CcScheduleReadAheadEx.c)
 */

void __stdcall CcScheduleReadAhead(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  CcScheduleReadAheadEx(FileObject, FileOffset, Length, 0LL);
}
