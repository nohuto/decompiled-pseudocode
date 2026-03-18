/*
 * XREFs of xxxImmUnloadLayout @ 0x1C01D066C
 * Callers:
 *     xxxImmUnloadThreadsLayout @ 0x1C0129A74 (xxxImmUnloadThreadsLayout.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01CFFF0 (xxxImmActivateAndUnloadThreadsLayout.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

void __fastcall xxxImmUnloadLayout(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[5]; // [rsp+50h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+80h] [rbp+8h] BYREF

  v3 = (int)a2;
  if ( *(_QWORD *)(a1 + 784) )
  {
    v4 = *(_QWORD *)(a1 + 440);
    if ( v4 )
    {
      if ( (_DWORD)a2 != 1 || (*gpsi & 4) != 0 || (*(_WORD *)(v4 + 42) & 0xF000) == 0xE000 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
        v6 = *(_QWORD *)(a1 + 784);
        v9[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v9;
        v9[1] = v6;
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
        xxxSendTransformableMessageTimeout(
          *(__int64 **)(a1 + 784),
          0x287u,
          0x11uLL,
          v3,
          8,
          gdwHungAppTimeout,
          (__int64 *)&BugCheckParameter3,
          1,
          0);
        ThreadUnlock1(v8, v7);
      }
    }
  }
}
