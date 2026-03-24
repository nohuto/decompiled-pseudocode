/*
 * XREFs of CcScheduleReadAhead @ 0x140269D60
 * Callers:
 *     <none>
 * Callees:
 *     CcScheduleReadAheadEx @ 0x14008DFD0 (CcScheduleReadAheadEx.c)
 */

void __stdcall CcScheduleReadAhead(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  CcScheduleReadAheadEx(FileObject, FileOffset, Length, 0LL);
}
