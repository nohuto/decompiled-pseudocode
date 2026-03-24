/*
 * XREFs of ZwIsSystemResumeAutomatic @ 0x1401BA110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN ZwIsSystemResumeAutomatic(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(v1, v0, v2);
}
