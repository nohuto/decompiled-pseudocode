/*
 * XREFs of ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00E3C40
 * Callers:
 *     _PostThreadMessageEx @ 0x1C000E634 (_PostThreadMessageEx.c)
 *     PostInputMessage @ 0x1C002A06C (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

struct tagQMSG *__fastcall AllocQEntryEx(struct tagMLIST *a1, struct tagQMSG *a2, __int64 a3)
{
  char v3; // si
  struct tagQMSG *v4; // rbx
  __int64 v6; // r9
  struct tagQMSG *v7; // rax
  int v8; // eax
  struct tagQMSG **v9; // rax
  __int64 v11; // rcx

  v3 = a3;
  v4 = a2;
  v6 = gUserPostMessageLimit;
  if ( *((_DWORD *)a1 + 4) >= gUserPostMessageLimit )
  {
    v11 = 1816LL;
  }
  else
  {
    if ( a2 )
      goto LABEL_5;
    v7 = (struct tagQMSG *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
    v4 = v7;
    if ( v7 )
    {
      memset(v7, 0, 0xA8uLL);
LABEL_5:
      v8 = 8;
      if ( *((_DWORD *)a1 + 5) != 2 )
        v8 = 4;
      *((_DWORD *)v4 + 25) |= v8;
      v9 = (struct tagQMSG **)*((_QWORD *)a1 + 1);
      if ( v9 )
      {
        if ( !v3 )
        {
          *v9 = v4;
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
    v11 = 8LL;
  }
  UserSetLastError(v11, (__int64)a2, a3, v6);
  return 0LL;
}
