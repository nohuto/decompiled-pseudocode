/*
 * XREFs of LdrpGetFileSizeFromLoadAsDataTable @ 0x18001A7F0
 * Callers:
 *     LdrpGetImageSize @ 0x18001A870 (LdrpGetImageSize.c)
 *     LdrpResGetMappingSize @ 0x1800587E0 (LdrpResGetMappingSize.c)
 * Callees:
 *     LdrpInitMuiCrits @ 0x18001A790 (LdrpInitMuiCrits.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall LdrpGetFileSizeFromLoadAsDataTable(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // ecx

  v2 = 0LL;
  if ( !a1 )
    return 0LL;
  LdrpInitMuiCrits();
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v3 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    while ( v3 > 0 )
    {
      if ( *((_QWORD *)LoadAsDataTable + 6 * --v3) == a1 )
      {
        v2 = *((_QWORD *)LoadAsDataTable + 6 * v3 + 2);
        break;
      }
    }
  }
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  return v2;
}
