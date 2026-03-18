/*
 * XREFs of EditionPointerParentNotify @ 0x1C01DD430
 * Callers:
 *     <none>
 * Callees:
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     ThreadLockExchange @ 0x1C00DF110 (ThreadLockExchange.c)
 *     xxxSendPointerMessageWorker @ 0x1C01DBF34 (xxxSendPointerMessageWorker.c)
 */

__int64 __fastcall EditionPointerParentNotify(__int64 a1, void *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 72);
  result = GetDesktopWindow(v3);
  if ( v3 != result )
  {
    result = *(_QWORD *)(v3 + 40);
    if ( (*(_BYTE *)(result + 24) & 4) == 0 )
    {
      v8 = gptiCurrent;
      v9[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v9;
      v9[1] = 0LL;
      do
      {
        LOBYTE(v8) = *(_BYTE *)(*(_QWORD *)(v3 + 40) + 31LL) & 0xC0;
        if ( (_BYTE)v8 != 64 )
          break;
        v3 = *(_QWORD *)(v3 + 80);
        ThreadLockExchange(v3, (__int64)v9);
        xxxSendPointerMessageWorker(v3, 528LL, a3, 0LL, 0LL, 177);
      }
      while ( !CTouchProcessor::BreakEditionParentNotifyLoop(gpTouchProcessor, a2) );
      return ThreadUnlock1(v8, v7);
    }
  }
  return result;
}
