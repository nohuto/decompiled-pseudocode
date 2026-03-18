/*
 * XREFs of MiSystemVaToDynamicBitmap @ 0x1400ACF94
 * Callers:
 *     MiObtainSystemVa @ 0x1400AAF7C (MiObtainSystemVa.c)
 *     MiMakeSystemRangeAvailable @ 0x1400AB9CC (MiMakeSystemRangeAvailable.c)
 *     MiInitializeKernelStacks @ 0x1409EDBB0 (MiInitializeKernelStacks.c)
 *     MiBuildPagedPool @ 0x1409EE5C8 (MiBuildPagedPool.c)
 *     MiInitializeDriverImages @ 0x1409EE68C (MiInitializeDriverImages.c)
 *     MiInitializeDynamicRegion @ 0x1409EE8B4 (MiInitializeDynamicRegion.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiSystemVaToDynamicBitmap(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  v1 = a1 - 6;
  if ( !v1 )
    return &qword_140465D30;
  v2 = v1 - 2;
  if ( !v2 )
    return &qword_140465D78;
  v3 = v2 - 1;
  if ( !v3 )
    return &qword_140465C58;
  v5 = v3 - 2;
  if ( !v5 )
    return (__int64 *)&unk_140465CE8;
  v6 = v5 - 1;
  if ( !v6 )
    return &qword_140465CA0;
  v7 = v6 - 1;
  if ( !v7 )
    return &qword_140465C58;
  if ( v7 == 1 )
    return &qword_140465C10;
  else
    return 0LL;
}
