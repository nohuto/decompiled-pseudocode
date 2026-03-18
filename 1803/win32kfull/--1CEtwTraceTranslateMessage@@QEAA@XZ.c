/*
 * XREFs of ??1CEtwTraceTranslateMessage@@QEAA@XZ @ 0x1C00F50C4
 * Callers:
 *     xxxTranslateMessage @ 0x1C00F4EDC (xxxTranslateMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 */

void __fastcall CEtwTraceTranslateMessage::~CEtwTraceTranslateMessage(CEtwTraceTranslateMessage *this, __int64 a2)
{
  __int64 v3; // rcx

  LOBYTE(v3) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2) + 1216);
  EtwTraceEndTranslateMessage(v3, *(unsigned int *)this);
}
