/*
 * XREFs of ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00BC348
 * Callers:
 *     xxxDesktopThread @ 0x1C00BB9E0 (xxxDesktopThread.c)
 * Callees:
 *     xxxCleanupMotherDesktopWindow @ 0x1C0009158 (xxxCleanupMotherDesktopWindow.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00097E0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxDispatchMessage @ 0x1C002DDC0 (xxxDispatchMessage.c)
 *     xxxInternalGetMessage @ 0x1C00BC3F0 (xxxInternalGetMessage.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall xxxHandleDesktopMessages(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  __int64 v4; // rdx
  int v6; // eax
  _QWORD v7[7]; // [rsp+30h] [rbp-38h] BYREF

  memset(v7, 0, 0x30uLL);
  while ( 1 )
  {
    if ( !(unsigned int)xxxInternalGetMessage((unsigned int)v7, 0, 0, 0, 1, 0) )
      return 1LL;
    if ( a2 == (struct tagTERMINAL *)&gTermNOIO )
    {
      v6 = v7[1];
      if ( LODWORD(v7[1]) != 18 )
        goto LABEL_6;
      xxxCleanupMotherDesktopWindow((__int64)a2);
    }
    v6 = v7[1];
    if ( LODWORD(v7[1]) == 18 && *((_DWORD *)a1 + 223) <= 1u )
      return 0LL;
LABEL_6:
    if ( v6 == 796 )
    {
      if ( v7[2] == 2LL )
        DestroyPendingDesktops(a1, a2);
    }
    else
    {
      xxxDispatchMessage((__int64)v7, v4);
    }
  }
}
