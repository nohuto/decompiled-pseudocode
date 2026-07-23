/*
 * XREFs of RtlAddAccessFilterAce @ 0x1800E6EC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x18000F100 (RtlIsValidProcessTrustLabelSid.c)
 *     RtlCopySid @ 0x180014AC0 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x180014B00 (RtlFirstFreeAce.c)
 *     RtlValidSid @ 0x180014E00 (RtlValidSid.c)
 *     RtlValidAcl @ 0x180014E40 (RtlValidAcl.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall RtlAddAccessFilterAce(
        PACL Acl,
        unsigned int a2,
        int a3,
        __int64 a4,
        char a5,
        int a6,
        _DWORD *Src,
        unsigned __int16 a8)
{
  __int64 result; // rax
  int v13; // ecx
  BYTE AclRevision; // bp
  unsigned int v15; // ecx
  unsigned int v16; // r8d
  char *v17; // rsi
  PVOID FirstFree; // [rsp+20h] [rbp-38h] BYREF

  LODWORD(FirstFree) = 0;
  WORD2(FirstFree) = 256;
  if ( !Acl || !RtlValidAcl(Acl) )
    return 3221225591LL;
  if ( !Src || (unsigned __int16)(a8 - 6) > 0xFFF8u || *Src != 2020897377 || a5 != 21 )
    return 3221225485LL;
  if ( !RtlValidSid((PSID)a4) )
    return 3221225592LL;
  if ( (a3 & 0x40) != 0 )
  {
    if ( !RtlIsValidProcessTrustLabelSid((PSID)a4) )
      return 3221225485LL;
  }
  else
  {
    v13 = *(_DWORD *)(a4 + 2) - (_DWORD)FirstFree;
    if ( !v13 )
      v13 = *(unsigned __int16 *)(a4 + 6) - WORD2(FirstFree);
    if ( v13 || *(_BYTE *)(a4 + 1) != 1 || *(_DWORD *)(a4 + 8) )
      return 3221225485LL;
  }
  if ( Acl->AclRevision > 4u || a2 > 4 )
    return 3221225561LL;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision <= a2 )
    AclRevision = a2;
  if ( (a3 & 0xFFFFFFA0) != 0 || (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v15 = (a8 + 3) & 0xFFFFFFFC;
  v16 = v15 + 4 * (*(unsigned __int8 *)(a4 + 1) + 4);
  if ( v16 < v15 )
    return 3221225621LL;
  if ( v16 > 0xFFFF )
    return 3221225485LL;
  v17 = (char *)FirstFree;
  if ( !FirstFree || (char *)FirstFree + v16 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  *((_WORD *)FirstFree + 1) = v16;
  v17[1] = a3;
  *v17 = 21;
  *((_DWORD *)v17 + 1) = a6;
  RtlCopySid(4 * *(unsigned __int8 *)(a4 + 1) + 8, v17 + 8, (PSID)a4);
  memmove(&v17[4 * *(unsigned __int8 *)(a4 + 1) + 16], Src, a8);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = AclRevision;
  return result;
}
