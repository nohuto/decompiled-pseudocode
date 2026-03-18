/*
 * XREFs of ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0015CE8
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000C010 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiCompleteFlipEntry @ 0x1C000D7B0 (VidSchiCompleteFlipEntry.c)
 *     VidSchiUpdateFlipDeviceStatus @ 0x1C0015C80 (VidSchiUpdateFlipDeviceStatus.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C0015D24 (VidSchiProcessFlipPendingContextList.c)
 * Callees:
 *     VidSchiUnwaitContext @ 0x1C000E794 (VidSchiUnwaitContext.c)
 */

__int64 __fastcall VidSchiUpdateFlipContextStatus(struct _VIDSCH_CONTEXT *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (*((_DWORD *)a1 + 46) & 0x10) != 0 )
  {
    *((_DWORD *)a1 + 46) &= ~0x10u;
    return VidSchiUnwaitContext((__int64)a1, 0x51D2u);
  }
  return v1;
}
