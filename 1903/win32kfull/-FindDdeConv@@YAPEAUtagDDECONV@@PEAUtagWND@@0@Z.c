/*
 * XREFs of ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C0209868
 * Callers:
 *     ValidateDDEConvPair @ 0x1C020B6AC (ValidateDDEConvPair.c)
 *     _ImpersonateDdeClientWindow @ 0x1C020B7E0 (_ImpersonateDdeClientWindow.c)
 *     xxxDDETrackGetMessageHook @ 0x1C020B8A0 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C020BC3C (xxxDDETrackPostHook.c)
 *     xxxDDETrackSendHook @ 0x1C020BF68 (xxxDDETrackSendHook.c)
 * Callees:
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
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
