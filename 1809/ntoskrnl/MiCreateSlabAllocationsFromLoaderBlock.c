/*
 * XREFs of MiCreateSlabAllocationsFromLoaderBlock @ 0x1409BA674
 * Callers:
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiCreateSlabEntriesFromLoaderSlab @ 0x1409F845C (MiCreateSlabEntriesFromLoaderSlab.c)
 */

__int64 __fastcall MiCreateSlabAllocationsFromLoaderBlock(__int64 a1)
{
  int SlabEntriesFromLoaderSlab; // ecx
  __int64 *v3; // rdi
  __int64 *i; // rbx
  int v5; // eax
  ULONG_PTR v6; // r9
  ULONG_PTR v7; // rcx
  _BYTE v8[8]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v9; // [rsp+38h] [rbp-80h]

  if ( (dword_14043DA04 & 8) != 0 )
  {
    v3 = (__int64 *)(a1 + 32);
    for ( i = *(__int64 **)(a1 + 32); i != v3; i = (__int64 *)*i )
    {
      v5 = *((_DWORD *)i + 4);
      if ( v5 == 29 || v5 == 36 )
      {
        v6 = i[4];
        v7 = i[3];
        if ( ((v7 | v6) & 0x1FF) != 0 || !v7 || !v6 || v6 + v7 < v7 || v6 + v7 - 1 > 0xFFFFFFFFFLL )
          KeBugCheckEx(0x1Au, 0x3030310uLL, v7, v6, 0LL);
        SlabEntriesFromLoaderSlab = MiCreateSlabEntriesFromLoaderSlab(&qword_14043F288, i[3], i[4]);
        if ( SlabEntriesFromLoaderSlab < 0 )
          return (unsigned int)SlabEntriesFromLoaderSlab;
      }
    }
  }
  SlabEntriesFromLoaderSlab = 0;
  if ( (MiFlags & 0x8000) != 0 )
  {
    v9 = ((unsigned int)dword_14043DA04 >> 3) & 1;
    return (unsigned int)VslpEnterIumSecureMode(2u, 219LL, 0, (__int64)v8);
  }
  return (unsigned int)SlabEntriesFromLoaderSlab;
}
