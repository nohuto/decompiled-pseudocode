/*
 * XREFs of ?GetEnterpriseId@CApplicationViewBase@@UEAAJPEAPEAG@Z @ 0x18015E5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x18000F0E0 (-CopyTo@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::GetEnterpriseId(CApplicationViewBase *this, unsigned __int16 **a2)
{
  RTL_SRWLOCK *v4; // rdi
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v4 = (RTL_SRWLOCK *)((char *)this + 48);
  AcquireSRWLockShared((PSRWLOCK)this + 6);
  v5 = (*(__int64 (__fastcall **)(CApplicationViewBase *))(*(_QWORD *)this + 512LL))(this);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB7,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)(unsigned int)v5);
  if ( *((_QWORD *)this + 8) )
  {
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo(
           (__int64 *)this + 8,
           a2);
    v7 = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBB,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
        (const char *)(unsigned int)v6);
  }
  else
  {
    v7 = 0;
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v7;
}
