/*
 * XREFs of EtwTraceEndInjectMouse @ 0x1C008AB50
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cddd @ 0x1C00E8AA0 (McTemplateK0cddd.c)
 */

void __fastcall EtwTraceEndInjectMouse(char a1, char a2, char a3)
{
  int v6; // r9d
  int v7; // ecx
  int v8; // r8d

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
  {
    LOBYTE(v6) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1224);
    McTemplateK0cddd(v7, (unsigned int)&EndInjectMouse, v8, v6, a1, a2, a3);
  }
}
