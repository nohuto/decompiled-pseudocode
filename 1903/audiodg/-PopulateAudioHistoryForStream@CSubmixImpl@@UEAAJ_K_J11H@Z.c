/*
 * XREFs of ?PopulateAudioHistoryForStream@CSubmixImpl@@UEAAJ_K_J11H@Z @ 0x14003E890
 * Callers:
 *     ?PopulateAudioHistoryForStream@CStreamGroup@@UEAAJ_K_J11H@Z @ 0x14002AEC0 (-PopulateAudioHistoryForStream@CStreamGroup@@UEAAJ_K_J11H@Z.c)
 *     ?PopulateAudioHistoryForStream@CProcessSubmix@@UEAAJ_K_J11H@Z @ 0x14003F3A0 (-PopulateAudioHistoryForStream@CProcessSubmix@@UEAAJ_K_J11H@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14000D9E4 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z @ 0x14000F4FC (-FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAudioHistoryControlForStream@CAudioHistoryBufferManager@@QEAAJ_KPEAPEAUICPAudioHistoryControl@@@Z @ 0x14003F8E8 (-GetAudioHistoryControlForStream@CAudioHistoryBufferManager@@QEAAJ_KPEAPEAUICPAudioHistoryContro.c)
 *     ?GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z @ 0x14003F9F4 (-GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z.c)
 */

__int64 __fastcall CSubmixImpl::PopulateAudioHistoryForStream(
        CSubmixImpl *this,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  struct _RTL_CRITICAL_SECTION *v6; // r14
  struct CStreamInstance *Stream; // rax
  int AudioHistoryControlForStream; // ebx
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rdi
  int HistoryBufferManager; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 *v19; // rbx
  __int64 v20; // rbx
  LPCRITICAL_SECTION v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rax
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  struct _LIST_ENTRY *Blink; // rax
  __int64 v27; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-71h] BYREF
  unsigned int v31; // [rsp+3Ch] [rbp-6Dh] BYREF
  __int64 v32; // [rsp+40h] [rbp-69h] BYREF
  __int64 v33; // [rsp+48h] [rbp-61h] BYREF
  __int64 v34[2]; // [rsp+50h] [rbp-59h] BYREF
  _OWORD v35[2]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v36; // [rsp+80h] [rbp-29h]
  struct ICPAudioHistoryControl *v37[2]; // [rsp+90h] [rbp-19h] BYREF
  __int128 v38; // [rsp+A0h] [rbp-9h]
  __int64 v39; // [rsp+B0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+4Fh]

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  Stream = CSubmixImpl::FindStream(this, a2);
  if ( !Stream )
  {
    AudioHistoryControlForStream = -2005139430;
    v13 = 1153LL;
    v14 = 2289827866LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)v14);
    goto LABEL_31;
  }
  v15 = *(_QWORD *)Stream;
  lpCriticalSection = 0LL;
  HistoryBufferManager = GetHistoryBufferManager((struct CAudioHistoryBufferManager **)&lpCriticalSection);
  AudioHistoryControlForStream = HistoryBufferManager;
  if ( HistoryBufferManager < 0 )
  {
    v14 = (unsigned int)HistoryBufferManager;
    v13 = 1158LL;
    goto LABEL_5;
  }
  v33 = 0LL;
  v37[1] = 0LL;
  v37[0] = (struct ICPAudioHistoryControl *)&v33;
  LOBYTE(v38) = 1;
  AudioHistoryControlForStream = CAudioHistoryBufferManager::GetAudioHistoryControlForStream(
                                   lpCriticalSection,
                                   a3,
                                   &v37[1]);
  if ( (_BYTE)v38 )
  {
    v17 = *(_QWORD *)v37[0];
    *(_QWORD *)v37[0] = v37[1];
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( AudioHistoryControlForStream >= 0 )
  {
    v32 = 0LL;
    v37[1] = 0LL;
    v37[0] = (struct ICPAudioHistoryControl *)&v32;
    LOBYTE(v38) = 1;
    AudioHistoryControlForStream = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, struct ICPAudioHistoryControl **))(*(_QWORD *)v33 + 24LL))(
                                     v33,
                                     a4,
                                     a5,
                                     a6,
                                     &v37[1]);
    if ( (_BYTE)v38 )
    {
      v18 = *(_QWORD *)v37[0];
      *(_QWORD *)v37[0] = v37[1];
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    if ( AudioHistoryControlForStream >= 0 )
    {
      v19 = *(__int64 **)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(v15 + 16))
                        + 32LL);
      if ( v19 )
      {
        v20 = *v19;
        v21 = 0LL;
        lpCriticalSection = 0LL;
        v34[0] = v20;
        if ( v20 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
          v21 = lpCriticalSection;
        }
        if ( v21 )
          ((void (__fastcall *)(LPCRITICAL_SECTION))v21->DebugInfo->ProcessLocksList.Flink)(v21);
        v22 = (**(__int64 (__fastcall ***)(__int64, GUID *, LPCRITICAL_SECTION *))v20)(
                v20,
                &GUID_91377361_53fa_4626_82b9_bdb68e242b3e,
                &lpCriticalSection);
        AudioHistoryControlForStream = v22;
        if ( v22 >= 0 )
        {
          v24 = (*(__int64 (__fastcall **)(__int64, unsigned int *, struct ICPAudioHistoryControl **, unsigned int *))(*(_QWORD *)v32 + 24LL))(
                  v32,
                  &v30,
                  v37,
                  &v31);
          *((_QWORD *)&v38 + 1) = a4;
          while ( 1 )
          {
            v27 = v24;
            if ( !v30 )
            {
              wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&lpCriticalSection);
              wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(v34);
              goto LABEL_28;
            }
            v35[0] = *(_OWORD *)v37;
            DebugInfo = lpCriticalSection->DebugInfo;
            v35[1] = v38;
            Blink = DebugInfo->ProcessLocksList.Blink;
            v36 = v39;
            v22 = ((__int64 (__fastcall *)(LPCRITICAL_SECTION, _QWORD, _OWORD *, _QWORD, __int64))Blink)(
                    lpCriticalSection,
                    v30,
                    v35,
                    v31,
                    v27);
            AudioHistoryControlForStream = v22;
            if ( v22 < 0 )
              break;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 32LL))(v32);
            v24 = (*(__int64 (__fastcall **)(__int64, unsigned int *, struct ICPAudioHistoryControl **, unsigned int *))(*(_QWORD *)v32 + 24LL))(
                    v32,
                    &v30,
                    v37,
                    &v31);
          }
          v23 = 1186LL;
        }
        else
        {
          v23 = 1174LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v22);
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&lpCriticalSection);
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(v34);
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
        (void *)0x48C,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)AudioHistoryControlForStream);
    }
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v32);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x489,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)AudioHistoryControlForStream);
  }
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v33);
LABEL_31:
  if ( v6 )
    LeaveCriticalSection(v6);
  return (unsigned int)AudioHistoryControlForStream;
}
