/*
 * XREFs of ?PopulateAudioHistoryForStream@CSubmixImpl@@UEAAJ_K_J11@Z @ 0x140041AC0
 * Callers:
 *     ?PopulateAudioHistoryForStream@CStreamGroup@@UEAAJ_K_J11@Z @ 0x140031E80 (-PopulateAudioHistoryForStream@CStreamGroup@@UEAAJ_K_J11@Z.c)
 *     ?PopulateAudioHistoryForStream@CProcessSubmix@@UEAAJ_K_J11@Z @ 0x140042320 (-PopulateAudioHistoryForStream@CProcessSubmix@@UEAAJ_K_J11@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14000236C (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140004E48 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z @ 0x140012824 (-FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAudioHistoryControlForStream@CAudioHistoryBufferManager@@QEAAJ_KPEAPEAUICPAudioHistoryControl@@@Z @ 0x140042868 (-GetAudioHistoryControlForStream@CAudioHistoryBufferManager@@QEAAJ_KPEAPEAUICPAudioHistoryContro.c)
 *     ?GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z @ 0x140042974 (-GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z.c)
 */

__int64 __fastcall CSubmixImpl::PopulateAudioHistoryForStream(
        CSubmixImpl *this,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // r14
  struct CStreamInstance *Stream; // rax
  int AudioHistoryControlForStream; // ebx
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rdi
  int HistoryBufferManager; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 *v18; // rbx
  __int64 v19; // rbx
  LPCRITICAL_SECTION v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rax
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  struct _LIST_ENTRY *Blink; // rax
  __int64 v26; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-71h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-69h] BYREF
  unsigned int v30; // [rsp+3Ch] [rbp-65h] BYREF
  __int64 v31; // [rsp+40h] [rbp-61h] BYREF
  __int64 v32; // [rsp+48h] [rbp-59h] BYREF
  __int64 v33[2]; // [rsp+50h] [rbp-51h] BYREF
  _OWORD v34[2]; // [rsp+60h] [rbp-41h] BYREF
  __int64 v35; // [rsp+80h] [rbp-21h]
  struct ICPAudioHistoryControl *v36[2]; // [rsp+90h] [rbp-11h] BYREF
  __int128 v37; // [rsp+A0h] [rbp-1h]
  __int64 v38; // [rsp+B0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  Stream = CSubmixImpl::FindStream(this, a2);
  if ( !Stream )
  {
    AudioHistoryControlForStream = -2005139430;
    v12 = 1147LL;
    v13 = 2289827866LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)v13);
    goto LABEL_31;
  }
  v14 = *(_QWORD *)Stream;
  lpCriticalSection = 0LL;
  HistoryBufferManager = GetHistoryBufferManager((struct CAudioHistoryBufferManager **)&lpCriticalSection);
  AudioHistoryControlForStream = HistoryBufferManager;
  if ( HistoryBufferManager < 0 )
  {
    v13 = (unsigned int)HistoryBufferManager;
    v12 = 1152LL;
    goto LABEL_5;
  }
  v32 = 0LL;
  v36[1] = 0LL;
  v36[0] = (struct ICPAudioHistoryControl *)&v32;
  LOBYTE(v37) = 1;
  AudioHistoryControlForStream = CAudioHistoryBufferManager::GetAudioHistoryControlForStream(
                                   lpCriticalSection,
                                   a3,
                                   &v36[1]);
  if ( (_BYTE)v37 )
  {
    v16 = *(_QWORD *)v36[0];
    *(_QWORD *)v36[0] = v36[1];
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( AudioHistoryControlForStream >= 0 )
  {
    v31 = 0LL;
    v36[1] = 0LL;
    v36[0] = (struct ICPAudioHistoryControl *)&v31;
    LOBYTE(v37) = 1;
    AudioHistoryControlForStream = (*(__int64 (__fastcall **)(__int64, __int64, __int64, struct ICPAudioHistoryControl **))(*(_QWORD *)v32 + 24LL))(
                                     v32,
                                     a4,
                                     a5,
                                     &v36[1]);
    if ( (_BYTE)v37 )
    {
      v17 = *(_QWORD *)v36[0];
      *(_QWORD *)v36[0] = v36[1];
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    if ( AudioHistoryControlForStream >= 0 )
    {
      v18 = *(__int64 **)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(v14 + 16))
                        + 32LL);
      if ( v18 )
      {
        v19 = *v18;
        v20 = 0LL;
        lpCriticalSection = 0LL;
        v33[0] = v19;
        if ( v19 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
          v20 = lpCriticalSection;
        }
        lpCriticalSection = 0LL;
        if ( v20 )
          ((void (__fastcall *)(LPCRITICAL_SECTION))v20->DebugInfo->ProcessLocksList.Flink)(v20);
        v21 = (**(__int64 (__fastcall ***)(__int64, GUID *, LPCRITICAL_SECTION *))v19)(
                v19,
                &GUID_91377361_53fa_4626_82b9_bdb68e242b3e,
                &lpCriticalSection);
        AudioHistoryControlForStream = v21;
        if ( v21 >= 0 )
        {
          v23 = (*(__int64 (__fastcall **)(__int64, unsigned int *, struct ICPAudioHistoryControl **, unsigned int *))(*(_QWORD *)v31 + 24LL))(
                  v31,
                  &v29,
                  v36,
                  &v30);
          *((_QWORD *)&v37 + 1) = a4;
          while ( 1 )
          {
            v26 = v23;
            if ( !v29 )
            {
              wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&lpCriticalSection);
              wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(v33);
              goto LABEL_28;
            }
            v34[0] = *(_OWORD *)v36;
            DebugInfo = lpCriticalSection->DebugInfo;
            v34[1] = v37;
            Blink = DebugInfo->ProcessLocksList.Blink;
            v35 = v38;
            v21 = ((__int64 (__fastcall *)(LPCRITICAL_SECTION, _QWORD, _OWORD *, _QWORD, __int64))Blink)(
                    lpCriticalSection,
                    v29,
                    v34,
                    v30,
                    v26);
            AudioHistoryControlForStream = v21;
            if ( v21 < 0 )
              break;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 32LL))(v31);
            v23 = (*(__int64 (__fastcall **)(__int64, unsigned int *, struct ICPAudioHistoryControl **, unsigned int *))(*(_QWORD *)v31 + 24LL))(
                    v31,
                    &v29,
                    v36,
                    &v30);
          }
          v22 = 1180LL;
        }
        else
        {
          v22 = 1168LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v21);
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&lpCriticalSection);
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(v33);
      }
      else
      {
LABEL_28:
        AudioHistoryControlForStream = 0;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x486,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)AudioHistoryControlForStream);
    }
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v31);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x483,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)AudioHistoryControlForStream);
  }
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v32);
LABEL_31:
  if ( v5 )
    LeaveCriticalSection(v5);
  return (unsigned int)AudioHistoryControlForStream;
}
