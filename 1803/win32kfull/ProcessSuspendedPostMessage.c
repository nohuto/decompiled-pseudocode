/*
 * XREFs of ProcessSuspendedPostMessage @ 0x1C0102B40
 * Callers:
 *     _PostThreadMessageEx @ 0x1C001B65C (_PostThreadMessageEx.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0041530 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     ?FindQMsgForCoalesce@@YAPEAUtagQMSG@@PEAUtagMLIST@@IPEAUHWND__@@PEAU1@@Z @ 0x1C0102CF4 (-FindQMsgForCoalesce@@YAPEAUtagQMSG@@PEAUtagMLIST@@IPEAUHWND__@@PEAU1@@Z.c)
 *     ?ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z @ 0x1C0102D2C (-ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z.c)
 */

__int64 __fastcall ProcessSuspendedPostMessage(__int64 a1, HWND *a2, unsigned int a3, unsigned __int64 a4, __int64 a5)
{
  int v7; // r11d
  HWND v8; // rsi
  struct tagQMSG *v9; // rdi
  struct tagMLIST *v10; // rbp
  struct tagQMSG *QMsgForCoalesce; // rax
  unsigned int v12; // edx
  unsigned int v13; // r11d

  if ( a3 >= 0x400 )
    v7 = 1;
  else
    v7 = ((unsigned __int16)MessageTable[a3] >> 10) & 7;
  if ( !v7 )
    return 0LL;
  if ( v7 != 1 )
  {
    if ( a2 )
      v8 = *a2;
    else
      v8 = 0LL;
    v9 = 0LL;
    v10 = (struct tagMLIST *)(a1 + 800);
    while ( 1 )
    {
      QMsgForCoalesce = FindQMsgForCoalesce(v10, a3, v8, v9);
      v9 = QMsgForCoalesce;
      if ( !QMsgForCoalesce )
        break;
      if ( !(unsigned int)ProcessComplexCoalescence(
                            v13,
                            v12,
                            a4,
                            a5,
                            (unsigned __int64 *)QMsgForCoalesce + 4,
                            (__int64 *)QMsgForCoalesce + 5) )
        return 0LL;
    }
  }
  return 1LL;
}
