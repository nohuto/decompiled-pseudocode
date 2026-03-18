/*
 * XREFs of UserSurfaceAccessCheck @ 0x1C001F650
 * Callers:
 *     UserScreenAccessCheck @ 0x1C001E7D0 (UserScreenAccessCheck.c)
 *     NtGdiDdDDIGetDeviceState @ 0x1C001E800 (NtGdiDdDDIGetDeviceState.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall UserSurfaceAccessCheck(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 ThreadWin32Thread; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  _QWORD *v7; // rax

  v2 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v5 = ThreadWin32Thread;
  if ( !a1
    || (v6 = *(_QWORD *)(ThreadWin32Thread + 448)) != 0
    && (v7 = *(_QWORD **)(v6 + 8), v4 = (_QWORD *)*v7, *(_QWORD *)*v7 == a1)
    || (*(_DWORD *)(v5 + 480) & 8) != 0
    || (*(_DWORD *)(v5 + 1200) & 4) != 0 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4, v5) + 12) & 0x40010) == 0x40010 )
      return 1;
  }
  return v2;
}
