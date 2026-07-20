/*
 * XREFs of SmpQueryCopyDumpSetting @ 0x14000D204
 * Callers:
 *     SmpPagefileInitialize @ 0x14000B8B8 (SmpPagefileInitialize.c)
 * Callees:
 *     <none>
 */

bool SmpQueryCopyDumpSetting()
{
  return (SmpSystemWriteConstraintInfo & 4) != 0;
}
