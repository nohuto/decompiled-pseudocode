/*
 * XREFs of HUBDSM_ValidatingMSOSExtendedPropertyDescriptorHeader @ 0x1C00211F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C0006A6C (McTemplateK0p.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSExtendedPropertyDescriptorHeader(struct _MCGEN_TRACE_CONTEXT *a1)
{
  unsigned __int64 MatchAllKeyword; // rbx
  unsigned int v2; // edi
  unsigned __int16 v3; // r9

  MatchAllKeyword = a1[13].MatchAllKeyword;
  v2 = 4065;
  if ( *(_DWORD *)(MatchAllKeyword + 256) != 10 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_17;
    v3 = 65;
    goto LABEL_16;
  }
  if ( *(_DWORD *)(MatchAllKeyword + 1732) < 0xAu )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_17;
    v3 = 66;
    goto LABEL_16;
  }
  if ( *(_WORD *)(MatchAllKeyword + 1736) != 256 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_17;
    v3 = 67;
    goto LABEL_16;
  }
  if ( *(_WORD *)(MatchAllKeyword + 1738) != 5 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_17;
    v3 = 68;
    goto LABEL_16;
  }
  if ( *(_WORD *)(MatchAllKeyword + 1740) )
    return 4077;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = 69;
LABEL_16:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(MatchAllKeyword + 8) + 1432LL),
      2u,
      5u,
      v3,
      (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids);
  }
LABEL_17:
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
    McTemplateK0p(
      a1,
      &USBHUB3_ETW_EVENT_INVALID_MSOS_EXTENDED_PROPERTY_DESCRIPTOR_HEADER,
      (const GUID *)(MatchAllKeyword + 1516),
      *(_QWORD *)(MatchAllKeyword + 24));
  return v2;
}
