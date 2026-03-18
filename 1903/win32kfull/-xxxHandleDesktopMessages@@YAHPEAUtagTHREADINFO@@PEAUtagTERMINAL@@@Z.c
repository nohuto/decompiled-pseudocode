/*
 * XREFs of ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000E3DC
 * Callers:
 *     xxxDesktopThread @ 0x1C000DE70 (xxxDesktopThread.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C000E4C4 (xxxInternalGetMessage.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000ED9C (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C001B498 (WPP_RECORDER_SF_D.c)
 *     xxxDispatchMessage @ 0x1C0024958 (xxxDispatchMessage.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C01415E0 (xxxCleanupMotherDesktopWindow.c)
 *     memset @ 0x1C0166840 (memset.c)
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
      xxxCleanupMotherDesktopWindow(a2);
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
    WPP_RECORDER_SF_D(v7, v4, 8, 21, (__int64)&WPP_514f6d50daca38afcf86702a8eadf7c9_Traceguids, *((_DWORD *)a1 + 223));
  }
  return 0LL;
}
