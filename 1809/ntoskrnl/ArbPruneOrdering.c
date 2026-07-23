/*
 * XREFs of ArbPruneOrdering @ 0x14073AD04
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x14073A628 (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbPruneOrdering(unsigned __int16 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _BYTE *PoolWithTag; // rax
  _BYTE *v7; // rsi
  char *v8; // rbx
  unsigned __int64 *v9; // rcx
  unsigned __int64 i; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // rbx
  PVOID v15; // r14
  __int64 result; // rax
  unsigned int v17; // ebx
  void *v18; // rcx

  if ( a3 < a2 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 32LL * *a1 + 16, 0x4C627241u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      v8 = PoolWithTag;
      if ( *a1 )
      {
        v9 = (unsigned __int64 *)*((_QWORD *)a1 + 1);
        for ( i = (unsigned __int64)&v9[2 * *a1]; ; i = *((_QWORD *)a1 + 1) + 16LL * *a1 )
        {
          if ( (unsigned __int64)v9 >= i )
            goto LABEL_14;
          v11 = *v9;
          if ( a3 < *v9 )
            break;
          v12 = v9[1];
          if ( a2 > v12 )
            break;
          if ( a2 <= v11 )
          {
            if ( a3 < v12 )
            {
              *(_QWORD *)v8 = a3 + 1;
              *((_QWORD *)v8 + 1) = v9[1];
              goto LABEL_9;
            }
          }
          else
          {
            v13 = a2 - 1;
            if ( a3 >= v12 )
            {
              *(_QWORD *)v8 = v11;
              *((_QWORD *)v8 + 1) = v13;
              goto LABEL_9;
            }
            *(_QWORD *)v8 = a3 + 1;
            *((_QWORD *)v8 + 1) = v9[1];
            *((_QWORD *)v8 + 2) = *v9;
            *((_QWORD *)v8 + 3) = v13;
            v8 += 32;
          }
LABEL_10:
          v9 += 2;
        }
        *(_OWORD *)v8 = *(_OWORD *)v9;
LABEL_9:
        v8 += 16;
        goto LABEL_10;
      }
LABEL_14:
      v14 = (v8 - v7) >> 4;
      if ( !(_WORD)v14 )
        goto LABEL_18;
      if ( (unsigned __int16)v14 <= a1[1] )
      {
        v15 = (PVOID)*((_QWORD *)a1 + 1);
LABEL_17:
        memmove(v15, v7, 16LL * (unsigned __int16)v14);
LABEL_18:
        ExFreePoolWithTag(v7, 0);
        result = 0LL;
        *a1 = v14;
        return result;
      }
      v15 = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned __int16)v14, 0x4C627241u);
      if ( v15 )
      {
        v18 = (void *)*((_QWORD *)a1 + 1);
        if ( v18 )
          ExFreePoolWithTag(v18, 0);
        *((_QWORD *)a1 + 1) = v15;
        a1[1] = v14;
        goto LABEL_17;
      }
      v17 = -1073741670;
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v17;
}
