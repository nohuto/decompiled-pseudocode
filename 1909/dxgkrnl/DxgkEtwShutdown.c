/*
 * XREFs of DxgkEtwShutdown @ 0x1C0040760
 * Callers:
 *     DxgkUnload @ 0x1C023AB20 (DxgkUnload.c)
 * Callees:
 *     McGenEventUnregister @ 0x1C0040784 (McGenEventUnregister.c)
 */

ULONG DxgkEtwShutdown()
{
  ULONG result; // eax

  result = McGenEventUnregister(&DxgkControlGuid_Context);
  DxgkControlGuid_Context = 0LL;
  return result;
}
