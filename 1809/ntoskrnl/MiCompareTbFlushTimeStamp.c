/*
 * XREFs of MiCompareTbFlushTimeStamp @ 0x14009825C
 * Callers:
 *     MiFlushTbAsNeeded @ 0x140097F10 (MiFlushTbAsNeeded.c)
 *     MiObtainSystemCacheView @ 0x1400AD160 (MiObtainSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x1400AD870 (MmMapViewInSystemCache.c)
 *     MiAttachSession @ 0x140125BE4 (MiAttachSession.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 */

char __fastcall MiCompareTbFlushTimeStamp(int a1, __int64 a2)
{
  int v2; // esi
  int v3; // ebx
  __int64 v5; // r8
  unsigned int v6; // eax
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  v3 = a1 & 1;
  while ( 1 )
  {
    _InterlockedOr(v8, 0);
    v5 = (unsigned int)KiTbFlushTimeStamp;
    v6 = v2 & (KiTbFlushTimeStamp - a1);
    if ( v6 > 2 || !v3 && v6 >= 2 )
      return 0;
    if ( (KiTbFlushTimeStamp & 1) == 0 )
      break;
    v9 = 0;
    _InterlockedOr(v8, 0);
    while ( _bittest(&KiTbFlushTimeStamp, 0) )
      KeYieldProcessorEx(&v9, a2, v5);
    if ( !v3 )
      return 0;
  }
  return 1;
}
