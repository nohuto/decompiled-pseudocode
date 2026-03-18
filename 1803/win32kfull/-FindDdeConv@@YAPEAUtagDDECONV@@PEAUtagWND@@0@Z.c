/*
 * XREFs of ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01CEF2C
 * Callers:
 *     ValidateDDEConvPair @ 0x1C01D03EC (ValidateDDEConvPair.c)
 *     _ImpersonateDdeClientWindow @ 0x1C01D0428 (_ImpersonateDdeClientWindow.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01D04B0 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C01D06BC (xxxDDETrackPostHook.c)
 *     xxxDDETrackSendHook @ 0x1C01D099C (xxxDDETrackSendHook.c)
 * Callees:
 *     <none>
 */

struct tagDDECONV *__fastcall FindDdeConv(struct tagWND *a1, struct tagWND *a2)
{
  struct tagDDECONV *result; // rax

  for ( result = (struct tagDDECONV *)RealGetProp(*((_QWORD *)a1 + 15), (unsigned __int16)atomDDETrack, 1LL);
        result && *((struct tagWND **)result + 6) != a2;
        result = (struct tagDDECONV *)*((_QWORD *)result + 3) )
  {
    ;
  }
  return result;
}
