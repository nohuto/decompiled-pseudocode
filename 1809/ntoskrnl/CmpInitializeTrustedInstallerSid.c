/*
 * XREFs of CmpInitializeTrustedInstallerSid @ 0x1409DE530
 * Callers:
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     RtlLengthRequiredSid @ 0x1405BE5C0 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x140656830 (RtlInitializeSid.c)
 */

int CmpInitializeTrustedInstallerSid()
{
  ULONG v0; // eax
  PVOID PoolWithTag; // rax
  _DWORD *v2; // rbx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v0 = RtlLengthRequiredSid(6u);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v0, 0x65536D43u);
  CmpTrustedInstallerSid = PoolWithTag;
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    LODWORD(PoolWithTag) = RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 6u);
    v2[2] = 80;
    v2[3] = 956008885;
    v2[4] = -876444647;
    v2[5] = 1831038044;
    v2[6] = 1853292631;
    v2[7] = -2023488832;
  }
  return (int)PoolWithTag;
}
