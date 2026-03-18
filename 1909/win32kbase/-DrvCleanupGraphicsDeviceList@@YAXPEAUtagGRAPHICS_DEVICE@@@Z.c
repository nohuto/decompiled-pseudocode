/*
 * XREFs of ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00B3DF0
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C00B2F08 (MultiUserNtGreCleanup.c)
 * Callees:
 *     DrvCleanupOneGraphicsDevice @ 0x1C00B3E50 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C00B3F00 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 */

void __fastcall DrvCleanupGraphicsDeviceList(struct tagGRAPHICS_DEVICE *a1)
{
  struct tagGRAPHICS_DEVICE *v1; // rbx
  struct tagGRAPHICS_DEVICE *v2; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v1 + 16);
      if ( (*((_DWORD *)v1 + 40) & 0x800000) != 0 )
        DrvRemoveAdapterLuid(*(struct _LUID *)((char *)v1 + 248));
      DrvCleanupOneGraphicsDevice(v1);
      v1 = v2;
    }
    while ( v2 );
  }
}
