/*
 * XREFs of xxxGetControlBrush @ 0x1C012933C
 * Callers:
 *     NtUserGetControlBrush @ 0x1C0129290 (NtUserGetControlBrush.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C012F984 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxGetControlColor @ 0x1C01293EC (xxxGetControlColor.c)
 */

__int64 __fastcall xxxGetControlBrush(struct tagWND *a1, __int64 a2)
{
  struct tagWND *v3; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 ControlColor; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (((*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) + 0x80) & 0xBF) != 0 )
    v3 = (struct tagWND *)*((_QWORD *)a1 + 10);
  else
    v3 = (struct tagWND *)*((_QWORD *)a1 + 12);
  CurrentThread = KeGetCurrentThread();
  if ( !v3 )
    v3 = a1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread, a2);
  v11[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v11;
  v11[1] = v3;
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)v3 + 2);
  ControlColor = xxxGetControlColor(v3);
  ThreadUnlock1(v8, v7, v9);
  return ControlColor;
}
