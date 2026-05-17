/*
 * XREFs of RtlSidDominates @ 0x18006E4C0
 * Callers:
 *     RtlpNewSecurityObject @ 0x1800428C0 (RtlpNewSecurityObject.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E933C (RtlpValidLabelSubjectContext.c)
 * Callees:
 *     RtlEqualSid @ 0x18006E5A0 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlSidDominates(__int64 a1, __int64 a2, char *a3)
{
  int v6; // edx
  int v7; // ecx
  char v8; // al
  char v9; // cl
  unsigned __int8 v11; // al
  unsigned int v12; // edx
  unsigned __int8 v13; // al

  *a3 = 0;
  v6 = *(_DWORD *)(a1 + 2);
  if ( !v6 )
    v6 = *(unsigned __int16 *)(a1 + 6) - 4096;
  if ( v6 )
    return 3221225485LL;
  v7 = *(_DWORD *)(a2 + 2);
  if ( !v7 )
    v7 = *(unsigned __int16 *)(a2 + 6) - 4096;
  if ( v7 )
    return 3221225485LL;
  v8 = RtlEqualSid(a1, a2);
  v9 = 1;
  if ( !v8 )
  {
    v11 = *(_BYTE *)(a1 + 1);
    if ( v11 )
      v12 = *(_DWORD *)(a1 + 4LL * ((unsigned int)v11 - 1) + 8);
    else
      v12 = 0;
    v13 = *(_BYTE *)(a2 + 1);
    if ( v13 )
    {
      if ( v12 < *(_DWORD *)(a2 + 4LL * ((unsigned int)v13 - 1) + 8) )
        v9 = 0;
    }
  }
  *a3 = v9;
  return 0LL;
}
