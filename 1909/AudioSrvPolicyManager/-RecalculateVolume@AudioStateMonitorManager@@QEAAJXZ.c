/*
 * XREFs of ?RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ @ 0x18002D054
 * Callers:
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180013788 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x18002D188 (-GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA-AW4__MIDL___MIDL_itf_audio.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180034A98 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioStateMonitorManager::RecalculateVolume(AudioStateMonitorManager *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // r15
  __int64 v6; // r12
  int SoundLevelForExtendedAudioCategory; // ebp
  _DWORD *v8; // rax
  void *v9; // r14
  unsigned int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v3 = (_QWORD *)*((_QWORD *)this + 8);
  v4 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 != v3 )
  {
    do
    {
      v5 = v4[3];
      v6 = v4[2];
      SoundLevelForExtendedAudioCategory = AudioStateMonitorManager::GetSoundLevelForExtendedAudioCategory(
                                             this,
                                             *(_QWORD *)v5,
                                             *(_QWORD *)(v5 + 8),
                                             *(_QWORD *)(v5 + 16));
      if ( **(_DWORD **)(v5 + 24) != SoundLevelForExtendedAudioCategory )
      {
        v8 = operator new[](0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
        v9 = v8;
        if ( v8 )
        {
          *((_QWORD *)v8 + 2) = 0LL;
          *v8 = 32;
          v8[1] = 0x80000;
          *((_QWORD *)v8 + 1) = 0LL;
          *((_QWORD *)v8 + 3) = v6;
          v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 40LL))(*((_QWORD *)this + 16));
          GenerateMediaEvent(v9, v10);
          operator delete(v9, (const struct std::nothrow_t *)0x20);
          **(_DWORD **)(v5 + 24) = SoundLevelForExtendedAudioCategory;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xBC,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
            (const char *)0x8007000ELL);
        }
      }
      v4 = (_QWORD *)*v4;
    }
    while ( v4 != *((_QWORD **)this + 8) );
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
