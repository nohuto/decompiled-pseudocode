/*
 * XREFs of MiInsertVad @ 0x1401101EC
 * Callers:
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010FCB8 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x14018CDD4 (MiInsertViewOfPhysicalSection.c)
 *     MiReInsertPlaceholderVad @ 0x1402C5080 (MiReInsertPlaceholderVad.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiVadMapsLargeImage @ 0x140074A00 (MiVadMapsLargeImage.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiInsertVad(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r13
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r15
  LONG *SharedVm; // rbx
  KIRQL v10; // al
  unsigned __int8 v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9

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
  ++*(_QWORD *)(a2 + 1592);
  *(_QWORD *)(a2 + 1584) = a1;
  if ( v7 <= v12 >> 12 && (a3 & 2) == 0 )
  {
    *(_QWORD *)(a2 + 824) += ((v7 - v8) << 12) + 4096;
    v13 = *(_QWORD *)(a2 + 824);
    if ( *(_QWORD *)(a2 + 816) < v13 )
      *(_QWORD *)(a2 + 816) = v13;
  }
  v14 = *(_QWORD *)(a2 + 1576);
  v15 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  LOBYTE(v16) = 0;
  if ( v14 )
  {
    while ( 1 )
    {
      if ( v15 > (*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32))
        || v15 >= (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) )
      {
        v16 = *(_QWORD *)(v14 + 8);
        if ( !v16 )
        {
          LOBYTE(v16) = 1;
          break;
        }
      }
      else
      {
        v16 = *(_QWORD *)v14;
        if ( !*(_QWORD *)v14 )
          break;
      }
      v14 = v16;
    }
  }
  RtlAvlInsertNodeEx((unsigned __int64 *)(a2 + 1576), v14, v16, (_QWORD *)a1);
  if ( (*(_BYTE *)(a1 + 48) & 7) == 5 || MiVadMapsLargeImage(a1) )
    ++*(_DWORD *)(a2 + 1708);
  if ( (*(_DWORD *)(a1 + 48) & 7) == 1 )
    ++*(_QWORD *)(*(_QWORD *)(a2 + 1296) + 240LL);
  if ( v11 != 17 )
    MiUnlockWorkingSetExclusive(v3, v11, v17, v18);
}
