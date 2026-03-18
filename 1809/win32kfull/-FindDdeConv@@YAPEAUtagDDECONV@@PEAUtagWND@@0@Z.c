/*
 * XREFs of ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01F35B0
 * Callers:
 *     ValidateDDEConvPair @ 0x1C01F4AEC (ValidateDDEConvPair.c)
 *     _ImpersonateDdeClientWindow @ 0x1C01F4B2C (_ImpersonateDdeClientWindow.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01F4BC0 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C01F4DF4 (xxxDDETrackPostHook.c)
 *     xxxDDETrackSendHook @ 0x1C01F50E0 (xxxDDETrackSendHook.c)
 * Callees:
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 */

struct tagDDECONV *__fastcall FindDdeConv(struct tagWND *a1, struct tagWND *a2)
{
  struct tagDDECONV *result; // rax

  for ( result = (struct tagDDECONV *)GetProp((__int64)a1, (unsigned __int16)atomDDETrack, 1LL);
        result && *((struct tagWND **)result + 6) != a2;
        result = (struct tagDDECONV *)*((_QWORD *)result + 3) )
  {
    ;
  }
  return result;
}
