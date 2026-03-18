/*
 * XREFs of EtwTraceRetrievePseudoMessage @ 0x1C008B550
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cppppqqq @ 0x1C010F424 (McTemplateK0cppppqqq.c)
 */

void __fastcall EtwTraceRetrievePseudoMessage(char a1, _QWORD *a2)
{
  int v4; // r9d
  int v5; // r8d

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x20) != 0 )
  {
    LOBYTE(v4) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1248);
    McTemplateK0cppppqqq(*a2, (unsigned int)&RetrievePseudoMessage, v5, v4, a1, *a2);
  }
}
