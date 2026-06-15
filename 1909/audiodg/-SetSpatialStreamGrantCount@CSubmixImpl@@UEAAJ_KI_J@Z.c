/*
 * XREFs of ?SetSpatialStreamGrantCount@CSubmixImpl@@UEAAJ_KI_J@Z @ 0x14003ECA0
 * Callers:
 *     ?SetSpatialStreamGrantCount@CStreamGroup@@UEAAJ_KI_J@Z @ 0x14002BA50 (-SetSpatialStreamGrantCount@CStreamGroup@@UEAAJ_KI_J@Z.c)
 *     ?SetSpatialStreamGrantCount@CProcessSubmix@@UEAAJ_KI_J@Z @ 0x14003F510 (-SetSpatialStreamGrantCount@CProcessSubmix@@UEAAJ_KI_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14000D9D4 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z @ 0x14000F4EC (-FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::SetSpatialStreamGrantCount(CSubmixImpl *this, __int64 a2, unsigned int a3, __int64 a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  struct CStreamInstance *Stream; // rax
  unsigned int v10; // ebx
  __int64 *v11; // rbx
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  int v16[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  Stream = CSubmixImpl::FindStream(this, a2);
  if ( !Stream )
  {
    v10 = -2005139430;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45B,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x887C001ALL);
    goto LABEL_13;
  }
  v11 = *(__int64 **)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(*(_QWORD *)Stream + 16LL))
                    + 32LL);
  if ( v11 )
  {
    v12 = *v11;
    *(_QWORD *)v16 = v12;
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      v18 = 0LL;
      v13 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v12)(
              v12,
              &GUID_3d7ca171_206f_4cec_968b_149749ff740b,
              &v18);
      v10 = v13;
      if ( v13 < 0 )
      {
        v14 = 1129LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v13);
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v18);
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)v16);
        goto LABEL_13;
      }
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v18 + 32LL))(v18, a3, a4);
      v10 = v13;
      if ( v13 < 0 )
      {
        v14 = 1130LL;
        goto LABEL_9;
      }
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v18);
    }
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)v16);
  }
  v10 = 0;
LABEL_13:
  if ( v4 )
    LeaveCriticalSection(v4);
  return v10;
}
