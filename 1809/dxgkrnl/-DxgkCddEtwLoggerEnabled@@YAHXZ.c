/*
 * XREFs of ?DxgkCddEtwLoggerEnabled@@YAHXZ @ 0x1C013C600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DxgkCddEtwLoggerEnabled(void)
{
  return *(_BYTE *)(&DxgkControlGuid_Context + 2) & 0x20;
}
