/*
 * XREFs of ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01DB104
 * Callers:
 *     EditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1C0057BC0 (EditionFinalizeKoreanImeCompStrOnMouseClick.c)
 * Callees:
 *     PostInputMessage @ 0x1C002A06C (PostInputMessage.c)
 *     GetAppImeCompatFlags @ 0x1C0052998 (GetAppImeCompatFlags.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 */

void __fastcall FinalizeKoreanImeCompStrOnMouseClick(struct tagWND *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // [rsp+A0h] [rbp+67h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  v3 = 0LL;
  if ( !*(_QWORD *)(gpqForeground + 112LL) && (GetAppImeCompatFlags(v1) & 0x400000) == 0 )
  {
    if ( *(_WORD *)(v1 + 624) <= 0x400u )
    {
      SetSystemInputSource(&v3);
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
        (struct tagINPUT_MESSAGE_SOURCE *)&v3,
        0LL,
        0LL,
        0,
        0LL);
    }
    else
    {
      v2 = *(_QWORD *)(v1 + 776);
      if ( v2 )
      {
        if ( *(char *)(*(_QWORD *)(v2 + 40) + 20LL) >= 0 )
          PostMessage(v2, 647, 32, 0);
      }
    }
  }
}
