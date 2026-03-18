/*
 * XREFs of RtlValidSecurityDescriptor @ 0x14069B9B0
 * Callers:
 *     AdtpIsSDValidSelfRelative @ 0x1401B7A28 (AdtpIsSDValidSelfRelative.c)
 *     _PnpOpenPropertiesKey @ 0x14059AA2C (_PnpOpenPropertiesKey.c)
 *     ObOpenObjectByNameEx @ 0x1405E2E30 (ObOpenObjectByNameEx.c)
 *     ObpAdjustAccessMask @ 0x14061172C (ObpAdjustAccessMask.c)
 *     ObInsertObjectEx @ 0x14062D080 (ObInsertObjectEx.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1406FD7A8 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406FE330 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14075CB9C (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14082A170 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14082A3EC (PiAuGetStateDirectorySecurityObject.c)
 *     ObpSetObjectAuditInfo @ 0x140861A90 (ObpSetObjectAuditInfo.c)
 *     CMFCreateSecurityDescriptor @ 0x1408D8630 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140903B60 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1409C68D4 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1409C6C8C (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x1409D99A8 (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     RtlValidSid @ 0x140631570 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140631700 (RtlValidAcl.c)
 */

BOOLEAN __stdcall RtlValidSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v2; // di
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  ACL *v6; // rcx
  __int16 v7; // ax
  char *v9; // rcx
  char *v10; // rcx
  __int64 v11; // rax
  ACL *v12; // rcx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return 0;
  v2 = *((_WORD *)SecurityDescriptor + 1);
  if ( v2 >= 0 )
  {
    v9 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v3 = *((unsigned int *)SecurityDescriptor + 1);
    if ( !(_DWORD)v3 )
      goto LABEL_4;
    v9 = (char *)SecurityDescriptor + v3;
  }
  if ( v9 && !RtlValidSid(v9) )
    return 0;
LABEL_4:
  if ( v2 >= 0 )
  {
    v10 = (char *)*((_QWORD *)SecurityDescriptor + 2);
  }
  else
  {
    v4 = *((unsigned int *)SecurityDescriptor + 2);
    if ( !(_DWORD)v4 )
      goto LABEL_6;
    v10 = (char *)SecurityDescriptor + v4;
  }
  if ( v10 && !RtlValidSid(v10) )
    return 0;
LABEL_6:
  if ( (v2 & 4) != 0 )
  {
    if ( v2 >= 0 )
    {
      v6 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
      goto LABEL_10;
    }
    v5 = *((unsigned int *)SecurityDescriptor + 4);
    if ( (_DWORD)v5 )
    {
      v6 = (ACL *)((char *)SecurityDescriptor + v5);
LABEL_10:
      if ( v6 && !RtlValidAcl(v6) )
        return 0;
    }
  }
  v7 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v7 & 0x10) == 0 )
    return 1;
  if ( v7 >= 0 )
  {
    v12 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v11 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v11 )
      return 1;
    v12 = (ACL *)((char *)SecurityDescriptor + v11);
  }
  return !v12 || RtlValidAcl(v12);
}
