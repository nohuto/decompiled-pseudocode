/*
 * XREFs of HMValidateHandleNoRip @ 0x1C00B4C50
 * Callers:
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0023720 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     xxxSetWindowData @ 0x1C0061928 (xxxSetWindowData.c)
 *     _RegisterClassEx @ 0x1C0096AB8 (_RegisterClassEx.c)
 *     DestroyWindowSmIcon @ 0x1C00972D0 (DestroyWindowSmIcon.c)
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 *     FindQMsg @ 0x1C009E590 (FindQMsg.c)
 *     xxxEventWndProc @ 0x1C00B4BC0 (xxxEventWndProc.c)
 *     xxxClientCopyImage @ 0x1C00B4D58 (xxxClientCopyImage.c)
 *     xxxClientLoadImage @ 0x1C00B5A14 (xxxClientLoadImage.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00B5D3C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxClientLoadMenu @ 0x1C00B5E80 (xxxClientLoadMenu.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00B6B40 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxCreateWindowSmIcon @ 0x1C00B9750 (xxxCreateWindowSmIcon.c)
 *     DWP_GetIcon @ 0x1C0124BD0 (DWP_GetIcon.c)
 *     xxxSetClassData @ 0x1C0134CC8 (xxxSetClassData.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C015B2A0 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     _GetWindowIcon @ 0x1C015B834 (_GetWindowIcon.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C015C498 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01F38C0 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F453C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C020DB68 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C020DD1C (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     _CsDdeUninitialize @ 0x1C0220120 (_CsDdeUninitialize.c)
 *     xxxMNKeyDown @ 0x1C02248B0 (xxxMNKeyDown.c)
 *     NtUserUpdateInstance @ 0x1C0236CC0 (NtUserUpdateInstance.c)
 *     xxxSetClassIcon @ 0x1C023ADB4 (xxxSetClassIcon.c)
 *     xxxRealDrawMenuItem @ 0x1C024B514 (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateHandleNoRip(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  char v6; // bp
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 *v11; // r14

  v5 = 0LL;
  v6 = a2;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v9 = gpsi;
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v10 = gSharedInfo[1] + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]);
    v11 = (__int64 *)HMPkheFromPhe(v10);
    if ( (WORD1(a1) == *(_WORD *)(v10 + 26)
       || WORD1(a1) == 0xFFFF
       || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL))
      && (*(_BYTE *)(v10 + 25) & 1) == 0
      && *(_BYTE *)(v10 + 24) == v6 )
    {
      v5 = *v11;
    }
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v9, v8) + 480) & 0x20000000) == 0 )
    return -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0) & v5;
  if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
    return 0LL;
  return v5;
}
