/*
 * XREFs of xxxProcessTSFEvent @ 0x1C00D7064
 * Callers:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C0028C98 (xxxFlushDeferredWindowEvents.c)
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?TSFRangeFromEvent@@YAKKW4TSFLocality@@@Z @ 0x1C00D70E8 (-TSFRangeFromEvent@@YAKKW4TSFLocality@@@Z.c)
 *     DestroyNotify @ 0x1C00D8D68 (DestroyNotify.c)
 *     ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x1C00D8DA0 (-xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z.c)
 */

__int64 __fastcall xxxProcessTSFEvent(struct tagNOTIFY *a1, __int64 a2)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // r9
  int v8; // r8d

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v4 = *((unsigned int *)a1 + 5);
  if ( (_DWORD)v4 == 2147483408 )
  {
    v5 = 1LL;
  }
  else
  {
    v5 = 0LL;
    if ( (unsigned int)(v4 - 2147483409) <= 1 )
      v5 = 2LL;
  }
  *((_QWORD *)a1 + 7) = ThreadWin32Thread;
  v6 = TSFRangeFromEvent(v4, 0LL, v5);
  if ( (*(_DWORD *)(*(_QWORD *)(v7 + 440) + 16LL) & (v8 | v6) & 0x1703) != 0 )
    xxxCallTSFNotifyHook(a1);
  *((_QWORD *)a1 + 7) = 0LL;
  return DestroyNotify(a1);
}
