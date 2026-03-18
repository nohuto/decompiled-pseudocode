/*
 * XREFs of EtwTraceQueueInputMessage @ 0x1C00760D4
 * Callers:
 *     EtwTraceQueueMessage @ 0x1C0075FF0 (EtwTraceQueueMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cppqp @ 0x1C010CD88 (McTemplateK0cppqp.c)
 *     McTemplateK0cpttttttpppqq @ 0x1C010CEB0 (McTemplateK0cpttttttpppqq.c)
 */

_UNKNOWN **__fastcall EtwTraceQueueInputMessage(__int64 a1)
{
  _UNKNOWN **result; // rax
  char v3; // r10
  int v4; // r9d
  int v5; // r8d
  int v6; // ecx
  int v7; // r9d
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  char v11; // r10
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = &retaddr;
  if ( *(_DWORD *)(a1 + 96) )
  {
    if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    {
      if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
        v11 = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1248);
      else
        v11 = -1;
      LOBYTE(v10) = v11;
      return (_UNKNOWN **)McTemplateK0cppqp(
                            v8,
                            (unsigned int)&QueueEventMessage,
                            v9,
                            v10,
                            a1,
                            *(_QWORD *)(a1 + 104),
                            *(_DWORD *)(a1 + 96),
                            *(_QWORD *)(a1 + 16));
    }
  }
  else if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      v3 = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1248);
    else
      v3 = -1;
    v4 = *(_DWORD *)(a1 + 100);
    v5 = -__CFSHR__(v4, 8);
    v6 = -__CFSHR__(v4, 7);
    v7 = -__CFSHR__(v4, 6);
    LOBYTE(v7) = v3;
    return (_UNKNOWN **)McTemplateK0cpttttttpppqq(v6, (unsigned int)&QueueInputMessage, v5, v7, a1);
  }
  return result;
}
