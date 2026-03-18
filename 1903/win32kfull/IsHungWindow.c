/*
 * XREFs of IsHungWindow @ 0x1C00AE860
 * Callers:
 *     xxxSimpleDoSyncPaint @ 0x1C00253B4 (xxxSimpleDoSyncPaint.c)
 *     xxxHungAppDemon @ 0x1C00AE720 (xxxHungAppDemon.c)
 *     xxxInternalDoSyncPaint @ 0x1C00AFE00 (xxxInternalDoSyncPaint.c)
 *     NtUserQueryWindow @ 0x1C00B1580 (NtUserQueryWindow.c)
 *     EditionHandleHungWindow @ 0x1C0137510 (EditionHandleHungWindow.c)
 *     ShouldProcessHungWindow @ 0x1C013CAD4 (ShouldProcessHungWindow.c)
 *     ProcessHungWindow @ 0x1C0150714 (ProcessHungWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C01509A0 (xxxRegisterGhostWindow.c)
 *     xxxRedrawHungWindow @ 0x1C015DC18 (xxxRedrawHungWindow.c)
 *     NtUserSetWindowArrangement @ 0x1C0235770 (NtUserSetWindowArrangement.c)
 *     ?xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z @ 0x1C023EF00 (-xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z.c)
 * Callees:
 *     IsPumpingInputMsgs @ 0x1C00AE918 (IsPumpingInputMsgs.c)
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
