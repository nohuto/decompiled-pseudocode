/*
 * XREFs of ?GetUniqueId@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x180029720
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180029910 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::GetUniqueId(CImmersiveApp *this, unsigned __int16 **a2)
{
  RTL_SRWLOCK *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  void *v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-30h]
  int v13; // [rsp+20h] [rbp-30h]
  _QWORD v14[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v16; // [rsp+80h] [rbp+30h] BYREF
  int v17; // [rsp+88h] [rbp+38h] BYREF
  PSRWLOCK v18; // [rsp+90h] [rbp+40h]

  *a2 = 0LL;
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  v18 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v16 = 0LL;
  v5 = (*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 3) + 496LL))((char *)this + 24, &v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    v11 = 1556LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v5,
      v12);
    goto LABEL_7;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 24LL))(v16, &v17);
  v6 = v5;
  if ( v5 < 0 )
  {
    v11 = 1559LL;
    goto LABEL_13;
  }
  memset(v14, 0, sizeof(v14));
  v13 = v17;
  v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         v14,
         L"%s+%u+%p",
         *((_QWORD *)this + 63),
         *((unsigned int *)this + 128));
  v6 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61B,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v7,
      v13);
    v8 = (void *)v14[0];
  }
  else
  {
    v8 = 0LL;
    *a2 = (unsigned __int16 *)v14[0];
    v6 = 0;
  }
  if ( v8 )
    CoTaskMemFree(v8);
LABEL_7:
  v9 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v6;
}
