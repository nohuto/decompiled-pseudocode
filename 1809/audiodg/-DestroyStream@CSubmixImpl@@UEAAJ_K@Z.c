/*
 * XREFs of ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140012EC0
 * Callers:
 *     ?DestroyStream@CProcessSubmix@@UEAAJ_K@Z @ 0x140013380 (-DestroyStream@CProcessSubmix@@UEAAJ_K@Z.c)
 *     ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140031C40 (-DestroyStream@CStreamGroup@@UEAAJ_K@Z.c)
 * Callees:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000D050 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14001000C (--1CPipeInstance@@QEAA@XZ.c)
 *     ?FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z @ 0x140012824 (-FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1400128AC (-RemoveAt@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@.c)
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x140013028 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::DestroyStream(CSubmixImpl *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  struct CStreamInstance *Stream; // rbx
  __int64 *i; // rdx
  void (__fastcall ***v7)(_QWORD, GUID *, struct ISubmixInternal **); // rcx
  struct ISubmixInternal *v8; // rdx
  char *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  LPVOID *v12; // rdi
  unsigned int v13; // ebx
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ISubmixInternal *v17; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  Stream = CSubmixImpl::FindStream(this, a2);
  if ( Stream )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    for ( i = (__int64 *)*((_QWORD *)this + 9); i && (struct CStreamInstance *)i[2] != Stream; i = (__int64 *)*i )
      ;
    ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::RemoveAt((__int64 **)this + 9, i);
    if ( this != (CSubmixImpl *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v7 = (void (__fastcall ***)(_QWORD, GUID *, struct ISubmixInternal **))*((_QWORD *)this + 38);
    if ( v7 )
    {
      (**v7)(v7, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v17);
      v8 = v17;
    }
    else
    {
      v8 = 0LL;
      v17 = 0LL;
    }
    if ( *((_BYTE *)Stream + 17) && v8 )
      CStreamInstance::DisconnectFromRightSubmix(Stream, v8);
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)Stream + 48));
    v9 = (char *)*((_QWORD *)Stream + 5);
    if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v9);
    v10 = *((_QWORD *)Stream + 4);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = *((_QWORD *)Stream + 3);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v12 = *(LPVOID **)Stream;
    if ( *(_QWORD *)Stream )
    {
      CPipeInstance::~CPipeInstance(*(LPVOID **)Stream);
      operator delete(v12);
    }
    *(_QWORD *)Stream = 0LL;
    operator delete(Stream);
    PublishDeviceGraphWnfState();
    v13 = 0;
    if ( v17 )
      (*(void (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  else
  {
    v13 = -2005139430;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x291,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x887C001ALL,
      v15);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v13;
}
