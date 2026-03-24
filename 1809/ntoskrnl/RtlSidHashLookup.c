/*
 * XREFs of RtlSidHashLookup @ 0x1400AAC20
 * Callers:
 *     SepSidInTokenSidHash @ 0x1400AAB60 (SepSidInTokenSidHash.c)
 * Callees:
 *     memcmp @ 0x140196200 (memcmp.c)
 */

const void **__fastcall RtlSidHashLookup(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int8 v4; // r14
  __int16 v5; // bp
  unsigned int v6; // r12d
  unsigned int v7; // edx
  unsigned __int64 v8; // rsi
  unsigned int v9; // esi
  int v11; // r13d
  __int64 v12; // rcx
  int v13; // edx
  const void **v14; // r15
  unsigned __int64 v15; // rax
  __int64 v16; // r15
  unsigned int v17; // r14d
  const void **v18; // rdi
  int v19; // [rsp+60h] [rbp+8h]
  __int64 v20; // [rsp+70h] [rbp+18h]

  if ( !a1 || !a2 )
    return 0LL;
  v4 = 0;
  v5 = *a2;
  v6 = 4 * *((unsigned __int8 *)a2 + 1) + 8;
  v7 = LOBYTE(a2[2 * ((unsigned __int64)*a2 >> 8) + 2]);
  v8 = *(_QWORD *)(a1 + 8LL * (v7 & 0xF) + 16) & *(_QWORD *)(a1 + 8 * ((unsigned __int64)v7 >> 4) + 144);
  if ( v8 )
  {
    do
    {
      LOBYTE(v11) = v8;
      if ( (_BYTE)v8 )
      {
        v12 = *(_QWORD *)(a1 + 8);
        v20 = v12;
        v13 = v4;
        do
        {
          v19 = SidHashByteToIndexLookupTable[(unsigned __int8)v11];
          v14 = (const void **)(v12 + 16LL * (unsigned int)(v13 + v19));
          if ( *(_WORD *)*v14 == v5 )
          {
            if ( !memcmp(a2, *v14, v6) )
              return v14;
            v12 = v20;
          }
          v11 = (unsigned __int8)v11 ^ (1 << v19);
          v13 = v4;
        }
        while ( (_BYTE)v11 );
      }
      v15 = v8;
      v4 += 8;
      v8 >>= 8;
    }
    while ( v15 >= 0x100 );
  }
  v9 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 0x40u )
    return 0LL;
  v16 = *(_QWORD *)(a1 + 8);
  v17 = 64;
  while ( 1 )
  {
    v18 = (const void **)(v16 + 16LL * v17);
    if ( *(_WORD *)*v18 == v5 && !memcmp(a2, *v18, v6) )
      break;
    if ( ++v17 >= v9 )
      return 0LL;
  }
  return (const void **)(v16 + 16LL * v17);
}
