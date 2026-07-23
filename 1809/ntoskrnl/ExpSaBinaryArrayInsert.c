/*
 * XREFs of ExpSaBinaryArrayInsert @ 0x14016825C
 * Callers:
 *     ExpSaPageGroupDescriptorAllocate @ 0x140167EA0 (ExpSaPageGroupDescriptorAllocate.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpSaBinaryArrayInsert(_QWORD **a1, __int64 a2)
{
  unsigned int v4; // esi
  _QWORD *v5; // rdi
  unsigned int v6; // ebx
  _QWORD *PoolWithTag; // rax
  __int64 v8; // r8
  __int64 i; // rdx
  unsigned int v10; // ebx

  v4 = 0;
  while ( 1 )
  {
    v5 = *a1;
    v6 = 1 << (v4 + 2);
    if ( !*a1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v6 + 8, 0x61537845u);
      v5 = PoolWithTag;
      if ( PoolWithTag )
        memset(PoolWithTag, 0, 8 * v6 + 8);
      if ( !v5 )
        return (unsigned int)-1;
      *a1 = v5;
    }
    v8 = *v5;
    if ( *v5 < (unsigned __int64)v6 )
      break;
    ++v4;
    ++a1;
    if ( v4 >= 0x10 )
      return (unsigned int)-1;
  }
  for ( i = (unsigned int)v8; v5[i + 1]; i = (v6 - 1) & ((_DWORD)i + 1) )
    ;
  v10 = i | v6;
  *v5 = v8 + 1;
  v5[i + 1] = a2;
  return v10;
}
