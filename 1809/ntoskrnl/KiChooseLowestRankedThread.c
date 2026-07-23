/*
 * XREFs of KiChooseLowestRankedThread @ 0x140116B1C
 * Callers:
 *     KiSelectReadyThreadEx @ 0x14005ADA0 (KiSelectReadyThreadEx.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400D0FC4 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     KiSelectReadyThread @ 0x140057A20 (KiSelectReadyThread.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400D15A0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x140116E58 (KiSelectThreadFromSchedulingGroup.c)
 *     KiSelectThreadFromScbQueue @ 0x14029B900 (KiSelectThreadFromScbQueue.c)
 */

_QWORD *__fastcall KiChooseLowestRankedThread(struct _KPRCB *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned int v4; // r12d
  __int64 v7; // r14
  char v8; // r9
  __int64 v9; // r8
  _QWORD *result; // rax
  unsigned int v11; // r15d
  _RTL_BALANCED_NODE *Min; // rax
  _QWORD *Children; // rbx
  _QWORD *v14; // rdi
  unsigned int v15; // eax
  char v16; // cl
  unsigned __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  char v24; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 104);
  v4 = a3;
  if ( !v3 )
    return 0LL;
  v7 = a1->ScbOffset + v3;
  if ( !v7 )
    return 0LL;
  if ( a1 == KeGetCurrentPrcb() || (v8 = 0, (_KTHREAD *)a2 != a1->CurrentThread) )
    v8 = 1;
  if ( !(unsigned int)KiGetThreadEffectiveRankNonZero(a2, v7, a3, v8, 0LL) )
    return 0LL;
  result = KiSelectReadyThread(1, (__int64)a1, v9);
  if ( result )
    return result;
  v11 = *(_DWORD *)(*(_QWORD *)(v7 + 416) + 116LL);
  Min = a1->ScbQueue.Min;
  if ( ((unsigned __int8)Min & 1) != 0 )
  {
    if ( Min == (_RTL_BALANCED_NODE *)1 )
      return 0LL;
    Children = (_QWORD *)((unsigned __int64)Min ^ ((unsigned __int64)&a1->ScbQueue | 1));
  }
  else
  {
    Children = a1->ScbQueue.Min->Children;
  }
  if ( !Children )
    return 0LL;
  v14 = Children - 11;
  v15 = *((_DWORD *)Children + 7);
  if ( v15 >= v11 )
  {
    if ( v15 == v11 )
    {
      if ( (int)v4 < *(char *)(a2 + 195) )
        v4 = *(char *)(a2 + 195);
      while ( 1 )
      {
        result = (_QWORD *)KiSelectThreadFromSchedulingGroup(a1, v14, v4);
        if ( v14 == (_QWORD *)v7 )
        {
          v16 = 1;
        }
        else
        {
          v24 = 0;
          if ( result )
            return result;
          v20 = (unsigned __int64)(v14 + 49);
          v21 = v14[49];
          if ( (v14[50] & 1) != 0 )
          {
            if ( !v21 )
              goto LABEL_35;
            v21 ^= v20;
          }
          if ( !v21 )
            goto LABEL_35;
          result = (_QWORD *)KiSelectThreadFromScbQueue(v20, (_DWORD)a1, v4, v7, (__int64)&v24);
          v16 = v24;
        }
        if ( result )
          return result;
        if ( v16 )
          return 0LL;
LABEL_35:
        v22 = (_QWORD *)Children[1];
        v23 = Children;
        if ( v22 )
        {
          do
          {
            Children = v22;
            v22 = (_QWORD *)*v22;
          }
          while ( v22 );
        }
        else
        {
          while ( 1 )
          {
            Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !Children || (_QWORD *)*Children == v23 )
              break;
            v23 = Children;
          }
        }
        if ( Children )
        {
          v14 = Children - 11;
          if ( *((_DWORD *)Children + 7) == v11 )
            continue;
        }
        return 0LL;
      }
    }
    return 0LL;
  }
  while ( !*((_WORD *)v14 + 57) )
  {
    v17 = (unsigned __int64)(v14 + 49);
    v18 = *(_QWORD *)(v17 + 8);
    if ( (v18 & 1) != 0 )
    {
      if ( v18 == 1 )
        v19 = 0LL;
      else
        v19 = v18 ^ (v17 | 1);
    }
    else
    {
      v19 = *(_QWORD *)(v17 + 8);
    }
    v14 = (_QWORD *)(v19 - 88);
  }
  return (_QWORD *)KiSelectThreadFromSchedulingGroup(a1, v14, 0LL);
}
