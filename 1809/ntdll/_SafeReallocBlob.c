/*
 * XREFs of _SafeReallocBlob @ 0x180103828
 * Callers:
 *     RtlpMuiRegResizeLanguageConfigList @ 0x180101630 (RtlpMuiRegResizeLanguageConfigList.c)
 *     RtlpMuiRegResizeLanguageList @ 0x180101694 (RtlpMuiRegResizeLanguageList.c)
 *     RtlpMuiRegResizeLanguages @ 0x1801016FC (RtlpMuiRegResizeLanguages.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall SafeReallocBlob(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  unsigned __int64 v7; // r8

  if ( !a1 )
    return 0LL;
  v7 = a4 * (unsigned __int64)a3;
  if ( v7 > 0xFFFFFFFF || a2 + (unsigned int)v7 < a2 )
    return 0LL;
  if ( a7 )
    *a7 = a2 + v7;
  return RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1, a2 + (unsigned int)v7);
}
