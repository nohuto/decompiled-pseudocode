/*
 * XREFs of xxxWindowFromPoint @ 0x1C0067DF0
 * Callers:
 *     NtUserWindowFromPoint @ 0x1C0069E20 (NtUserWindowFromPoint.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxDCEWindowHitTest @ 0x1C0069DCC (xxxDCEWindowHitTest.c)
 *     xxxWindowHitTest2 @ 0x1C00DEEE8 (xxxWindowHitTest2.c)
 */

__int64 __fastcall xxxWindowFromPoint(int a1, __int64 a2)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  ULONG_PTR v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  _QWORD v18[3]; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v19[3]; // [rsp+58h] [rbp-20h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  if ( !ThreadWin32Thread )
    return 0LL;
  v5 = *(_QWORD *)(ThreadWin32Thread + 464);
  if ( !v5 )
    return 0LL;
  v6 = *(_QWORD *)(v5 + 24);
  if ( !v6 )
    return 0LL;
  v7 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
  v18[0] = *(_QWORD *)(v7 + 416);
  *(_QWORD *)(v7 + 416) = v18;
  v18[1] = v6;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  if ( (unsigned int)IsWindowDesktopComposed(v6) )
  {
    v9 = *(_QWORD *)(v6 + 88);
    v10 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
    v19[0] = *(_QWORD *)(v10 + 416);
    *(_QWORD *)(v10 + 416) = v19;
    v19[1] = v9;
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v11 = xxxDCEWindowHitTest(*(_QWORD *)(v6 + 88), 0, 0, 0, a1, 0LL, 5);
    ThreadUnlock1(v13, v12);
  }
  else
  {
    v11 = xxxWindowHitTest2(v6);
  }
  ThreadUnlock1(v15, v14);
  LOBYTE(v16) = 1;
  return HMValidateHandleNoSecure(v11, v16);
}
