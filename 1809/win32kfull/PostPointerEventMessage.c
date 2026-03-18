/*
 * XREFs of PostPointerEventMessage @ 0x1C01D9F90
 * Callers:
 *     PostDeviceNotification @ 0x1C0103C0C (PostDeviceNotification.c)
 *     PostPointerDeviceInRangeMessage @ 0x1C01D9F50 (PostPointerDeviceInRangeMessage.c)
 *     PostPointerDeviceOutOfRangeMessage @ 0x1C01D9F70 (PostPointerDeviceOutOfRangeMessage.c)
 * Callees:
 *     PostInputMessage @ 0x1C00D3F4C (PostInputMessage.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     PHIDTtoPT @ 0x1C01D9F18 (PHIDTtoPT.c)
 */

_UNKNOWN **__fastcall PostPointerEventMessage(__int64 a1, unsigned int a2, unsigned __int64 a3, int a4)
{
  _UNKNOWN **result; // rax
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v10; // r11
  __int64 v11; // r10
  BOOL v12; // ecx
  BOOL v13; // r8d
  __int64 v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+40h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = &retaddr;
  Flink = gPointerDeviceClients.Flink;
  if ( !a4 )
  {
    result = (_UNKNOWN **)PHIDTtoPT(a1);
    a3 = (int)result;
  }
  for ( ; Flink != &gPointerDeviceClients; Flink = Flink->Flink )
  {
    v10 = (__int64)Flink[-1].Flink;
    v11 = *(_QWORD *)(v10 + 16);
    if ( !a4 )
    {
      if ( LODWORD(Flink[-1].Blink) )
      {
        result = (_UNKNOWN **)grpdeskRitInput;
        if ( *(_QWORD *)(v11 + 456) == grpdeskRitInput )
          result = (_UNKNOWN **)PostMessage((struct tagWND *)Flink[-1].Flink, a2, a3, *(_QWORD *)(a1 + 728));
      }
      continue;
    }
    v12 = 0;
    if ( a2 == 568 )
      v12 = a3 - 1 <= 1;
    if ( v12 )
    {
      result = (_UNKNOWN **)gSessionId;
      v13 = **(_DWORD **)(*(_QWORD *)(v11 + 456) + 40LL) == gSessionId;
    }
    else
    {
      result = (_UNKNOWN **)grpdeskRitInput;
      if ( *(_QWORD *)(v11 + 456) == grpdeskRitInput )
        goto LABEL_12;
      v13 = 0;
    }
    if ( v13 )
    {
LABEL_12:
      LODWORD(v15) = 0;
      LODWORD(v14) = 0;
      result = (_UNKNOWN **)PostInputMessage(
                              *(_QWORD *)(v11 + 432),
                              v10,
                              a2,
                              a3,
                              *(_QWORD *)(a1 + 728),
                              v14,
                              0LL,
                              0LL,
                              v15,
                              0LL,
                              0LL,
                              0LL);
    }
  }
  return result;
}
