/*
 * XREFs of RtlFindAceBySid @ 0x1800EA454
 * Callers:
 *     RtlpSetSecurityObject @ 0x18007C620 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlEqualSid @ 0x18006E5A0 (RtlEqualSid.c)
 */

unsigned __int16 *__fastcall RtlFindAceBySid(unsigned __int16 *a1, void *a2, unsigned int *a3)
{
  unsigned int v5; // ebp
  unsigned __int16 *v6; // rbx
  unsigned int v7; // edi
  int v8; // edx
  __int64 v9; // rcx

  if ( !a1 )
    return 0LL;
  v5 = a1[2];
  v6 = a1 + 4;
  v7 = 0;
  if ( !a1[2] )
    return 0LL;
  while ( 1 )
  {
    LOBYTE(a1) = *(_BYTE *)v6;
    if ( *(_BYTE *)v6 <= 0x15u && (v8 = 4089359, _bittest(&v8, (unsigned int)a1)) )
    {
      v9 = 8LL;
    }
    else if ( (_BYTE)a1 == 4 )
    {
      v9 = 12LL;
    }
    else
    {
      if ( (unsigned __int8)((_BYTE)a1 - 5) > 3u
        && (unsigned __int8)((_BYTE)a1 - 11) > 1u
        && (unsigned __int8)((_BYTE)a1 - 15) > 1u )
      {
        goto LABEL_18;
      }
      v9 = 16LL * (*((_DWORD *)v6 + 2) & 1) + ((8LL * (*((_DWORD *)v6 + 2) & 2)) | 0xC);
    }
    a1 = (unsigned __int16 *)((char *)v6 + v9);
    if ( a1 )
      break;
LABEL_18:
    ++v7;
    v6 = (unsigned __int16 *)((char *)v6 + v6[1]);
    if ( v7 >= v5 )
      return 0LL;
  }
  if ( !a3 )
  {
    if ( RtlEqualSid(a1, a2) )
      return v6;
    goto LABEL_18;
  }
  if ( v7 < *a3 || !RtlEqualSid(a1, a2) )
    goto LABEL_18;
  *a3 = v7;
  return v6;
}
