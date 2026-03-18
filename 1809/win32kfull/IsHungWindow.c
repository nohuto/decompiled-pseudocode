/*
 * XREFs of IsHungWindow @ 0x1C0017040
 * Callers:
 *     ProcessHungWindow @ 0x1C0008600 (ProcessHungWindow.c)
 *     xxxHungAppDemon @ 0x1C0016EE0 (xxxHungAppDemon.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0030150 (xxxSimpleDoSyncPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C0070780 (xxxInternalDoSyncPaint.c)
 *     NtUserQueryWindow @ 0x1C00F2B90 (NtUserQueryWindow.c)
 *     ShouldProcessHungWindow @ 0x1C00F2D78 (ShouldProcessHungWindow.c)
 *     EditionHandleHungWindow @ 0x1C012B1F0 (EditionHandleHungWindow.c)
 *     xxxRedrawHungWindow @ 0x1C01354AC (xxxRedrawHungWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C01E3C90 (xxxRegisterGhostWindow.c)
 *     NtUserSetWindowArrangement @ 0x1C021D560 (NtUserSetWindowArrangement.c)
 *     ?xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z @ 0x1C0227278 (-xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z.c)
 * Callees:
 *     IsPumpingInputMsgs @ 0x1C00170F8 (IsPumpingInputMsgs.c)
 */

__int64 __fastcall IsHungWindow(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rax

  v1 = *(_QWORD **)(a1 + 16);
  v3 = 0;
  v4 = v1[56];
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *(_DWORD *)(v4 + 12) <= gdwHungAppTimeout
    || (*(_WORD *)(v4 + 10) & 0x1C07) != 0
    || (unsigned int)PsGetThreadFreezeCount(*v1)
    || (*(_DWORD *)(v1[53] + 12LL) & 0x40) != 0 )
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
