/*
 * XREFs of xxxImmUnloadLayout @ 0x1C01AD5E0
 * Callers:
 *     xxxImmUnloadThreadsLayout @ 0x1C0108E1C (xxxImmUnloadThreadsLayout.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01ACED0 (xxxImmActivateAndUnloadThreadsLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 */

void __fastcall xxxImmUnloadLayout(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v10[5]; // [rsp+50h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+80h] [rbp+8h] BYREF

  v3 = (int)a2;
  if ( *(_QWORD *)(a1 + 768) )
  {
    v4 = *(_QWORD *)(a1 + 432);
    if ( v4 )
    {
      if ( (_DWORD)a2 != 1 || (*gpsi & 4) != 0 || (*(_WORD *)(v4 + 42) & 0xF000) == 0xE000 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
        v6 = *(_QWORD *)(a1 + 768);
        v10[0] = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = v10;
        v10[1] = v6;
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
        xxxSendTransformableMessageTimeout(
          *(__int64 **)(a1 + 768),
          0x287u,
          (HWND)0x11,
          v3,
          8,
          gdwHungAppTimeout,
          (__int64 *)&BugCheckParameter3,
          1,
          0);
        ThreadUnlock1(v8, v7, v9);
      }
    }
  }
}
