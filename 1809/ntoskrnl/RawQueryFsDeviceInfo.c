/*
 * XREFs of RawQueryFsDeviceInfo @ 0x14088F940
 * Callers:
 *     RawQueryVolumeInformation @ 0x1406845EC (RawQueryVolumeInformation.c)
 * Callees:
 *     RawBeginOperation @ 0x1400D81D0 (RawBeginOperation.c)
 *     RawEndOperation @ 0x1400F97D8 (RawEndOperation.c)
 */

__int64 __fastcall RawQueryFsDeviceInfo(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  if ( *a4 < 8u )
    return 2147483653LL;
  if ( !RawBeginOperation(a1, a2) )
    return 3221226094LL;
  *a4 -= 8;
  *(_QWORD *)a3 = 0LL;
  *(_DWORD *)a3 = 7;
  *(_DWORD *)(a3 + 4) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 52LL);
  RawEndOperation(a1, a2);
  return 0LL;
}
