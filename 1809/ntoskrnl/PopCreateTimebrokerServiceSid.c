/*
 * XREFs of PopCreateTimebrokerServiceSid @ 0x1409DDBB4
 * Callers:
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlLengthRequiredSid @ 0x1405BE5C0 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x140656830 (RtlInitializeSid.c)
 */

__int64 PopCreateTimebrokerServiceSid()
{
  ULONG v0; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v2; // rbx
  NTSTATUS v3; // edi
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v0 = RtlLengthRequiredSid(6u);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v0, 0x67696450u);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v0);
    v3 = RtlInitializeSid(v2, &IdentifierAuthority, 6u);
    if ( v3 >= 0 )
    {
      v2[2] = 80;
      v2[3] = 410965207;
      v2[4] = -1744070425;
      v2[5] = 1717734767;
      v2[6] = -1973635081;
      v2[7] = -539001157;
      PopTimeBrokerServiceSid = v2;
      v2 = 0LL;
    }
    if ( v2 )
      ExFreePoolWithTag(v2, 0x67696450u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v3;
}
