/*
 * XREFs of ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0221EF8
 * Callers:
 *     xxxMNButtonDown @ 0x1C0222CDC (xxxMNButtonDown.c)
 *     xxxMNMouseMove @ 0x1C0224DD8 (xxxMNMouseMove.c)
 * Callees:
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxMNHideNextHierarchy(__int64 **a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v4; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  if ( !*(_QWORD *)(**a1 + 24) )
    return 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v4 = *(_QWORD *)(**a1 + 24);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), **a1, a3);
  v10 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v10;
  v11 = v4;
  HMLockObject(v4);
  if ( v4 != *(_QWORD *)(**a1 + 56) )
    xxxSendMessage(v4);
  xxxSendMessage(v4);
  ThreadUnlock1(v7, v6, v8);
  return 1LL;
}
