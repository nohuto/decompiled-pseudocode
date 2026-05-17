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
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x180077430 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentDecommitPages(__int64 a1, __int64 a2, int a3, unsigned int a4, char a5)
{
  int v5; // r14d
  unsigned int v6; // ebx
  unsigned int v10; // esi
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 result; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdi
  char *v19; // rdx
  unsigned __int64 *v20; // r8
  __int64 v21; // r9
  unsigned int v22; // r15d
  char v23; // cl
  unsigned int v24; // edi
  unsigned int v25; // ebx
  unsigned int v26; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v27; // [rsp+88h] [rbp+20h]

  v27 = a4;
  v5 = 0;
  v6 = a4;
  v10 = 1;
  if ( a3 >= 0 )
    v10 = a3;
  if ( (RtlpHpLfhPerfFlags & 0x20) == 0 || a3 < 0 || (v11 = *(_QWORD *)a1, (*(_BYTE *)(*(_QWORD *)a1 + 13LL) & 8) != 0) )
  {
LABEL_15:
    result = *(unsigned __int8 *)(a2 + 45);
    if ( v10 >= (unsigned int)result )
      return result;
    while ( 1 )
    {
      result = RtlpHpLfhSubsegmentFindEmptyUnits(a2, v10, &v26);
      v10 = result;
      if ( (_DWORD)result == -1 )
      {
LABEL_17:
        if ( v5 )
        {
          result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 24));
          if ( (a5 & 1) == 0 )
            return RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 72));
        }
        return result;
      }
      v22 = v26;
      if ( v26 < v6 )
      {
        if ( a3 >= 0 )
          goto LABEL_17;
      }
      else
      {
        if ( !v5 )
        {
          if ( (a5 & 1) == 0 )
            RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 72), v19, (__int64)v20, v21);
          v5 = 2;
          RtlAcquireSRWLockExclusive(a2 + 24, (unsigned __int64)v19, v20, v21);
          goto LABEL_28;
        }
        v23 = *(_BYTE *)(a2 + 44);
        v24 = (_DWORD)result << v23;
        v25 = v26 << v23;
        ((void (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32)))(
          *(_QWORD *)a1,
          a2 + (unsigned int)((_DWORD)result << v23),
          v26 << v23);
        result = RtlpHpLfhSubsegmentDecBlockCounts(a1, a2, v24, v25);
        if ( a3 >= 0 )
          goto LABEL_17;
        v6 = v27;
      }
      v10 += v22;
LABEL_28:
      result = *(unsigned __int8 *)(a2 + 45);
      if ( v10 >= (unsigned int)result )
        goto LABEL_17;
    }
  }
  v12 = *(__int16 *)(v11 + 22);
  v13 = *(_QWORD *)(v12 + v11 + 8);
  v14 = *(_QWORD *)(v12 + v11 + 24);
  result = *(_QWORD *)(v12 + v11 + 16);
  v16 = v13 >> *(_BYTE *)(v11 + 11);
  if ( v16 <= 8 )
    v16 = 8LL;
  v17 = v13 >> *(_BYTE *)(v11 + 12);
  if ( v17 <= 8 )
    v17 = 8LL;
  v18 = result + v14;
  if ( v18 > v16 && (result = RtlpHpScheduleCompaction(), (int)result < 0) || v18 > v17 )
  {
    v6 = v27;
    goto LABEL_15;
  }
  return result;
}
