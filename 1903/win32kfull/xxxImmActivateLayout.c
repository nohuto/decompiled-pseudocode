/*
 * XREFs of xxxImmActivateLayout @ 0x1C0141034
 * Callers:
 *     EditionImmActivateLayout @ 0x1C0141020 (EditionImmActivateLayout.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E4E10 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01E51E4 (xxxImmActivateThreadsLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxImmActivateLayout(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int128 *v8; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rcx
  struct _LARGE_STRING *v11; // r9
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v16; // [rsp+58h] [rbp-9h]
  __int128 v17; // [rsp+68h] [rbp+7h]
  __int128 v18; // [rsp+78h] [rbp+17h] BYREF
  __int128 v19; // [rsp+88h] [rbp+27h] BYREF
  __int64 v20; // [rsp+98h] [rbp+37h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+3Fh]
  __int64 v22; // [rsp+A8h] [rbp+47h]

  result = 0LL;
  v5 = a1 + 432;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( *(_QWORD *)(a1 + 432) != a2 )
  {
    if ( *(_QWORD *)(a1 + 776) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
      v10 = *(_QWORD *)(a1 + 776);
      v20 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v20;
      v21 = v10;
      HMLockObject(v10);
      v11 = *(struct _LARGE_STRING **)(a2 + 40);
      v12 = *(__int64 **)(a1 + 776);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v12, 0x287u, (HWND)0x19, v11, 0, 0, 0LL, 1u, 1);
      ThreadUnlock1(v14, v13, v15);
      *(_QWORD *)&v17 = v5;
      v8 = &v19;
      *((_QWORD *)&v17 + 1) = a2;
      v19 = v17;
    }
    else
    {
      *(_QWORD *)&v16 = a1 + 432;
      v8 = &v18;
      *((_QWORD *)&v16 + 1) = a2;
      v18 = v16;
    }
    return HMAssignmentLock(v8);
  }
  return result;
}
