/*
 * XREFs of xxxImmUnloadLayout @ 0x1C01E5334
 * Callers:
 *     xxxImmUnloadThreadsLayout @ 0x1C010FD44 (xxxImmUnloadThreadsLayout.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E4C90 (xxxImmActivateAndUnloadThreadsLayout.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int16 __fastcall xxxImmUnloadLayout(__int64 a1, __int64 a2)
{
  __int16 result; // ax
  struct _LARGE_STRING *v3; // rdi
  __int64 v5; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+58h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp-18h]
  ULONG_PTR BugCheckParameter3; // [rsp+80h] [rbp+8h] BYREF

  result = 0;
  v3 = (struct _LARGE_STRING *)(int)a2;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( *(_QWORD *)(a1 + 776) )
  {
    v5 = *(_QWORD *)(a1 + 432);
    if ( v5 )
    {
      if ( (_DWORD)a2 != 1 || (*gpsi & 4) != 0 || (result = *(_WORD *)(v5 + 42) & 0xF000, result == -8192) )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, v5);
        v7 = *(_QWORD *)(a1 + 776);
        v11 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v11;
        v12 = v7;
        HMLockObject(v7);
        xxxSendTransformableMessageTimeout(
          *(__int64 **)(a1 + 776),
          0x287u,
          0x11uLL,
          v3,
          8u,
          gdwHungAppTimeout,
          (__int64 *)&BugCheckParameter3,
          1u,
          0);
        return ThreadUnlock1(v9, v8, v10);
      }
    }
  }
  return result;
}
