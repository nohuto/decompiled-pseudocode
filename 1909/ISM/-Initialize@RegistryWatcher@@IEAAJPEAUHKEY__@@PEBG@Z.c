/*
 * XREFs of ?Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z @ 0x180012358
 * Callers:
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x1800160DC (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 * Callees:
 *     ?OnKeyChange@RegistryWatcher@@AEAAJXZ @ 0x180010AA8 (-OnKeyChange@RegistryWatcher@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180051734 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RegistryWatcher::Initialize(HKEY *this, HKEY a2, const unsigned __int16 *a3)
{
  char v5; // si
  _QWORD *v6; // r14
  LSTATUS v7; // eax
  unsigned int LastError; // ebx
  LSTATUS v9; // eax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  HKEY v12; // rcx
  HKEY v13; // rcx
  HKEY EventW; // rax
  const char *v16; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = 1;
  v6 = this + 2;
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(this + 2);
  v7 = CoreUICreate(v6);
  LastError = v7;
  if ( v7 < 0 )
  {
    v11 = 65LL;
    goto LABEL_21;
  }
  v9 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, a3, 0, 0x20019u, this + 3);
  LastError = v9;
  if ( v9 > 0 )
    LastError = (unsigned __int16)v9 | 0x80070000;
  if ( (LastError & 0x80000000) != 0 )
  {
    v10 = LastError;
    v11 = 73LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
      (const char *)v10);
    goto LABEL_7;
  }
  EventW = (HKEY)CreateEventW(0LL, 0, 0, 0LL);
  this[4] = EventW;
  if ( EventW )
  {
    v7 = RegistryWatcher::OnKeyChange((RegistryWatcher *)this);
    LastError = v7;
    if ( v7 < 0 )
    {
      v11 = 77LL;
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, HKEY, int (*)(void *, unsigned int, void *), HKEY *))(*(_QWORD *)*v6
                                                                                                  + 248LL))(
             *v6,
             this[4],
             RegistryWatcher::OnChangeCallbackStatic,
             this);
      LastError = v7;
      if ( v7 >= 0 )
      {
        v5 = 0;
        LastError = 0;
        goto LABEL_7;
      }
      v11 = 82LL;
    }
LABEL_21:
    v10 = (unsigned int)v7;
    goto LABEL_6;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0x4C,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
                v16);
LABEL_7:
  if ( v5 )
  {
    v12 = this[3];
    if ( v12 )
    {
      RegCloseKey(v12);
      this[3] = 0LL;
    }
    v13 = this[4];
    if ( v13 )
    {
      CloseHandle(v13);
      this[4] = 0LL;
    }
  }
  return LastError;
}
