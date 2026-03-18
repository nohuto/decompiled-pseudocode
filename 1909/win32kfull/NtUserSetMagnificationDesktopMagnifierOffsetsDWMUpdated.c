/*
 * XREFs of NtUserSetMagnificationDesktopMagnifierOffsetsDWMUpdated @ 0x1C0234830
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     DwmAsyncMagnSetDesktopMagnifierOffsetsDWMUpdated @ 0x1C02715C0 (DwmAsyncMagnSetDesktopMagnifierOffsetsDWMUpdated.c)
 */

_BOOL8 __fastcall NtUserSetMagnificationDesktopMagnifierOffsetsDWMUpdated(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // r8
  void *v5; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v5 = (void *)ReferenceDwmApiPort(
                 **(_QWORD **)(*(_QWORD *)(ThreadWin32Thread + 448) + 8LL),
                 *(_QWORD *)(ThreadWin32Thread + 448),
                 v4);
  return (int)DwmAsyncMagnSetDesktopMagnifierOffsetsDWMUpdated(v5) >= 0;
}
