/*
 * XREFs of PiAuCheckClientInteractive @ 0x140863CC8
 * Callers:
 *     PiCMQueryRemove @ 0x140872914 (PiCMQueryRemove.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000A950 (RtlSubAuthoritySid.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlValidSid @ 0x1405C8B40 (RtlValidSid.c)
 *     RtlInitializeSid @ 0x14069F600 (RtlInitializeSid.c)
 *     PiAuCheckTokenMembership @ 0x140863D88 (PiAuCheckTokenMembership.c)
 */

__int64 __fastcall PiAuCheckClientInteractive(_BYTE *a1)
{
  PVOID PoolWithTag; // rax
  void *v3; // rdi
  NTSTATUS v4; // ebx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *a1 = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xCuLL, 0x20207050u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    v4 = RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 1u);
    if ( v4 >= 0 )
    {
      *RtlSubAuthoritySid(v3, 0) = 4;
      if ( !RtlValidSid(v3) )
        v4 = -1073741595;
      if ( v4 >= 0 )
      {
        v4 = PiAuCheckTokenMembership(v3);
        if ( v4 >= 0 )
          *a1 = 0;
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v4;
}
