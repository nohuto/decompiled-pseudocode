/*
 * XREFs of ?TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x1800253BC
 * Callers:
 *     TS_RegisterAudioProtocolNotification @ 0x180027400 (TS_RegisterAudioProtocolNotification.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800250A4 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdAddNotify(DWORD a1, int a2, struct AUDIOPROTOCOLNOTIFY **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  HANDLE ProcessHeap; // rax
  struct AUDIOPROTOCOLNOTIFY *v8; // rax
  struct AUDIOPROTOCOLNOTIFY *v9; // rdi
  unsigned int v10; // ebx
  struct TSSession *v11; // rbx
  HANDLE v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rax
  struct TSSession *v17; // [rsp+68h] [rbp+20h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  ProcessHeap = GetProcessHeap();
  v8 = (struct AUDIOPROTOCOLNOTIFY *)HeapAlloc(ProcessHeap, 0, 4uLL);
  v9 = v8;
  if ( v8 )
  {
    *(_DWORD *)v8 = a2;
    v10 = TsSessionFromSessionId(a1, 1, 0LL, &v17);
    if ( v10 )
      goto LABEL_12;
    v11 = v17;
    v12 = GetProcessHeap();
    v13 = HeapAlloc(v12, 0, 0x18uLL);
    v14 = v13;
    if ( v13 )
    {
      *v13 = 0LL;
      v13[1] = 0LL;
      v13[2] = 0LL;
    }
    else
    {
      v14 = 0LL;
    }
    if ( v14 )
    {
      v14[2] = v9;
      *v14 = *((_QWORD *)v11 + 2);
      v14[1] = 0LL;
      v15 = *((_QWORD *)v11 + 2);
      if ( v15 )
        *(_QWORD *)(v15 + 8) = v14;
      else
        *((_QWORD *)v11 + 3) = v14;
      *((_QWORD *)v11 + 2) = v14;
      ++*((_DWORD *)v11 + 8);
      *a3 = v9;
      v9 = 0LL;
      v10 = 0;
      goto LABEL_12;
    }
  }
  v10 = 14;
LABEL_12:
  operator delete(v9, (const struct std::nothrow_t *)4);
  if ( v6 )
    LeaveCriticalSection(v6);
  return v10;
}
