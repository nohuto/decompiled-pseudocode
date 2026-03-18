/*
 * XREFs of ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C017F630
 * Callers:
 *     <none>
 * Callees:
 *     ?NlsClearKeyStateToggle@@YAXE@Z @ 0x1C017F5C4 (-NlsClearKeyStateToggle@@YAXE@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEAE@Z @ 0x1C017F784 (-NlsGetCurrentInputMode@@YAEPEAE@Z.c)
 *     xxxKeyEventEx @ 0x1C0183FE0 (xxxKeyEventEx.c)
 */

__int64 __fastcall NlsCodeInputToggleProc(struct tagKE *a1, __int64 a2)
{
  __int16 v2; // di
  unsigned __int8 CurrentInputMode; // al
  int v6; // r11d

  v2 = *((_WORD *)a1 + 1);
  if ( v2 < 0 )
    return 0LL;
  CurrentInputMode = NlsGetCurrentInputMode(&NlsCodeInputMode);
  *((_WORD *)a1 + 1) = v2 & 0x8F00;
  NlsClearKeyStateToggle(CurrentInputMode);
  if ( v6 == 250 )
  {
    xxxKeyEventEx(
      *((_WORD *)a1 + 1) | 0x80FAu,
      *(unsigned __int8 *)a1,
      *((unsigned int *)a1 + 1),
      a2,
      *((_QWORD *)a1 + 1),
      (char *)a1 + 16,
      0,
      0,
      0LL,
      0LL);
    *((_WORD *)a1 + 1) |= 0xFBu;
  }
  else if ( v6 == 251 )
  {
    xxxKeyEventEx(
      *((_WORD *)a1 + 1) | 0x80FBu,
      *(unsigned __int8 *)a1,
      *((unsigned int *)a1 + 1),
      a2,
      *((_QWORD *)a1 + 1),
      (char *)a1 + 16,
      0,
      0,
      0LL,
      0LL);
    *((_WORD *)a1 + 1) |= 0xFAu;
  }
  return 1LL;
}
