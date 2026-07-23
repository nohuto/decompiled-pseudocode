/*
 * XREFs of RtlIsUntrustedObject @ 0x1401340C0
 * Callers:
 *     SeGetImageRequiredSigningLevel @ 0x1406E2AC8 (SeGetImageRequiredSigningLevel.c)
 * Callees:
 *     RtlFindAceByType @ 0x14000ABF0 (RtlFindAceByType.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwQuerySecurityObject @ 0x1401C2B70 (ZwQuerySecurityObject.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObQuerySecurityObject @ 0x1406197CC (ObQuerySecurityObject.c)
 */

NTSTATUS __cdecl RtlIsUntrustedObject(HANDLE Handle, PVOID Object, PBOOLEAN IsUntrustedObject)
{
  _BYTE *PoolWithQuotaTag; // rdi
  int v5; // r12d
  char v7; // r15
  NTSTATUS result; // eax
  NTSTATUS v9; // ebx
  __int16 v10; // ax
  __int64 v11; // rax
  ACL *v12; // rsi
  _BYTE *AceByType; // rax
  NTSTATUS SecurityObject; // eax
  unsigned __int8 v15; // cl
  ULONG LengthNeeded; // [rsp+30h] [rbp-C8h] BYREF
  ULONG Index[3]; // [rsp+34h] [rbp-C4h] BYREF
  _BYTE SecurityDescriptor[128]; // [rsp+40h] [rbp-B8h] BYREF

  *IsUntrustedObject = 1;
  PoolWithQuotaTag = SecurityDescriptor;
  v5 = (int)Object;
  if ( Object )
  {
    if ( !Handle )
      goto LABEL_3;
    return -1073741811;
  }
  if ( !Handle )
    return -1073741811;
LABEL_3:
  v7 = 0;
  if ( Handle )
  {
    result = ZwQuerySecurityObject(Handle, 0x10u, SecurityDescriptor, 0x7Cu, &LengthNeeded);
    v9 = result;
    if ( result >= 0 )
      goto LABEL_5;
    if ( result == -1073741789 )
    {
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, LengthNeeded, 0x62507452u);
      if ( !PoolWithQuotaTag )
        return -1073741801;
      v7 = 1;
      SecurityObject = ZwQuerySecurityObject(Handle, 0x10u, PoolWithQuotaTag, 0x7Cu, &LengthNeeded);
      goto LABEL_24;
    }
  }
  else
  {
    result = ObQuerySecurityObject((_DWORD)Object, 16, (unsigned int)SecurityDescriptor, 124, (__int64)&LengthNeeded);
    v9 = result;
    if ( result >= 0 )
      goto LABEL_5;
    if ( result == -1073741789 )
    {
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, LengthNeeded, 0x62507452u);
      if ( !PoolWithQuotaTag )
        return -1073741801;
      v7 = 1;
      SecurityObject = ObQuerySecurityObject(v5, 16, (_DWORD)PoolWithQuotaTag, 124, (__int64)&LengthNeeded);
LABEL_24:
      v9 = SecurityObject;
      if ( SecurityObject < 0 )
      {
LABEL_25:
        ExFreePoolWithTag(PoolWithQuotaTag, 0);
        return v9;
      }
LABEL_5:
      v10 = *((_WORD *)PoolWithQuotaTag + 1);
      if ( (v10 & 0x10) != 0 )
      {
        if ( v10 >= 0 )
        {
          v12 = (ACL *)*((_QWORD *)PoolWithQuotaTag + 3);
        }
        else
        {
          v11 = *((unsigned int *)PoolWithQuotaTag + 3);
          if ( !(_DWORD)v11 )
            goto LABEL_12;
          v12 = (ACL *)&PoolWithQuotaTag[v11];
        }
        if ( v12 )
        {
          Index[0] = 0;
          while ( 1 )
          {
            AceByType = RtlFindAceByType(v12, 0x11u, Index);
            if ( !AceByType )
              break;
            if ( (AceByType[1] & 8) == 0 )
            {
              v15 = AceByType[9];
              if ( !v15 || *(_DWORD *)&AceByType[4 * v15 + 12] < 0x2000u )
                goto LABEL_13;
              break;
            }
          }
        }
      }
LABEL_12:
      *IsUntrustedObject = 0;
LABEL_13:
      if ( !v7 )
        return v9;
      goto LABEL_25;
    }
  }
  return result;
}
