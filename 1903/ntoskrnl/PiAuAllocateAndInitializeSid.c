/*
 * XREFs of PiAuAllocateAndInitializeSid @ 0x140754964
 * Callers:
 *     PiAuCreateUserSids @ 0x1409F7254 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x1409F7478 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlInitializeSid @ 0x1406810A0 (RtlInitializeSid.c)
 */

__int64 __fastcall PiAuAllocateAndInitializeSid(PVOID *a1, _SID_IDENTIFIER_AUTHORITY *a2, unsigned int a3)
{
  UCHAR v3; // bl
  unsigned int v6; // eax
  PVOID PoolWithTag; // rax
  NTSTATUS v8; // ebx

  v3 = a3;
  if ( a3 > 0x3FFFFFF7 )
    v6 = -1;
  else
    v6 = 4 * a3 + 8;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x20207050u);
  *a1 = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = RtlInitializeSid(PoolWithTag, a2, v3);
    if ( v8 >= 0 )
      return (unsigned int)v8;
  }
  else
  {
    v8 = -1073741670;
  }
  if ( *a1 )
  {
    ExFreePoolWithTag(*a1, 0);
    *a1 = 0LL;
  }
  return (unsigned int)v8;
}
