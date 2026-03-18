/*
 * XREFs of DxgkEtwShutdown @ 0x1C003A230
 * Callers:
 *     DxgkUnload @ 0x1C0208940 (DxgkUnload.c)
 * Callees:
 *     McGenEventUnregister @ 0x1C003A254 (McGenEventUnregister.c)
 */

ULONG DxgkEtwShutdown()
{
  ULONG result; // eax

  result = McGenEventUnregister(&DxgkControlGuid_Context);
  DxgkControlGuid_Context = 0LL;
  return result;
}
