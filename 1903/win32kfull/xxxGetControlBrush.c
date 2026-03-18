/*
 * XREFs of xxxGetControlBrush @ 0x1C0154D04
 * Callers:
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C000BF58 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     NtUserGetControlBrush @ 0x1C0154C20 (NtUserGetControlBrush.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxGetControlColor @ 0x1C008DB14 (xxxGetControlColor.c)
 */

__int64 __fastcall xxxGetControlBrush(__int64 *a1, HWND a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  struct tagWND *v7; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 ControlColor; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v16; // [rsp+28h] [rbp-20h]
  __int64 v17; // [rsp+30h] [rbp-18h]

  v4 = a3;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  LOBYTE(a4) = (*(_BYTE *)(a1[5] + 31) & 0xC0) + 0x80;
  if ( (a4 & 0xBF) != 0 )
    v7 = (struct tagWND *)a1[13];
  else
    v7 = (struct tagWND *)a1[15];
  CurrentThread = KeGetCurrentThread();
  if ( !v7 )
    v7 = (struct tagWND *)a1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread, (__int64)a2, a3, a4);
  v15 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v15;
  v16 = v7;
  if ( v7 )
    HMLockObject(v7);
  ControlColor = xxxGetControlColor(v7, a1, a2, v4);
  ThreadUnlock1(v12, v11, v13);
  return ControlColor;
}
