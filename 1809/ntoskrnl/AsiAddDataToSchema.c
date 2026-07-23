/*
 * XREFs of AsiAddDataToSchema @ 0x14032230C
 * Callers:
 *     ApiSetComposeSchema @ 0x140322008 (ApiSetComposeSchema.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AsiAddDataToSchema(
        __int64 a1,
        unsigned int *a2,
        const void *a3,
        unsigned int a4,
        _DWORD *a5,
        char *a6)
{
  size_t v6; // r13
  char v7; // r15
  unsigned int v8; // eax
  unsigned int v9; // ecx
  _DWORD *v10; // r12
  unsigned int v11; // esi
  size_t v12; // rbx
  __int64 v13; // r14
  unsigned int v14; // eax
  unsigned int v15; // ebp
  _DWORD *PoolWithTag; // rax
  _DWORD *v17; // rdi

  v6 = a4;
  v7 = 0;
  v8 = (a4 + 3) & 0xFFFFFFFC;
  if ( v8 < a4 )
    return (unsigned int)-1073741675;
  v10 = *(_DWORD **)a1;
  v11 = -1;
  v12 = *a2;
  v13 = *(unsigned int *)(*(_QWORD *)a1 + 4LL);
  v14 = v13 + v8;
  if ( v14 >= (unsigned int)v13 )
    v11 = v14;
  v9 = v14 < (unsigned int)v13 ? 0xC0000095 : 0;
  if ( v14 >= (unsigned int)v13 )
  {
    if ( v11 <= (unsigned int)v12 )
    {
      v17 = v10;
    }
    else
    {
      v15 = (v11 + 4095) & 0xFFFFF000;
      if ( v15 < v11 )
        return (unsigned int)-1073741675;
      v7 = 1;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x68635341u);
      v17 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memmove(PoolWithTag, v10, v12);
      memset((char *)v17 + v12, 0, v15 - (unsigned int)v12);
      ExFreePoolWithTag(v10, 0);
      *(_QWORD *)a1 = v17;
      *a2 = v15;
    }
    v17[1] = v11;
    memmove((char *)v17 + v13, a3, v6);
    if ( a5 )
      *a5 = v13;
    if ( a6 )
      *a6 = v7;
    return 0;
  }
  return v9;
}
