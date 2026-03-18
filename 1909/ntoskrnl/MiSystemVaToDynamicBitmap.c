/*
 * XREFs of MiSystemVaToDynamicBitmap @ 0x1400E84A4
 * Callers:
 *     MiObtainSystemVa @ 0x1400E648C (MiObtainSystemVa.c)
 *     MiMakeSystemRangeAvailable @ 0x1400E6EDC (MiMakeSystemRangeAvailable.c)
 *     MiInitializeKernelStacks @ 0x1409EDAC8 (MiInitializeKernelStacks.c)
 *     MiBuildPagedPool @ 0x1409EE4E0 (MiBuildPagedPool.c)
 *     MiInitializeDriverImages @ 0x1409EE5A4 (MiInitializeDriverImages.c)
 *     MiInitializeDynamicRegion @ 0x1409EE7CC (MiInitializeDynamicRegion.c)
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
    return &qword_140465A30;
  v2 = v1 - 2;
  if ( !v2 )
    return &qword_140465A78;
  v3 = v2 - 1;
  if ( !v3 )
    return &qword_140465958;
  v5 = v3 - 2;
  if ( !v5 )
    return (__int64 *)&unk_1404659E8;
  v6 = v5 - 1;
  if ( !v6 )
    return &qword_1404659A0;
  v7 = v6 - 1;
  if ( !v7 )
    return &qword_140465958;
  if ( v7 == 1 )
    return &qword_140465910;
  else
    return 0LL;
}
