/*
 * XREFs of HvResetDirtyData @ 0x14065C7B8
 * Callers:
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     HvStoreModifiedData @ 0x14065D6F0 (HvStoreModifiedData.c)
 * Callees:
 *     RtlClearAllBits @ 0x140098850 (RtlClearAllBits.c)
 *     HvpResetPageProtection @ 0x14063209C (HvpResetPageProtection.c)
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
