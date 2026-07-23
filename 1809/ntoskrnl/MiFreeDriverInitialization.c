/*
 * XREFs of MiFreeDriverInitialization @ 0x1406C8A2C
 * Callers:
 *     IopLoadDriver @ 0x140680BF4 (IopLoadDriver.c)
 *     MiLoadImportDll @ 0x14071C8F8 (MiLoadImportDll.c)
 *     MmFreeBootDriverInitializationCode @ 0x14074C80C (MmFreeBootDriverInitializationCode.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSnapDriverRange @ 0x140654DA0 (MiSnapDriverRange.c)
 *     MiFreeInitializationCode @ 0x1406C8ABC (MiFreeInitializationCode.c)
 */

__int64 __fastcall MiFreeDriverInitialization(__int64 a1)
{
  PVOID v1; // rbx
  __int64 result; // rax
  unsigned int v4; // ebx
  unsigned __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(PVOID *)(a1 + 48);
  result = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v1);
  if ( (!(_DWORD)result || v1 == PsNtosImageBase || v1 == PsHalImageBase) && (*(_DWORD *)(a1 + 104) & 0x800) == 0 )
  {
    v4 = 0;
    do
    {
      result = MiSnapDriverRange(a1, v4, 2, 0LL, &v5, &v6);
      v4 = result;
      if ( v5 )
        result = MiFreeInitializationCode(a1, v5, v6);
    }
    while ( v4 );
  }
  return result;
}
