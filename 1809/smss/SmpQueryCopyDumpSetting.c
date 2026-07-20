/*
 * XREFs of SmpQueryCopyDumpSetting @ 0x14000D678
 * Callers:
 *     SmpPagefileInitialize @ 0x14000BD30 (SmpPagefileInitialize.c)
 * Callees:
 *     <none>
 */

bool SmpQueryCopyDumpSetting()
{
  return (SmpSystemWriteConstraintInfo & 4) != 0;
}
