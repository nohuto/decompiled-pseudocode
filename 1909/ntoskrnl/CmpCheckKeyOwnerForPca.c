/*
 * XREFs of CmpCheckKeyOwnerForPca @ 0x1405B0664
 * Callers:
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14064D420 (CmpCheckOpenAccessOnKeyBody.c)
 * Callees:
 *     RtlEqualSid @ 0x140005470 (RtlEqualSid.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140635968 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1406D1530 (RtlGetOwnerSecurityDescriptor.c)
 */

BOOLEAN __fastcall CmpCheckKeyOwnerForPca(__int64 a1)
{
  __int64 SecurityCacheEntryForKcbStack; // rax
  BOOLEAN OwnerDefaulted; // [rsp+38h] [rbp+10h] BYREF
  PSID Owner; // [rsp+40h] [rbp+18h] BYREF

  if ( CmpTrustedInstallerSid
    && (SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, 0LL),
        RtlGetOwnerSecurityDescriptor(
          (PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32),
          &Owner,
          &OwnerDefaulted) >= 0)
    && Owner )
  {
    return RtlEqualSid(CmpTrustedInstallerSid, Owner);
  }
  else
  {
    return 0;
  }
}
