/*
 * XREFs of CmpSyncKcbCacheForHive @ 0x14082CB20
 * Callers:
 *     <none>
 * Callees:
 *     CmpRebuildKcbCache @ 0x140635460 (CmpRebuildKcbCache.c)
 *     CmpIsKeyDeleted @ 0x140636A00 (CmpIsKeyDeleted.c)
 */

__int64 __fastcall CmpSyncKcbCacheForHive(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  if ( (!a2 || *(_QWORD *)(a1 + 32) == a2)
    && !(unsigned __int8)CmpIsKeyDeleted(a1, 0LL)
    && *(_QWORD *)(a1 + 32)
    && (*(_DWORD *)(a1 + 184) & 0x100000) == 0 )
  {
    CmpRebuildKcbCache(a1, a3);
  }
  return 0LL;
}
