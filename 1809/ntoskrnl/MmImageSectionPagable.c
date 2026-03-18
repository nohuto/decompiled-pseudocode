/*
 * XREFs of MmImageSectionPagable @ 0x14065400C
 * Callers:
 *     MiSnapDriverRange @ 0x140653C00 (MiSnapDriverRange.c)
 *     MmResetDriverPaging @ 0x140653F40 (MmResetDriverPaging.c)
 *     sub_14098EFA4 @ 0x14098EFA4 (sub_14098EFA4.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 *     MiLockPagableSections @ 0x1409BCE2C (MiLockPagableSections.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmImageSectionPagable(__int64 a1)
{
  __int64 result; // rax
  char v2; // dl

  result = 0LL;
  if ( *(_DWORD *)a1 == 1633969454 )
    return 1LL;
  if ( *(_DWORD *)a1 == 1162297680 )
  {
    v2 = *(_BYTE *)(a1 + 4);
    result = 1LL;
    if ( v2 == 75 )
    {
      if ( *(_BYTE *)(a1 + 5) == 68 )
        return (unsigned __int8)KdPageDebuggerSection;
    }
    else if ( v2 == 86 && *(_BYTE *)(a1 + 5) == 82 && *(_BYTE *)(a1 + 6) == 70 )
    {
      return (MiFlags & 1) == 0;
    }
  }
  return result;
}
