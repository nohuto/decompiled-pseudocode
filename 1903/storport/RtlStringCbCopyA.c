/*
 * XREFs of RtlStringCbCopyA @ 0x1C0039430
 * Callers:
 *     RaidAddATADeviceIdMapping @ 0x1C0038DC0 (RaidAddATADeviceIdMapping.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszSrc)
{
  NTSTATUS v3; // r9d
  size_t v4; // r10
  signed __int64 v5; // r8
  char v6; // al
  NTSTRSAFE_PSTR v7; // rax

  v3 = 0;
  if ( cbDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( cbDest )
      *pszDest = 0;
  }
  else
  {
    if ( cbDest )
    {
      v4 = 2147483646 - cbDest;
      v5 = pszSrc - pszDest;
      do
      {
        if ( !(v4 + cbDest) )
          break;
        v6 = pszDest[v5];
        if ( !v6 )
          break;
        *pszDest++ = v6;
        --cbDest;
      }
      while ( cbDest );
    }
    v7 = pszDest - 1;
    if ( cbDest )
      v7 = pszDest;
    v3 = cbDest == 0 ? 0x80000005 : 0;
    *v7 = 0;
  }
  return v3;
}
