/*
 * XREFs of xxxProcessTSFEvent @ 0x1C0007018
 * Callers:
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C0113978 (xxxFlushDeferredWindowEvents.c)
 * Callees:
 *     ?TSFRangeFromEvent@@YAKKW4TSFLocality@@@Z @ 0x1C00070E0 (-TSFRangeFromEvent@@YAKKW4TSFLocality@@@Z.c)
 *     ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x1C000714C (-xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 */

__int64 *__fastcall xxxProcessTSFEvent(struct tagNOTIFY *a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // r9
  int v10; // r8d
  __int64 v11; // rax
  struct tagNOTIFY **v12; // rcx
  __int64 *result; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v3 = *((unsigned int *)a1 + 7);
  *((_QWORD *)a1 + 8) = ThreadWin32Thread;
  v5 = TSFRangeFromEvent(v3, 1LL, v4, ThreadWin32Thread);
  v8 = TSFRangeFromEvent(v6, 0LL, v5, v7);
  if ( (*(_DWORD *)(*(_QWORD *)(v9 + 440) + 16LL) & (v8 | v10) & 0x1703) != 0 )
    xxxCallTSFNotifyHook(a1);
  *((_QWORD *)a1 + 8) = 0LL;
  v11 = *(_QWORD *)a1;
  if ( *(struct tagNOTIFY **)(*(_QWORD *)a1 + 8LL) != a1 || (v12 = (struct tagNOTIFY **)*((_QWORD *)a1 + 1), *v12 != a1) )
    __fastfail(3u);
  *v12 = (struct tagNOTIFY *)v11;
  *(_QWORD *)(v11 + 8) = v12;
  *((_QWORD *)a1 + 1) = a1;
  *(_QWORD *)a1 = a1;
  if ( !*((_DWORD *)a1 + 6) )
    HMAssignmentUnlock((char *)a1 + 16);
  result = &qword_1C032DDF0;
  if ( a1 != (struct tagNOTIFY *)&qword_1C032DDF0 )
    return (__int64 *)Win32FreePool(a1);
  dword_1C032C208 = 0;
  return result;
}
