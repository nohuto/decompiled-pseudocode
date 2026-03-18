/*
 * XREFs of CcScheduleReadAhead @ 0x14027D500
 * Callers:
 *     <none>
 * Callees:
 *     CcScheduleReadAheadEx @ 0x140090340 (CcScheduleReadAheadEx.c)
 */

void __stdcall CcScheduleReadAhead(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  CcScheduleReadAheadEx((_SLIST_ENTRY *)FileObject, FileOffset, Length, 0LL);
}
