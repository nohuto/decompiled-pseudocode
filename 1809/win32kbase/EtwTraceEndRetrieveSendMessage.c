/*
 * XREFs of EtwTraceEndRetrieveSendMessage @ 0x1C00742A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cp @ 0x1C00E8BD8 (McTemplateK0cp.c)
 */

void __fastcall EtwTraceEndRetrieveSendMessage(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
  {
    LOBYTE(v2) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1224);
    McTemplateK0cp(v3, &EndRetrieveSendMessage, v4, v2, a1);
  }
}
