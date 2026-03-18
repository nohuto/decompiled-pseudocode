/*
 * XREFs of EtwTraceConvertTimeOutToBlocking @ 0x1C00B0800
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     McTemplateK0c @ 0x1C010C6E0 (McTemplateK0c.c)
 */

void EtwTraceConvertTimeOutToBlocking()
{
  __int64 v0; // r9
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
  {
    LOBYTE(v0) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1248);
    McTemplateK0c(v2, v1, v3, v0);
  }
}
