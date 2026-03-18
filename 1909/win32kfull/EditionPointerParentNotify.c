/*
 * XREFs of EditionPointerParentNotify @ 0x1C01F2EC0
 * Callers:
 *     <none>
 * Callees:
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     ThreadLockExchange @ 0x1C00F15D0 (ThreadLockExchange.c)
 *     xxxSendPointerMessageWorker @ 0x1C01F1A28 (xxxSendPointerMessageWorker.c)
 */

__int64 __fastcall EditionPointerParentNotify(__int64 a1, void *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 80);
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  result = GetDesktopWindow(v3);
  if ( v3 != result )
  {
    result = *(_QWORD *)(v3 + 40);
    if ( (*(_BYTE *)(result + 24) & 4) == 0 )
    {
      v9 = gptiCurrent;
      v10 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v10;
      v11 = 0LL;
      do
      {
        LOBYTE(v9) = *(_BYTE *)(*(_QWORD *)(v3 + 40) + 31LL) & 0xC0;
        if ( (_BYTE)v9 != 64 )
          break;
        v3 = *(_QWORD *)(v3 + 104);
        ThreadLockExchange(v3, (__int64)&v10);
        xxxSendPointerMessageWorker(v3, 528LL, a3, 0LL, 0LL, 177);
      }
      while ( !CTouchProcessor::BreakEditionParentNotifyLoop(gpTouchProcessor, a2) );
      return ThreadUnlock1(v9, v7, v8);
    }
  }
  return result;
}
