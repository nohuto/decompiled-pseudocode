/*
 * XREFs of RtlSidHashLookup @ 0x18007C110
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x180093CC0 (memcmp.c)
 */

PSID_AND_ATTRIBUTES __cdecl RtlSidHashLookup(PSID_AND_ATTRIBUTES_HASH SidAttrHash, PSID Sid)
{
  unsigned __int8 v4; // r15
  __int16 v5; // r12
  size_t v6; // r8
  SID_HASH_ENTRY v7; // rdi
  int v8; // esi
  int v9; // ecx
  int v10; // r13d
  _SID_AND_ATTRIBUTES *v11; // r14
  unsigned __int64 v12; // rax
  DWORD SidCount; // esi
  unsigned int v14; // edi
  PSID_AND_ATTRIBUTES SidAttr; // r14
  const void **p_Sid; // rbx
  unsigned int Size; // [rsp+50h] [rbp+8h]

  if ( !SidAttrHash || !Sid )
    return 0LL;
  v4 = 0;
  v5 = *(_WORD *)Sid;
  v6 = 4 * (unsigned int)*((unsigned __int8 *)Sid + 1) + 8;
  Size = 4 * *((unsigned __int8 *)Sid + 1) + 8;
  v7 = SidAttrHash->Hash[*((_BYTE *)Sid + 4 * ((unsigned __int64)*(unsigned __int16 *)Sid >> 8) + 4) & 0xF] & SidAttrHash->Hash[((unsigned __int64)*((unsigned __int8 *)Sid + 4 * ((unsigned __int64)*(unsigned __int16 *)Sid >> 8) + 4) >> 4) + 16];
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
          v11 = &SidAttrHash->SidAttr[v9 + v10];
          if ( *(_WORD *)v11->Sid == v5 )
          {
            if ( !memcmp(Sid, v11->Sid, v6) )
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
  SidCount = SidAttrHash->SidCount;
  v14 = 64;
  if ( SidAttrHash->SidCount <= 0x40 )
    return 0LL;
  SidAttr = SidAttrHash->SidAttr;
  while ( 1 )
  {
    p_Sid = (const void **)&SidAttr[v14].Sid;
    if ( *(_WORD *)*p_Sid == v5 && !memcmp(Sid, *p_Sid, v6) )
      break;
    if ( ++v14 >= SidCount )
      return 0LL;
    v6 = Size;
  }
  return &SidAttr[v14];
}
