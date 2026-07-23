/*
 * XREFs of RtlpApplyAclToObject @ 0x18007CE60
 * Callers:
 *     RtlpNewSecurityObject @ 0x1800428C0 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x18007C620 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlMapGenericMask @ 0x180044EB0 (RtlMapGenericMask.c)
 */

void __fastcall RtlpApplyAclToObject(__int64 a1, GENERIC_MAPPING *a2)
{
  unsigned int v2; // edi
  ACCESS_MASK *i; // rbx
  int v6; // ecx
  int GenericAll; // eax

  if ( a1 )
  {
    v2 = 0;
    for ( i = (ACCESS_MASK *)(a1 + 8);
          v2 < *(unsigned __int16 *)(a1 + 4);
          i = (ACCESS_MASK *)((char *)i + *((unsigned __int16 *)i + 1)) )
    {
      if ( (*(_BYTE *)i < 0xBu || (unsigned __int8)(*(_BYTE *)i - 13) <= 1u) && (*((_BYTE *)i + 1) & 8) == 0 )
      {
        RtlMapGenericMask(i + 1, a2);
        if ( *(_BYTE *)i <= 0xAu && (v6 = 1651, _bittest(&v6, *(unsigned __int8 *)i)) )
          GenericAll = a2->GenericAll;
        else
          GenericAll = a2->GenericAll | 0x1000000;
        i[1] &= GenericAll;
      }
      ++v2;
    }
  }
}
