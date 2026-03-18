/*
 * XREFs of ?ApplyFullKeyboardStates@@YAXPEAX0@Z @ 0x1C0188414
 * Callers:
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018C780 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 * Callees:
 *     ApiSetEditionPostUpdateKeyStateEvent @ 0x1C00405B8 (ApiSetEditionPostUpdateKeyStateEvent.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

void __fastcall ApplyFullKeyboardStates(_OWORD *a1, __int128 *a2)
{
  char *v2; // rsi
  char *i; // rdi
  __int64 v4; // rbx

  *(_OWORD *)gafRawKeyState = *a1;
  xmmword_1C02142D0 = a1[1];
  unk_1C02142E0 = a1[2];
  xmmword_1C02142F0 = a1[3];
  gafAsyncKeyState = *a2;
  xmmword_1C0214330 = a2[1];
  xmmword_1C0214340 = a2[2];
  xmmword_1C0214350 = a2[3];
  if ( grpdeskRitInput )
  {
    v2 = (char *)grpdeskRitInput + 168;
    for ( i = (char *)*((_QWORD *)grpdeskRitInput + 21); i != v2; i = *(char **)i )
    {
      v4 = *((_QWORD *)i - 39);
      *(_DWORD *)(v4 + 396) |= 1u;
      memset((void *)(v4 + 204), 255, 0x20uLL);
      ApiSetEditionPostUpdateKeyStateEvent(v4);
    }
  }
}
