/*
 * XREFs of AcpiIoctlArgumentToPackageObjV1 @ 0x1C002BF74
 * Callers:
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C000E4C8 (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C0010284 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x1C002BF74 (AcpiIoctlArgumentToPackageObjV1.c)
 * Callees:
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x1C002BF74 (AcpiIoctlArgumentToPackageObjV1.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall AcpiIoctlArgumentToPackageObjV1(_WORD *a1, POOL_TYPE a2, char a3, unsigned int *a4, PVOID *a5)
{
  __int64 v5; // rdi
  POOL_TYPE v8; // ebx
  unsigned __int16 v9; // r10
  _WORD *v10; // rsi
  unsigned __int64 v11; // r9
  unsigned int v12; // r15d
  _WORD *v13; // rcx
  unsigned int v14; // eax
  PVOID PoolWithTag; // rax
  int v16; // ebp
  int v17; // ebx
  unsigned __int16 v19; // dx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  char *v23; // rdx
  __int16 v24; // ax
  unsigned __int16 v25; // ax
  __int64 v26; // rax

  v5 = 0LL;
  *a4 = 0;
  v8 = a2;
  *a5 = 0LL;
  if ( !a1 || (v9 = a1[1], (unsigned __int16)(v9 - 1) <= 6u) || *a1 != 4 )
  {
    v17 = -1073741811;
LABEL_38:
    if ( *a5 )
    {
      ExFreePoolWithTag(*a5, 0x41706341u);
      *a4 = 0;
      *a5 = 0LL;
    }
    return (unsigned int)v17;
  }
  v10 = a1 + 2;
  v11 = (unsigned __int64)a1 + v9 + 4;
  v12 = 0;
  v13 = v10;
  if ( (unsigned __int64)v10 >= v11 )
  {
LABEL_5:
    v14 = 40 * v12 + 8;
    *a4 = v14;
    PoolWithTag = ExAllocatePoolWithTag(v8, v14, 0x41706341u);
    *a5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, *a4);
      v16 = 0;
      *(_DWORD *)*a5 = v12;
      if ( !v12 )
        return 0;
      v22 = 4LL;
      while ( 1 )
      {
        v23 = (char *)*a5;
        if ( *v10 == 4 )
          v24 = 4;
        else
          v24 = *v10 + 1;
        *(_WORD *)&v23[v5 + 10] = v24;
        v25 = *v10;
        if ( *v10 )
        {
          if ( v25 > 2u )
          {
            if ( v25 == 4 )
            {
              LOBYTE(v22) = a3;
              v17 = AcpiIoctlArgumentToPackageObjV1(v10, (unsigned int)v8, v22, &v23[v5 + 32], &v23[v5 + 40]);
              if ( v17 < 0 )
                goto LABEL_38;
              v8 = a2;
              v22 = 4LL;
              goto LABEL_23;
            }
            *(_WORD *)&v23[v5 + 10] = 3;
          }
          *(_DWORD *)&v23[v5 + 32] = (unsigned __int16)v10[1];
          *(_QWORD *)&v23[v5 + 40] = v10 + 2;
        }
        else
        {
          *(_DWORD *)&v23[v5 + 32] = a3 != 0 ? 8 : 4;
          *(_QWORD *)&v23[v5 + 24] = *((unsigned int *)v10 + 1);
        }
LABEL_23:
        LOWORD(v26) = v10[1];
        if ( (unsigned __int16)v26 < 4u )
          v26 = 4LL;
        else
          v26 = (unsigned __int16)v26;
        v5 += 40LL;
        v10 = (_WORD *)((char *)v10 + v26 + 4);
        if ( ++v16 >= v12 )
          return 0;
      }
    }
    v17 = -1073741670;
    goto LABEL_38;
  }
  while ( *v13 <= 4u )
  {
    v19 = v13[1];
    if ( v19 > v9 )
      break;
    v20 = v19;
    v21 = v19;
    if ( v19 < 4u )
      v21 = 4LL;
    if ( (unsigned __int64)v13 + v21 + 4 > v11 )
      break;
    ++v12;
    if ( v19 < 4u )
      v20 = 4LL;
    v13 = (_WORD *)((char *)v13 + v20 + 4);
    if ( (unsigned __int64)v13 >= v11 )
      goto LABEL_5;
  }
  return (unsigned int)-1073741788;
}
