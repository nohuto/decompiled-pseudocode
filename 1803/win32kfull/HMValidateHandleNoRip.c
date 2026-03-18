/*
 * XREFs of HMValidateHandleNoRip @ 0x1C006CF60
 * Callers:
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C000F124 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     _RegisterClassEx @ 0x1C001B1C4 (_RegisterClassEx.c)
 *     xxxSetWindowData @ 0x1C0025B98 (xxxSetWindowData.c)
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     FindQMsg @ 0x1C00493A0 (FindQMsg.c)
 *     xxxCreateWindowSmIcon @ 0x1C006ADA8 (xxxCreateWindowSmIcon.c)
 *     DestroyWindowSmIcon @ 0x1C006AE84 (DestroyWindowSmIcon.c)
 *     xxxClientLoadImage @ 0x1C006BC38 (xxxClientLoadImage.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C006C084 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxClientLoadMenu @ 0x1C006C1CC (xxxClientLoadMenu.c)
 *     xxxClientCopyImage @ 0x1C006C42C (xxxClientCopyImage.c)
 *     xxxEventWndProc @ 0x1C006C550 (xxxEventWndProc.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00B661C (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     DWP_GetIcon @ 0x1C00FEC28 (DWP_GetIcon.c)
 *     _GetWindowIcon @ 0x1C0109E70 (_GetWindowIcon.c)
 *     xxxSetClassData @ 0x1C010B0CC (xxxSetClassData.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0130EE8 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0133AF0 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01BAF00 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01BBAF4 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01D2DC4 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01D2F4C (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     _CsDdeUninitialize @ 0x1C01E2900 (_CsDdeUninitialize.c)
 *     xxxMNKeyDown @ 0x1C01E6E10 (xxxMNKeyDown.c)
 *     NtUserUpdateInstance @ 0x1C01F6E30 (NtUserUpdateInstance.c)
 *     xxxSetClassIcon @ 0x1C01FA014 (xxxSetClassIcon.c)
 *     xxxRealDrawMenuItem @ 0x1C02095E4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
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
    v5 = gSharedInfo[1];
    v6 = v5 + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]);
    v7 = 3 * ((__int64)((unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2])) >> 5);
    if ( (WORD1(a1) == *(_WORD *)(v6 + 26)
       || WORD1(a1) == 0xFFFF
       || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL, v5, gpsi, (unsigned __int16)a1))
      && (*(_BYTE *)(v6 + 25) & 1) == 0
      && *(_BYTE *)(v6 + 24) == v4 )
    {
      v3 = *(_QWORD *)(gpKernelHandleTable + 8 * v7);
    }
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5) + 480) & 0x20000000) == 0 )
    return -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0) & v3;
  if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
    return 0LL;
  return v3;
}
