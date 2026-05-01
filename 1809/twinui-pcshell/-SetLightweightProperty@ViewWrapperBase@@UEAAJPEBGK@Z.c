/*
 * XREFs of ?SetLightweightProperty@ViewWrapperBase@@UEAAJPEBGK@Z @ 0x180244080
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x18005A254 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::SetLightweightProperty(
        ViewWrapperBase *this,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  RTL_SRWLOCK *v6; // rbp
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (RTL_SRWLOCK *)(*((_QWORD *)this + 21) + 296LL);
  AcquireSRWLockExclusive(v6);
  v7 = LightweightPropertySet::SetProperty((ViewWrapperBase *)((char *)this + 104), a2, a3, *((HWND *)this + 34));
  v8 = v7;
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x440,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v7);
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  return v8;
}
