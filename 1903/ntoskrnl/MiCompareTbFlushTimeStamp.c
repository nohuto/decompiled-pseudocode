/*
 * XREFs of MiCompareTbFlushTimeStamp @ 0x1400222E8
 * Callers:
 *     MiFlushTbAsNeeded @ 0x140021F90 (MiFlushTbAsNeeded.c)
 *     MmMapViewInSystemCache @ 0x140074B60 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x140076500 (MiObtainSystemCacheView.c)
 *     MiAttachSession @ 0x140126850 (MiAttachSession.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 */

char __fastcall MiCompareTbFlushTimeStamp(int a1, int a2)
{
  int v3; // ebx
  unsigned int v5; // eax
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1 & 1;
  while ( 1 )
  {
    _InterlockedOr(v7, 0);
    v5 = a2 & (KiTbFlushTimeStamp - a1);
    if ( v5 > 2 || !v3 && v5 >= 2 )
      return 0;
    if ( (KiTbFlushTimeStamp & 1) == 0 )
      break;
    v8 = 0;
    _InterlockedOr(v7, 0);
    while ( _bittest(&KiTbFlushTimeStamp, 0) )
      KeYieldProcessorEx(&v8);
    if ( !v3 )
      return 0;
  }
  return 1;
}
