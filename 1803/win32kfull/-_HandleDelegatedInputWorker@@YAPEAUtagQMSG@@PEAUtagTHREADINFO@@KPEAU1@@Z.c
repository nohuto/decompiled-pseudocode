/*
 * XREFs of ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01250EC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C0106D00 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 * Callees:
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C000C670 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     DelQEntry @ 0x1C000F8DC (DelQEntry.c)
 *     IsPointerInputMessage @ 0x1C0023E34 (IsPointerInputMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C012519C (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     DelegateReleasePointerMessage @ 0x1C01B847C (DelegateReleasePointerMessage.c)
 */

struct tagQMSG *__fastcall _HandleDelegatedInputWorker(struct tagTHREADINFO *a1, unsigned int a2, struct tagQMSG *a3)
{
  __int64 v4; // rbp
  __int64 v7; // rdx
  int v8; // eax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // ecx
  __int64 v13; // rax

  v4 = *(_QWORD *)a3;
  if ( (*((_DWORD *)a3 + 25) & 0x100) == 0 )
  {
    EtwTraceBeginDelegatedInputWorker(a3);
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
          goto LABEL_8;
        }
LABEL_12:
        if ( !IsPointerInputMessage(*((_DWORD *)a3 + 6)) || !(unsigned int)DelegateReleasePointerMessage(a1, a3) )
        {
          CleanEventMessage(a3);
          DelQEntry((_QWORD *)(*((_QWORD *)a1 + 53) + 24LL), a3);
        }
        v13 = *((_QWORD *)a1 + 53);
        if ( *(struct tagQMSG **)(v13 + 80) == a3 )
          *(_QWORD *)(v13 + 80) = 0LL;
      }
    }
    else
    {
      if ( a2 == 2 )
        goto LABEL_12;
      *((_DWORD *)a3 + 25) |= 0x10u;
    }
LABEL_8:
    EtwTraceEndDelegatedInputWorker(a3, a2);
  }
  return (struct tagQMSG *)v4;
}
