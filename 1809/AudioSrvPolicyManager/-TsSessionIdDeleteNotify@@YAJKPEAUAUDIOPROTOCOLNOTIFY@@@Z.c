/*
 * XREFs of ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180028BF8
 * Callers:
 *     TS_UnregisterAudioProtocolNotification @ 0x18002AB70 (TS_UnregisterAudioProtocolNotification.c)
 * Callees:
 *     ??1TSSession@@QEAA@XZ @ 0x180026390 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18002874C (-TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180028878 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x18002B010 (-RemoveAt@-$TList@VTSSession@@@@QEAAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdDeleteNotify(DWORD a1, struct AUDIOPROTOCOLNOTIFY *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  unsigned int v5; // edi
  struct TSSession *v6; // rbx
  __int64 v7; // rcx
  struct TSSession *v9; // [rsp+60h] [rbp+18h] BYREF
  void *v10; // [rsp+68h] [rbp+20h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v5 = TsSessionFromSessionId(a1, 0, &v10, &v9);
  if ( !v5 )
  {
    v6 = v9;
    v5 = TsSessionDeleteNotify(v9, a2);
    if ( !v5 && *((_DWORD *)v6 + 12) && *((_DWORD *)v6 + 1) == 0xFFFF && !*((_DWORD *)v6 + 8) && !*((_QWORD *)v6 + 9) )
    {
      TList<TSSession>::RemoveAt(v7, v10);
      TSSession::~TSSession(v6);
      operator delete(v6, (const struct std::nothrow_t *)0x158);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v5;
}
