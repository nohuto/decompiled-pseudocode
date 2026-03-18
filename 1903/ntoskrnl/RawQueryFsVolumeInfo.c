/*
 * XREFs of RawQueryFsVolumeInfo @ 0x1406AAA10
 * Callers:
 *     RawQueryVolumeInformation @ 0x1406AA948 (RawQueryVolumeInformation.c)
 * Callees:
 *     RawBeginOperation @ 0x140096F60 (RawBeginOperation.c)
 *     RawEndOperation @ 0x1400FA0B8 (RawEndOperation.c)
 */

__int64 __fastcall RawQueryFsVolumeInfo(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  if ( !RawBeginOperation(a1, a2) )
    return 3221226094LL;
  *a4 -= 18;
  *a3 = 0LL;
  a3[1] = 0LL;
  a3[2] = 0LL;
  *((_DWORD *)a3 + 2) = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
  RawEndOperation(a1, a2);
  return 0LL;
}
