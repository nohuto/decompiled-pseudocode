/*
 * XREFs of MiLeapPrefetch @ 0x1402AECD8
 * Callers:
 *     MiInPagePageTable @ 0x140098720 (MiInPagePageTable.c)
 *     MiPrefetchVirtualMemory @ 0x1400EA1C0 (MiPrefetchVirtualMemory.c)
 *     MiPrefetchJumpVad @ 0x1402AF3B4 (MiPrefetchJumpVad.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MiLeapPrefetch(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned int v4; // esi
  unsigned __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  char Queue; // al
  _KPROCESS *Process; // rbp
  unsigned __int8 v9; // r9
  unsigned __int64 i; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD **v16; // rax
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  unsigned __int64 v20; // r8

  v2 = a2;
  v4 = 1;
  if ( !a2 )
  {
    v5 = *(_QWORD *)(a1[1] + 16LL * a1[3]) + (a1[4] << 12);
    if ( v5 > 0x7FFFFFFEFFFFLL )
      return v4;
    CurrentThread = KeGetCurrentThread();
    Queue = (char)CurrentThread[1].Queue;
    if ( Queue < 0 || ((unsigned __int8)~(BYTE1(CurrentThread[1].Queue) >> 5) & ((Queue & 3) == 0)) == 0 )
      return v4;
    Process = CurrentThread->ApcState.Process;
    v9 = MiLockWorkingSetShared((__int64)&Process[1].IdealNode[12]);
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 || !Process[2].Affinity.Bitmap[6] )
    {
      v4 = 0;
LABEL_32:
      MiUnlockWorkingSetShared((__int64)&Process[1].IdealNode[12], v9);
      return v4;
    }
    i = Process[2].Affinity.Bitmap[4];
    v11 = v5 >> 12;
    while ( 1 )
    {
      if ( !i )
        goto LABEL_15;
      v12 = *(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32);
      if ( v11 < v12 )
      {
        v13 = *(_QWORD *)i;
      }
      else
      {
        if ( v11 <= (*(unsigned int *)(i + 28) | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) )
          goto LABEL_32;
        v13 = *(_QWORD *)(i + 8);
      }
      if ( !v13 )
        break;
      i = v13;
    }
    if ( v12 < v11 )
    {
      v16 = *(_QWORD ***)(i + 8);
      v17 = i;
      if ( v16 )
      {
        v18 = *v16;
        for ( i = *(_QWORD *)(i + 8); v18; v18 = (_QWORD *)*v18 )
          i = (unsigned __int64)v18;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v17 )
            break;
          v17 = i;
        }
      }
      if ( !i )
      {
LABEL_15:
        MiUnlockWorkingSetShared((__int64)&Process[1].IdealNode[12], v9);
        v14 = a1[3];
        goto LABEL_16;
      }
    }
    v2 = (*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32)) << 12;
    MiUnlockWorkingSetShared((__int64)&Process[1].IdealNode[12], v9);
  }
  v14 = a1[3];
  v19 = (_QWORD *)(a1[1] + 16 * v14);
  v20 = *v19 & 0xFFFFFFFFFFFFF000uLL;
  if ( v2 < v20 || v2 >= v20 + ((v19[1] + 4095LL + (*v19 & 0xFFFLL)) & 0xFFFFFFFFFFFFF000uLL) )
  {
LABEL_16:
    a1[4] = 0LL;
    a1[3] = v14 + 1;
  }
  else
  {
    a1[4] = (v2 - v20) >> 12;
  }
  return v4;
}
