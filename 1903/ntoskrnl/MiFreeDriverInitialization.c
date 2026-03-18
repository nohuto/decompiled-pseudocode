/*
 * XREFs of MiFreeDriverInitialization @ 0x140710A98
 * Callers:
 *     IopLoadDriver @ 0x140709120 (IopLoadDriver.c)
 *     MiLoadImportDll @ 0x14074414C (MiLoadImportDll.c)
 *     MmFreeBootDriverInitializationCode @ 0x14075743C (MmFreeBootDriverInitializationCode.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005EF80 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiFreeInitializationCode @ 0x140710B2C (MiFreeInitializationCode.c)
 *     MiSnapDriverRange @ 0x140710DE8 (MiSnapDriverRange.c)
 */

__int64 __fastcall MiFreeDriverInitialization(__int64 a1)
{
  PVOID v1; // rbx
  __int64 result; // rax
  int v4; // ebx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(PVOID *)(a1 + 48);
  result = MI_IS_PHYSICAL_ADDRESS((__int64)v1);
  if ( (!(_DWORD)result || v1 == PsNtosImageBase || v1 == PsHalImageBase) && (*(_DWORD *)(a1 + 104) & 0x800) == 0 )
  {
    v4 = 0;
    do
    {
      result = MiSnapDriverRange(a1, v4, 2, 0, (__int64)&v5, (__int64)&v6);
      v4 = result;
      if ( v5 )
        result = MiFreeInitializationCode(a1, v5, v6, 0LL);
    }
    while ( v4 );
  }
  return result;
}
