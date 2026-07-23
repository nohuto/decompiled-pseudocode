/*
 * XREFs of PiAuAllocateAndInitializeSid @ 0x14073AE78
 * Callers:
 *     PiAuCreateUserSids @ 0x1409C7A68 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x1409C7C8C (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlInitializeSid @ 0x140656830 (RtlInitializeSid.c)
 */

__int64 __fastcall PiAuAllocateAndInitializeSid(PVOID *a1, _SID_IDENTIFIER_AUTHORITY *a2, unsigned int a3)
{
  UCHAR v3; // di
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
  v8 = PoolWithTag == 0LL ? 0xC000009A : 0;
  if ( PoolWithTag )
    v8 = RtlInitializeSid(PoolWithTag, a2, v3);
  if ( v8 < 0 && *a1 )
  {
    ExFreePoolWithTag(*a1, 0);
    *a1 = 0LL;
  }
  return (unsigned int)v8;
}
