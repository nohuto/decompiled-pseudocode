/*
 * XREFs of xxxImmUnloadLayout @ 0x1C01E54B4
 * Callers:
 *     xxxImmUnloadThreadsLayout @ 0x1C01350B4 (xxxImmUnloadThreadsLayout.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E4E10 (xxxImmActivateAndUnloadThreadsLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 */

__int16 __fastcall xxxImmUnloadLayout(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 result; // ax
  struct _LARGE_STRING *v5; // rdi
  __int64 v7; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // [rsp+50h] [rbp-28h] BYREF
  __int64 v14; // [rsp+58h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp-18h]
  ULONG_PTR BugCheckParameter3; // [rsp+80h] [rbp+8h] BYREF

  result = 0;
  v5 = (struct _LARGE_STRING *)(int)a2;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( *(_QWORD *)(a1 + 776) )
  {
    v7 = *(_QWORD *)(a1 + 432);
    if ( v7 )
    {
      if ( (_DWORD)a2 != 1 || (*gpsi & 4) != 0 || (result = *(_WORD *)(v7 + 42) & 0xF000, result == -8192) )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, v7, a4);
        v9 = *(_QWORD *)(a1 + 776);
        v13 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v13;
        v14 = v9;
        HMLockObject(v9);
        xxxSendTransformableMessageTimeout(
          *(__int64 **)(a1 + 776),
          0x287u,
          (HWND)0x11,
          v5,
          8u,
          gdwHungAppTimeout,
          (__int64 *)&BugCheckParameter3,
          1u,
          0);
        return ThreadUnlock1(v11, v10, v12);
      }
    }
  }
  return result;
}
