/*
 * XREFs of RtlLocateSupervisorFeature @ 0x140312840
 * Callers:
 *     KiInitializeContextThread @ 0x1400820C8 (KiInitializeContextThread.c)
 *     KiGetSavedIptState @ 0x1402AAC80 (KiGetSavedIptState.c)
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlLocateSupervisorFeature(PXSAVE_AREA_HEADER XStateHeader, ULONG FeatureId, PULONG Length)
{
  __int64 v3; // r9
  unsigned int v6; // ecx
  signed __int64 CompactionMask; // r8
  unsigned __int64 v8; // rax
  unsigned int v9; // edx
  _DWORD *v10; // rax

  v3 = FeatureId;
  if ( FeatureId - 2 > 0x3D )
    return 0LL;
  if ( (MEMORY[0xFFFFF780000005F0] & (1LL << FeatureId)) == 0 )
    return 0LL;
  v6 = 2;
  if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
    return 0LL;
  CompactionMask = XStateHeader->CompactionMask;
  if ( CompactionMask >= 0 )
    return 0LL;
  v8 = CompactionMask & XStateHeader->Mask;
  if ( !_bittest64((const __int64 *)&v8, FeatureId) )
    return 0LL;
  v9 = 64;
  if ( (unsigned int)v3 > 2 )
  {
    v10 = (_DWORD *)0xFFFFF7800000060CLL;
    do
    {
      if ( ((1LL << v6) & CompactionMask) != 0 )
      {
        if ( ((1LL << v6) & MEMORY[0xFFFFF780000005F8]) != 0 )
          v9 = (v9 + 63) & 0xFFFFFFC0;
        v9 += *v10;
      }
      ++v6;
      ++v10;
    }
    while ( v6 < (unsigned int)v3 );
  }
  if ( (MEMORY[0xFFFFF780000005F8] & (1LL << v3)) != 0 )
    v9 = (v9 + 63) & 0xFFFFFFC0;
  if ( Length )
    *Length = *(_DWORD *)(4 * v3 - 0x87FFFFFF9FCLL);
  return (char *)XStateHeader + v9;
}
