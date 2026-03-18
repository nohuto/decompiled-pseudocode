/*
 * XREFs of FsRtlEmptyFreePoolList @ 0x1400147C8
 * Callers:
 *     FsRtlAddToTunnelCacheEx @ 0x1405819D0 (FsRtlAddToTunnelCacheEx.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140581D00 (FsRtlFindInTunnelCacheEx.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1406B9450 (FsRtlDeleteKeyFromTunnelCache.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1400922D8 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall FsRtlEmptyFreePoolList(_QWORD **a1)
{
  _QWORD *result; // rax
  __int64 v3; // r8
  _DWORD *v4; // rcx
  _QWORD *v5; // rdx

  while ( 1 )
  {
    result = *a1;
    if ( *a1 == a1 )
      break;
    v3 = *result;
    v4 = result - 3;
    if ( *(_QWORD **)(*result + 8LL) != result || (v5 = (_QWORD *)result[1], (_QWORD *)*v5 != result) )
      __fastfail(3u);
    *v5 = v3;
    *(_QWORD *)(v3 + 8) = v5;
    if ( (v4[14] & 1) != 0 )
      ExFreePoolWithTag(v4, 0);
    else
      ExFreeToNPagedLookasideList(&TunnelLookasideList, v4);
  }
  return result;
}
