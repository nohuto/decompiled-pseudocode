/*
 * XREFs of ??1CEtwTraceTranslateMessage@@QEAA@XZ @ 0x1C013512C
 * Callers:
 *     xxxTranslateMessage @ 0x1C0134F10 (xxxTranslateMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

void __fastcall CEtwTraceTranslateMessage::~CEtwTraceTranslateMessage(
        CEtwTraceTranslateMessage *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx

  LOBYTE(v4) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) + 1248);
  EtwTraceEndTranslateMessage(v4, *(unsigned int *)this);
}
