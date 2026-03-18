/*
 * XREFs of ObpLookupNamespaceEntry @ 0x14069EEF8
 * Callers:
 *     ObpRegisterPrivateNamespace @ 0x14069EE3C (ObpRegisterPrivateNamespace.c)
 *     NtOpenPrivateNamespace @ 0x14069FD90 (NtOpenPrivateNamespace.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x14069F494 (RtlEnumerateBoundaryDescriptorEntries.c)
 */

__int64 *__fastcall ObpLookupNamespaceEntry(__int64 a1, __int64 a2)
{
  __int64 **v3; // rdi
  __int64 *i; // rbx
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = (__int64 **)(a1 + 16LL * *(unsigned __int8 *)(a2 + 40));
  for ( i = *v3; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v3 )
      return 0LL;
    if ( i[3] == *(_QWORD *)(a2 + 24) )
    {
      memset(v6, 0, 0x28uLL);
      if ( *((_DWORD *)i + 13) == *(_DWORD *)(a2 + 52) )
      {
        LODWORD(v6[4]) = 0;
        v6[3] = 0LL;
        v6[0] = i;
        v6[1] = a2;
        if ( (int)RtlEnumerateBoundaryDescriptorEntries(i + 6, ObpCompareEntryLevel1, v6) >= 0
          && SLODWORD(v6[4]) >= 0
          && HIDWORD(v6[3]) == LODWORD(v6[3]) )
        {
          break;
        }
      }
    }
  }
  return i;
}
