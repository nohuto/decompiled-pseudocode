/*
 * XREFs of ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00E5604
 * Callers:
 *     PostInputMessage @ 0x1C0019B84 (PostInputMessage.c)
 *     _PostThreadMessageEx @ 0x1C001B65C (_PostThreadMessageEx.c)
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

struct tagQMSG *__fastcall AllocQEntryEx(struct tagMLIST *a1, struct tagQMSG *a2, char a3)
{
  struct tagQMSG *v4; // rbx
  struct tagQMSG *v6; // rax
  int v7; // eax
  struct tagQMSG **v8; // rax
  __int64 v10; // rcx

  v4 = a2;
  if ( *((_DWORD *)a1 + 4) >= gUserPostMessageLimit )
  {
    v10 = 1816LL;
  }
  else
  {
    if ( a2 )
      goto LABEL_5;
    v6 = (struct tagQMSG *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
    v4 = v6;
    if ( v6 )
    {
      memset(v6, 0, 0xA0uLL);
LABEL_5:
      v7 = 8;
      if ( *((_DWORD *)a1 + 5) != 2 )
        v7 = 4;
      *((_DWORD *)v4 + 25) |= v7;
      v8 = (struct tagQMSG **)*((_QWORD *)a1 + 1);
      if ( v8 )
      {
        if ( !a3 )
        {
          *v8 = v4;
          *((_QWORD *)v4 + 1) = *((_QWORD *)a1 + 1);
          *((_QWORD *)a1 + 1) = v4;
          goto LABEL_10;
        }
        *(_QWORD *)(*(_QWORD *)a1 + 8LL) = v4;
        *(_QWORD *)v4 = *(_QWORD *)a1;
      }
      else
      {
        *((_QWORD *)a1 + 1) = v4;
      }
      *(_QWORD *)a1 = v4;
LABEL_10:
      ++*((_DWORD *)a1 + 4);
      return v4;
    }
    v10 = 8LL;
  }
  UserSetLastError(v10, (__int64)a2);
  return 0LL;
}
