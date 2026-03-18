/*
 * XREFs of PiDevCfgFreeDeviceContext @ 0x1406F49F4
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1406F4444 (PiDevCfgProcessDevice.c)
 *     PiDevCfgInitDeviceContext @ 0x1406F4A38 (PiDevCfgInitDeviceContext.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14070CED8 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140750BE0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x14082D1C0 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x14083165C (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceClass @ 0x1408316F4 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x140831A64 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x1408321A0 (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 */

void __fastcall PiDevCfgFreeDeviceContext(__int64 a1)
{
  UNICODE_STRING *v2; // rbx
  __int64 v3; // rdi
  void *v4; // rcx

  if ( *(int *)a1 < 0 )
  {
    v4 = *(void **)(a1 + 16);
    if ( v4 )
      ZwClose(v4);
  }
  v2 = (UNICODE_STRING *)(a1 + 24);
  v3 = 3LL;
  do
  {
    RtlFreeAnsiString(v2++);
    --v3;
  }
  while ( v3 );
}
