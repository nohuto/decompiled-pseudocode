/*
 * XREFs of xxxImmActivateLayout @ 0x1C01131E4
 * Callers:
 *     EditionImmActivateLayout @ 0x1C01131D0 (EditionImmActivateLayout.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01ACED0 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01AD2F8 (xxxImmActivateThreadsLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
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
  __int64 v13; // r8
  __int128 v14; // [rsp+58h] [rbp-9h]
  __int128 v15; // [rsp+68h] [rbp+7h]
  __int128 v16; // [rsp+78h] [rbp+17h] BYREF
  __int128 v17; // [rsp+88h] [rbp+27h] BYREF
  _QWORD v18[4]; // [rsp+98h] [rbp+37h] BYREF
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF

  result = &retaddr;
  v3 = a1 + 432;
  if ( *(_QWORD *)(a1 + 432) != a2 )
  {
    if ( *(_QWORD *)(a1 + 768) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
      v8 = *(_QWORD *)(a1 + 768);
      v18[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v18;
      v18[1] = v8;
      _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
      v9 = *(_QWORD *)(a2 + 40);
      v10 = *(__int64 **)(a1 + 768);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v10, 0x287u, (HWND)0x19, v9, 0, 0, 0LL, 1, 1);
      ThreadUnlock1(v12, v11, v13);
      *(_QWORD *)&v15 = v3;
      v6 = &v17;
      *((_QWORD *)&v15 + 1) = a2;
      v17 = v15;
    }
    else
    {
      *(_QWORD *)&v14 = a1 + 432;
      v6 = &v16;
      *((_QWORD *)&v14 + 1) = a2;
      v16 = v14;
    }
    return (_UNKNOWN **)HMAssignmentLock(v6);
  }
  return result;
}
