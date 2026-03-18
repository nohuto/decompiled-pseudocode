/*
 * XREFs of ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E30E8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C01E301C (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C002ADA0 (IsPointerInputMessage.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     DelQEntry @ 0x1C0071248 (DelQEntry.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00723EC (WPP_RECORDER_SF_qq.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00EF3D0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x1C01E2198 (-HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01E2634 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     DelegateReleasePointerMessage @ 0x1C01F06EC (DelegateReleasePointerMessage.c)
 */

struct tagQMSG *__fastcall _HandleDelegatedInputWorker(struct tagTHREADINFO *a1, unsigned int a2, struct tagQMSG *a3)
{
  __int64 v3; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rax
  struct tagQMSG *v14; // rcx
  char v16; // [rsp+60h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v16);
  if ( (*((_DWORD *)a3 + 25) & 0x100) == 0 )
  {
    EtwTraceBeginDelegatedInputWorker(a3, a2);
    InputTraceLogging::DManip::HandleDelegatedInput(a3, a2);
    if ( a2 == 1 )
    {
      v9 = *((_DWORD *)a3 + 25);
      if ( (v9 & 0x20) != 0 )
      {
        v10 = *((_QWORD *)a3 + 2);
        LOBYTE(v7) = 1;
        *((_DWORD *)a3 + 25) = v9 & 0xFFFFFF9F | 0x40;
        v11 = HMValidateHandleNoSecure(v10, v7, v8);
        if ( v11 )
        {
          v12 = *((_DWORD *)a3 + 25);
          if ( (v12 & 0x400) != 0 )
          {
            *((_QWORD *)a3 + 2) = 0LL;
            *((_DWORD *)a3 + 25) = v12 & 0xFFFFFBFF;
          }
          ReassignInputMessage(a1, *(struct tagTHREADINFO **)(v11 + 16), a3);
          goto LABEL_17;
        }
LABEL_9:
        if ( !IsPointerInputMessage(*((_DWORD *)a3 + 6)) || !(unsigned int)DelegateReleasePointerMessage(a1, a3) )
        {
          CleanEventMessage(a3);
          DelQEntry(*((_QWORD *)a1 + 53) + 24LL, (__int64)a3, 1);
        }
        v13 = *((_QWORD *)a1 + 53);
        v14 = *(struct tagQMSG **)(v13 + 88);
        if ( v14 == a3 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_qq(
              (__int64)v14,
              (__int64)&WPP_RECORDER_INITIALIZED,
              0x12u,
              0xBu,
              (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
              v13,
              *(_QWORD *)(v13 + 88));
            v13 = *((_QWORD *)a1 + 53);
          }
          *(_QWORD *)(v13 + 88) = 0LL;
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
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v16);
  return (struct tagQMSG *)v3;
}
