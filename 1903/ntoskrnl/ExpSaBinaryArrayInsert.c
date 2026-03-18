/*
 * XREFs of ExpSaBinaryArrayInsert @ 0x14016E1EC
 * Callers:
 *     ExpSaPageGroupDescriptorAllocate @ 0x14016DD84 (ExpSaPageGroupDescriptorAllocate.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x140037850 (ExpAllocatePoolWithTagFromNode.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall ExpSaBinaryArrayInsert(_QWORD **a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v6; // esi
  _QWORD *v7; // rdi
  unsigned int v8; // ebx
  _QWORD *PoolWithTagFromNode; // rax
  __int64 v10; // r8
  __int64 i; // rdx
  unsigned int v12; // ebx

  v6 = 0;
  while ( 1 )
  {
    v7 = *a1;
    v8 = 1 << (v6 + 2);
    if ( !*a1 )
    {
      PoolWithTagFromNode = (_QWORD *)ExpAllocatePoolWithTagFromNode(
                                        0x200u,
                                        8 * v8 + 8,
                                        0x61537845u,
                                        a3 | 0x80000000,
                                        0);
      v7 = PoolWithTagFromNode;
      if ( PoolWithTagFromNode )
        memset(PoolWithTagFromNode, 0, 8 * v8 + 8);
      if ( !v7 )
        return (unsigned int)-1;
      *a1 = v7;
    }
    v10 = *v7;
    if ( *v7 < (unsigned __int64)v8 )
      break;
    ++v6;
    ++a1;
    if ( v6 >= 0x10 )
      return (unsigned int)-1;
  }
  for ( i = (unsigned int)v10; v7[i + 1]; i = (v8 - 1) & ((_DWORD)i + 1) )
    ;
  v12 = i | v8;
  *v7 = v10 + 1;
  v7[i + 1] = a2;
  return v12;
}
