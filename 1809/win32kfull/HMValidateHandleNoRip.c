/*
 * XREFs of HMValidateHandleNoRip @ 0x1C00B6440
 * Callers:
 *     DestroyWindowSmIcon @ 0x1C001D2E8 (DestroyWindowSmIcon.c)
 *     _RegisterClassEx @ 0x1C0022834 (_RegisterClassEx.c)
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 *     FindQMsg @ 0x1C0034980 (FindQMsg.c)
 *     xxxSetWindowData @ 0x1C0065ECC (xxxSetWindowData.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00B15F8 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00B3CA0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxClientLoadMenu @ 0x1C00B3DE8 (xxxClientLoadMenu.c)
 *     xxxClientCopyImage @ 0x1C00B468C (xxxClientCopyImage.c)
 *     xxxEventWndProc @ 0x1C00B49A0 (xxxEventWndProc.c)
 *     xxxClientLoadImage @ 0x1C00B7340 (xxxClientLoadImage.c)
 *     xxxCreateWindowSmIcon @ 0x1C00B8310 (xxxCreateWindowSmIcon.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00DA8D4 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxSetClassData @ 0x1C00FC374 (xxxSetClassData.c)
 *     DWP_GetIcon @ 0x1C011D514 (DWP_GetIcon.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C015522C (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0155ED0 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01DDCE0 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01DE658 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F77F0 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F7988 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     _CsDdeUninitialize @ 0x1C0208770 (_CsDdeUninitialize.c)
 *     xxxMNKeyDown @ 0x1C020CD34 (xxxMNKeyDown.c)
 *     NtUserUpdateInstance @ 0x1C021E970 (NtUserUpdateInstance.c)
 *     _GetWindowIcon @ 0x1C02214D8 (_GetWindowIcon.c)
 *     xxxSetClassIcon @ 0x1C02226E4 (xxxSetClassIcon.c)
 *     xxxRealDrawMenuItem @ 0x1C0232894 (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateHandleNoRip(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char v4; // bp
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // r14

  v3 = 0LL;
  v4 = a2;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v5 = *((_QWORD *)&gSharedInfo + 1);
    v6 = v5 + (unsigned int)(unsigned __int16)a1 * *((_DWORD *)&gSharedInfo + 4);
    v7 = 3 * ((__int64)((unsigned int)(unsigned __int16)a1 * *((_DWORD *)&gSharedInfo + 4)) >> 5);
    if ( (WORD1(a1) == *(_WORD *)(v6 + 26)
       || WORD1(a1) == 0xFFFF
       || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL))
      && (*(_BYTE *)(v6 + 25) & 1) == 0
      && *(_BYTE *)(v6 + 24) == v4 )
    {
      v3 = *(_QWORD *)(gpKernelHandleTable + 8 * v7);
    }
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5) + 488) & 0x20000000) == 0 )
    return -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0) & v3;
  if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
    return 0LL;
  return v3;
}
