/*
 * XREFs of ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C0082E00
 * Callers:
 *     SetPointer @ 0x1C0082DE0 (SetPointer.c)
 *     zzzUpdateCursorImage @ 0x1C00ABDB0 (zzzUpdateCursorImage.c)
 * Callees:
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x1C0082FF4 (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x1C0083070 (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00830EC (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00ABB94 (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     GreSetPointer @ 0x1C00ACC38 (GreSetPointer.c)
 *     ?FCursorShadowed@@YAHPEAU_CURSINFO@@@Z @ 0x1C00ACFF4 (-FCursorShadowed@@YAHPEAU_CURSINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C01CC2A0 (-TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z.c)
 */

char __fastcall SetPointerInternal(char a1, unsigned int a2)
{
  unsigned int v3; // edi
  struct tagCURSOR *CurrentCursorFrame; // rax
  struct tagCURSOR *v5; // rbp
  struct tagCURSOR *v6; // rax
  struct tagCURSOR *v7; // r14
  struct _CURSINFO *v8; // rcx
  int v9; // esi
  CCursorSizes *v10; // rcx
  int BufferChainingDpc; // ebx
  __int64 CurrentCursorSize; // r8
  __int64 v13; // rax
  struct tagTHREADINFO *v14; // rdx
  _BYTE v16[160]; // [rsp+30h] [rbp-C8h] BYREF

  if ( !a1 )
  {
    v3 = 1;
    GreSetPointer(0LL);
    memset(v16, 0, 0x98uLL);
    LOBYTE(CurrentCursorFrame) = InputTraceLogging::Cursor::SetCursorImage(v16, 0LL, 0LL, a2, 0, 0);
LABEL_3:
    if ( v3 )
      LOBYTE(CurrentCursorFrame) = NotifySetPointerGraphicDevice(v3);
    return (char)CurrentCursorFrame;
  }
  if ( !gpqForeground
    || ((v13 = *(_QWORD *)(gpqForeground + 112LL)) != 0
      ? (v14 = *(struct tagTHREADINFO **)(v13 + 16))
      : (v14 = *(struct tagTHREADINFO **)(gpqForeground + 96LL)),
        *(int *)(gpqForeground + 392LL) >= 0
     || (LOBYTE(CurrentCursorFrame) = TestRawInputModeCaptureMouse(v14), !(_BYTE)CurrentCursorFrame)) )
  {
    CurrentCursorFrame = (struct tagCURSOR *)-gpqCursor;
    v3 = gpqCursor == 0LL ? 3 : 0;
    if ( gpqCursor )
    {
      if ( *(int *)(gpqCursor + 392LL) >= 0 )
      {
        v5 = *(struct tagCURSOR **)(gpqCursor + 384LL);
        if ( v5 )
        {
          LOBYTE(CurrentCursorFrame) = gpsi;
          if ( *(_DWORD *)(gpsi + 1972LL) )
          {
            v6 = FixupCursorForMonitor(v5);
            CurrentCursorFrame = GetCurrentCursorFrame(v6);
            v7 = CurrentCursorFrame;
            if ( CurrentCursorFrame )
            {
              v9 = (unsigned int)FCursorShadowed((struct tagCURSOR *)((char *)CurrentCursorFrame + 80)) != 0 ? 0x10 : 0;
              if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) == 1 )
                v9 |= 0x20u;
              GreSetPointer(v8);
              v3 = 2;
              BufferChainingDpc = (int)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
              if ( gProtocolType )
                BufferChainingDpc = 0;
              CurrentCursorSize = CCursorSizes::GetCurrentCursorSize(v10);
              LOBYTE(CurrentCursorFrame) = InputTraceLogging::Cursor::SetCursorImage(
                                             v7,
                                             v5,
                                             CurrentCursorSize,
                                             a2,
                                             v9,
                                             BufferChainingDpc);
            }
          }
        }
      }
    }
    goto LABEL_3;
  }
  return (char)CurrentCursorFrame;
}
