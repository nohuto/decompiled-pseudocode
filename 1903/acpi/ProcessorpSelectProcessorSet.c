/*
 * XREFs of ProcessorpSelectProcessorSet @ 0x1C009BB4C
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C0099260 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorpSelectProcessorSet(__int16 a1, char a2, char a3, KAFFINITY *a4, __int64 a5)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 *v9; // rdx
  __int64 *v10; // rax
  __int64 *v11; // rdi
  __int64 v12; // rdx
  __int64 **v13; // rdx
  int v14; // ecx
  KAFFINITY GroupAffinity; // rdx
  __int64 result; // rax
  __int64 v17; // rdx
  int v18; // ecx
  ULONGLONG v19; // rdx

  if ( *(_BYTE *)a5 )
  {
    v6 = *(_QWORD *)(a5 + 16);
    goto LABEL_8;
  }
  if ( a2 )
  {
    v6 = ProcessorGroupListHead;
    v17 = *(_QWORD *)ProcessorGroupListHead;
    if ( *(__int64 **)(ProcessorGroupListHead + 8) == &ProcessorGroupListHead
      && *(_QWORD *)(v17 + 8) == ProcessorGroupListHead )
    {
      ProcessorGroupListHead = *(_QWORD *)ProcessorGroupListHead;
      *(_QWORD *)(v17 + 8) = &ProcessorGroupListHead;
      goto LABEL_6;
    }
LABEL_23:
    __fastfail(3u);
  }
  v6 = *(_QWORD *)ProcessorGroupByNumber;
  v7 = **(_QWORD **)ProcessorGroupByNumber;
  if ( *(_QWORD *)(v7 + 8) != *(_QWORD *)ProcessorGroupByNumber )
    goto LABEL_23;
  v8 = *(_QWORD **)(v6 + 8);
  if ( *v8 != v6 )
    goto LABEL_23;
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
LABEL_6:
  v9 = (__int64 *)qword_1C0081588;
  if ( *(__int64 **)qword_1C0081588 != &ProcessorGroupListHead )
    goto LABEL_23;
  *(_QWORD *)v6 = &ProcessorGroupListHead;
  *(_QWORD *)(v6 + 8) = v9;
  *v9 = v6;
  qword_1C0081588 = v6;
LABEL_8:
  if ( *(_DWORD *)(v6 + 36) == 1 || (unsigned __int16)(a1 - 1) <= 2u )
  {
    if ( a1 != 6 )
      goto LABEL_11;
  }
  else if ( a1 != 6 )
  {
    return 3221225485LL;
  }
  if ( a3 )
  {
    GroupAffinity = KeQueryGroupAffinity(*(_WORD *)(v6 + 32));
    goto LABEL_19;
  }
LABEL_11:
  v10 = (__int64 *)(v6 + 16);
  v11 = *(__int64 **)(v6 + 16);
  if ( v11[1] != v6 + 16 )
    goto LABEL_23;
  v12 = *v11;
  if ( *(__int64 **)(*v11 + 8) != v11 )
    goto LABEL_23;
  *v10 = v12;
  *(_QWORD *)(v12 + 8) = v10;
  v13 = *(__int64 ***)(v6 + 24);
  if ( *v13 != v10 )
    goto LABEL_23;
  *v11 = (__int64)v10;
  v11[1] = (__int64)v13;
  *v13 = v11;
  *(_QWORD *)(v6 + 24) = v11;
  if ( *(_DWORD *)(v6 + 36) == 1 || a1 == 2 )
  {
    *(_DWORD *)(a5 + 8) = *((_DWORD *)v11 + 8);
    v18 = *((_DWORD *)v11 + 8);
    v19 = v11[3];
    if ( (v19 & ~(2 * (1LL << v18) - 1)) != 0 )
      v19 &= ~(2 * (1LL << v18) - 1);
    *((_DWORD *)v11 + 8) = RtlFindLeastSignificantBit(v19);
    v14 = *(_DWORD *)(a5 + 8);
    GroupAffinity = 1LL << v14;
  }
  else
  {
    v14 = *((_DWORD *)v11 + 4);
    *(_DWORD *)(a5 + 8) = v14;
    GroupAffinity = v11[3];
  }
  if ( !*(_BYTE *)a5 )
  {
    *(_DWORD *)(a5 + 4) = v14;
    *(_BYTE *)a5 = 1;
    *(_QWORD *)(a5 + 16) = v6;
LABEL_19:
    a4[1] = 0LL;
    *((_WORD *)a4 + 4) = *(_WORD *)(v6 + 32);
    result = 0LL;
    *a4 = GroupAffinity;
    return result;
  }
  if ( *(_DWORD *)(a5 + 4) != v14 )
    goto LABEL_19;
  return 3221226021LL;
}
