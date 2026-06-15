/*
 * XREFs of ?Shutdown@AudioDeviceMgr@@UEAAXXZ @ 0x1801467C0
 * Callers:
 *     ??1AudioDeviceMgr@@MEAA@XZ @ 0x180145A48 (--1AudioDeviceMgr@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AudioDeviceMgr::Shutdown(AudioDeviceMgr *this)
{
  __int64 v2; // rcx
  char *v3; // rcx
  __int64 v4; // rcx
  char *v5; // rcx
  char *v6; // rcx
  char *v7; // rcx

  if ( *((_DWORD *)this + 12) )
  {
    v2 = *((_QWORD *)this + 5);
    if ( v2 )
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 80LL))(v2, (char *)this + 8);
    *((_DWORD *)this + 12) = 0;
  }
  v3 = (char *)*((_QWORD *)this + 27);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    SetEvent(v3);
    WaitForSingleObject(*((HANDLE *)this + 28), 0xFFFFFFFF);
  }
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (char *)*((_QWORD *)this + 26);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v5);
    *((_QWORD *)this + 26) = 0LL;
  }
  v6 = (char *)*((_QWORD *)this + 27);
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v6);
    *((_QWORD *)this + 27) = 0LL;
  }
  v7 = (char *)*((_QWORD *)this + 28);
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v7);
    *((_QWORD *)this + 28) = 0LL;
  }
  ATL::CAtlList<ATL::CAutoPtr<WorkItemBase>,ATL::CAutoPtrElementTraits<WorkItemBase>>::RemoveAll((__int64 *)this + 15);
}
