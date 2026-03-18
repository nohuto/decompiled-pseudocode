/*
 * XREFs of ??1CEtwTraceDispatchMessage@@QEAA@XZ @ 0x1C00244F0
 * Callers:
 *     xxxDispatchMessage @ 0x1C0023E5C (xxxDispatchMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 */

void __fastcall CEtwTraceDispatchMessage::~CEtwTraceDispatchMessage(CEtwTraceDispatchMessage *this)
{
  __int64 v2; // rcx

  LOBYTE(v2) = *(_BYTE *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 1216);
  EtwTraceEndDispatchMessage(v2, *(unsigned int *)this);
}
