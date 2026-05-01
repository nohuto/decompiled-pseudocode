/*
 * XREFs of ?GetLightweightProperty@WindowWrapperBase@@UEAAJPEBGPEAK@Z @ 0x1802503B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetProperty@LightweightPropertySet@@QEAAJPEBGPEAK@Z @ 0x18023C1A0 (-GetProperty@LightweightPropertySet@@QEAAJPEBGPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::GetLightweightProperty(
        WindowWrapperBase *this,
        const unsigned __int16 *a2,
        unsigned int *a3)
{
  __int64 v6; // rcx
  int Property; // eax
  const char *v8; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp+8h]

  v6 = *((_QWORD *)this + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 192LL))(v6);
    Property = LightweightPropertySet::GetProperty((WindowWrapperBase *)((char *)this + 200), a2, a3);
    if ( Property < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        302LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)Property);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x131,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v8);
  }
  return result;
}
