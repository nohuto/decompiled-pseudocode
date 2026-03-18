/*
 * XREFs of ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x1C01985D8
 * Callers:
 *     EditionIsPointerQueuedMessageCoalescable @ 0x1C01986C0 (EditionIsPointerQueuedMessageCoalescable.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C0023E14 (IsPointerInputMessageWithState.c)
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
  __int64 v9; // rcx
  int v10; // eax
  unsigned __int64 v11; // rdx
  unsigned int FrameIdFromPointerMsgId; // eax

  if ( a2 )
    v8 = *((_QWORD *)a2 + 1);
  else
    v8 = *((_QWORD *)a1 + 4);
  while ( 1 )
  {
    if ( !v8 )
      return 0LL;
    v9 = *(unsigned int *)(v8 + 24);
    if ( (_DWORD)v9 != 512 )
      break;
    v10 = *(_DWORD *)(v8 + 120);
    if ( (v10 != 4 || a6 != 2) && (v10 != 8 || a6 != 3) && (v10 != 16 || a6 != 5) && *(_DWORD *)(v8 + 124) != 4 )
      break;
LABEL_16:
    v8 = *(_QWORD *)(v8 + 8);
  }
  if ( !(unsigned int)IsPointerInputMessageWithState(v9) )
    return 0LL;
  v11 = *(_QWORD *)(v8 + 40);
  if ( v11 != a5 )
  {
    FrameIdFromPointerMsgId = CTouchProcessor::GetFrameIdFromPointerMsgId(gpTouchProcessor, v11);
    if ( FrameIdFromPointerMsgId != a4 && FrameIdFromPointerMsgId != a3 )
      return 0LL;
    goto LABEL_16;
  }
  return 1LL;
}
