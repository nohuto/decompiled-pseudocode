/*
 * XREFs of MiIssueFlowThroughFault @ 0x140003D9C
 * Callers:
 *     MiHandleCollidedFault @ 0x140003C24 (MiHandleCollidedFault.c)
 * Callees:
 *     MiResolveMappedFileFault @ 0x14002BE50 (MiResolveMappedFileFault.c)
 *     PsGetIoPriorityThread @ 0x1400B6A80 (PsGetIoPriorityThread.c)
 *     MiResolvePageFileFault @ 0x140154C44 (MiResolvePageFileFault.c)
 */

__int64 __fastcall MiIssueFlowThroughFault(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  char v7; // bl
  struct _KTHREAD *CurrentThread; // r10
  int v10; // r11d

  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  v10 = *(_DWORD *)(a4 + 192);
  *a7 = 2;
  if ( (v10 & 0x80u) != 0 && (int)PsGetIoPriorityThread(CurrentThread) >= 2
    || CurrentThread == *(struct _KTHREAD **)(a4 + 152)
    || (CurrentThread->MiscFlags & 0x8000) != 0
    || LODWORD(CurrentThread->Process[2].ActiveProcessors.Bitmap[13]) && (*(_QWORD *)(a4 + 256) || (v10 & 8) != 0) )
  {
    v7 = 1;
  }
  if ( (*(_QWORD *)(a5 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(a5 + 16) & 0x400LL) != 0 )
  {
    if ( !CurrentThread->WaitBlock[3].SpareLong
      && (CurrentThread->MiscFlags & 0x400) == 0
      && v7 != 1
      && !*(_BYTE *)(a1 + 68)
      || (v10 & 0x20) != 0 )
    {
      return 0LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *a7 = 1;
    return MiResolveMappedFileFault(a1, a2, a3, a6);
  }
  else
  {
    if ( !BYTE6(CurrentThread[1].Queue) && (v10 & 8) == 0 && v7 != 1 || (v10 & 0x20) != 0 )
      return 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(a5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *a7 = 1;
    return MiResolvePageFileFault(a1, a2, a3, a6);
  }
}
