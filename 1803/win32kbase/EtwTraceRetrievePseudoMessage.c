/*
 * XREFs of EtwTraceRetrievePseudoMessage @ 0x1C0064370
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cppppqqq @ 0x1C00AD920 (McTemplateK0cppppqqq.c)
 */

void __fastcall EtwTraceRetrievePseudoMessage(char a1, _QWORD *a2)
{
  int v4; // r9d
  int v5; // r8d

  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x2000) != 0 )
  {
    LOBYTE(v4) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1216);
    McTemplateK0cppppqqq(*a2, (unsigned int)&RetrievePseudoMessage, v5, v4, a1, *a2);
  }
}
