/*
 * XREFs of RtlValidRelativeSecurityDescriptor @ 0x180014B60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180014CD4 @ 0x180014CD4 (sub_180014CD4.c)
 *     RtlValidAcl @ 0x180014E40 (RtlValidAcl.c)
 */

BOOLEAN __cdecl RtlValidRelativeSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptorInput,
        ULONG SecurityDescriptorLength,
        SECURITY_INFORMATION RequiredInformation)
{
  char v3; // r10
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  char *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  char *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  ACL *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  ACL *v18; // rcx
  unsigned int v20; // [rsp+38h] [rbp+10h] BYREF

  v3 = RequiredInformation;
  if ( SecurityDescriptorLength < 0x14
    || *(_BYTE *)SecurityDescriptorInput != 1
    || *((__int16 *)SecurityDescriptorInput + 1) >= 0 )
  {
    return 0;
  }
  v6 = *((unsigned int *)SecurityDescriptorInput + 1);
  v7 = 12LL;
  if ( (_DWORD)v6 )
  {
    if ( !(unsigned __int8)sub_180014CD4(v6, SecurityDescriptorLength, 12LL, &v20) )
      return 0;
    v9 = (char *)SecurityDescriptorInput + v8;
    if ( *((_BYTE *)SecurityDescriptorInput + v8) != 1
      || (unsigned __int8)v9[1] > 0xFu
      || v20 < 4 * (unsigned int)(unsigned __int8)v9[1] + 8 )
    {
      return 0;
    }
  }
  else if ( (v3 & 1) != 0 )
  {
    return 0;
  }
  v10 = *((unsigned int *)SecurityDescriptorInput + 2);
  if ( (_DWORD)v10 )
  {
    if ( !(unsigned __int8)sub_180014CD4(v10, SecurityDescriptorLength, v7, &v20) )
      return 0;
    v12 = (char *)SecurityDescriptorInput + v11;
    if ( *((_BYTE *)SecurityDescriptorInput + v11) != 1
      || (unsigned __int8)v12[1] > 0xFu
      || v20 < 4 * (unsigned int)(unsigned __int8)v12[1] + 8 )
    {
      return 0;
    }
  }
  else if ( (v3 & 2) != 0 )
  {
    return 0;
  }
  if ( (*((_BYTE *)SecurityDescriptorInput + 2) & 4) == 0
    || (v13 = *((unsigned int *)SecurityDescriptorInput + 4), !(_DWORD)v13)
    || (unsigned __int8)sub_180014CD4(v13, SecurityDescriptorLength, 8LL, &v20)
    && (v15 = (ACL *)((char *)SecurityDescriptorInput + v14), v20 >= v15->AclSize)
    && RtlValidAcl(v15) )
  {
    if ( (*((_BYTE *)SecurityDescriptorInput + 2) & 0x10) == 0 )
      return 1;
    v16 = *((unsigned int *)SecurityDescriptorInput + 3);
    if ( !(_DWORD)v16 )
      return 1;
    if ( (unsigned __int8)sub_180014CD4(v16, SecurityDescriptorLength, 8LL, &v20) )
    {
      v18 = (ACL *)((char *)SecurityDescriptorInput + v17);
      if ( v20 >= v18->AclSize )
      {
        if ( RtlValidAcl(v18) )
          return 1;
      }
    }
  }
  return 0;
}
