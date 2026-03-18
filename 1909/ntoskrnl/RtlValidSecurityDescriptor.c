/*
 * XREFs of RtlValidSecurityDescriptor @ 0x1405D7690
 * Callers:
 *     _PnpOpenPropertiesKey @ 0x1405C1624 (_PnpOpenPropertiesKey.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 *     ObOpenObjectByNameEx @ 0x1405F5850 (ObOpenObjectByNameEx.c)
 *     ObpAdjustAccessMask @ 0x1406BA3D4 (ObpAdjustAccessMask.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1406FFEE4 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x14071B8E0 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14071BDD0 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407857FC (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140863FE4 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140864270 (PiAuGetStateDirectorySecurityObject.c)
 *     ObpSetObjectAuditInfo @ 0x14089DD4C (ObpSetObjectAuditInfo.c)
 *     CMFCreateSecurityDescriptor @ 0x1409152F0 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140941BE4 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1409F6FC0 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1409F7388 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140A100B0 (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     RtlValidSid @ 0x1405C8B40 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1405DDC30 (RtlValidAcl.c)
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
