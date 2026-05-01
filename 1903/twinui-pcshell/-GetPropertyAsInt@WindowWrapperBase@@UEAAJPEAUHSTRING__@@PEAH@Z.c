/*
 * XREFs of ?GetPropertyAsInt@WindowWrapperBase@@UEAAJPEAUHSTRING__@@PEAH@Z @ 0x1800421D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::GetPropertyAsInt(WindowWrapperBase *this, HSTRING a2, int *a3)
{
  __int64 v6; // rcx
  const WCHAR *StringRawBuffer; // rax
  const char *v8; // r9
  const WCHAR *v9; // rax
  __int64 result; // rax
  const WCHAR *v11; // rax
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+50h] [rbp+8h]

  *a3 = 0;
  v6 = *((_QWORD *)this + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 200LL))(v6);
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    if ( CompareStringOrdinal(StringRawBuffer, -1, L"BackVisible", -1, 1) == 2 )
    {
      v12 = *((_DWORD *)this + 116);
      goto LABEL_14;
    }
    v9 = WindowsGetStringRawBuffer(a2, 0LL);
    if ( CompareStringOrdinal(v9, -1, L"WindowFrameStyle", -1, 1) == 2 )
    {
      if ( !*((_BYTE *)this + 476) )
      {
        if ( SRWLock )
          ReleaseSRWLockShared(SRWLock);
        return 2147943568LL;
      }
      v12 = *((_DWORD *)this + 118);
      goto LABEL_14;
    }
    v11 = WindowsGetStringRawBuffer(a2, 0LL);
    if ( CompareStringOrdinal(v11, -1, L"TitleBarVisible", -1, 1) == 2 )
    {
      if ( !*((_BYTE *)this + 477) )
      {
        if ( SRWLock )
          ReleaseSRWLockShared(SRWLock);
        return 2147943568LL;
      }
      v12 = *((_BYTE *)this + 478) == 0;
LABEL_14:
      *a3 = v12;
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      return 0LL;
    }
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    result = 2147942487LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2FB,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v8);
  }
  return result;
}
