/*
 * XREFs of ??_ERegistryWatcher@@MEAAPEAXI@Z @ 0x180016040
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
RegistryWatcher *__fastcall RegistryWatcher::`vector deleting destructor'(RegistryWatcher *this, char a2)
{
  void *v4; // rcx
  _QWORD *v5; // rdi
  HKEY v6; // rcx

  *(_QWORD *)this = &RegistryWatcher::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  v4 = (void *)*((_QWORD *)this + 4);
  v5 = (_QWORD *)((char *)this + 16);
  if ( v4 )
  {
    if ( *v5 )
    {
      (*(void (__fastcall **)(_QWORD, void *))(*(_QWORD *)*v5 + 256LL))(*v5, v4);
      v4 = (void *)*((_QWORD *)this + 4);
    }
    CloseHandle(v4);
    *((_QWORD *)this + 4) = 0LL;
  }
  v6 = (HKEY)*((_QWORD *)this + 3);
  if ( v6 )
  {
    RegCloseKey(v6);
    *((_QWORD *)this + 3) = 0LL;
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((char *)this + 16);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((char *)this + 16);
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
