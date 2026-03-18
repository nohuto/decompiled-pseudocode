/*
 * XREFs of ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01A5EF0
 * Callers:
 *     EditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1C00EA7B0 (EditionFinalizeKoreanImeCompStrOnMouseClick.c)
 * Callees:
 *     PostInputMessage @ 0x1C0019B84 (PostInputMessage.c)
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 *     GetAppImeCompatFlags @ 0x1C00EAAD8 (GetAppImeCompatFlags.c)
 */

void __fastcall FinalizeKoreanImeCompStrOnMouseClick(struct tagWND *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  char v3; // [rsp+70h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(gpqForeground + 104LL) )
  {
    v1 = *((_QWORD *)a1 + 2);
    if ( (GetAppImeCompatFlags(v1, gpqForeground) & 0x400000) == 0 )
    {
      if ( *(_WORD *)(v1 + 624) <= 0x400u )
      {
        SetSystemInputSource(&v3);
        PostInputMessage(gpqForeground, 0LL, 0, 257LL, 229LL, 0, 0LL, 0LL, 0, &v3, 0LL, 0LL);
      }
      else
      {
        v2 = *(_QWORD *)(v1 + 768);
        if ( v2 )
        {
          if ( *(char *)(*(_QWORD *)(v2 + 40) + 20LL) >= 0 )
            PostMessage((struct tagWND *)v2, 0x287u, 0x20uLL, 0LL);
        }
      }
    }
  }
}
