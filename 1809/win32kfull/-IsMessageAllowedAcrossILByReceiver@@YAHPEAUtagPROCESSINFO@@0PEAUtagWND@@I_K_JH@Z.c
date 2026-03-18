/*
 * XREFs of ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00D08BC
 * Callers:
 *     NtUserPostMessage @ 0x1C00298E0 (NtUserPostMessage.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00676B0 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     _PostTransformableMessageIL @ 0x1C00D01F4 (_PostTransformableMessageIL.c)
 *     NtUserPostThreadMessage @ 0x1C00D48B0 (NtUserPostThreadMessage.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C012CDA8 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     _PostMessageCheckIL @ 0x1C01CF480 (_PostMessageCheckIL.c)
 * Callees:
 *     ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C00D0998 (-GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     MSGSQMAddMessage @ 0x1C00D0A28 (MSGSQMAddMessage.c)
 *     ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1C01098F4 (-IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z.c)
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

  v11 = IsMessageAllowedByFilterEx(a2[106], a4, 0LL, 0LL);
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
