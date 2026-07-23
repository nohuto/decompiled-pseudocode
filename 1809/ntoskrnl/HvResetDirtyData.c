/*
 * XREFs of HvResetDirtyData @ 0x1405A96E4
 * Callers:
 *     HvStoreModifiedData @ 0x1405A8438 (HvStoreModifiedData.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 * Callees:
 *     RtlClearAllBits @ 0x14000FA60 (RtlClearAllBits.c)
 *     HvpResetPageProtection @ 0x14068F970 (HvpResetPageProtection.c)
 */

__int64 __fastcall HvResetDirtyData(ULONG_PTR a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 96) )
  {
    HvpResetPageProtection(a1);
    RtlClearAllBits((PRTL_BITMAP)(a1 + 88));
    result = (unsigned int)_InterlockedExchangeAdd(&CmpDirtySectorCount, -*(_DWORD *)(a1 + 104));
    *(_DWORD *)(a1 + 104) = 0;
  }
  return result;
}
