/*
 * XREFs of MiCreateSlabAllocationsFromLoaderBlock @ 0x140A22C18
 * Callers:
 *     MiInitSystem @ 0x1409F0D98 (MiInitSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiGetSlabAllocator @ 0x1402DC0F8 (MiGetSlabAllocator.c)
 *     MiCreateBootSlabEntries @ 0x140A3C9F0 (MiCreateBootSlabEntries.c)
 */

__int64 __fastcall MiCreateSlabAllocationsFromLoaderBlock(__int64 a1)
{
  int BootSlabEntries; // ecx
  __int64 **v3; // rdi
  __int64 SlabAllocator; // rsi
  __int64 *i; // rbx
  int v6; // ecx
  ULONG_PTR v7; // rdx
  ULONG_PTR v8; // rcx
  _QWORD v9[14]; // [rsp+30h] [rbp-88h] BYREF

  if ( (dword_1404681C4 & 8) != 0 )
  {
    v3 = (__int64 **)(a1 + 32);
    SlabAllocator = MiGetSlabAllocator((__int64)&MiSystemPartition, 0, 24);
    for ( i = *v3; i != (__int64 *)v3; i = (__int64 *)*i )
    {
      v6 = *((_DWORD *)i + 4);
      if ( v6 == 29 || v6 == 36 )
      {
        v7 = i[4];
        v8 = i[3];
        if ( ((v8 | v7) & 0x1FF) != 0 || !v8 || !v7 || v7 + v8 < v8 || v7 + v8 - 1 > 0xFFFFFFFFFLL )
          KeBugCheckEx(0x1Au, 0x3030310uLL, v8, v7, 0LL);
        BootSlabEntries = MiCreateBootSlabEntries(SlabAllocator, i[3], i[4], 0LL);
        if ( BootSlabEntries < 0 )
          return (unsigned int)BootSlabEntries;
      }
    }
  }
  BootSlabEntries = 0;
  if ( (MiFlags & 0x8000) != 0 )
  {
    memset(v9, 0, 0x68uLL);
    v9[1] = ((unsigned int)dword_1404681C4 >> 3) & 1;
    return (unsigned int)VslpEnterIumSecureMode(2, 218LL, 0LL, (__int64)v9);
  }
  return (unsigned int)BootSlabEntries;
}
