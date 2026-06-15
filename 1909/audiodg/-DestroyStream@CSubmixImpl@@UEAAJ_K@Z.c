/*
 * XREFs of ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x14003DEC0
 * Callers:
 *     ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x14002A690 (-DestroyStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ?DestroyStream@CProcessSubmix@@UEAAJ_K@Z @ 0x14003F290 (-DestroyStream@CProcessSubmix@@UEAAJ_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400046A4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z @ 0x14000F4EC (-FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x14002EC8C (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14002F2EC (-RemoveAt@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@.c)
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x14003DFE0 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 */

__int64 __fastcall CSubmixImpl::DestroyStream(CSubmixImpl *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  struct CStreamInstance *Stream; // rbx
  unsigned int v6; // ebx
  __int64 *i; // rdx
  void (__fastcall ***v8)(_QWORD, GUID *, struct ISubmixInternal **); // rcx
  struct ISubmixInternal *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ISubmixInternal *v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  Stream = CSubmixImpl::FindStream(this, a2);
  if ( Stream )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    for ( i = (__int64 *)*((_QWORD *)this + 9); i && (struct CStreamInstance *)i[2] != Stream; i = (__int64 *)*i )
      ;
    ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::RemoveAt((__int64 *)this + 9, i);
    if ( this != (CSubmixImpl *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v8 = (void (__fastcall ***)(_QWORD, GUID *, struct ISubmixInternal **))*((_QWORD *)this + 38);
    if ( v8 )
    {
      (**v8)(v8, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v14);
      v9 = v14;
    }
    else
    {
      v9 = 0LL;
      v14 = 0LL;
    }
    if ( *((_BYTE *)Stream + 17) && v9 )
      CStreamInstance::DisconnectFromRightSubmix(Stream, v9);
    CStreamInstance::`scalar deleting destructor'(Stream);
    PublishDeviceGraphWnfState(v11, v10);
    v6 = 0;
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v14);
  }
  else
  {
    v6 = -2005139430;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x296,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x887C001ALL);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v6;
}
