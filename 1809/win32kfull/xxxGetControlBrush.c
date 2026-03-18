/*
 * XREFs of xxxGetControlBrush @ 0x1C014C484
 * Callers:
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0106C88 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     NtUserGetControlBrush @ 0x1C014C3C0 (NtUserGetControlBrush.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxGetControlColor @ 0x1C007B6E0 (xxxGetControlColor.c)
 */

__int64 __fastcall xxxGetControlBrush(volatile signed __int32 *a1, __int64 a2)
{
  volatile signed __int32 *v3; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 ControlColor; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (((*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) + 0x80) & 0xBF) != 0 )
    v3 = (volatile signed __int32 *)*((_QWORD *)a1 + 10);
  else
    v3 = (volatile signed __int32 *)*((_QWORD *)a1 + 12);
  CurrentThread = KeGetCurrentThread();
  if ( !v3 )
    v3 = a1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread, a2);
  v10[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v10;
  v10[1] = v3;
  if ( v3 )
    _InterlockedIncrement(v3 + 2);
  ControlColor = xxxGetControlColor((struct tagWND *)v3);
  ThreadUnlock1(v8, v7);
  return ControlColor;
}
