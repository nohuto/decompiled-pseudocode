/*
 * XREFs of ??$UnmapMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAXAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@I@Z @ 0x140058F60
 * Callers:
 *     ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140059AA4 (--1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEAPEAX@Z @ 0x14005E7E8 (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEA.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z @ 0x14005EC04 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x140015C10 (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
 */

BOOL __fastcall UnmapMemory<CSpatialCrossProcessBaseEndpoint::ControlData>(void **a1, unsigned int a2)
{
  void *v3; // rcx
  BOOL result; // eax

  v3 = *a1;
  if ( v3 )
  {
    if ( a2 )
    {
      AERTUnlockMemory(v3, a2);
      v3 = *a1;
    }
    result = UnmapViewOfFile(v3);
    *a1 = 0LL;
  }
  return result;
}
