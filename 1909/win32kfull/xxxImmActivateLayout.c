/*
 * XREFs of xxxImmActivateLayout @ 0x1C011B814
 * Callers:
 *     EditionImmActivateLayout @ 0x1C011B800 (EditionImmActivateLayout.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E4C90 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01E5064 (xxxImmActivateThreadsLayout.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxImmActivateLayout(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int128 *v7; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rcx
  struct _LARGE_STRING *v10; // r9
  __int64 *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v15; // [rsp+58h] [rbp-9h]
  __int128 v16; // [rsp+68h] [rbp+7h]
  __int128 v17; // [rsp+78h] [rbp+17h] BYREF
  __int128 v18; // [rsp+88h] [rbp+27h] BYREF
  __int64 v19; // [rsp+98h] [rbp+37h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+3Fh]
  __int64 v21; // [rsp+A8h] [rbp+47h]

  result = 0LL;
  v4 = a1 + 432;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( *(_QWORD *)(a1 + 432) != a2 )
  {
    if ( *(_QWORD *)(a1 + 776) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
      v9 = *(_QWORD *)(a1 + 776);
      v19 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v19;
      v20 = v9;
      HMLockObject(v9);
      v10 = *(struct _LARGE_STRING **)(a2 + 40);
      v11 = *(__int64 **)(a1 + 776);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v11, 0x287u, 0x19uLL, v10, 0, 0, 0LL, 1u, 1);
      ThreadUnlock1(v13, v12, v14);
      *(_QWORD *)&v16 = v4;
      v7 = &v18;
      *((_QWORD *)&v16 + 1) = a2;
      v18 = v16;
    }
    else
    {
      *(_QWORD *)&v15 = a1 + 432;
      v7 = &v17;
      *((_QWORD *)&v15 + 1) = a2;
      v17 = v15;
    }
    return HMAssignmentLock(v7);
  }
  return result;
}
