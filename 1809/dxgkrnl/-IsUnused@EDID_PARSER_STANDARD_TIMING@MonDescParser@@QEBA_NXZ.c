/*
 * XREFs of ?IsUnused@EDID_PARSER_STANDARD_TIMING@MonDescParser@@QEBA_NXZ @ 0x1C001CAF4
 * Callers:
 *     ?ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EPEAU_VideoModeDescriptor@@@Z @ 0x1C001C36C (-ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EP.c)
 *     ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x1C001C90C (-GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMI.c)
 * Callees:
 *     <none>
 */

bool __fastcall MonDescParser::EDID_PARSER_STANDARD_TIMING::IsUnused(MonDescParser::EDID_PARSER_STANDARD_TIMING *this)
{
  __int16 v1; // cx
  bool result; // al

  v1 = **(_WORD **)this;
  if ( v1 == 257 )
    return 1;
  result = 0;
  if ( !v1 )
    return 1;
  return result;
}
