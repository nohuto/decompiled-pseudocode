/*
 * XREFs of xxxDDETrackSendHook @ 0x1C01F50E0
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01F3454 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01F35B0 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z @ 0x1C01F36BC (-NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z.c)
 *     xxxMessageEvent @ 0x1C022CA28 (xxxMessageEvent.c)
 */

_BOOL8 __fastcall xxxDDETrackSendHook(struct tagWND *a1, int a2, __int64 a3, int a4)
{
  struct tagWND *v7; // rax
  struct tagWND *v8; // rbx
  struct tagDDECONV *DdeConv; // rax
  struct tagDDECONV *v11; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-40h] BYREF
  int v13; // [rsp+48h] [rbp-30h]
  struct tagDDECONV *v14; // [rsp+80h] [rbp+8h] BYREF

  if ( (MonitorFlags & 0x2000000) != 0 )
  {
    v13 = 0;
    v12[0] = (unsigned __int16)a4;
    v12[1] = HIWORD(a4);
    xxxMessageEvent((_DWORD)a1, a2, a3, a4, 0x2000000, (__int64)v12);
  }
  if ( *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) )
    return 1LL;
  if ( a2 != 996 )
    return a2 == 992;
  v7 = (struct tagWND *)ValidateHwnd(a3);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  DdeConv = FindDdeConv(v7, a1);
  if ( DdeConv )
  {
    AnticipatePost(
      DdeConv,
      (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxDupConvTerminate,
      0LL,
      0LL,
      0LL,
      0);
    PostMessage(v8, 0x3E1u, *(_QWORD *)a1, 0LL);
    return 0LL;
  }
  return (unsigned int)NewConversation(&v11, &v14, a1, v8) != 0;
}
