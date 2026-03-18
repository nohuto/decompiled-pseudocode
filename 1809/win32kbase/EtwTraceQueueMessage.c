/*
 * XREFs of EtwTraceQueueMessage @ 0x1C0068A40
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     EtwTraceQueueInputMessage @ 0x1C0068B24 (EtwTraceQueueInputMessage.c)
 *     McTemplateK0cppppqq @ 0x1C00E8CDC (McTemplateK0cppppqq.c)
 *     McTemplateK0qqsp @ 0x1C00EADB0 (McTemplateK0qqsp.c)
 */

__int64 __fastcall EtwTraceQueueMessage(__int64 a1)
{
  __int64 result; // rax
  __int64 ThreadWin32Thread; // rsi
  __int64 v4; // rcx
  int v5; // ebp
  int v6; // edx
  int v7; // r8d
  __int64 CurrentProcess; // r14
  char v9; // r15
  void *v10; // rdi
  void *v11; // rcx
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rsi
  char v15; // bp
  __int64 v16; // rdi
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d

  if ( !*(_DWORD *)(a1 + 24) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v5 = -1;
    CurrentProcess = PsGetCurrentProcess(v4);
    v9 = ThreadWin32Thread ? (unsigned __int8)PsGetThreadId(*(PETHREAD *)ThreadWin32Thread) : -1;
    v10 = &unk_1C01A3F2C;
    v11 = CurrentProcess ? (void *)PsGetProcessImageFileName(CurrentProcess) : &unk_1C01A3F2C;
    if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 0x20) != 0 )
    {
      if ( v11 )
        v10 = v11;
      if ( ThreadWin32Thread )
      {
        v12 = *(_QWORD *)(ThreadWin32Thread + 424);
        if ( v12 )
          v5 = *(_DWORD *)(v12 + 56);
      }
      McTemplateK0qqsp((_DWORD)v11, v6, v7, v5, v9, (__int64)v10, *(_QWORD *)(a1 + 16));
    }
  }
  result = *(unsigned int *)(a1 + 100);
  if ( (result & 4) != 0 )
  {
    if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
    {
      v13 = *(_DWORD *)(a1 + 24);
      LOBYTE(v14) = 0;
      v15 = v13;
      if ( (unsigned int)(v13 - 581) <= 2 )
        v14 = *(_QWORD *)(a1 + 40);
      else
        v15 = 0;
      LOBYTE(v16) = 0;
      if ( (unsigned int)(v13 - 581) <= 2 )
        v16 = *(_QWORD *)(a1 + 32);
      if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
        LOBYTE(v19) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1224);
      else
        LOBYTE(v19) = -1;
      return McTemplateK0cppppqq(
               v17,
               (unsigned int)&QueuePostMessage,
               v18,
               v19,
               a1,
               *(_QWORD *)(a1 + 16),
               v16,
               v14,
               v15,
               *(_DWORD *)(a1 + 48));
    }
  }
  else if ( (result & 8) != 0 )
  {
    return EtwTraceQueueInputMessage(a1);
  }
  return result;
}
