/*
 * XREFs of RtlSidHashLookup @ 0x18007C100
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x180093CB0 (memcmp.c)
 */

const void **__fastcall RtlSidHashLookup(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int8 v4; // r15
  __int16 v5; // r12
  size_t v6; // r8
  unsigned __int64 v7; // rdi
  int v8; // esi
  int v9; // ecx
  int v10; // r13d
  const void **v11; // r14
  unsigned __int64 v12; // rax
  unsigned int v13; // esi
  unsigned int v14; // edi
  __int64 v16; // r14
  const void **v17; // rbx
  unsigned int Size; // [rsp+50h] [rbp+8h]

  if ( !a1 || !a2 )
    return 0LL;
  v4 = 0;
  v5 = *a2;
  v6 = 4 * (unsigned int)*((unsigned __int8 *)a2 + 1) + 8;
  Size = 4 * *((unsigned __int8 *)a2 + 1) + 8;
  v7 = *(_QWORD *)(a1 + 8LL * (a2[2 * ((unsigned __int64)*a2 >> 8) + 2] & 0xF) + 16) & *(_QWORD *)(a1
                                                                                                 + 8
                                                                                                 * ((unsigned __int64)LOBYTE(a2[2 * ((unsigned __int64)*a2 >> 8) + 2]) >> 4)
                                                                                                 + 144);
  if ( v7 )
  {
    do
    {
      LOBYTE(v8) = v7;
      if ( (_BYTE)v7 )
      {
        v9 = v4;
        do
        {
          v10 = SidHashByteToIndexLookupTable[(unsigned __int8)v8];
          v11 = (const void **)(*(_QWORD *)(a1 + 8) + 16LL * (unsigned int)(v9 + v10));
          if ( *(_WORD *)*v11 == v5 )
          {
            if ( !memcmp(a2, *v11, v6) )
              return v11;
            v6 = Size;
            v9 = v4;
          }
          v8 = (unsigned __int8)v8 ^ (1 << v10);
        }
        while ( (_BYTE)v8 );
      }
      v12 = v7;
      v4 += 8;
      v7 >>= 8;
    }
    while ( v12 >= 0x100 );
  }
  v13 = *(_DWORD *)a1;
  v14 = 64;
  if ( *(_DWORD *)a1 <= 0x40u )
    return 0LL;
  v16 = *(_QWORD *)(a1 + 8);
  while ( 1 )
  {
    v17 = (const void **)(v16 + 16LL * v14);
    if ( *(_WORD *)*v17 == v5 && !memcmp(a2, *v17, v6) )
      break;
    if ( ++v14 >= v13 )
      return 0LL;
    v6 = Size;
  }
  return (const void **)(v16 + 16LL * v14);
}
