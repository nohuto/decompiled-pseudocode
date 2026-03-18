/*
 * XREFs of ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C0138C00
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C004CBD0 (zzzUpdateCursorImage.c)
 *     SetPointer @ 0x1C0138BE0 (SetPointer.c)
 * Callees:
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C004C9B4 (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     GreSetPointer @ 0x1C004DA58 (GreSetPointer.c)
 *     ?FCursorShadowed@@YAHPEAU_CURSINFO@@@Z @ 0x1C004DE14 (-FCursorShadowed@@YAHPEAU_CURSINFO@@@Z.c)
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x1C0138DF4 (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x1C0138E70 (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0138EEC (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C01CC110 (-TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z.c)
 */

char __fastcall SetPointerInternal(char a1, unsigned int a2)
{
  __int64 v3; // rdx
  unsigned int v4; // edi
  struct tagCURSOR *CurrentCursorFrame; // rax
  struct tagCURSOR *v6; // rbp
  struct tagCURSOR *v7; // rax
  struct tagCURSOR *v8; // r14
  struct _CURSINFO *v9; // rcx
  unsigned int v10; // esi
  __int64 BufferChainingDpc_low; // r8
  CCursorSizes *v12; // rcx
  int BufferChainingDpc; // ebx
  __int64 CurrentCursorSize; // r8
  __int64 v15; // rax
  struct tagTHREADINFO *v16; // rdx
  _BYTE v18[160]; // [rsp+30h] [rbp-C8h] BYREF

  if ( !a1 )
  {
    v3 = 0LL;
    v4 = 1;
    if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) == 1 )
      v3 = 32LL;
    GreSetPointer(0LL, v3, 0LL, 0);
    memset(v18, 0, 0x98uLL);
    LOBYTE(CurrentCursorFrame) = InputTraceLogging::Cursor::SetCursorImage(v18, 0LL, 0LL, a2, 0, 0);
LABEL_5:
    if ( v4 )
      LOBYTE(CurrentCursorFrame) = NotifySetPointerGraphicDevice(v4);
    return (char)CurrentCursorFrame;
  }
  if ( !gpqForeground
    || ((v15 = *(_QWORD *)(gpqForeground + 112LL)) != 0
      ? (v16 = *(struct tagTHREADINFO **)(v15 + 16))
      : (v16 = *(struct tagTHREADINFO **)(gpqForeground + 96LL)),
        *(int *)(gpqForeground + 392LL) >= 0
     || (LOBYTE(CurrentCursorFrame) = TestRawInputModeCaptureMouse(v16), !(_BYTE)CurrentCursorFrame)) )
  {
    CurrentCursorFrame = (struct tagCURSOR *)-gpqCursor;
    v4 = gpqCursor == 0LL ? 3 : 0;
    if ( gpqCursor )
    {
      if ( *(int *)(gpqCursor + 392LL) >= 0 )
      {
        v6 = *(struct tagCURSOR **)(gpqCursor + 384LL);
        if ( v6 )
        {
          LOBYTE(CurrentCursorFrame) = gpsi;
          if ( *(_DWORD *)(gpsi + 1972LL) )
          {
            v7 = FixupCursorForMonitor(v6);
            CurrentCursorFrame = GetCurrentCursorFrame(v7);
            v8 = CurrentCursorFrame;
            if ( CurrentCursorFrame )
            {
              v10 = (unsigned int)FCursorShadowed((struct tagCURSOR *)((char *)CurrentCursorFrame + 80)) != 0 ? 0x10 : 0;
              if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) == 1 )
                v10 |= 0x20u;
              BufferChainingDpc_low = LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
              if ( gProtocolType )
                BufferChainingDpc_low = 0LL;
              GreSetPointer(v9, v10, BufferChainingDpc_low, 0x32u);
              v4 = 2;
              BufferChainingDpc = (int)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
              if ( gProtocolType )
                BufferChainingDpc = 0;
              CurrentCursorSize = CCursorSizes::GetCurrentCursorSize(v12);
              LOBYTE(CurrentCursorFrame) = InputTraceLogging::Cursor::SetCursorImage(
                                             v8,
                                             v6,
                                             CurrentCursorSize,
                                             a2,
                                             v10,
                                             BufferChainingDpc);
            }
          }
        }
      }
    }
    goto LABEL_5;
  }
  return (char)CurrentCursorFrame;
}
