/*
 * XREFs of RestartCtxtCallback @ 0x1C001E9F0
 * Callers:
 *     <none>
 * Callees:
 *     RestartContext @ 0x1C001EAF0 (RestartContext.c)
 */

__int64 __fastcall RestartCtxtCallback(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  struct _KTHREAD *CurrentThread; // r10
  __int64 v4; // r11
  __int64 v5; // rdx

  v1 = a1 - 328;
  if ( a1 == 328 )
    v2 = 0LL;
  else
    v2 = *(_QWORD *)(v1 + 408);
  CurrentThread = KeGetCurrentThread();
  v4 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_1C0082830 )
  {
    v5 = 9LL * (_InterlockedExchangeAdd((_DWORD *)&qword_1C0082828 + 1, 1u) % (unsigned int)qword_1C0082828);
    *((_QWORD *)qword_1C0082830 + v5 + 1) = MEMORY[0xFFFFF78000000008];
    *((_DWORD *)qword_1C0082830 + 2 * v5) = 1381188418;
    *((_QWORD *)qword_1C0082830 + v5 + 2) = CurrentThread;
    *((_QWORD *)qword_1C0082830 + v5 + 3) = v2;
    *((_QWORD *)qword_1C0082830 + v5 + 4) = v1;
    *((_QWORD *)qword_1C0082830 + v5 + 5) = v4;
    *((_QWORD *)qword_1C0082830 + v5 + 6) = v1;
    *((_QWORD *)qword_1C0082830 + v5 + 7) = 0LL;
    *((_QWORD *)qword_1C0082830 + v5 + 8) = 0LL;
  }
  return RestartContext((PSLIST_ENTRY)v1);
}
