/*
 * XREFs of VslAllocateSecureHibernateResources @ 0x140818E78
 * Callers:
 *     PopAllocateHiberContext @ 0x1406E07D4 (PopAllocateHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     PoSetHiberRange @ 0x1401448D0 (PoSetHiberRange.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall VslAllocateSecureHibernateResources(PVOID MemoryMap)
{
  NTSTATUS v2; // ebx
  _BYTE v4[16]; // [rsp+30h] [rbp-88h] BYREF
  ULONG_PTR Length; // [rsp+40h] [rbp-78h]
  PVOID Address; // [rsp+48h] [rbp-70h]

  v2 = VslpEnterIumSecureMode(2u, 35LL, 0, (__int64)v4);
  if ( v2 >= 0 )
    PoSetHiberRange(MemoryMap, 0xC000u, Address, Length, 0x526C7356u);
  return (unsigned int)v2;
}
