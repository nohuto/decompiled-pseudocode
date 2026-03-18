/*
 * XREFs of MiInsertVad @ 0x14015A7D0
 * Callers:
 *     MiDeletePartialVad @ 0x1400ABFA8 (MiDeletePartialVad.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140118F14 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x140196F5C (MiInsertViewOfPhysicalSection.c)
 *     MiReInsertPlaceholderVad @ 0x1402DEDC0 (MiReInsertPlaceholderVad.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     RtlAvlInsertNodeEx @ 0x140072C40 (RtlAvlInsertNodeEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     MiIsVadLargePrivate @ 0x140072F8C (MiIsVadLargePrivate.c)
 */

void __fastcall MiInsertVad(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r13
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r15
  LONG *SharedVm; // rbx
  KIRQL v10; // al
  char v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9

  v3 = a2 + 1280;
  v7 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v8 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  if ( (a3 & 1) != 0 )
  {
    SharedVm = MiGetSharedVm(a2 + 1280);
    v10 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v11 = v10;
  }
  else
  {
    v11 = 17;
  }
  v12 = *(_QWORD *)(a2 + 1152);
  ++*(_QWORD *)(a2 + 1640);
  *(_QWORD *)(a2 + 1632) = a1;
  if ( v7 <= v12 >> 12 && (a3 & 2) == 0 )
  {
    *(_QWORD *)(a2 + 832) += ((v7 - v8) << 12) + 4096;
    v13 = *(_QWORD *)(a2 + 832);
    if ( *(_QWORD *)(a2 + 824) < v13 )
      *(_QWORD *)(a2 + 824) = v13;
  }
  v14 = *(_QWORD *)(a2 + 1624);
  v15 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  LOBYTE(v16) = 0;
  if ( v14 )
  {
    while ( 1 )
    {
      if ( v15 <= (*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32))
        && v15 < (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) )
      {
        v16 = *(_QWORD *)v14;
        if ( !*(_QWORD *)v14 )
          break;
      }
      else
      {
        v16 = *(_QWORD *)(v14 + 8);
        if ( !v16 )
        {
          LOBYTE(v16) = 1;
          break;
        }
      }
      v14 = v16;
    }
  }
  RtlAvlInsertNodeEx((unsigned __int64 *)(a2 + 1624), v14, v16, (_QWORD *)a1);
  if ( MiIsVadLargePrivate(a1) && (unsigned __int64)MiVadPageSizes[(*(_DWORD *)(a1 + 48) >> 18) & 3] >= 0x200 )
    ++*(_DWORD *)(a2 + 1756);
  if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x10 )
    ++*(_QWORD *)(*(_QWORD *)(a2 + 1296) + 304LL);
  if ( v11 != 17 )
  {
    LOBYTE(v17) = v11;
    MiUnlockWorkingSetExclusive(v3, v17, v18, v19);
  }
}
