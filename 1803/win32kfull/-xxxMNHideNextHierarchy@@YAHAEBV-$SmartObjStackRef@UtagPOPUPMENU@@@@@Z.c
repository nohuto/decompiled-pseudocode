/*
 * XREFs of ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C01E4A38
 * Callers:
 *     xxxMNButtonDown @ 0x1C01E57A4 (xxxMNButtonDown.c)
 *     xxxMNMouseMove @ 0x1C01E7844 (xxxMNMouseMove.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 */

__int64 __fastcall xxxMNHideNextHierarchy(__int64 **a1)
{
  ULONG_PTR v2; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_QWORD *)(**a1 + 24) )
    return 0LL;
  v2 = *(_QWORD *)(**a1 + 24);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), **a1);
  v8[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v8;
  v8[1] = v2;
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  if ( v2 != *(_QWORD *)(**a1 + 56) )
    xxxSendMessage(v2);
  xxxSendMessage(v2);
  ThreadUnlock1(v5, v4, v6);
  return 1LL;
}
