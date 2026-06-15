/*
 * XREFs of ?Initialize@AudioJournal@@AEAAJXZ @ 0x180049700
 * Callers:
 *     ??0AudioJournal@@QEAA@XZ @ 0x180049AA4 (--0AudioJournal@@QEAA@XZ.c)
 * Callees:
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x180049504 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?ReadStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z @ 0x180049898 (-ReadStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z.c)
 *     ?ReadLastLogTime@AudioJournal@@AEAA?AT_ULARGE_INTEGER@@XZ @ 0x1800499D4 (-ReadLastLogTime@AudioJournal@@AEAA-AT_ULARGE_INTEGER@@XZ.c)
 *     ?ReadVersion@AudioJournal@@AEAAHXZ @ 0x180049A3C (-ReadVersion@AudioJournal@@AEAAHXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     ?ResetData@AudioJournal@@AEAAX_N@Z @ 0x1800F7638 (-ResetData@AudioJournal@@AEAAX_N@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800F7744 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?WriteStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z @ 0x1800F7768 (-WriteStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z.c)
 *     ?WriteValue@AudioJournal@@AEAAJPEBGKPEAEK@Z @ 0x1800F7810 (-WriteValue@AudioJournal@@AEAAJPEBGKPEAEK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioJournal::Initialize(AudioJournal *this)
{
  unsigned int v1; // ebx
  int PersistedStateLocation; // eax
  void *v3; // rdx
  unsigned int v4; // r8d
  AudioJournal *v5; // rcx
  AudioJournal *v6; // rcx
  union _ULARGE_INTEGER v7; // rcx
  AudioJournal *v8; // rcx
  AudioJournal *v9; // rcx
  int v10; // eax
  int v11; // edi
  unsigned int v13; // [rsp+28h] [rbp-29h]
  _QWORD v14[11]; // [rsp+50h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+B8h] [rbp+67h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+C0h] [rbp+6Fh]

  SystemTimeAsFileTime = (struct _FILETIME)this;
  EnterCriticalSection(&CriticalSection);
  v17 = &CriticalSection;
  v1 = 0;
  if ( !g_AudioJournal )
  {
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"AudioJournal",
                               0LL,
                               L"SOFTWARE\\Microsoft\\Multimedia\\Audio\\Journal",
                               0LL);
    if ( PersistedStateLocation < 0 )
    {
      v1 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             v3,
             v4,
             (const char *)(unsigned int)PersistedStateLocation,
             (int)&word_1801B41A8);
    }
    else
    {
      memset_0(&unk_1801B3CF8, 0, 0x4B0uLL);
      dword_1801B4170 = 100;
      GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
      *(struct _FILETIME *)&qword_1801B3CF0 = SystemTimeAsFileTime;
      if ( (unsigned int)AudioJournal::ReadVersion(v5) == 1 )
      {
        v7 = **(union _ULARGE_INTEGER **)&AudioJournal::ReadLastLogTime(v6);
        *(union _ULARGE_INTEGER *)&qword_1801B3CF0 = v7;
        if ( !v7.QuadPart )
        {
          GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
          *(struct _FILETIME *)&qword_1801B3CF0 = SystemTimeAsFileTime;
          AudioJournal::WriteValue((AudioJournal *)&g_AudioJournal, L"LastLogTime", 0xBu, &qword_1801B3CF0, 8u);
        }
        if ( AudioJournal::ReadStreamInfo(
               (AudioJournal *)v7.QuadPart,
               (struct AudioJournal::StreamInfo *)&unk_1801B3CF8) < 0 )
          AudioJournal::WriteStreamInfo(
            (AudioJournal *)&g_AudioJournal,
            (struct AudioJournal::StreamInfo *)&unk_1801B3CF8);
        if ( AudioJournal::ReadStreamInfo(v8, (struct AudioJournal::StreamInfo *)&unk_1801B3F50) < 0 )
          AudioJournal::WriteStreamInfo(
            (AudioJournal *)&g_AudioJournal,
            (struct AudioJournal::StreamInfo *)&unk_1801B3F50);
        if ( AudioJournal::ReadStreamInfo(v9, (struct AudioJournal::StreamInfo *)&unk_1801B40E0) < 0 )
          AudioJournal::WriteStreamInfo(
            (AudioJournal *)&g_AudioJournal,
            (struct AudioJournal::StreamInfo *)&unk_1801B40E0);
      }
      else
      {
        AudioJournal::ResetData((AudioJournal *)&g_AudioJournal, 1);
      }
      v14[0] = off_180157A60;
      v14[1] = &g_AudioJournal;
      v14[7] = v14;
      v10 = CSerialWorkQueue::QueueRecurringItem(
              (__int64)&unk_1801B3C40,
              180000LL,
              0xDBBA0u,
              (__int64)v14,
              &qword_1801B3CE8);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7C,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
          (const char *)(unsigned int)v10,
          v13);
        v1 = v11;
      }
      else
      {
        g_AudioJournal = 1;
      }
    }
  }
  LeaveCriticalSection(&CriticalSection);
  return v1;
}
