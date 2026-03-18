/*
 * XREFs of NtUserSetMagnificationDesktopMagnifierOffsetsDWMUpdated @ 0x1C0234E50
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     DwmAsyncMagnSetDesktopMagnifierOffsetsDWMUpdated @ 0x1C0271CD0 (DwmAsyncMagnSetDesktopMagnifierOffsetsDWMUpdated.c)
 */

_BOOL8 __fastcall NtUserSetMagnificationDesktopMagnifierOffsetsDWMUpdated(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // r8
  void *v6; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v6 = (void *)ReferenceDwmApiPort(
                 **(_QWORD **)(*(_QWORD *)(ThreadWin32Thread + 448) + 8LL),
                 *(_QWORD *)(ThreadWin32Thread + 448),
                 v5);
  return (int)DwmAsyncMagnSetDesktopMagnifierOffsetsDWMUpdated(v6) >= 0;
}
