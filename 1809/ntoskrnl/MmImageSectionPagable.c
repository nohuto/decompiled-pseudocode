/*
 * XREFs of MmImageSectionPagable @ 0x1406551AC
 * Callers:
 *     MiSnapDriverRange @ 0x140654DA0 (MiSnapDriverRange.c)
 *     MmResetDriverPaging @ 0x1406550E0 (MmResetDriverPaging.c)
 *     sub_14098FFA4 @ 0x14098FFA4 (sub_14098FFA4.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 *     MiLockPagableSections @ 0x1409BDE2C (MiLockPagableSections.c)
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
