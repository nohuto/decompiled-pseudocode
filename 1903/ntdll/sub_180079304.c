/*
 * XREFs of sub_180079304 @ 0x180079304
 * Callers:
 *     RtlSetHeapInformation @ 0x180079240 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall sub_180079304(__int64 a1)
{
  char v2; // di
  unsigned int v3; // esi
  __int64 v4; // rax

  v2 = 0;
  v3 = 0;
  RtlEnterCriticalSection(&stru_180163BE0);
  v4 = 28LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v4 = 208LL;
  if ( *(_WORD *)(v4 + a1) == 0xFFFF )
  {
    v3 = -1073741811;
  }
  else
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
    v2 = 1;
    if ( !*(_BYTE *)(a1 + 419) )
    {
      *(_BYTE *)(a1 + 419) = 2;
      RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v2 = 0;
    }
  }
  if ( v2 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  RtlLeaveCriticalSection(&stru_180163BE0);
  return v3;
}
