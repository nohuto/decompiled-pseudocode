/*
 * XREFs of ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0181FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?NlsClearKeyStateToggle@@YAXE@Z @ 0x1C01817B4 (-NlsClearKeyStateToggle@@YAXE@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEAE@Z @ 0x1C0181974 (-NlsGetCurrentInputMode@@YAEPEAE@Z.c)
 *     xxxKeyEventEx @ 0x1C01861D0 (xxxKeyEventEx.c)
 */

__int64 __fastcall NlsSbcsDbcsToggleProc(struct tagKE *a1, __int64 a2)
{
  __int16 v2; // di
  char CurrentInputMode; // al
  int v6; // r11d

  v2 = *((_WORD *)a1 + 1);
  if ( v2 < 0 )
    return 0LL;
  CurrentInputMode = NlsGetCurrentInputMode(&NlsSbcsDbcsMode);
  *((_WORD *)a1 + 1) = v2 & 0x8F00;
  NlsClearKeyStateToggle(CurrentInputMode);
  if ( v6 == 243 )
  {
    xxxKeyEventEx(
      *((_WORD *)a1 + 1) | 0x80F3u,
      *(unsigned __int8 *)a1,
      *((unsigned int *)a1 + 1),
      a2,
      *((_QWORD *)a1 + 1),
      (char *)a1 + 16,
      0,
      0,
      0LL,
      0LL);
    *((_WORD *)a1 + 1) |= 0xF4u;
  }
  else if ( v6 == 244 )
  {
    xxxKeyEventEx(
      *((_WORD *)a1 + 1) | 0x80F4u,
      *(unsigned __int8 *)a1,
      *((unsigned int *)a1 + 1),
      a2,
      *((_QWORD *)a1 + 1),
      (char *)a1 + 16,
      0,
      0,
      0LL,
      0LL);
    *((_WORD *)a1 + 1) |= 0xF3u;
  }
  return 1LL;
}
