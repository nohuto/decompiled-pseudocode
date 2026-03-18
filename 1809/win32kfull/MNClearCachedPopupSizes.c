/*
 * XREFs of MNClearCachedPopupSizes @ 0x1C01297A0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxMenuBarCompute @ 0x1C00ACA90 (xxxMenuBarCompute.c)
 *     xxxMNOpenHierarchy @ 0x1C020DA04 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0233EE8 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     MNRefreshUAHCachedSizes @ 0x1C012982C (MNRefreshUAHCachedSizes.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall MNClearCachedPopupSizes(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  if ( *(_DWORD *)(v1 + 44) )
  {
    do
    {
      v4 = 96LL * (int)v2;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + v4) + 84LL) = 0x7FFFFFFF;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + v4) + 88LL) = 0;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + v4) + 104LL) = -1;
      memset((void *)(v4 + *(_QWORD *)(a1 + 88) + 52LL), 0, 0x20uLL);
      ++v2;
    }
    while ( v2 < *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL) );
  }
  return MNRefreshUAHCachedSizes(a1);
}
