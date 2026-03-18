/*
 * XREFs of ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0222438
 * Callers:
 *     xxxMNButtonDown @ 0x1C022321C (xxxMNButtonDown.c)
 *     xxxMNMouseMove @ 0x1C0225318 (xxxMNMouseMove.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 */

__int64 __fastcall xxxMNHideNextHierarchy(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  if ( !*(_QWORD *)(**a1 + 24) )
    return 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v5 = *(_QWORD *)(**a1 + 24);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), **a1, a3, a4);
  v11 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v11;
  v12 = v5;
  HMLockObject(v5);
  if ( v5 != *(_QWORD *)(**a1 + 56) )
    xxxSendMessage(v5);
  xxxSendMessage(v5);
  ThreadUnlock1(v8, v7, v9);
  return 1LL;
}
