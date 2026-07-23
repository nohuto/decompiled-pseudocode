/*
 * XREFs of AdtpBuildContextFromSecurityDescriptor @ 0x140326D3C
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x140325DDC (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     RtlFindAceByType @ 0x1400A8EF0 (RtlFindAceByType.c)
 *     SeRmReferenceFindCapName @ 0x140300BD0 (SeRmReferenceFindCapName.c)
 *     RtlGetSaclSecurityDescriptor @ 0x14060ECC0 (RtlGetSaclSecurityDescriptor.c)
 */

int __fastcall AdtpBuildContextFromSecurityDescriptor(void *a1, __int64 a2)
{
  int result; // eax
  void *v4; // rdi
  char *AceByType; // rax
  BOOLEAN v6; // [rsp+40h] [rbp+8h] BYREF
  BOOLEAN v7; // [rsp+48h] [rbp+10h] BYREF
  ULONG Index; // [rsp+50h] [rbp+18h] BYREF
  PACL Acl; // [rsp+58h] [rbp+20h] BYREF

  Index = 0;
  *(_QWORD *)a2 = a1;
  result = RtlGetSaclSecurityDescriptor(a1, &v6, &Acl, &v7);
  if ( result < 0 )
    goto LABEL_9;
  v4 = 0LL;
  if ( v6 )
  {
    while ( 1 )
    {
      AceByType = (char *)RtlFindAceByType(Acl, 0x13u, &Index);
      if ( AceByType )
      {
        if ( (AceByType[1] & 8) == 0 )
          break;
      }
      ++Index;
      if ( !AceByType )
        goto LABEL_8;
    }
    v4 = AceByType + 8;
  }
LABEL_8:
  result = SeRmReferenceFindCapName(v4, (_DWORD *)(a2 + 8), (_QWORD *)(a2 + 16));
  if ( result < 0 )
  {
LABEL_9:
    *(_DWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 16) = 0LL;
  }
  return result;
}
