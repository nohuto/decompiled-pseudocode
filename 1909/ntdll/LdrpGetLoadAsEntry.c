/*
 * XREFs of LdrpGetLoadAsEntry @ 0x180054D14
 * Callers:
 *     LdrpIsReparsePoint @ 0x180054A60 (LdrpIsReparsePoint.c)
 *     LdrpGetDataModulePath @ 0x180054B9C (LdrpGetDataModulePath.c)
 *     LdrGetFileNameFromLoadAsDataTable @ 0x1800E0150 (LdrGetFileNameFromLoadAsDataTable.c)
 * Callees:
 *     LdrpInitMuiCrits @ 0x18001A790 (LdrpInitMuiCrits.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall LdrpGetLoadAsEntry(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // edi
  int v5; // ecx
  _OWORD *v6; // r8

  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = -1073741823;
  LdrpInitMuiCrits();
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v5 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    v6 = LoadAsDataTable;
    while ( v5 > 0 )
    {
      if ( *(_QWORD *)&v6[3 * --v5] == a1 )
      {
        if ( *((_QWORD *)&v6[3 * v5] + 1) )
        {
          *a2 = v6[3 * v5];
          a2[1] = v6[3 * v5 + 1];
          a2[2] = v6[3 * v5 + 2];
          v4 = 0;
        }
      }
    }
  }
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  return v4;
}
