/*
 * XREFs of EtwTraceQueueMessage @ 0x1C005D040
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     EtwTraceQueueInputMessage @ 0x1C005D118 (EtwTraceQueueInputMessage.c)
 *     McTemplateK0cppppqq @ 0x1C00AD868 (McTemplateK0cppppqq.c)
 *     McTemplateK0qqsp @ 0x1C00AFB78 (McTemplateK0qqsp.c)
 */

__int64 __fastcall EtwTraceQueueMessage(__int64 a1)
{
  __int64 result; // rax
  __int64 ThreadWin32Thread; // rsi
  int v4; // ebp
  int v5; // edx
  int v6; // r8d
  __int64 CurrentProcess; // r14
  char v8; // r15
  void *v9; // rdi
  void *v10; // rcx
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rsi
  char v14; // bp
  __int64 v15; // rdi
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d

  if ( !*(_DWORD *)(a1 + 24) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v4 = -1;
    CurrentProcess = PsGetCurrentProcess();
    v8 = ThreadWin32Thread ? (unsigned __int8)PsGetThreadId(*(PETHREAD *)ThreadWin32Thread) : -1;
    v9 = &unk_1C0180445;
    v10 = CurrentProcess ? (void *)PsGetProcessImageFileName(CurrentProcess) : &unk_1C0180445;
    if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 0x20) != 0 )
    {
      if ( v10 )
        v9 = v10;
      if ( ThreadWin32Thread )
      {
        v11 = *(_QWORD *)(ThreadWin32Thread + 416);
        if ( v11 )
          v4 = *(_DWORD *)(v11 + 56);
      }
      McTemplateK0qqsp((_DWORD)v10, v5, v6, v4, v8, (__int64)v9, *(_QWORD *)(a1 + 16));
    }
  }
  result = *(unsigned int *)(a1 + 100);
  if ( (result & 4) != 0 )
  {
    if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
    {
      v12 = *(_DWORD *)(a1 + 24);
      LOBYTE(v13) = 0;
      v14 = v12;
      if ( (unsigned int)(v12 - 581) <= 2 )
        v13 = *(_QWORD *)(a1 + 40);
      else
        v14 = 0;
      LOBYTE(v15) = 0;
      if ( (unsigned int)(v12 - 581) <= 2 )
        v15 = *(_QWORD *)(a1 + 32);
      if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
        LOBYTE(v18) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1216);
      else
        LOBYTE(v18) = -1;
      return McTemplateK0cppppqq(
               v16,
               (unsigned int)&QueuePostMessage,
               v17,
               v18,
               a1,
               *(_QWORD *)(a1 + 16),
               v15,
               v13,
               v14,
               *(_DWORD *)(a1 + 48));
    }
  }
  else if ( (result & 8) != 0 )
  {
    return EtwTraceQueueInputMessage(a1);
  }
  return result;
}
