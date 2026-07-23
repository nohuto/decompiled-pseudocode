/*
 * XREFs of MiSystemVaToDynamicBitmap @ 0x1400F7280
 * Callers:
 *     MiMakeSystemRangeAvailable @ 0x1400280B0 (MiMakeSystemRangeAvailable.c)
 *     MiObtainSystemVa @ 0x1400F69E4 (MiObtainSystemVa.c)
 *     MiInitializeKernelStacks @ 0x1409B6C54 (MiInitializeKernelStacks.c)
 *     MiInitializeSystemPtes @ 0x1409B78BC (MiInitializeSystemPtes.c)
 *     MiBuildPagedPool @ 0x1409B7A44 (MiBuildPagedPool.c)
 *     MiInitializeDriverImages @ 0x1409B7BDC (MiInitializeDriverImages.c)
 *     MiInitializeDynamicRegion @ 0x1409B7DDC (MiInitializeDynamicRegion.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiSystemVaToDynamicBitmap(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  v1 = a1 - 6;
  if ( !v1 )
    return &qword_14043B3B0;
  v2 = v1 - 1;
  if ( !v2 )
    return &qword_14043B440;
  v3 = v2 - 1;
  if ( !v3 )
    return &qword_14043B488;
  v4 = v3 - 1;
  if ( !v4 )
    return &qword_14043B2D8;
  v6 = v4 - 2;
  if ( !v6 )
    return (__int64 *)&unk_14043B368;
  v7 = v6 - 1;
  if ( !v7 )
    return &qword_14043B320;
  v8 = v7 - 1;
  if ( !v8 )
    return (__int64 *)&unk_14043B3F8;
  v9 = v8 - 1;
  if ( !v9 )
    return &qword_14043B2D8;
  if ( v9 == 1 )
    return &qword_14043B290;
  else
    return 0LL;
}
