/*
 * XREFs of ?GetPropertyAsUInt@WindowWrapperBase@@UEAAJPEAUHSTRING__@@PEAI@Z @ 0x180042620
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::GetPropertyAsUInt(WindowWrapperBase *this, HSTRING a2, unsigned int *a3)
{
  const WCHAR *StringRawBuffer; // rax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 35) + 200LL))(*((_QWORD *)this + 35), &SRWLock);
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( CompareStringOrdinal(StringRawBuffer, -1, L"FrameworkViewType", -1, 1) != 2 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x30A,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)0x80004001LL,
      bIgnoreCase);
    JUMPOUT(0x1800FFDF3LL);
  }
  *a3 = *((_DWORD *)this + 117);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
