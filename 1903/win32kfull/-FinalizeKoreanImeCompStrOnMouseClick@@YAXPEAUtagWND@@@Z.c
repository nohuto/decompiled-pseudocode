/*
 * XREFs of ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01DB284
 * Callers:
 *     EditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1C00B66D0 (EditionFinalizeKoreanImeCompStrOnMouseClick.c)
 * Callees:
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     PostInputMessage @ 0x1C0023BFC (PostInputMessage.c)
 *     GetAppImeCompatFlags @ 0x1C00B1B38 (GetAppImeCompatFlags.c)
 */

void __fastcall FinalizeKoreanImeCompStrOnMouseClick(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // [rsp+A0h] [rbp+67h] BYREF

  v4 = *((_QWORD *)a1 + 2);
  v6 = 0LL;
  if ( !*(_QWORD *)(gpqForeground + 112LL) && (GetAppImeCompatFlags(v4, a2, a3, a4) & 0x400000) == 0 )
  {
    if ( *(_WORD *)(v4 + 624) <= 0x400u )
    {
      SetSystemInputSource(&v6);
      PostInputMessage(
        gpqForeground,
        0LL,
        0,
        0x101uLL,
        229LL,
        0,
        0LL,
        0LL,
        0,
        (struct tagINPUT_MESSAGE_SOURCE *)&v6,
        0LL,
        0LL,
        0,
        0LL);
    }
    else
    {
      v5 = *(_QWORD *)(v4 + 776);
      if ( v5 )
      {
        if ( *(char *)(*(_QWORD *)(v5 + 40) + 20LL) >= 0 )
          PostMessage(v5, 647, 32, 0);
      }
    }
  }
}
