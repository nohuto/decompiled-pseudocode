/*
 * XREFs of ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00126E4
 * Callers:
 *     NtUserPostThreadMessage @ 0x1C000E4C0 (NtUserPostThreadMessage.c)
 *     _PostTransformableMessageIL @ 0x1C0012080 (_PostTransformableMessageIL.c)
 *     xxxInterSendMsgEx @ 0x1C00412E0 (xxxInterSendMsgEx.c)
 *     NtUserPostMessage @ 0x1C0046340 (NtUserPostMessage.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00A9E40 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C0111318 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     _PostMessageCheckIL @ 0x1C01E3F44 (_PostMessageCheckIL.c)
 * Callees:
 *     ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1C00114B0 (-IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z.c)
 *     ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C00127C0 (-GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     MSGSQMAddMessage @ 0x1C0012850 (MSGSQMAddMessage.c)
 */

__int64 __fastcall IsMessageAllowedAcrossILByReceiver(
        struct tagPROCESSINFO *a1,
        void *const **a2,
        struct tagWND *a3,
        unsigned __int16 a4,
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
