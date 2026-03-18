/*
 * XREFs of ?DxgkCddEtwLoggerEnabled@@YAHXZ @ 0x1C014C6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DxgkCddEtwLoggerEnabled(void)
{
  return *(_BYTE *)(&DxgkControlGuid_Context + 2) & 0x20;
}
