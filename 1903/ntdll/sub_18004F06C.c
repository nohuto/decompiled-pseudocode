/*
 * XREFs of sub_18004F06C @ 0x18004F06C
 * Callers:
 *     sub_18004F050 @ 0x18004F050 (sub_18004F050.c)
 *     RtlSetHeapInformation @ 0x180079240 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlTryEnterCriticalSection @ 0x180046C20 (RtlTryEnterCriticalSection.c)
 *     sub_180047ED4 @ 0x180047ED4 (sub_180047ED4.c)
 *     sub_18004D024 @ 0x18004D024 (sub_18004D024.c)
 */

__int64 __fastcall sub_18004F06C(__int64 a1)
{
  __int64 v2; // rcx

  if ( (*(_BYTE *)(a1 + 112) & 1) == 0 && RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
  {
    if ( *(_BYTE *)(a1 + 418) == 2 )
      v2 = *(_QWORD *)(a1 + 408);
    else
      v2 = 0LL;
    if ( v2 )
      sub_18004D024(v2);
    sub_180047ED4(a1);
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  }
  return 0LL;
}
