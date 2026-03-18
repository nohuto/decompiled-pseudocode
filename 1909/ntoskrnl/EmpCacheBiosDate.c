/*
 * XREFs of EmpCacheBiosDate @ 0x1409F9720
 * Callers:
 *     EmInitSystem @ 0x1409F93E0 (EmInitSystem.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     strtoul @ 0x1401A300C (strtoul.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x1401C1190 (ZwUnmapViewOfSection.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EmpMapPhysicalAddress @ 0x1409F9864 (EmpMapPhysicalAddress.c)
 */

char EmpCacheBiosDate()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  char v2; // di
  __int64 v3; // rax
  _WORD *v4; // rbx
  unsigned int v5; // eax
  HANDLE v6; // rbx
  char Str[2]; // [rsp+30h] [rbp-58h] BYREF
  char v9; // [rsp+32h] [rbp-56h]
  char v10; // [rsp+34h] [rbp-54h]
  HANDLE Handle; // [rsp+38h] [rbp-50h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v13[48]; // [rsp+48h] [rbp-40h] BYREF

  memset(v13, 0, sizeof(v13));
  v2 = 0;
  EmpCachedBiosDate = 0;
  v9 = 0;
  if ( dword_140432490 == 1 )
  {
    v3 = EmpMapPhysicalAddress(v1, v0, &Handle, &BaseAddress, v13);
    v4 = (_WORD *)v3;
    if ( v3 )
    {
      *(_WORD *)Str = *(_WORD *)(v3 + 6);
      v5 = strtoul(Str, 0LL, 16);
      EmpCachedBiosDate = (v5 < 0x80 ? 0x20000000 : 419430400) + (v5 << 16);
      *(_WORD *)Str = *v4;
      EmpCachedBiosDate |= strtoul(Str, 0LL, 16) << 8;
      *(_WORD *)Str = *(_WORD *)((char *)v4 + 3);
      EmpCachedBiosDate |= strtoul(Str, 0LL, 16);
      v2 = 1;
      v10 = 1;
      v6 = Handle;
      ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
      KiUnstackDetachProcess((struct _KTHREAD *)v13, 0);
      ZwClose(v6);
    }
  }
  return v2;
}
