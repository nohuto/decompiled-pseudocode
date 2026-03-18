/*
 * XREFs of xxxGetControlBrush @ 0x1C0155AC4
 * Callers:
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C00EB0B8 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     NtUserGetControlBrush @ 0x1C01559E0 (NtUserGetControlBrush.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxGetControlColor @ 0x1C012C064 (xxxGetControlColor.c)
 */

__int64 __fastcall xxxGetControlBrush(ULONG_PTR a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  ULONG_PTR v6; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 ControlColor; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]

  v3 = a3;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( (((*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) + 0x80) & 0xBF) != 0 )
    v6 = *(_QWORD *)(a1 + 104);
  else
    v6 = *(_QWORD *)(a1 + 120);
  CurrentThread = KeGetCurrentThread();
  if ( !v6 )
    v6 = a1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread, a2, a3);
  v14 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v14;
  v15 = v6;
  if ( v6 )
    HMLockObject(v6);
  ControlColor = xxxGetControlColor(v6, (HICON *)a1, a2, v3);
  ThreadUnlock1(v11, v10, v12);
  return ControlColor;
}
