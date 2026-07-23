/*
 * XREFs of WmipProbeWnodeWorker @ 0x1406AB44C
 * Callers:
 *     WmipProbeWnodeSingleInstance @ 0x1406AB000 (WmipProbeWnodeSingleInstance.c)
 *     WmipProbeWnodeMethodItem @ 0x1406AB3DC (WmipProbeWnodeMethodItem.c)
 *     WmipProbeWnodeSingleItem @ 0x1408B5498 (WmipProbeWnodeSingleItem.c)
 * Callees:
 *     RtlUIntAdd @ 0x140001568 (RtlUIntAdd.c)
 */

__int64 __fastcall WmipProbeWnodeWorker(
        __int64 a1,
        UINT a2,
        UINT a3,
        UINT a4,
        UINT a5,
        UINT a6,
        UINT a7,
        char a8,
        char a9)
{
  UINT v9; // r10d
  NTSTATUS v11; // edx
  UINT puResult; // [rsp+40h] [rbp+18h] BYREF

  puResult = a3;
  v9 = a6;
  v11 = 0;
  if ( !a3 )
  {
LABEL_11:
    if ( a4 && a4 < a2 )
      return 3221225473LL;
    goto LABEL_13;
  }
  if ( a3 < a2 )
    return 3221225473LL;
  if ( ((a3 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != a3 )
    return 3221225473LL;
  if ( a3 > (unsigned __int64)a6 - 2 )
    return 3221225473LL;
  v11 = RtlUIntAdd(a3, *(unsigned __int16 *)(a3 + a1) + 2, &puResult);
  if ( v11 < 0 || puResult > v9 || a8 && puResult > a7 )
    return 3221225473LL;
  if ( a4 )
  {
    if ( a4 < puResult )
      return 3221225473LL;
    goto LABEL_11;
  }
LABEL_13:
  if ( ((a4 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) == a4
    && (!a9 || !a4 || a5 <= v9 && a4 <= v9 - a5)
    && (!a8 || a7 >= a2 && a4 <= a7 && a4) )
  {
    return (unsigned int)v11;
  }
  return 3221225473LL;
}
