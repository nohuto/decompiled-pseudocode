/*
 * XREFs of MiInsertPrivateVad @ 0x140071540
 * Callers:
 *     MiReserveUserMemory @ 0x140609670 (MiReserveUserMemory.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14067F064 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateEnclaveVad @ 0x14089286C (MiAllocateEnclaveVad.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140072EB0 (RtlAvlInsertNodeEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiIsVadLargePrivate @ 0x1400731FC (MiIsVadLargePrivate.c)
 *     MiAweViewInserter @ 0x1408957D0 (MiAweViewInserter.c)
 */

__int64 __fastcall MiInsertPrivateVad(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  LONG *v8; // rsi
  KIRQL v9; // al
  KIRQL v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 *v13; // rdx
  unsigned __int64 v14; // r8
  __int64 *v15; // rax
  __int64 result; // rax

  if ( MiVadPageSizes[(*(_DWORD *)(a1 + 48) >> 18) & 3] == 16 )
    ++*(_QWORD *)(*(_QWORD *)(a3 + 1296) + 424LL);
  v6 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v7 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  if ( (*(_BYTE *)(a3 + 1464) & 7) == 2 )
    v8 = &dword_140466F00;
  else
    v8 = (LONG *)(a3 + 1472);
  v9 = ExAcquireSpinLockExclusive(v8);
  v8[1] = 0;
  v10 = v9;
  v11 = *(_QWORD *)(a3 + 1152);
  ++*(_QWORD *)(a3 + 1640);
  *(_QWORD *)(a3 + 1632) = a1;
  if ( v6 <= v11 >> 12 )
  {
    *(_QWORD *)(a3 + 832) += ((v6 - v7) << 12) + 4096;
    v12 = *(_QWORD *)(a3 + 832);
    if ( *(_QWORD *)(a3 + 824) < v12 )
      *(_QWORD *)(a3 + 824) = v12;
  }
  v13 = *(__int64 **)(a3 + 1624);
  v14 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  LOBYTE(v15) = 0;
  if ( v13 )
  {
    while ( 1 )
    {
      if ( v14 <= (*((unsigned int *)v13 + 7) | ((unsigned __int64)*((unsigned __int8 *)v13 + 33) << 32))
        && v14 < (*((unsigned int *)v13 + 6) | ((unsigned __int64)*((unsigned __int8 *)v13 + 32) << 32)) )
      {
        v15 = (__int64 *)*v13;
        if ( !*v13 )
          break;
      }
      else
      {
        v15 = (__int64 *)v13[1];
        if ( !v15 )
        {
          LOBYTE(v15) = 1;
          break;
        }
      }
      v13 = v15;
    }
  }
  RtlAvlInsertNodeEx(a3 + 1624, v13, (unsigned __int8)v15, a1);
  if ( (unsigned int)MiIsVadLargePrivate(a1)
    && (unsigned __int64)MiVadPageSizes[(*(_DWORD *)(a1 + 48) >> 18) & 3] >= 0x200 )
  {
    ++*(_DWORD *)(a3 + 1756);
  }
  if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x10 )
    ++*(_QWORD *)(*(_QWORD *)(a3 + 1296) + 304LL);
  if ( v10 != 17 )
    MiUnlockWorkingSetExclusive(a3 + 1280, v10);
  result = *(_DWORD *)(a1 + 48) & 0x70;
  if ( (*(_BYTE *)(a1 + 48) & 0x70) == 0x30 && (*(_DWORD *)(a1 + 48) & 0x3100000) != 0x2100000 )
    return MiAweViewInserter(a3, a2);
  return result;
}
