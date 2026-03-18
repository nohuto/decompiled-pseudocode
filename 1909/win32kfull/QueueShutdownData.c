/*
 * XREFs of QueueShutdownData @ 0x1C01D6C00
 * Callers:
 *     xxxSetInformationThread @ 0x1C000D040 (xxxSetInformationThread.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C0109F70 (NtUserShutdownBlockReasonCreate.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 */

void __fastcall QueueShutdownData(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax

  if ( gspwndBSDR )
  {
    if ( a1 == ghwndBlocking
      || a1 == 0xFFFF
      || (v4 = ValidateHwndEx(a1, 0LL, 0LL)) != 0
      && (v5 = *(_QWORD *)(v4 + 40), *(_DWORD *)(v5 + 236) == 1)
      && (*(_BYTE *)(v5 + 234) & 0x20) == 0 )
    {
      PostEventMessageEx(
        *(struct tagTHREADINFO **)(gspwndBSDR + 16),
        *(_QWORD *)(*(_QWORD *)(gspwndBSDR + 16) + 424LL),
        0x13u,
        gspwndBSDR,
        0x4Au,
        a2,
        a1,
        0LL);
    }
  }
}
