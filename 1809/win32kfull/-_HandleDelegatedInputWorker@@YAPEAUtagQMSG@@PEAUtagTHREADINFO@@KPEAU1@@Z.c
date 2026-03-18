/*
 * XREFs of ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01CEAF4
 * Callers:
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C000747C (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C002E58C (IsPointerInputMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     DelQEntry @ 0x1C0038198 (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C01081C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x1C01CDD9C (-HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01CE234 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     DelegateReleasePointerMessage @ 0x1C01DB0C0 (DelegateReleasePointerMessage.c)
 */

struct tagQMSG *__fastcall _HandleDelegatedInputWorker(struct tagTHREADINFO *a1, unsigned int a2, struct tagQMSG *a3)
{
  __int64 v4; // rbp
  __int64 v7; // rdx
  int v8; // eax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rax

  v4 = *(_QWORD *)a3;
  if ( (*((_DWORD *)a3 + 25) & 0x100) == 0 )
  {
    EtwTraceBeginDelegatedInputWorker(a3);
    InputTraceLogging::DManip::HandleDelegatedInput(a3, a2);
    if ( a2 == 1 )
    {
      v8 = *((_DWORD *)a3 + 25);
      if ( (v8 & 0x20) != 0 )
      {
        v9 = *((_QWORD *)a3 + 2);
        LOBYTE(v7) = 1;
        *((_DWORD *)a3 + 25) = v8 & 0xFFFFFF9F | 0x40;
        v10 = HMValidateHandleNoSecure(v9, v7);
        if ( v10 )
        {
          v11 = *((_DWORD *)a3 + 25);
          if ( (v11 & 0x400) != 0 )
          {
            *((_QWORD *)a3 + 2) = 0LL;
            *((_DWORD *)a3 + 25) = v11 & 0xFFFFFBFF;
          }
          ReassignInputMessage(a1, *(struct tagTHREADINFO **)(v10 + 16), a3);
          goto LABEL_15;
        }
LABEL_9:
        if ( !IsPointerInputMessage(*((_DWORD *)a3 + 6)) || !(unsigned int)DelegateReleasePointerMessage(a1, a3) )
        {
          CleanEventMessage(a3);
          DelQEntry(*((_QWORD *)a1 + 54) + 24LL, (__int64)a3, 1);
        }
        v12 = *((_QWORD *)a1 + 54);
        if ( *(struct tagQMSG **)(v12 + 80) == a3 )
          *(_QWORD *)(v12 + 80) = 0LL;
      }
    }
    else
    {
      if ( a2 == 2 )
        goto LABEL_9;
      *((_DWORD *)a3 + 25) |= 0x10u;
    }
LABEL_15:
    EtwTraceEndDelegatedInputWorker(a3, a2);
  }
  return (struct tagQMSG *)v4;
}
