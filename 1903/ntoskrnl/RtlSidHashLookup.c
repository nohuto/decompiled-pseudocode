/*
 * XREFs of RtlSidHashLookup @ 0x14000C770
 * Callers:
 *     SepTokenIsOwner @ 0x14000C6A0 (SepTokenIsOwner.c)
 *     SepSidInTokenSidHash @ 0x140086AE4 (SepSidInTokenSidHash.c)
 * Callees:
 *     memcmp @ 0x1401A09F0 (memcmp.c)
 */

PSID_AND_ATTRIBUTES __cdecl RtlSidHashLookup(PSID_AND_ATTRIBUTES_HASH SidAttrHash, PSID Sid)
{
  unsigned __int8 v4; // r14
  __int16 v5; // bp
  unsigned int v6; // r12d
  unsigned int v7; // edx
  unsigned __int64 v8; // rsi
  unsigned int SidCount; // esi
  int v11; // r13d
  _SID_AND_ATTRIBUTES *SidAttr; // rcx
  int v13; // edx
  _SID_AND_ATTRIBUTES *v14; // r15
  unsigned __int64 v15; // rax
  _SID_AND_ATTRIBUTES *v16; // r15
  unsigned int v17; // r14d
  const void **p_Sid; // rdi
  int v19; // [rsp+60h] [rbp+8h]
  _SID_AND_ATTRIBUTES *v20; // [rsp+70h] [rbp+18h]

  if ( !SidAttrHash || !Sid )
    return 0LL;
  v4 = 0;
  v5 = *(_WORD *)Sid;
  v6 = 4 * *((unsigned __int8 *)Sid + 1) + 8;
  v7 = *((unsigned __int8 *)Sid + 4 * ((unsigned __int64)*(unsigned __int16 *)Sid >> 8) + 4);
  v8 = SidAttrHash->Hash[v7 & 0xF] & SidAttrHash->Hash[((unsigned __int64)v7 >> 4) + 16];
  if ( v8 )
  {
    do
    {
      LOBYTE(v11) = v8;
      if ( (_BYTE)v8 )
      {
        SidAttr = SidAttrHash->SidAttr;
        v20 = SidAttr;
        v13 = v4;
        do
        {
          v19 = SidHashByteToIndexLookupTable[(unsigned __int8)v11];
          v14 = &SidAttr[v13 + v19];
          if ( *(_WORD *)v14->Sid == v5 )
          {
            if ( !memcmp(Sid, v14->Sid, v6) )
              return v14;
            SidAttr = v20;
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
  SidCount = SidAttrHash->SidCount;
  if ( SidAttrHash->SidCount <= 0x40 )
    return 0LL;
  v16 = SidAttrHash->SidAttr;
  v17 = 64;
  while ( 1 )
  {
    p_Sid = (const void **)&v16[v17].Sid;
    if ( *(_WORD *)*p_Sid == v5 && !memcmp(Sid, *p_Sid, v6) )
      break;
    if ( ++v17 >= SidCount )
      return 0LL;
  }
  return &v16[v17];
}
