/*
 * XREFs of CcScheduleReadAhead @ 0x14027D7A0
 * Callers:
 *     <none>
 * Callees:
 *     CcScheduleReadAheadEx @ 0x1400A9CA0 (CcScheduleReadAheadEx.c)
 */

void __stdcall CcScheduleReadAhead(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  CcScheduleReadAheadEx((_SLIST_ENTRY *)FileObject, FileOffset, Length, 0LL);
}
