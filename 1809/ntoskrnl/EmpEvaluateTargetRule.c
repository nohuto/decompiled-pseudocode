/*
 * XREFs of EmpEvaluateTargetRule @ 0x1400A4ACC
 * Callers:
 *     EmpEvaluateUpdateRuleEvalState @ 0x14018C434 (EmpEvaluateUpdateRuleEvalState.c)
 *     EmClientRuleEvaluate @ 0x1405664A0 (EmClientRuleEvaluate.c)
 * Callees:
 *     EmpEvaluateNodeLink @ 0x1400A4FCC (EmpEvaluateNodeLink.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EmpEvaluateTargetRule(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r10
  _QWORD *PoolWithTag; // rdi
  __int64 v5; // r11
  _DWORD *v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // r15d
  __int64 v9; // r14
  unsigned int v10; // r13d
  unsigned int v11; // r12d
  unsigned int i; // ebp
  unsigned int v13; // r8d
  _QWORD *v14; // r9
  __int64 v15; // rax
  unsigned int j; // r8d
  int v17; // eax
  __int64 v18; // rcx
  __int64 v20; // [rsp+A0h] [rbp+8h]
  __int64 v23; // [rsp+B8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 8);
  PoolWithTag = 0LL;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 0LL;
  v20 = v3;
  v23 = v5;
  v7 = *(unsigned int *)(v3 + 40);
  v8 = 1;
  v9 = *(unsigned int *)(v3 + 44);
  if ( !__PAIR64__(v9, v7) )
  {
    v10 = 1;
LABEL_8:
    v11 = v9 + v7;
    for ( i = 0; i < v10; ++i )
    {
      v13 = 0;
      if ( (_DWORD)v7 )
      {
        v14 = PoolWithTag;
        do
        {
          v15 = i * v11 + v13++;
          *v14++ = *((_QWORD *)EmpStringTable + *(unsigned int *)(v5 + 4 * v15));
        }
        while ( v13 < (unsigned int)v7 );
      }
      for ( j = v7; j < v11; v6[v18] = v17 )
      {
        v17 = *(_DWORD *)(v5 + 4LL * (i * v11 + j));
        v18 = j - (unsigned int)v7;
        ++j;
      }
      v8 = EmpEvaluateNodeLink(*(_QWORD *)(v3 + 96), (_DWORD)PoolWithTag, v7, (_DWORD)v6, v9, a2, a3, 0LL, 0);
      if ( v8 - 1 <= 1 )
        break;
      v3 = v20;
      v5 = v23;
    }
    goto LABEL_16;
  }
  v10 = *(_DWORD *)(a1 + 24) / (unsigned int)(v9 + v7);
  if ( (_DWORD)v7 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v7, 0x76654D45u);
    if ( !PoolWithTag )
      return v8;
  }
  if ( !(_DWORD)v9 || (v6 = ExAllocatePoolWithTag(PagedPool, 4 * v9, 0x76654D45u)) != 0LL )
  {
    if ( v10 )
    {
      v3 = v20;
      v5 = v23;
      goto LABEL_8;
    }
  }
LABEL_16:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x76654D45u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x76654D45u);
  return v8;
}
