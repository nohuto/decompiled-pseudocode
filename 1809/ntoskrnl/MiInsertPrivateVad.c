/*
 * XREFs of MiInsertPrivateVad @ 0x1400767E0
 * Callers:
 *     MiReserveUserMemory @ 0x1405F2600 (MiReserveUserMemory.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140697060 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateEnclaveVad @ 0x14085A3B8 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     MiAweViewInserter @ 0x140850894 (MiAweViewInserter.c)
 */

__int64 __fastcall MiInsertPrivateVad(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  LONG *v8; // rbp
  KIRQL v9; // al
  unsigned __int8 v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  int v19; // ecx
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 48) & 0x40000) != 0 )
    ++*(_QWORD *)(*(_QWORD *)(a3 + 1296) + 376LL);
  v6 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v7 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  if ( (*(_BYTE *)(a3 + 1464) & 7) == 2 )
    v8 = &dword_14043C7C0;
  else
    v8 = (LONG *)(a3 + 1472);
  v9 = ExAcquireSpinLockExclusive(v8);
  v8[1] = 0;
  v10 = v9;
  v11 = *(_QWORD *)(a3 + 1152);
  ++*(_QWORD *)(a3 + 1592);
  *(_QWORD *)(a3 + 1584) = a1;
  if ( v6 <= v11 >> 12 )
  {
    *(_QWORD *)(a3 + 824) += ((v6 - v7) << 12) + 4096;
    v12 = *(_QWORD *)(a3 + 824);
    if ( *(_QWORD *)(a3 + 816) < v12 )
      *(_QWORD *)(a3 + 816) = v12;
  }
  v13 = *(_QWORD *)(a3 + 1576);
  v14 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  LOBYTE(v15) = 0;
  if ( v13 )
  {
    while ( 1 )
    {
      if ( v14 > (*(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32))
        || v14 >= (*(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32)) )
      {
        v15 = *(_QWORD *)(v13 + 8);
        if ( !v15 )
        {
          LOBYTE(v15) = 1;
          break;
        }
      }
      else
      {
        v15 = *(_QWORD *)v13;
        if ( !*(_QWORD *)v13 )
          break;
      }
      v13 = v15;
    }
  }
  RtlAvlInsertNodeEx((unsigned __int64 *)(a3 + 1576), v13, v15, (_QWORD *)a1);
  v18 = *(_DWORD *)(a1 + 48) & 7;
  if ( v18 == 5 || v18 == 2 && (*(_DWORD *)(a1 + 64) & 0x1000000) != 0 )
    ++*(_DWORD *)(a3 + 1708);
  if ( (*(_DWORD *)(a1 + 48) & 7) == 1 )
    ++*(_QWORD *)(*(_QWORD *)(a3 + 1296) + 240LL);
  if ( v10 != 17 )
    MiUnlockWorkingSetExclusive(a3 + 1280, v10, v16, v17);
  v19 = *(_DWORD *)(a1 + 48);
  result = v19 & 7;
  if ( (*(_BYTE *)(a1 + 48) & 7) == 3 && (v19 & 0x20000) == 0 )
    return MiAweViewInserter(a3, a2);
  return result;
}
