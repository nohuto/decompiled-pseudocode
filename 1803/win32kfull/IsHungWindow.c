/*
 * XREFs of IsHungWindow @ 0x1C001E340
 * Callers:
 *     xxxHungAppDemon @ 0x1C001DAC0 (xxxHungAppDemon.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0026490 (xxxSimpleDoSyncPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C0029330 (xxxInternalDoSyncPaint.c)
 *     NtUserQueryWindow @ 0x1C0070EC0 (NtUserQueryWindow.c)
 *     ProcessHungWindow @ 0x1C00BC598 (ProcessHungWindow.c)
 *     ShouldProcessHungWindow @ 0x1C00C0BD4 (ShouldProcessHungWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C00E6E60 (xxxRegisterGhostWindow.c)
 *     EditionHandleHungWindow @ 0x1C010A490 (EditionHandleHungWindow.c)
 *     xxxRedrawHungWindow @ 0x1C01360F8 (xxxRedrawHungWindow.c)
 *     NtUserRequestMoveSizeOperation @ 0x1C01F4300 (NtUserRequestMoveSizeOperation.c)
 *     NtUserSetWindowArrangement @ 0x1C01F5B90 (NtUserSetWindowArrangement.c)
 * Callees:
 *     IsPumpingInputMsgs @ 0x1C001E3F0 (IsPumpingInputMsgs.c)
 */

__int64 __fastcall IsHungWindow(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rax

  v1 = *(_QWORD **)(a1 + 16);
  v3 = 0;
  v4 = v1[55];
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *(_DWORD *)(v4 + 12) <= gdwHungAppTimeout
    || (*(_WORD *)(v4 + 10) & 0x1C07) != 0
    || (unsigned int)PsGetThreadFreezeCount(*v1)
    || (*(_DWORD *)(v1[52] + 12LL) & 0x40) != 0 )
  {
    if ( !(unsigned int)IsPumpingInputMsgs(a1) )
      return 1;
    return v3;
  }
  else
  {
    return 1;
  }
}
