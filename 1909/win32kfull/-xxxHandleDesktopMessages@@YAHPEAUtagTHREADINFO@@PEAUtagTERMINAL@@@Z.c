/*
 * XREFs of ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000DB5C
 * Callers:
 *     xxxDesktopThread @ 0x1C000D5F0 (xxxDesktopThread.c)
 * Callees:
 *     xxxCleanupMotherDesktopWindow @ 0x1C000B050 (xxxCleanupMotherDesktopWindow.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000BDB0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxInternalGetMessage @ 0x1C000DC44 (xxxInternalGetMessage.c)
 *     WPP_RECORDER_SF_D @ 0x1C001BBC0 (WPP_RECORDER_SF_D.c)
 *     xxxDispatchMessage @ 0x1C002ADC8 (xxxDispatchMessage.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall xxxHandleDesktopMessages(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  int v4; // edx
  int v6; // eax
  unsigned int v7; // ecx
  _QWORD v8[7]; // [rsp+30h] [rbp-38h] BYREF

  memset(v8, 0, 0x30uLL);
  while ( 1 )
  {
    if ( !(unsigned int)xxxInternalGetMessage((unsigned int)v8, 0, 0, 0, 1, 0) )
      return 1LL;
    if ( a2 == (struct tagTERMINAL *)&gTermNOIO )
    {
      v6 = v8[1];
      if ( LODWORD(v8[1]) != 18 )
        goto LABEL_6;
      xxxCleanupMotherDesktopWindow((__int64)a2);
    }
    v6 = v8[1];
    if ( LODWORD(v8[1]) == 18 )
    {
      v7 = *((_DWORD *)a1 + 223);
      if ( v7 <= 1 )
        break;
    }
LABEL_6:
    if ( v6 == 796 )
    {
      if ( v8[2] == 2LL )
        DestroyPendingDesktops(a1, a2);
    }
    else
    {
      xxxDispatchMessage(v8);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_D(v7, v4, 8, 21, (__int64)&WPP_402c5f24833438052b5cb2c912b968aa_Traceguids, *((_DWORD *)a1 + 223));
  }
  return 0LL;
}
