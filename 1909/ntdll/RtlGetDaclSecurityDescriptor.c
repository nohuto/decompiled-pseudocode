/*
 * XREFs of RtlGetDaclSecurityDescriptor @ 0x1800725C0
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800870A4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlReplaceSidInSd @ 0x1800E4E00 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetDaclSecurityDescriptor(__int64 a1, bool *a2, _QWORD *a3, bool *a4)
{
  __int16 v5; // cx
  __int64 v6; // rax

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v5 = *(_WORD *)(a1 + 2) & 4;
  *a2 = v5 != 0;
  v6 = 0LL;
  if ( v5 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
    {
      if ( *(__int16 *)(a1 + 2) >= 0 )
      {
        v6 = *(_QWORD *)(a1 + 32);
      }
      else if ( *(_DWORD *)(a1 + 16) )
      {
        v6 = a1 + *(unsigned int *)(a1 + 16);
      }
    }
    *a3 = v6;
    *a4 = (*(_BYTE *)(a1 + 2) & 8) != 0;
  }
  return 0LL;
}
