/*
 * XREFs of PtiFromThreadId @ 0x1C007F0E0
 * Callers:
 *     NtMITSetLastInputRecipient @ 0x1C0115280 (NtMITSetLastInputRecipient.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall PtiFromThreadId(int a1)
{
  HANDLE v1; // rdi
  NTSTATUS v2; // ebx
  __int64 ThreadWin32Thread; // rbx
  int v4; // eax
  PETHREAD Thread; // [rsp+48h] [rbp+10h] BYREF

  v1 = (HANDLE)a1;
  v2 = PsLookupThreadByThreadId((HANDLE)a1, &Thread);
  if ( v2 >= 0 && (unsigned int)PsGetThreadSessionId(Thread) != gSessionId )
  {
    ObfDereferenceObject(Thread);
    return 0LL;
  }
  if ( v2 < 0 )
    return 0LL;
  if ( PsIsThreadTerminating(Thread) )
    ThreadWin32Thread = 0LL;
  else
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Thread);
  if ( ThreadWin32Thread )
  {
    if ( PsGetThreadId(*(PETHREAD *)ThreadWin32Thread) == v1
      && (v4 = *(_DWORD *)(ThreadWin32Thread + 480), (v4 & 0x1000000) != 0) )
    {
      if ( (v4 & 1) != 0 )
        ThreadWin32Thread = 0LL;
    }
    else
    {
      ThreadWin32Thread = 0LL;
    }
  }
  ObfDereferenceObject(Thread);
  return ThreadWin32Thread;
}
