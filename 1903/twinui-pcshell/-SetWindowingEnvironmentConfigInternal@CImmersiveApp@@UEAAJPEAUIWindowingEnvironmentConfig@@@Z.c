/*
 * XREFs of ?SetWindowingEnvironmentConfigInternal@CImmersiveApp@@UEAAJPEAUIWindowingEnvironmentConfig@@@Z @ 0x180060E50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z @ 0x180060F5C (-SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::SetWindowingEnvironmentConfigInternal(
        CImmersiveApp *this,
        struct IWindowingEnvironmentConfig *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  if ( !a2 )
  {
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA36,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)0x80070057LL,
      -2);
    return v5;
  }
  if ( *((struct IWindowingEnvironmentConfig **)this + 85) != a2 )
  {
    (*(void (__fastcall **)(struct IWindowingEnvironmentConfig *))(*(_QWORD *)a2 + 8LL))(a2);
    v9 = *((_QWORD *)this + 85);
    *((_QWORD *)this + 85) = a2;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v13 = 0LL;
  v4 = (*(__int64 (__fastcall **)(CImmersiveApp *, __int64 *))(*(_QWORD *)this + 464LL))(this, &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    v10 = 2622LL;
  }
  else
  {
    if ( !v13 )
      goto LABEL_7;
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *))(**((_QWORD **)this + 85) + 80LL))(
           *((_QWORD *)this + 85),
           v13,
           &v12);
    v5 = v4;
    if ( v4 < 0 )
    {
      v10 = 2627LL;
      goto LABEL_18;
    }
    v6 = v12;
    if ( *((_DWORD *)this + 172) == v12
      || (*((_DWORD *)this + 172) = v12,
          v4 = CImmersiveApp::CImmersiveWindowCollection::SetDisplayRegionId((CImmersiveApp *)((char *)this + 184), v6),
          v5 = v4,
          v4 >= 0) )
    {
LABEL_7:
      v5 = 0;
      goto LABEL_8;
    }
    v10 = 2631LL;
  }
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
    (const char *)(unsigned int)v4,
    -2);
LABEL_8:
  v7 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v5;
}
