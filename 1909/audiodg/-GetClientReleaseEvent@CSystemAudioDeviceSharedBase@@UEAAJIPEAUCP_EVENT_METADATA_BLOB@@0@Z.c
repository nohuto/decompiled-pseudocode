/*
 * XREFs of ?GetClientReleaseEvent@CSystemAudioDeviceSharedBase@@UEAAJIPEAUCP_EVENT_METADATA_BLOB@@0@Z @ 0x140031B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCB4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetClientReleaseEvent(
        CSystemAudioDeviceSharedBase *this,
        unsigned int a2,
        struct CP_EVENT_METADATA_BLOB *a3,
        struct CP_EVENT_METADATA_BLOB *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-68h] BYREF
  char v12; // [rsp+38h] [rbp-60h]
  __int128 v13; // [rsp+40h] [rbp-58h]
  __int128 v14; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v13 = *(_OWORD *)((char *)this + 248);
  v14 = v13;
  EtwEventActivityIdControl(4LL, &v14);
  v12 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct CP_EVENT_METADATA_BLOB *, struct CP_EVENT_METADATA_BLOB *))(**((_QWORD **)this + 41) + 32LL))(
         *((_QWORD *)this + 41),
         a2,
         a3,
         a4);
  v9 = v8;
  if ( v8 >= 0 )
    v9 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD8,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
      (const char *)(unsigned int)v8);
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v14);
  return v9;
}
