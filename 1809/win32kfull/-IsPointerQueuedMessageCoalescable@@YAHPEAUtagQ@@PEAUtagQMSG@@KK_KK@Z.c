/*
 * XREFs of ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x1C01B9654
 * Callers:
 *     EditionIsPointerQueuedMessageCoalescable @ 0x1C01B9740 (EditionIsPointerQueuedMessageCoalescable.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C002E56C (IsPointerInputMessageWithState.c)
 */

__int64 __fastcall IsPointerQueuedMessageCoalescable(
        struct tagQ *a1,
        struct tagQMSG *a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v8; // rbx
  int v9; // eax
  unsigned __int64 v10; // rdx
  unsigned int FrameIdFromPointerMsgId; // eax

  if ( a2 )
    v8 = *((_QWORD *)a2 + 1);
  else
    v8 = *((_QWORD *)a1 + 4);
  while ( 1 )
  {
    if ( !v8 )
      return 0LL;
    if ( *(_DWORD *)(v8 + 24) != 512 )
      break;
    v9 = *(_DWORD *)(v8 + 120);
    if ( (v9 != 4 || a6 != 2) && (v9 != 8 || a6 != 3) && (v9 != 16 || a6 != 5) && *(_DWORD *)(v8 + 124) != 4 )
      break;
LABEL_16:
    v8 = *(_QWORD *)(v8 + 8);
  }
  if ( !(unsigned int)IsPointerInputMessageWithState() )
    return 0LL;
  v10 = *(_QWORD *)(v8 + 40);
  if ( v10 != a5 )
  {
    FrameIdFromPointerMsgId = CTouchProcessor::GetFrameIdFromPointerMsgId(gpTouchProcessor, v10);
    if ( FrameIdFromPointerMsgId != a4 && FrameIdFromPointerMsgId != a3 )
      return 0LL;
    goto LABEL_16;
  }
  return 1LL;
}
