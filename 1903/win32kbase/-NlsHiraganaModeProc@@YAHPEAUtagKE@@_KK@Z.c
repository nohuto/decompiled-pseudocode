/*
 * XREFs of ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0181A50
 * Callers:
 *     <none>
 * Callees:
 *     ?NlsClearKeyStateToggle@@YAXE@Z @ 0x1C01817B4 (-NlsClearKeyStateToggle@@YAXE@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEAE@Z @ 0x1C0181974 (-NlsGetCurrentInputMode@@YAEPEAE@Z.c)
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C01820EC (-NlsTestKeyStateToggle@@YAHE@Z.c)
 *     NlsKbdSendIMEProc @ 0x1C0182198 (NlsKbdSendIMEProc.c)
 *     xxxKeyEventEx @ 0x1C01861D0 (xxxKeyEventEx.c)
 */

__int64 __fastcall NlsHiraganaModeProc(struct tagKE *a1, __int64 a2)
{
  __int16 v2; // r8
  __int16 v5; // r8
  char CurrentInputMode; // al
  __int16 v7; // r11

  v2 = *((_WORD *)a1 + 1);
  if ( v2 < 0 )
    return 0LL;
  *((_WORD *)a1 + 1) = v2 & 0x8F00;
  if ( !(unsigned int)NlsTestKeyStateToggle(0xF2u) )
  {
    CurrentInputMode = NlsGetCurrentInputMode(&NlsAlphaNumMode);
    NlsClearKeyStateToggle(CurrentInputMode);
    xxxKeyEventEx(
      (unsigned __int16)(*((_WORD *)a1 + 1) | v7) | 0x8000u,
      *(unsigned __int8 *)a1,
      *((unsigned int *)a1 + 1),
      a2,
      *((_QWORD *)a1 + 1),
      (char *)a1 + 16,
      0,
      0,
      0LL,
      0LL);
    v5 = *((_WORD *)a1 + 1);
  }
  *((_WORD *)a1 + 1) = v5 | 0xF2;
  if ( !gdwIMEOpenStatus && !(unsigned int)NlsTestKeyStateToggle(0x15u) )
    NlsKbdSendIMEProc(0LL, 0LL);
  return 1LL;
}
