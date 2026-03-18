/*
 * XREFs of EtwTraceBeginDelegateInputCallback @ 0x1C00E5D00
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cpttttttpppqq @ 0x1C00E9190 (McTemplateK0cpttttttpppqq.c)
 */

_UNKNOWN **__fastcall EtwTraceBeginDelegateInputCallback(__int64 a1)
{
  _UNKNOWN **result; // rax
  int v3; // r9d
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = &retaddr;
  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      LOBYTE(v3) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1224);
    else
      LOBYTE(v3) = -1;
    return (_UNKNOWN **)McTemplateK0cpttttttpppqq(
                          -__CFSHR__(*(_DWORD *)(a1 + 100), 7),
                          (unsigned int)&BeginDelegateInputCallback,
                          -__CFSHR__(*(_DWORD *)(a1 + 100), 8),
                          v3,
                          a1);
  }
  return result;
}
