/*
 * XREFs of EtwTraceRetrievePostMessage @ 0x1C00771D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cppppqqq @ 0x1C010CAB4 (McTemplateK0cppppqqq.c)
 */

void __fastcall EtwTraceRetrievePostMessage(__int64 a1)
{
  int v2; // r9d
  int v3; // ecx
  int v4; // r8d

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
  {
    LOBYTE(v2) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1248);
    McTemplateK0cppppqqq(v3, (unsigned int)&RetrievePostMessage, v4, v2, a1, *(_QWORD *)(a1 + 16));
  }
}
