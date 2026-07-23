/*
 * XREFs of CmpConcatenateValueLists @ 0x1407FD93C
 * Callers:
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140806080 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     HvAllocateCell @ 0x1405FCE54 (HvAllocateCell.c)
 */

__int64 __fastcall CmpConcatenateValueLists(ULONG_PTR a1, unsigned int *a2, unsigned int *a3, int a4, unsigned int *a5)
{
  unsigned int v7; // edx
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  unsigned int *v11; // rax
  unsigned int v12; // eax
  char *v13; // r14
  unsigned int v14; // r15d
  unsigned int v15; // r13d
  const void *v16; // rax
  const void *v17; // rax
  unsigned int *v18; // rax
  void *v20; // [rsp+30h] [rbp-10h] BYREF
  __int64 v21; // [rsp+88h] [rbp+48h] BYREF
  __int64 v22; // [rsp+90h] [rbp+50h] BYREF

  v20 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v7 = *a2;
  v8 = -1;
  v9 = v7 + *a3;
  LODWORD(v22) = -1;
  LODWORD(v21) = -1;
  if ( v9 >= v7 )
    v8 = v9;
  WORD2(v21) = 0;
  if ( v9 >= v7 )
  {
    if ( v8 )
    {
      v12 = HvAllocateCell(a1, 4 * v8, a4, &v20, &v22);
      v13 = (char *)v20;
      v14 = v12;
      if ( v12 == -1 )
      {
        v8 = -1073741670;
      }
      else
      {
        v15 = 0;
        if ( *a2 )
        {
          v16 = (const void *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(a1 + 8))(a1, a2[1], &v21);
          memmove(v13, v16, 4LL * *a2);
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v21);
          v15 = *a2;
        }
        if ( *a3 )
        {
          v17 = (const void *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(a1 + 8))(a1, a3[1], &v21);
          memmove(&v13[4 * v15], v17, 4LL * *a3);
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v21);
        }
        v18 = a5;
        *a5 = v8;
        v8 = 0;
        v18[1] = v14;
      }
      if ( v13 )
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v22);
    }
    else
    {
      v11 = a5;
      *a5 = 0;
      v11[1] = -1;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
