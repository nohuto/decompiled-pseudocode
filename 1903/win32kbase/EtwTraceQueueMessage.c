/*
 * XREFs of EtwTraceQueueMessage @ 0x1C0079AF0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     EtwTraceQueueInputMessage @ 0x1C0079BD4 (EtwTraceQueueInputMessage.c)
 *     McTemplateK0cppppqq @ 0x1C010F36C (McTemplateK0cppppqq.c)
 *     McTemplateK0qqsp @ 0x1C0111724 (McTemplateK0qqsp.c)
 */

__int64 __fastcall EtwTraceQueueMessage(__int64 a1)
{
  __int64 result; // rax
  __int64 ThreadWin32Thread; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebp
  int v7; // edx
  int v8; // r8d
  __int64 CurrentProcess; // r14
  char v10; // r15
  void *v11; // rdi
  void *v12; // rcx
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rsi
  char v16; // bp
  __int64 v17; // rdi
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d

  if ( !*(_DWORD *)(a1 + 24) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v6 = -1;
    CurrentProcess = PsGetCurrentProcess(v5, v4);
    v10 = ThreadWin32Thread ? (unsigned __int8)PsGetThreadId(*(PETHREAD *)ThreadWin32Thread) : -1;
    v11 = &unk_1C01EBCD8;
    v12 = CurrentProcess ? (void *)PsGetProcessImageFileName(CurrentProcess) : &unk_1C01EBCD8;
    if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 0x20) != 0 )
    {
      if ( v12 )
        v11 = v12;
      if ( ThreadWin32Thread )
      {
        v13 = *(_QWORD *)(ThreadWin32Thread + 416);
        if ( v13 )
          v6 = *(_DWORD *)(v13 + 56);
      }
      McTemplateK0qqsp((_DWORD)v12, v7, v8, v6, v10, (__int64)v11, *(_QWORD *)(a1 + 16));
    }
  }
  result = *(unsigned int *)(a1 + 100);
  if ( (result & 4) != 0 )
  {
    if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
    {
      v14 = *(_DWORD *)(a1 + 24);
      LOBYTE(v15) = 0;
      v16 = v14;
      if ( (unsigned int)(v14 - 581) <= 2 )
        v15 = *(_QWORD *)(a1 + 40);
      else
        v16 = 0;
      LOBYTE(v17) = 0;
      if ( (unsigned int)(v14 - 581) <= 2 )
        v17 = *(_QWORD *)(a1 + 32);
      if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
        LOBYTE(v20) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1248);
      else
        LOBYTE(v20) = -1;
      return McTemplateK0cppppqq(
               v18,
               (unsigned int)&QueuePostMessage,
               v19,
               v20,
               a1,
               *(_QWORD *)(a1 + 16),
               v17,
               v15,
               v16,
               *(_DWORD *)(a1 + 48));
    }
  }
  else if ( (result & 8) != 0 )
  {
    return EtwTraceQueueInputMessage(a1);
  }
  return result;
}
