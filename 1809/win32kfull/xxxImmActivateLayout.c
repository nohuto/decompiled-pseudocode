/*
 * XREFs of xxxImmActivateLayout @ 0x1C0136AA4
 * Callers:
 *     EditionImmActivateLayout @ 0x1C0136A90 (EditionImmActivateLayout.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01CFFF0 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01D03B0 (xxxImmActivateThreadsLayout.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

_UNKNOWN **__fastcall xxxImmActivateLayout(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rsi
  __int128 *v6; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int128 v13; // [rsp+58h] [rbp+17h] BYREF
  __int128 v14; // [rsp+68h] [rbp+27h] BYREF
  _QWORD v15[4]; // [rsp+78h] [rbp+37h] BYREF
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF

  result = &retaddr;
  v3 = a1 + 440;
  if ( *(_QWORD *)(a1 + 440) != a2 )
  {
    if ( *(_QWORD *)(a1 + 784) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
      v8 = *(_QWORD *)(a1 + 784);
      v15[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v15;
      v15[1] = v8;
      _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
      v9 = *(_QWORD *)(a2 + 40);
      v10 = *(__int64 **)(a1 + 784);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v10, 0x287u, 0x19uLL, v9, 0, 0, 0LL, 1, 1);
      ThreadUnlock1(v12, v11);
      *(_QWORD *)&v13 = v3;
      v6 = &v14;
      *((_QWORD *)&v13 + 1) = a2;
      v14 = v13;
    }
    else
    {
      *(_QWORD *)&v13 = a1 + 440;
      v6 = &v13;
      *((_QWORD *)&v13 + 1) = a2;
    }
    return (_UNKNOWN **)HMAssignmentLock(v6);
  }
  return result;
}
