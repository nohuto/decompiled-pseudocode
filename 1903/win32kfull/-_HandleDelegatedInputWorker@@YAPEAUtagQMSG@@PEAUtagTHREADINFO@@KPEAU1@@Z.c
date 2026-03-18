/*
 * XREFs of ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E3268
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C01E319C (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 * Callees:
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C0010510 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     IsPointerInputMessage @ 0x1C0024930 (IsPointerInputMessage.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     DelQEntry @ 0x1C00CFB78 (DelQEntry.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00D0D1C (WPP_RECORDER_SF_qq.c)
 *     ?HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x1C01E2318 (-HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01E27B4 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     DelegateReleasePointerMessage @ 0x1C01F086C (DelegateReleasePointerMessage.c)
 */

struct tagQMSG *__fastcall _HandleDelegatedInputWorker(struct tagTHREADINFO *a1, unsigned int a2, struct tagQMSG *a3)
{
  __int64 v3; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rax
  struct tagQMSG *v15; // rcx
  char v17; // [rsp+60h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v17);
  if ( (*((_DWORD *)a3 + 25) & 0x100) == 0 )
  {
    EtwTraceBeginDelegatedInputWorker(a3, a2);
    InputTraceLogging::DManip::HandleDelegatedInput(a3, a2);
    if ( a2 == 1 )
    {
      v10 = *((_DWORD *)a3 + 25);
      if ( (v10 & 0x20) != 0 )
      {
        v11 = *((_QWORD *)a3 + 2);
        LOBYTE(v7) = 1;
        *((_DWORD *)a3 + 25) = v10 & 0xFFFFFF9F | 0x40;
        v12 = HMValidateHandleNoSecure(v11, v7, v8, v9);
        if ( v12 )
        {
          v13 = *((_DWORD *)a3 + 25);
          if ( (v13 & 0x400) != 0 )
          {
            *((_QWORD *)a3 + 2) = 0LL;
            *((_DWORD *)a3 + 25) = v13 & 0xFFFFFBFF;
          }
          ReassignInputMessage(a1, *(struct tagTHREADINFO **)(v12 + 16), a3);
          goto LABEL_17;
        }
LABEL_9:
        if ( !IsPointerInputMessage(*((_DWORD *)a3 + 6)) || !(unsigned int)DelegateReleasePointerMessage(a1, a3) )
        {
          CleanEventMessage(a3);
          DelQEntry(*((_QWORD *)a1 + 53) + 24LL, (__int64)a3, 1);
        }
        v14 = *((_QWORD *)a1 + 53);
        v15 = *(struct tagQMSG **)(v14 + 88);
        if ( v15 == a3 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_qq(
              (__int64)v15,
              (__int64)&WPP_RECORDER_INITIALIZED,
              0x12u,
              0xBu,
              (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
              v14,
              *(_QWORD *)(v14 + 88));
            v14 = *((_QWORD *)a1 + 53);
          }
          *(_QWORD *)(v14 + 88) = 0LL;
        }
      }
    }
    else
    {
      if ( a2 == 2 )
        goto LABEL_9;
      *((_DWORD *)a3 + 25) |= 0x10u;
    }
LABEL_17:
    EtwTraceEndDelegatedInputWorker(a3, a2);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v17);
  return (struct tagQMSG *)v3;
}
