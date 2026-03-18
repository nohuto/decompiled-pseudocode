/*
 * XREFs of ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C020A934
 * Callers:
 *     xxxMNButtonDown @ 0x1C020B6E8 (xxxMNButtonDown.c)
 *     xxxMNMouseMove @ 0x1C020D738 (xxxMNMouseMove.c)
 * Callees:
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxMNHideNextHierarchy(__int64 **a1)
{
  ULONG_PTR v2; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_QWORD *)(**a1 + 24) )
    return 0LL;
  v2 = *(_QWORD *)(**a1 + 24);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), **a1);
  v7[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v7;
  v7[1] = v2;
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  if ( v2 != *(_QWORD *)(**a1 + 56) )
    xxxSendMessage(v2);
  xxxSendMessage(v2);
  ThreadUnlock1(v5, v4);
  return 1LL;
}
