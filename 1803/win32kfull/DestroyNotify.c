/*
 * XREFs of DestroyNotify @ 0x1C00D8D68
 * Callers:
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C000C670 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     xxxProcessNotifyWinEvent @ 0x1C001F1B4 (xxxProcessNotifyWinEvent.c)
 *     xxxProcessTSFEvent @ 0x1C00D7064 (xxxProcessTSFEvent.c)
 *     FreeThreadsWinEvents @ 0x1C00D79C0 (FreeThreadsWinEvents.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C0106460 (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 * Callees:
 *     ?RemoveNotify@@YAXPEAPEAUtagNOTIFY@@@Z @ 0x1C0020C7C (-RemoveNotify@@YAXPEAPEAUtagNOTIFY@@@Z.c)
 */

void __fastcall DestroyNotify(struct tagNOTIFY **a1)
{
  struct tagNOTIFY **v1; // rax
  struct tagNOTIFY ***v3; // rcx

  v1 = gpPendingNotifies;
  v3 = &gpPendingNotifies;
  while ( v1 )
  {
    if ( v1 == a1 )
    {
      RemoveNotify(v3);
      return;
    }
    v3 = (struct tagNOTIFY ***)v1;
    v1 = (struct tagNOTIFY **)*v1;
  }
}
