/*
 * XREFs of MNClearCachedPopupSizes @ 0x1C010FBC8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     xxxMenuBarCompute @ 0x1C012DEE0 (xxxMenuBarCompute.c)
 *     xxxMNOpenHierarchy @ 0x1C02250D0 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     MNRefreshUAHCachedSizes @ 0x1C010FC54 (MNRefreshUAHCachedSizes.c)
 *     memset @ 0x1C0168440 (memset.c)
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
