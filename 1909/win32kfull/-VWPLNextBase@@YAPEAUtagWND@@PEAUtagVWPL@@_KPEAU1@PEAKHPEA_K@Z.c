/*
 * XREFs of ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x1C0071140
 * Callers:
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0017B78 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxHungAppDemon @ 0x1C004F540 (xxxHungAppDemon.c)
 *     xxxSendMinRectMessages @ 0x1C0109A64 (xxxSendMinRectMessages.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00723EC (WPP_RECORDER_SF_qq.c)
 */

struct tagWND *__fastcall VWPLNextBase(struct tagVWPL *a1, int a2, struct tagWND *a3, unsigned int *a4)
{
  unsigned int v6; // ecx
  unsigned int v7; // edx

  if ( !a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(0, a2, 11, 13, (__int64)&WPP_96a4b716de4d340ab0b6048e502c48be_Traceguids, 0LL);
    return 0LL;
  }
  if ( *((_DWORD *)a1 + 3) )
    return 0LL;
  v6 = *a4;
  v7 = *(_DWORD *)a1;
  if ( *a4 >= *(_DWORD *)a1 )
    goto LABEL_10;
  if ( *((struct tagWND **)a1 + 2 * v6 + 3) == a3 )
    *a4 = ++v6;
  if ( v6 >= v7 )
  {
LABEL_10:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(v6, v7, 11, 15, (__int64)&WPP_96a4b716de4d340ab0b6048e502c48be_Traceguids, a1);
    *a4 = 0;
    return 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      v6,
      v7,
      11,
      14,
      (__int64)&WPP_96a4b716de4d340ab0b6048e502c48be_Traceguids,
      (char)a1,
      *((_QWORD *)a1 + 2 * v6 + 3));
    v6 = *a4;
  }
  return (struct tagWND *)*((_QWORD *)a1 + 2 * v6 + 3);
}
