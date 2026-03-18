/*
 * XREFs of ?Is18ByteDispDesc@EDID_PARSER@MonDescParser@@QEBA_NH@Z @ 0x1C0002330
 * Callers:
 *     ?EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z @ 0x1C000223C (-EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z.c)
 *     ?ObtainSupportedFrequencyRanges@EDID_MODES@MonDescParser@@QEAAJPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C0020450 (-ObtainSupportedFrequencyRanges@EDID_MODES@MonDescParser@@QEAAJPEAGPEAU_FrequencyRangeDescriptor.c)
 *     ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x1C0021400 (-GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMI.c)
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x1C002195C (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorUserFriendlyName@@YAJPEBEPEAG@Z @ 0x1C0056510 (-EDIDV1_ObtainMonitorUserFriendlyName@@YAJPEBEPEAG@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall MonDescParser::EDID_PARSER::Is18ByteDispDesc(MonDescParser::EDID_PARSER *this, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  char result; // al

  v2 = *(_QWORD *)this;
  v3 = 9 * (a2 + 3LL);
  result = 0;
  if ( !*(_WORD *)(*(_QWORD *)this + 2 * v3)
    && !*(_BYTE *)(v2 + 2 * v3 + 2)
    && (!*(_BYTE *)(v2 + 2 * v3 + 4) || *(_BYTE *)(v2 + 2 * v3 + 3) == 0xFD)
    && *(_BYTE *)(v2 + 2 * v3 + 3) != 16 )
  {
    return 1;
  }
  return result;
}
