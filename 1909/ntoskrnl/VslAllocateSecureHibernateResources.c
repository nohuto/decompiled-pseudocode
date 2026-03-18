/*
 * XREFs of VslAllocateSecureHibernateResources @ 0x140850DB8
 * Callers:
 *     PopAllocateHiberContext @ 0x1407287C8 (PopAllocateHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     PoSetHiberRange @ 0x14015FEC0 (PoSetHiberRange.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall VslAllocateSecureHibernateResources(PVOID MemoryMap)
{
  NTSTATUS v2; // ebx
  ULONG_PTR v4[14]; // [rsp+30h] [rbp-88h] BYREF

  memset(v4, 0, 0x68uLL);
  v2 = VslpEnterIumSecureMode(2, 35LL, 0LL, (__int64)v4);
  if ( v2 >= 0 )
    PoSetHiberRange(MemoryMap, 0xC000u, (PVOID)v4[3], v4[2], 0x526C7356u);
  return (unsigned int)v2;
}
