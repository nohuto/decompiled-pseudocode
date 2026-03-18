/*
 * XREFs of HvResetDirtyData @ 0x140641CB4
 * Callers:
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     HvStoreModifiedData @ 0x140641468 (HvStoreModifiedData.c)
 * Callees:
 *     RtlClearAllBits @ 0x14008D950 (RtlClearAllBits.c)
 *     HvpResetPageProtection @ 0x140635F1C (HvpResetPageProtection.c)
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
