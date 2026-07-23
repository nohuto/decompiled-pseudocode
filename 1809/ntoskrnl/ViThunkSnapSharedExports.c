/*
 * XREFs of ViThunkSnapSharedExports @ 0x1409221A8
 * Callers:
 *     ViThunkCreateSharedExportInformation @ 0x140921FFC (ViThunkCreateSharedExportInformation.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x140028C00 (RtlFindNextForwardRunClear.c)
 *     ViThunkSnapSharedExportByName @ 0x1409220B8 (ViThunkSnapSharedExportByName.c)
 */

__int64 __fastcall ViThunkSnapSharedExports(
        char *a1,
        __int64 a2,
        __int64 a3,
        _RTL_BITMAP *a4,
        unsigned int a5,
        __int64 a6)
{
  ULONG v6; // ebx
  unsigned int v7; // edi
  unsigned int v8; // esi
  ULONG v13; // eax
  ULONG v14; // ebx
  int v15; // eax
  ULONG StartingRunIndex[10]; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0;
  v7 = 0;
  v8 = 0;
  StartingRunIndex[0] = 0;
  if ( a5 )
  {
    v13 = 0;
    do
    {
      if ( v13 >= a4->SizeOfBitMap || !RtlFindNextForwardRunClear(a4, v6, StartingRunIndex) )
        break;
      v14 = StartingRunIndex[0];
      v15 = ViThunkSnapSharedExportByName(a1, a2 + a3 * StartingRunIndex[0], (char **)(a6 + 16LL * v8));
      if ( v7 || v15 )
        v7 = 1;
      v6 = v14 + 1;
      ++v8;
      v13 = v6;
      StartingRunIndex[0] = v6;
    }
    while ( v8 < a5 );
  }
  return v7;
}
