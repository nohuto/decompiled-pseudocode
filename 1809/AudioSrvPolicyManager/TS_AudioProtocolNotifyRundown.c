/*
 * XREFs of TS_AudioProtocolNotifyRundown @ 0x18002ABD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1TSSession@@QEAA@XZ @ 0x180026390 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18002874C (-TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x18002B010 (-RemoveAt@-$TList@VTSSession@@@@QEAAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall TS_AudioProtocolNotifyRundown(struct AUDIOPROTOCOLNOTIFY *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _QWORD *v3; // rdi
  _QWORD *v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v3 = qword_18004FCF8;
  while ( 1 )
  {
    v4 = v3;
    if ( !v3 )
      break;
    v5 = v3[2];
    v3 = (_QWORD *)*v3;
    if ( !(unsigned int)TsSessionDeleteNotify((struct TSSession *)v5, a1) )
    {
      if ( v5 && *(_DWORD *)(v5 + 48) && *(_DWORD *)(v5 + 4) == 0xFFFF && !*(_DWORD *)(v5 + 32) && !*(_QWORD *)(v5 + 72) )
      {
        TList<TSSession>::RemoveAt(v6, v4);
        TSSession::~TSSession((TSSession *)v5);
        operator delete((void *)v5, (const struct std::nothrow_t *)0x158);
      }
      break;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
