/*
 * XREFs of EtwTraceWakeDIT @ 0x1C00941D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cq @ 0x1C010F0B8 (McTemplateK0cq.c)
 */

void __fastcall EtwTraceWakeDIT(int a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x20) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      LOBYTE(v4) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1248);
    else
      LOBYTE(v4) = -1;
    McTemplateK0cq(v2, &EtwWakeDIT, v3, v4, a1);
  }
}
