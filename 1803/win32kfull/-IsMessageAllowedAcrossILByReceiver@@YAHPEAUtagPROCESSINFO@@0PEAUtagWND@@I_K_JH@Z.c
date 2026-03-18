/*
 * XREFs of ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00620C0
 * Callers:
 *     NtUserPostThreadMessage @ 0x1C001B330 (NtUserPostThreadMessage.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0024530 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     NtUserPostMessage @ 0x1C0041200 (NtUserPostMessage.c)
 *     _PostTransformableMessageIL @ 0x1C0061A1C (_PostTransformableMessageIL.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C010ADA8 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     _PostMessageCheckIL @ 0x1C01AC270 (_PostMessageCheckIL.c)
 * Callees:
 *     ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C006219C (-GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     MSGSQMAddMessage @ 0x1C0062398 (MSGSQMAddMessage.c)
 *     ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1C0062F50 (-IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z.c)
 */

__int64 __fastcall IsMessageAllowedAcrossILByReceiver(
        struct tagPROCESSINFO *a1,
        void *const **a2,
        struct tagWND *a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6,
        int a7)
{
  unsigned int v11; // ebx
  void *const *WindowMessageFilter; // rax

  v11 = IsMessageAllowedByFilterEx(a2[105], a4, 0LL, 0LL);
  if ( v11 )
  {
    MSGSQMAddMessage(a1, (struct tagPROCESSINFO *)a2, a6, a7, 3);
  }
  else if ( a3 )
  {
    WindowMessageFilter = GetWindowMessageFilter(a3);
    v11 = IsMessageAllowedByFilterEx(WindowMessageFilter, a4, 0LL, 0LL);
    if ( v11 )
      MSGSQMAddMessage(a1, (struct tagPROCESSINFO *)a2, a6, a7, 4);
  }
  return v11;
}
