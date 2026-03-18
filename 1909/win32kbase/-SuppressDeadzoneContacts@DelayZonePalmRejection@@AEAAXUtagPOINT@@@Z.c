/*
 * XREFs of ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z @ 0x1C018151C
 * Callers:
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C0180B58 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z @ 0x1C0172C90 (-SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z.c)
 */

void __fastcall DelayZonePalmRejection::SuppressDeadzoneContacts(DelayZonePalmRejection *this, struct tagPOINT a2)
{
  struct CPointerInputFrame *v2; // rdi
  struct tagPOINT v3; // rbx
  struct CPointerInputFrame *v4; // rbp
  struct CPointerInputFrame *v5; // rsi
  struct _LIST_ENTRY **Next; // rax

  v2 = (struct CPointerInputFrame *)*((_QWORD *)this + 7);
  v3 = a2;
  v4 = (struct CPointerInputFrame *)*((_QWORD *)this + 8);
  v5 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2.x) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, a2.x, 8, 30, (__int64)&WPP_5b698ae13cb138d9dcf3d84f80d2dc37_Traceguids);
  }
  if ( v2 )
  {
    do
    {
      if ( v2 == v4 )
        break;
      Next = CTouchProcessor::SuppressDeadzoneContactsInFrameAndGetNext(gpTouchProcessor, v5, v2, v3);
      v5 = v2;
      v2 = (struct CPointerInputFrame *)Next;
    }
    while ( Next );
    if ( v2 )
      CTouchProcessor::SuppressDeadzoneContactsInFrameAndGetNext(gpTouchProcessor, v5, v2, v3);
  }
}
