/*
 * XREFs of ArbPruneOrdering @ 0x1C00B3D48
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x1C009C884 (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     memmove @ 0x1C0030D80 (memmove.c)
 */

__int64 __fastcall ArbPruneOrdering(unsigned __int16 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v6; // ebx
  char *PoolWithTag; // rsi
  char *v8; // rbx
  unsigned __int64 *v9; // rcx
  unsigned __int64 i; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // rbx
  PVOID v15; // r14
  __int64 result; // rax
  void *v17; // rcx

  if ( a3 < a2 )
    return (unsigned int)-1073741811;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 32LL * *a1 + 16, 0x4C627241u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v8 = PoolWithTag;
  if ( *a1 )
  {
    v9 = (unsigned __int64 *)*((_QWORD *)a1 + 1);
    for ( i = (unsigned __int64)&v9[2 * *a1]; (unsigned __int64)v9 < i; i = *((_QWORD *)a1 + 1) + 16LL * *a1 )
    {
      v11 = *v9;
      if ( a3 < *v9 || (v12 = v9[1], a2 > v12) )
      {
        *(_OWORD *)v8 = *(_OWORD *)v9;
      }
      else if ( a2 <= v11 )
      {
        if ( a3 >= v12 )
          goto LABEL_17;
        *(_QWORD *)v8 = a3 + 1;
        *((_QWORD *)v8 + 1) = v9[1];
      }
      else
      {
        v13 = a2 - 1;
        if ( a3 < v12 )
        {
          *(_QWORD *)v8 = a3 + 1;
          *((_QWORD *)v8 + 1) = v9[1];
          *((_QWORD *)v8 + 2) = *v9;
          *((_QWORD *)v8 + 3) = v13;
          v8 += 32;
          goto LABEL_17;
        }
        *(_QWORD *)v8 = v11;
        *((_QWORD *)v8 + 1) = v13;
      }
      v8 += 16;
LABEL_17:
      v9 += 2;
    }
  }
  v14 = (v8 - PoolWithTag) >> 4;
  if ( (_WORD)v14 )
  {
    if ( (unsigned __int16)v14 <= a1[1] )
    {
      v15 = (PVOID)*((_QWORD *)a1 + 1);
    }
    else
    {
      v15 = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned __int16)v14, 0x4C627241u);
      if ( !v15 )
      {
        v6 = -1073741670;
        ExFreePoolWithTag(PoolWithTag, 0);
        return v6;
      }
      v17 = (void *)*((_QWORD *)a1 + 1);
      if ( v17 )
        ExFreePoolWithTag(v17, 0);
      *((_QWORD *)a1 + 1) = v15;
      a1[1] = v14;
    }
    memmove(v15, PoolWithTag, 16LL * (unsigned __int16)v14);
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  result = 0LL;
  *a1 = v14;
  return result;
}
