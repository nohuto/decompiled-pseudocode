/*
 * XREFs of ObpCreateDefaultObjectTypeSD @ 0x14072909C
 * Callers:
 *     ObpInitObjectTypeSD @ 0x140728FFC (ObpInitObjectTypeSD.c)
 * Callees:
 *     RtlLengthSid @ 0x1400162C0 (RtlLengthSid.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     RtlCreateAcl @ 0x1405CAF70 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x1406315A0 (RtlpAddKnownAce.c)
 */

__int64 __fastcall ObpCreateDefaultObjectTypeSD(_QWORD *a1)
{
  ULONG v2; // ebx
  ULONG v3; // ebx
  ULONG v4; // eax
  __int64 v5; // rdi
  ULONG v6; // ebp
  char *PoolWithTag; // rbx
  int Acl; // edi

  v2 = RtlLengthSid(SeWorldSid);
  v3 = RtlLengthSid(SeAliasAdminsSid) + v2;
  v4 = RtlLengthSid(SeLocalSystemSid);
  v5 = v3 + v4 + 44;
  v6 = v3 + v4 + 44;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v5 + 20, 0x6C636144u);
  if ( PoolWithTag )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    *((_DWORD *)PoolWithTag + 4) = 0;
    *PoolWithTag = 1;
    memset(PoolWithTag + 20, 0, v6);
    Acl = RtlCreateAcl((PACL)(PoolWithTag + 20), v5, 2u);
    if ( Acl < 0
      || (Acl = RtlpAddKnownAce((PACL)(PoolWithTag + 20), 2u, 0, 983041, (unsigned __int8 *)SeWorldSid, 0), Acl < 0)
      || (Acl = RtlpAddKnownAce((PACL)(PoolWithTag + 20), 2u, 0, 983041, (unsigned __int8 *)SeAliasAdminsSid, 0), Acl < 0)
      || (Acl = RtlpAddKnownAce((PACL)(PoolWithTag + 20), 2u, 0, 983041, (unsigned __int8 *)SeLocalSystemSid, 0), Acl < 0) )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      *((_WORD *)PoolWithTag + 1) |= 0x8004u;
      *((_DWORD *)PoolWithTag + 4) = 20;
      *a1 = PoolWithTag;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
