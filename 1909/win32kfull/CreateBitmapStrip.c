/*
 * XREFs of CreateBitmapStrip @ 0x1C013F960
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     xxxSetWindowNCMetrics @ 0x1C013D004 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C012AFC4 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     CleanupOEMBitmaps @ 0x1C013F9F0 (CleanupOEMBitmaps.c)
 *     GreTextInitialized @ 0x1C0166B18 (GreTextInitialized.c)
 */

__int64 __fastcall CreateBitmapStrip(__int64 a1, __int64 a2)
{
  int v3; // esi
  __int64 v4; // rbx
  int i; // edi

  if ( !(unsigned int)GreTextInitialized(a1, a2) )
    return 1LL;
  CleanupOEMBitmaps();
  v3 = 0;
  v4 = 0LL;
  for ( i = 29; i < 39; i += 2 )
  {
    if ( *(_QWORD *)(v4 + gcachedCaptions[0]) )
      HMAssignmentUnlock(&gcachedCaptions[2 * v3]);
    ++v3;
    *(_DWORD *)(v4 + gcachedCaptions[0] + 8) = i;
    v4 += 16LL;
  }
  return CreateDPIBitmapStrip(0);
}
