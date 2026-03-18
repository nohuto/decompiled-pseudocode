/*
 * XREFs of ClearWakeBit @ 0x1C00720F0
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000BDB0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserGetRawInputBuffer @ 0x1C022DE50 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall ClearWakeBit(__int64 a1, __int16 a2, int a3)
{
  unsigned int DLT; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v11; // rsi
  __int64 *ThreadWin32Thread; // rax

  if ( !a3 )
    goto LABEL_9;
  DLT = DLT_QUEUE::getDLT();
  GetDomainLockRef(DLT);
  result = *(_QWORD *)(a1 + 424);
  if ( !*(_DWORD *)(result + 40) )
  {
    CurrentThread = KeGetCurrentThread();
    v11 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v7, v6, v8) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v11 = *ThreadWin32Thread;
    }
    result = *(_QWORD *)(v11 + 456);
    if ( !*(_QWORD *)(result + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 424) + 396LL) & 0x20) != 0 )
        a2 &= ~2u;
LABEL_9:
      result = *(_QWORD *)(a1 + 440);
      *(_WORD *)(result + 6) &= ~a2;
    }
  }
  return result;
}
