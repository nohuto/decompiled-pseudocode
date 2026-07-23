/*
 * XREFs of EmpEvaluateUpdateRuleEvalState @ 0x14018C434
 * Callers:
 *     EmpUpdateRuleState @ 0x140010758 (EmpUpdateRuleState.c)
 * Callees:
 *     EmpEvaluateTargetRule @ 0x1400A4ACC (EmpEvaluateTargetRule.c)
 *     EmpEvaluatePermuteRuleEntries @ 0x14018C4E4 (EmpEvaluatePermuteRuleEntries.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall EmpEvaluateUpdateRuleEvalState(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // r12d
  char *PoolWithTag; // rsi
  __int64 v5; // r14
  __int64 v7; // rdi
  unsigned int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // r14
  _QWORD **v11; // rax
  _QWORD *v12; // r15
  __int64 i; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0;
  PoolWithTag = 0LL;
  v5 = a2;
  v7 = *(unsigned int *)(v2 + 48);
  if ( *(_BYTE *)(v2 + 20) )
  {
    v8 = 0;
    if ( (_DWORD)v7 )
    {
      v9 = *(_QWORD *)(v2 + 56);
      v10 = 0LL;
      do
      {
        v11 = (_QWORD **)(*(_QWORD *)(v10 + v9) + 56LL);
        v12 = *v11;
        while ( v12 != v11 )
        {
          ((void (__fastcall *)(_QWORD, _QWORD))*(v12 - 2))(*(_QWORD *)(*(_QWORD *)(v2 + 56) + v10), *(v12 - 1));
          v9 = *(_QWORD *)(v2 + 56);
          v12 = (_QWORD *)*v12;
          v11 = (_QWORD **)(*(_QWORD *)(v10 + v9) + 56LL);
        }
        if ( *(_QWORD *)(*(_QWORD *)(v10 + v9) + 40LL) == *(_QWORD *)(v10 + v9) + 40LL )
        {
          *(_DWORD *)(v2 + 16) = 0;
          return;
        }
        ++v8;
        v10 += 8LL;
      }
      while ( v8 < (unsigned int)v7 );
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8 * v7, 0x76654D45u);
      if ( PoolWithTag )
      {
        v5 = a2;
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v2 + 48); i = (unsigned int)(i + 1) )
        {
          v14 = *(_QWORD *)(*(_QWORD *)(v2 + 56) + 8 * i);
          if ( v14 != a2 )
            *(_QWORD *)(v14 + 32) = *(_QWORD *)(v14 + 40);
        }
        goto LABEL_20;
      }
    }
    else
    {
      while ( (unsigned int)EmpEvaluateTargetRule(a1, (__int64)PoolWithTag, v7) != 2 )
      {
        if ( (unsigned __int8)EmpEvaluatePermuteRuleEntries(v2, (unsigned int)v7, v5, 0LL) )
          goto LABEL_5;
LABEL_20:
        if ( (_DWORD)v7 )
        {
          v15 = 0LL;
          v16 = v7;
          do
          {
            *(_QWORD *)&PoolWithTag[v15] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 56) + v15) + 32LL) - 16LL;
            v15 += 8LL;
            --v16;
          }
          while ( v16 );
        }
      }
      v3 = 2;
LABEL_5:
      *(_DWORD *)(v2 + 16) = v3;
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x76654D45u);
    }
  }
  else
  {
    *(_DWORD *)(v2 + 16) = 1;
  }
}
