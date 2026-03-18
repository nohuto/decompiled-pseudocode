/*
 * XREFs of ProcessSuspendedPostMessage @ 0x1C012E418
 * Callers:
 *     _PostThreadMessageEx @ 0x1C000F734 (_PostThreadMessageEx.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00A4400 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     ?FindQMsgForCoalesce@@YAPEAUtagQMSG@@PEAUtagMLIST@@IPEAUHWND__@@PEAU1@@Z @ 0x1C012E5D4 (-FindQMsgForCoalesce@@YAPEAUtagQMSG@@PEAUtagMLIST@@IPEAUHWND__@@PEAU1@@Z.c)
 *     ?ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z @ 0x1C012E60C (-ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z.c)
 */

__int64 __fastcall ProcessSuspendedPostMessage(__int64 a1, HWND *a2, unsigned int a3, unsigned __int64 a4, __int64 a5)
{
  unsigned int v5; // r11d
  unsigned int v7; // r10d
  HWND v9; // rdi
  struct tagQMSG *v10; // rbx
  struct tagMLIST *v11; // rsi
  struct tagQMSG *QMsgForCoalesce; // rax
  unsigned int v13; // edx
  unsigned int v14; // r10d

  v5 = a3;
  if ( a3 < 0x400 )
    v7 = ((unsigned __int16)MessageTable[a3] >> 10) & 7;
  else
    v7 = 1;
  if ( !v7 )
    return 0LL;
  if ( v7 >= 2 )
  {
    if ( a2 )
      v9 = *a2;
    else
      v9 = 0LL;
    v10 = 0LL;
    v11 = (struct tagMLIST *)(a1 + 800);
    while ( 1 )
    {
      QMsgForCoalesce = FindQMsgForCoalesce(v11, v5, v9, v10);
      v10 = QMsgForCoalesce;
      if ( !QMsgForCoalesce )
        break;
      if ( !(unsigned int)ProcessComplexCoalescence(
                            v14,
                            v13,
                            a4,
                            a5,
                            (unsigned __int64 *)QMsgForCoalesce + 4,
                            (__int64 *)QMsgForCoalesce + 5) )
        return 0LL;
    }
  }
  return 1LL;
}
