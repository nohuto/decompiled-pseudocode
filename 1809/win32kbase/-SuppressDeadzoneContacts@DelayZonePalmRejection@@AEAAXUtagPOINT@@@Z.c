/*
 * XREFs of ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z @ 0x1C0150770
 * Callers:
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C014FED0 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z @ 0x1C0146090 (-SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z.c)
 */

void __fastcall DelayZonePalmRejection::SuppressDeadzoneContacts(DelayZonePalmRejection *this, struct tagPOINT a2)
{
  struct CPointerInputFrame *v2; // rdi
  struct CPointerInputFrame *v4; // rbp
  struct CPointerInputFrame *v5; // rsi
  struct _LIST_ENTRY **Next; // rax

  v2 = (struct CPointerInputFrame *)*((_QWORD *)this + 7);
  v4 = (struct CPointerInputFrame *)*((_QWORD *)this + 8);
  v5 = 0LL;
  WPP_RECORDER_SF_(*((_QWORD *)this + 14), 4u, 0xDu, 0x1Fu, (__int64)&WPP_d258f4abf76b3963f2092d6ddd0e7137_Traceguids);
  if ( v2 )
  {
    do
    {
      if ( v2 == v4 )
        break;
      Next = CTouchProcessor::SuppressDeadzoneContactsInFrameAndGetNext(
               (CTouchProcessor *)WPP_MAIN_CB.Queue.ListEntry.Blink,
               v5,
               v2,
               a2);
      v5 = v2;
      v2 = (struct CPointerInputFrame *)Next;
    }
    while ( Next );
    if ( v2 )
      CTouchProcessor::SuppressDeadzoneContactsInFrameAndGetNext(
        (CTouchProcessor *)WPP_MAIN_CB.Queue.ListEntry.Blink,
        v5,
        v2,
        a2);
  }
}
