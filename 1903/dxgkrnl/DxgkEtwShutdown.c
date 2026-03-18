/*
 * XREFs of DxgkEtwShutdown @ 0x1C0040600
 * Callers:
 *     DxgkUnload @ 0x1C023A4B0 (DxgkUnload.c)
 * Callees:
 *     McGenEventUnregister @ 0x1C0040624 (McGenEventUnregister.c)
 */

ULONG DxgkEtwShutdown()
{
  ULONG result; // eax

  result = McGenEventUnregister(&DxgkControlGuid_Context);
  DxgkControlGuid_Context = 0LL;
  return result;
}
