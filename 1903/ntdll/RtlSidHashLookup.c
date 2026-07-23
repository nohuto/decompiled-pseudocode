/*
 * XREFs of RtlSidHashLookup @ 0x180074B50
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x180090560 (memcmp.c)
 */

PSID_AND_ATTRIBUTES __cdecl RtlSidHashLookup(PSID_AND_ATTRIBUTES_HASH SidAttrHash, PSID Sid)
{
  __int64 v4; // rax
  unsigned __int8 v5; // bp
  __int16 v6; // r8
  unsigned int v7; // r9d
  SID_HASH_ENTRY v8; // rdi
  int v9; // esi
  int v10; // r12d
  _SID_AND_ATTRIBUTES *v11; // r15
  unsigned __int64 v12; // rax
  DWORD SidCount; // esi
  unsigned int v14; // edi
  PSID_AND_ATTRIBUTES SidAttr; // rbp
  const void **p_Sid; // rbx
  unsigned int v18; // [rsp+50h] [rbp+8h]

  if ( !SidAttrHash || !Sid )
    return 0LL;
  v4 = *((unsigned __int8 *)Sid + 1);
  v5 = 0;
  v6 = *(_WORD *)Sid;
  v7 = 4 * v4 + 8;
  v18 = v7;
  v8 = SidAttrHash->Hash[*((_BYTE *)Sid + 4 * v4 + 4) & 0xF] & SidAttrHash->Hash[((unsigned __int64)*((unsigned __int8 *)Sid + 4 * v4 + 4) >> 4)
                                                                               + 16];
  if ( v8 )
  {
    do
    {
      LOBYTE(v9) = v8;
      if ( (_BYTE)v8 )
      {
        do
        {
          v10 = byte_1801220C0[(unsigned __int8)v9];
          v11 = &SidAttrHash->SidAttr[v10 + (unsigned int)v5];
          if ( *(_WORD *)v11->Sid == v6 )
          {
            if ( !memcmp(Sid, v11->Sid, v7) )
              return v11;
            v6 = *(_WORD *)Sid;
            v7 = v18;
          }
          v9 = (unsigned __int8)v9 ^ (1 << v10);
        }
        while ( (_BYTE)v9 );
      }
      v12 = v8;
      v5 += 8;
      v8 >>= 8;
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
    if ( *(_WORD *)*p_Sid != v6 )
      goto LABEL_17;
    if ( !memcmp(Sid, *p_Sid, v7) )
      return &SidAttr[v14];
    v6 = *(_WORD *)Sid;
LABEL_17:
    if ( ++v14 >= SidCount )
      return 0LL;
    v7 = v18;
  }
}
