/*
 * XREFs of RtlFindAceBySid @ 0x1400160E0
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x140132DE8 (SepAppendAceToTokenDefaultDacl.c)
 *     SepRemoveAceFromTokenDefaultDacl @ 0x140139ACC (SepRemoveAceFromTokenDefaultDacl.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405CA190 (SepAppendAceToTokenObjectAcl.c)
 *     RtlpSetSecurityObject @ 0x1405CB240 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 */

char *__fastcall RtlFindAceBySid(__int64 a1, _WORD *a2, unsigned int *a3)
{
  unsigned int v5; // r14d
  unsigned __int8 *v6; // rbx
  unsigned int v7; // ebp
  int v8; // r15d
  unsigned __int8 v9; // cl
  __int64 v10; // rcx
  char *v11; // rcx

  if ( !a1 )
    return 0LL;
  v5 = *(unsigned __int16 *)(a1 + 4);
  v6 = (unsigned __int8 *)(a1 + 8);
  v7 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    return 0LL;
  v8 = 4089359;
  while ( 1 )
  {
    v9 = *v6;
    if ( *v6 <= 0x15u && _bittest(&v8, v9) )
    {
      v10 = 8LL;
    }
    else if ( v9 == 4 )
    {
      v10 = 12LL;
    }
    else
    {
      if ( (unsigned __int8)(v9 - 5) > 3u && (unsigned __int8)(v9 - 11) > 1u && (unsigned __int8)(v9 - 15) > 1u )
        goto LABEL_10;
      v10 = 16LL * (*((_DWORD *)v6 + 2) & 1) + ((8LL * (*((_DWORD *)v6 + 2) & 2)) | 0xC);
    }
    v11 = (char *)&v6[v10];
    if ( v11 )
      break;
LABEL_10:
    ++v7;
    v6 += *((unsigned __int16 *)v6 + 1);
    if ( v7 >= v5 )
      return 0LL;
  }
  if ( !a3 )
  {
    if ( *(_WORD *)v11 == *a2 && !memcmp(v11, a2, 4 * ((unsigned __int64)*(unsigned __int16 *)v11 >> 8) + 8) )
      return (char *)v6;
    goto LABEL_10;
  }
  if ( v7 < *a3 || !RtlEqualSid(v11, a2) )
    goto LABEL_10;
  *a3 = v7;
  return (char *)v6;
}
