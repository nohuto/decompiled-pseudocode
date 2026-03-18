/*
 * XREFs of QueueShutdownData @ 0x1C01C3A80
 * Callers:
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     xxxSetInformationThread @ 0x1C00BB740 (xxxSetInformationThread.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C0124850 (NtUserShutdownBlockReasonCreate.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 */

void __fastcall QueueShutdownData(LARGE_INTEGER a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax

  if ( gspwndBSDR )
  {
    if ( a1.QuadPart == ghwndBlocking
      || a1.QuadPart == 0xFFFF
      || (v4 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))ValidateHwndEx)((LARGE_INTEGER)a1.QuadPart, 0LL, 0LL)) != 0
      && (v5 = *(_QWORD *)(v4 + 40), *(_DWORD *)(v5 + 236) == 1)
      && (*(_BYTE *)(v5 + 234) & 0x20) == 0 )
    {
      PostEventMessageEx(
        *(struct tagTHREADINFO **)(gspwndBSDR + 16),
        *(_QWORD *)(*(_QWORD *)(gspwndBSDR + 16) + 432LL),
        0x13u,
        (InputTransform *)gspwndBSDR,
        0x4Au,
        a2,
        a1,
        0LL);
    }
  }
}
