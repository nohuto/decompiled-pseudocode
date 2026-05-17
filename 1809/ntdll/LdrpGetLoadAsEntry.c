/*
 * XREFs of LdrpGetLoadAsEntry @ 0x180034B94
 * Callers:
 *     LdrpIsReparsePoint @ 0x1800347F0 (LdrpIsReparsePoint.c)
 *     LdrpGetDataModulePath @ 0x180034A1C (LdrpGetDataModulePath.c)
 *     LdrGetFileNameFromLoadAsDataTable @ 0x1800E25A0 (LdrGetFileNameFromLoadAsDataTable.c)
 * Callees:
 *     LdrpInitMuiCrits @ 0x18000A42C (LdrpInitMuiCrits.c)
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 */

__int64 __fastcall LdrpGetLoadAsEntry(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // edi
  int v5; // ecx
  __int64 v6; // r8

  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = -1073741823;
  LdrpInitMuiCrits();
  RtlEnterCriticalSection((__int64)&LoadAsDataCrits);
  v5 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    v6 = LoadAsDataTable;
    while ( v5 > 0 )
    {
      if ( *(_QWORD *)(v6 + 48LL * --v5) == a1 )
      {
        if ( *(_QWORD *)(v6 + 48LL * v5 + 8) )
        {
          *a2 = *(_OWORD *)(v6 + 48LL * v5);
          a2[1] = *(_OWORD *)(v6 + 48LL * v5 + 16);
          a2[2] = *(_OWORD *)(v6 + 48LL * v5 + 32);
          v4 = 0;
        }
      }
    }
  }
  RtlLeaveCriticalSection((__int64)&LoadAsDataCrits);
  return v4;
}
