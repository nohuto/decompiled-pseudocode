/*
 * XREFs of CreateBitmapStrip @ 0x1C0054A80
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C0053DAC (xxxSetWindowNCMetrics.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C00110A4 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     CleanupOEMBitmaps @ 0x1C0054B00 (CleanupOEMBitmaps.c)
 */

__int64 CreateBitmapStrip()
{
  int v0; // esi
  __int64 v1; // rbx
  int i; // edi

  if ( !gbGreTextReady )
    return 1LL;
  CleanupOEMBitmaps();
  v0 = 0;
  v1 = 0LL;
  for ( i = 29; i < 39; i += 2 )
  {
    if ( *(_QWORD *)(v1 + gcachedCaptions[0]) )
      HMAssignmentUnlock(&gcachedCaptions[2 * v0]);
    ++v0;
    *(_DWORD *)(v1 + gcachedCaptions[0] + 8) = i;
    v1 += 16LL;
  }
  return CreateDPIBitmapStrip(0);
}
