/*
 * XREFs of FxProbeAndLockForRead @ 0x1C00935A4
 * Callers:
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C004FFA4 (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxProbeAndLockForRead(_MDL *Mdl, char a2)
{
  MmProbeAndLockPages(Mdl, 1, IoReadAccess);
  return 0LL;
}
