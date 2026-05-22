/*
 * XREFs of ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x18009D6D4
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180033244 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180052F08 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800EA710 (-Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?Initialize@MouseProcessor@@IEAAJXZ @ 0x1800EDDAC (-Initialize@MouseProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035C4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?OnKeyChange@RegistryWatcher@@AEAAJXZ @ 0x18009DA0C (-OnKeyChange@RegistryWatcher@@AEAAJXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall RegistryWatcher::Create(
        HKEY a1,
        const unsigned __int16 *a2,
        void *a3,
        void (*a4)(void *, HKEY),
        struct RegistryWatcher **a5)
{
  char *v8; // rbx
  int LastError; // esi
  __int64 v10; // rdx
  char *v11; // rax
  char *v12; // rdi
  _QWORD *v13; // r15
  __int64 v14; // rcx
  int v15; // eax
  HKEY *v16; // r14
  __int64 v17; // rdx
  unsigned __int64 v18; // r9
  void *v19; // rcx
  LSTATUS v20; // eax
  HANDLE EventW; // rax
  const char *v22; // r9
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8 = 0LL;
  if ( !a5 )
  {
    LastError = -2147024809;
    v10 = 103LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
      (const char *)(unsigned int)LastError);
    goto LABEL_34;
  }
  v11 = (char *)malloc(0x38uLL);
  v12 = v11;
  if ( v11 )
    memset_0(v11, 0, 0x38uLL);
  if ( v12 )
  {
    *(_QWORD *)v12 = &RefCountedObject::`vftable';
    *((_DWORD *)v12 + 2) = 1;
    *(_QWORD *)v12 = &RegistryWatcher::`vftable';
    *((_QWORD *)v12 + 2) = 0LL;
    *((_QWORD *)v12 + 5) = a3;
    *((_QWORD *)v12 + 6) = a4;
  }
  v8 = v12;
  if ( !v12 )
  {
    LastError = -2147024882;
    v10 = 110LL;
    goto LABEL_32;
  }
  v13 = v12 + 16;
  v14 = *((_QWORD *)v12 + 2);
  if ( v14 )
  {
    *v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = CoreUICreate(v12 + 16);
  LastError = v15;
  v16 = (HKEY *)(v12 + 24);
  if ( v15 >= 0 )
  {
    v20 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, a2, 0, 0x20019u, (PHKEY)v12 + 3);
    LastError = (unsigned __int16)v20 | 0x80070000;
    if ( v20 <= 0 )
      LastError = v20;
    if ( LastError < 0 )
    {
      v18 = (unsigned int)LastError;
      v17 = 74LL;
      goto LABEL_14;
    }
    EventW = CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)v12 + 4) = EventW;
    if ( !EventW )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x4D,
                    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
                    v22);
      goto LABEL_15;
    }
    v15 = RegistryWatcher::OnKeyChange((RegistryWatcher *)v12);
    LastError = v15;
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, int (*)(void *, unsigned int, void *), char *))(*(_QWORD *)*v13 + 272LL))(
              *v13,
              1LL,
              *((_QWORD *)v12 + 4),
              RegistryWatcher::OnChangeCallbackStatic,
              v12);
      LastError = v15;
      if ( v15 >= 0 )
      {
        LastError = 0;
        goto LABEL_30;
      }
      v17 = 84LL;
    }
    else
    {
      v17 = 78LL;
    }
  }
  else
  {
    v17 = 66LL;
  }
  v18 = (unsigned int)v15;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
    (const char *)v18);
LABEL_15:
  if ( *v16 )
  {
    RegCloseKey(*v16);
    *v16 = 0LL;
  }
  v19 = (void *)*((_QWORD *)v12 + 4);
  if ( v19 )
  {
    CloseHandle(v19);
    *((_QWORD *)v12 + 4) = 0LL;
  }
LABEL_30:
  if ( LastError < 0 )
  {
    v10 = 113LL;
    goto LABEL_32;
  }
  v8 = 0LL;
  *a5 = (struct RegistryWatcher *)v12;
  LastError = 0;
LABEL_34:
  if ( v8 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)LastError;
}
