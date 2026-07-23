/*
 * XREFs of RtlpHpLfhSubsegmentDecommitPages @ 0x18001CA30
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180019B90 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhOwnerCompact @ 0x18002098C (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentFindEmptyUnits @ 0x18001D624 (RtlpHpLfhSubsegmentFindEmptyUnits.c)
 *     RtlpHpScheduleCompaction @ 0x18001D824 (RtlpHpScheduleCompaction.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x180077440 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RtlpHpLfhSubsegmentDecommitPages(_RTL_SRWLOCK *a1, __int64 a2, int a3, unsigned int a4, char a5)
{
  int v5; // r14d
  unsigned int v6; // ebx
  unsigned int v10; // esi
  unsigned __int64 Value; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdi
  unsigned int EmptyUnits; // eax
  unsigned int v20; // r15d
  char v21; // cl
  unsigned int v22; // edi
  unsigned int v23; // ebx
  unsigned int v24; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v25; // [rsp+88h] [rbp+20h]

  v25 = a4;
  v5 = 0;
  v6 = a4;
  v10 = 1;
  if ( a3 >= 0 )
    v10 = a3;
  if ( (RtlpHpLfhPerfFlags & 0x20) == 0 || a3 < 0 || (Value = a1->Value, (*(_BYTE *)(a1->Value + 13) & 8) != 0) )
  {
LABEL_15:
    if ( v10 >= *(unsigned __int8 *)(a2 + 45) )
      return;
    while ( 1 )
    {
      EmptyUnits = RtlpHpLfhSubsegmentFindEmptyUnits(a2, v10, &v24);
      v10 = EmptyUnits;
      if ( EmptyUnits == -1 )
      {
LABEL_17:
        if ( v5 )
        {
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
          if ( (a5 & 1) == 0 )
            RtlReleaseSRWLockShared(a1 + 9);
        }
        return;
      }
      v20 = v24;
      if ( v24 < v6 )
      {
        if ( a3 >= 0 )
          goto LABEL_17;
      }
      else
      {
        if ( !v5 )
        {
          if ( (a5 & 1) == 0 )
            RtlAcquireSRWLockShared(a1 + 9);
          v5 = 2;
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
          goto LABEL_28;
        }
        v21 = *(_BYTE *)(a2 + 44);
        v22 = EmptyUnits << v21;
        v23 = v24 << v21;
        ((void (__fastcall *)(unsigned __int64, __int64, _QWORD))((unsigned __int64)a1 ^ RtlpHpHeapGlobals ^ a1[4].Value))(
          a1->Value,
          a2 + (EmptyUnits << v21),
          v24 << v21);
        RtlpHpLfhSubsegmentDecBlockCounts(a1, a2, v22, v23);
        if ( a3 >= 0 )
          goto LABEL_17;
        v6 = v25;
      }
      v10 += v20;
LABEL_28:
      if ( v10 >= *(unsigned __int8 *)(a2 + 45) )
        goto LABEL_17;
    }
  }
  v12 = *(__int16 *)(Value + 22);
  v13 = *(_QWORD *)(v12 + Value + 8);
  v14 = *(_QWORD *)(v12 + Value + 24);
  v15 = *(_QWORD *)(v12 + Value + 16);
  v16 = v13 >> *(_BYTE *)(Value + 11);
  if ( v16 <= 8 )
    v16 = 8LL;
  v17 = v13 >> *(_BYTE *)(Value + 12);
  if ( v17 <= 8 )
    v17 = 8LL;
  v18 = v15 + v14;
  if ( v18 > v16 && (int)RtlpHpScheduleCompaction() < 0 || v18 > v17 )
  {
    v6 = v25;
    goto LABEL_15;
  }
}
